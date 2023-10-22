// --- Directions
// Given an array and chunk size, divide the array into many subarrays
// where each subarray is of length size
// --- Examples
// chunk([1, 2, 3, 4], 2) --> [[ 1, 2], [3, 4]]
// chunk([1, 2, 3, 4, 5], 2) --> [[ 1, 2], [3, 4], [5]]
// chunk([1, 2, 3, 4, 5, 6, 7, 8], 3) --> [[ 1, 2, 3], [4, 5, 6], [7, 8]]
// chunk([1, 2, 3, 4, 5], 4) --> [[ 1, 2, 3, 4], [5]]
// chunk([1, 2, 3, 4, 5], 10) --> [[ 1, 2, 3, 4, 5]]

const chunk = (array, size) => {
	const returnedArray = [];
	if (size > array.length) {
		returnedArray.push(array);
	}
	let temp = [];
	for (let i = 0; i < array.length; i++) {
		if (temp.length < size) {
			temp.push(array[i]);
		}
		if (temp.length === size) {
			returnedArray.push(temp);
			temp = [];
		}
		if (i === array.length - 1 && temp.length !== 0) {
			returnedArray.push(temp);
		}
	}
	return returnedArray;
};
