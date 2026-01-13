class Calculator {

    /** 
     * @param {number} value
     */
    constructor(value) {
        this.value = value;
        return this;
    }
    
    /** 
     * @param {number} value
     * @return {Calculator}
     */
    add(value){
        this.value = value+this.value;
        return this;
    }
    
    /** 
     * @param {number} value
     * @return {Calculator}
     */
    subtract(value){
        this.value = this.value-value;
        return this;
        
    }
    
    /** 
     * @param {number} value
     * @return {Calculator}
     */  
    multiply(value) {
        this.value = this.value*value;
        return this;
        
    }
    
    /** 
     * @param {number} value
     * @return {Calculator}
     */
    divide(value) {
        if(value==0){
            throw Error("Division by zero is not allowed");
        }
        this.value = this.value/value;
        return this;
        
    }
    
    /** 
     * @param {number} value
     * @return {Calculator}
     */
    power(value) {
        this.value = this.value**value;
        return this;
        
    }
    
    /** 
     * @return {number}
     */
    getResult() {
        return this.value;
    }
}