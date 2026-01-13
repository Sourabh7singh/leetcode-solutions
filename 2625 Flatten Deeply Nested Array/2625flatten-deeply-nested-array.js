/**
 * @param {Array} arr
 * @param {number} depth
 * @return {Array}
 */
var flat = function (arr, n) {
    if(n==0) return arr;

    let newArr = [];
    for(let i=0;i<arr.length;i++){
        let el = arr[i];
        if(el instanceof Array){
            let flatArr = flat(el,n-1);    
            flatArr.forEach(item=>{
                newArr.push(item);
            })            
        }else{
            newArr.push(el);
        }
    }

    return newArr;
};
