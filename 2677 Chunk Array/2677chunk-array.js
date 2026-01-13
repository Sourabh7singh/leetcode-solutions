/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array}
 */
var chunk = function(arr, size) {
    if(arr.length==0) return arr;

    let arrSplitted = [];
    let start = 0;
    let end = size-1;
    while(start<arr.length){
        arrSplitted.push(arr.slice(start,end+1));
        start = end+1;
        end = start+size-1;
    }

    return arrSplitted;
};
