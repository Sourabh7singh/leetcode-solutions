/**
 * @param {...(null|boolean|number|string|Array|Object)} args
 * @return {number}
 */
var argumentsLength = function(...args) {
    return args?.length || 0;
};

/**
 * argumentsLength(1, 2, 3); // 3
 */