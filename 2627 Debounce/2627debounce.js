/**
 * @param {Function} fn
 * @param {number} t milliseconds
 * @return {Function}
 */
var debounce = function(fn, t) {
    this.isRunning = true;
    this.timer = null;

    return function(...args) {
        if(this.isRunning){
            // cancel the previous call
            clearTimeout(this.timer);
        }

        this.isRunning = true;
        this.timer = setTimeout(()=>{
            fn(...args);
            this.isRunning = false;
        },t);
    
    }
};

/**
 * const log = debounce(console.log, 100);
 * log('Hello'); // cancelled
 * log('Hello'); // cancelled
 * log('Hello'); // Logged at t=100ms
 */