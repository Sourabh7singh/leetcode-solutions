/**
 * @param {Object|Array} obj
 * @return {Object|Array}
 */
var compactObject = function(obj) {
    if(obj instanceof Array){
        let newObj = [];
        for(let i=0;i<obj.length;i++){
            if (!obj[i]) continue;

            if(obj[i] && 
                (
                    typeof obj[i] !== "object" || obj[i] === null
                )
            ){
                newObj.push(obj[i]);
            }else{
                newObj.push(compactObject(obj[i]));
            }
        }
        return newObj;

    }else if(obj instanceof Object){
        let newOb = {};
        for(let i in obj){
            if(!obj[i]) continue;

            if(obj[i] && 
                (
                    typeof obj[i] !== "object" || obj[i] === null
                )
            ){
                newOb[i] = obj[i];
            }else{
                newOb[i] = compactObject(obj[i])
            }
        }
        return newOb;
    }

    return obj;
};
