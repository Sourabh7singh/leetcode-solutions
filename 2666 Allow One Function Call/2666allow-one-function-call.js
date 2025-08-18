/**
 * @param {Function} fn
 * @return {Function}
 */
var once = function(fn) {
    let already_run = false;
    return function(...args){
        if(!already_run){
            already_run = true;
            return fn(...args);
        } else{
            return undefined;
        }
    }
};

/**
 * let fn = (a,b,c) => (a + b + c)
 * let onceFn = once(fn)
 *
 * onceFn(1,2,3); // 6
 * onceFn(2,3,6); // returns undefined without calling fn
 */
