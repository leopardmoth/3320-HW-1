function binarySearch(array, item) {
    let left = 0; let right = array.length - 1;
    var result = false;
    while (left <= right && !result) {
        const middle = left + Math.floor((right - left) / 2);
        if (array[middle] === item) {
            return middle;
        }
        if (array[middle] < item) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }
    return -1;
}

var n = 2097152;
var array = new Array(n);
array.fill(0);

var start = Date.now();
for (var i = 0; i < 10000000; i++) {
   binarySearch(array,1);

}
console.log(Date.now() - start);
