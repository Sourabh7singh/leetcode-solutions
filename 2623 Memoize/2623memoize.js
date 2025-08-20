/**
 * @param {Function} fn
 * @return {Function}
 */
function memoize(fn) {
    let map = {};
    return function(...args) {
        if(map[args]==undefined){
            let result = fn(...args);
            map[args] = result;
            return result;
        } 

        return map[args];
    }
}


/** 
 * let callCount = 0;
 * const memoizedFn = memoize(function (a, b) {
 *	 callCount += 1;
 *   return a + b;
 * })
 * memoizedFn(2, 3) // 5
 * memoizedFn(2, 3) // 5
 * console.log(callCount) // 1 
 */