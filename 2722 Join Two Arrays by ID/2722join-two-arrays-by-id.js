/**
 * @param {Array} arr1
 * @param {Array} arr2
 * @return {Array}
 */
var join = function(arr1, arr2) {
    let newArr = [];
    let mapping = {};

    for(let i=0;i<arr1.length;i++){
        let el = arr1[i];
        mapping[el.id] = arr1[i];    
    }

    
    for(let i=0;i<arr2.length;i++){
        let el = arr2[i];
        if(!mapping[el.id]) mapping[el.id]={};
        mapping[el.id] = {...mapping[el.id],...el}
    }

    for(let id in mapping){
        newArr.push(mapping[id])
    }
    return newArr;
};