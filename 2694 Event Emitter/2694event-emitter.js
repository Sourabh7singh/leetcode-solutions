class EventEmitter {
    constructor() {
        this.events = new Map();
    }

    subscribe(eventName, callback) {
        if (!this.events.has(eventName)) {
            this.events.set(eventName, []);
        }

        const arr = this.events.get(eventName);
        arr.push(callback);

        return {
            unsubscribe: () => {
                const index = arr.indexOf(callback);
                if (index !== -1) {
                    arr.splice(index, 1);
                }
            }
        };
    }

    emit(eventName, args = []) {
        if (!this.events.has(eventName)) return [];

        return this.events.get(eventName).map(cb => cb(...args));
    }
}
/**
 * const emitter = new EventEmitter();
 *
 * // Subscribe to the onClick event with onClickCallback
 * function onClickCallback() { return 99 }
 * const sub = emitter.subscribe('onClick', onClickCallback);
 *
 * emitter.emit('onClick'); // [99]
 * sub.unsubscribe(); // undefined
 * emitter.emit('onClick'); // []
 */