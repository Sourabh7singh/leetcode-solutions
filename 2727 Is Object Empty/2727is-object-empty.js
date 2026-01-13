/**
 * @param {Object|Array} obj
 * @return {boolean}
 */
var isEmpty = function(obj) {
    let isEmpty = true;
    for(let i in obj){
        isEmpty = false;
        break;
    }

    return isEmpty;
};