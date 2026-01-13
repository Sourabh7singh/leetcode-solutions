/**
 * @param {number[]} nums
 * @return {void}
 */
var ArrayWrapper = function(nums) {
    let arr = [];
    this.arr = nums;
};

/**
 * @return {number}
 */
ArrayWrapper.prototype.valueOf = function() {
    let value = 0;
    this.arr.map((item)=>{
        value +=item;
    })
    return value;
}

/**
 * @return {string}
 */
ArrayWrapper.prototype.toString = function() {
    let value = "";
    this.arr.map((item,index)=>{
        if(index==0){
            value = item;
        }else{
            value = value + "," + item;
        }
    })
    value = "["+value+"]";
    return value;
}

/**
 * const obj1 = new ArrayWrapper([1,2]);
 * const obj2 = new ArrayWrapper([3,4]);
 * obj1 + obj2; // 10
 * String(obj1); // "[1,2]"
 * String(obj2); // "[3,4]"
 */