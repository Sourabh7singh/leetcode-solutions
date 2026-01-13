/**
 * @param {Function} fn
 * @return {Object}
 */
Array.prototype.groupBy = function(fn) {
    let mapping = {};
    let arr = this;
    for(let i=0;i<this.length;i++){
        let key = fn(arr[i]);
        if(!mapping[key]) mapping[key] = [];
        mapping[key].push(arr[i]);
    }

    return mapping;
};

/**
 * [1,2,3].groupBy(String) // {"1":[1],"2":[2],"3":[3]}
 */