var TimeLimitedCache = function() {
    this.mapping = {};
};

/** 
 * @param {number} key
 * @param {number} value
 * @param {number} duration time until expiration in ms
 * @return {boolean} if un-expired key already existed
 */
TimeLimitedCache.prototype.set = function(key, value, duration) {
    let obj= this.mapping[key];
    let now = Date.now()
    this.mapping[key] = {
        value:value,
        expiry:Date.now()+duration
    }

    return obj && obj.expiry > now ? true : false;
};
/** 
 * @param {number} key
 * @return {number} value associated with key
 */
TimeLimitedCache.prototype.get = function(key) {
    const obj = this.mapping[key];
    const now = Date.now();

    if (!obj || obj.expiry <= now) {
        delete this.mapping[key];
        return -1;
    }
    return obj.value;
};


/** 
 * @return {number} count of non-expired keys
 */
TimeLimitedCache.prototype.count = function() {
    let objs = this.mapping;
    let now = Date.now();
    let count = 0;
    for(let i in objs){
        if(objs[i].expiry > now){
            count++;
        }
    }

    return count;
};
/**
 * const timeLimitedCache = new TimeLimitedCache()
 * timeLimitedCache.set(1, 42, 1000); // false
 * timeLimitedCache.get(1) // 42
 * timeLimitedCache.count() // 1
 */