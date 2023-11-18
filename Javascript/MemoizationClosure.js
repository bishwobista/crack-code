/**
 * Memoization is an optimization technique where expensive function calls are cached,
 * allowing the result to be immediately returned the next time the function is called
 * with the same arguments. Complete the memoize function
 
    const memoize = (fn) => {
        // Your code here
    }
 */

/**
 * Function to memoize another function.
 * @param {Function} fn - The function to be memoized.
 * @returns {Function} - The memoized function.
 */
const memoize = (fn) => {
    // Cache to store the results of expensive function calls.
    let cache = {};
  
    // Returning a closure that encapsulates the original function and the cache.
    return (n) => {
      if (n in cache) {
        // If the result is already in the cache, return it.
        console.log("From cache");
        return cache[n];
      } else {
        // If not in the cache, calculate the result, store it in the cache, and return.
        let result = fn(n);
        cache[n] = result;
        return result;
      }
    };
  };
  
  /**
   * Example function: Factorial calculation using recursion.
   * @param {number} num - The number for which to calculate the factorial.
   * @returns {number} - The factorial of the input number.
   */
  function factorial(num) {
    if (num === 1) {
      return 1;
    }
    return num * factorial(num - 1);
  }
  
  // Creating a memoized version of the factorial function.
  const memoisedFactorial = memoize(factorial);
  
  // Using the memoized function to calculate the factorial of 5.
  const result = memoisedFactorial(5);
  console.log(result); // Output: 120
  
  // Using the memoized function again for the same input.
  const memoisedResult = memoisedFactorial(5);
  console.log(memoisedResult);
  // Output:
  // From cache
  // 120
  