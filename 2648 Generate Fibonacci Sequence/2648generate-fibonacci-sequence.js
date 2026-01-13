/**
 * @return {Generator<number>}
 */
var fibGenerator = function* () {
    let n1 = 0;
    let n2 = 1;
    let count = 0;

    while (true) {
        if (count === 0) {
            yield n1;
        } else if (count === 1) {
            yield n2;
        } else {
            let value = n1 + n2;
            n1 = n2;
            n2 = value;
            yield value;
        }
        count++;
    }
};
/**
 * const gen = fibGenerator();
 * gen.next().value; // 0
 * gen.next().value; // 1
 */