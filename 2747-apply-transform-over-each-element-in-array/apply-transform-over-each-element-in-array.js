/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    Array = []

        for (let i =0; i<arr.length; i++){

            Array[i] = fn(arr[i], i)

        }

        return Array;
};