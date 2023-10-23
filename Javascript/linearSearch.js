/**
 * Linear search algorithm to find an element in an array.
 * @param {Array} arr - The input array to search.
 * @param {any} target - The element to search for.
 * @returns {number} - The index of the target element in the array, or -1 if not found.
 */

function linearSearch(arr, target) {
  for (let i = 0; i < arr.length; i++) {
    if (arr[i] === target) {
      return i; // Element found, return its index
    }
  }
  return -1; // Element not found
}

/* Example usage:
const arrayToSearch = [4, 2, 7, 1, 9, 5, 3];
const targetElement = 7;
const result = linearSearch(arrayToSearch, targetElement);

if (result !== -1) {
  console.log(`Element ${targetElement} found at index ${result}.`);
} else {
  console.log(`Element ${targetElement} not found in the array.`);
}
*/

// Export the function if you are working in a Node.js environment
// module.exports = linearSearch;
