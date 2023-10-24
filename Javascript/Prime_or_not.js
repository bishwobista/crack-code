function isPrime(number) {
  if (number <= 1) {
    return false;
  } else if (number <= 3) {
    return true;
  } else if (number % 2 === 0 || number % 3 === 0) {
    return false;
  }
  
  let i = 5;
  while (i * i <= number) {
    if (number % i === 0 || number % (i + 2) === 0) {
      return false;
    }
    i += 6;
  }
  
  return true;
}

const num = 17; // Change this to the number you want to check for primality
if (isPrime(num)) {
  console.log(`${num} is a prime number.`);
} else {
  console.log(`${num} is not a prime number.`);
}
