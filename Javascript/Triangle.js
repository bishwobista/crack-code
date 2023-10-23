function printTriangle(n) {
  for (let i = 1; i <= n; i++) {
    let row = "";
    for (let j = 1; j <= i; j++) {
      row += "* ";
    }
    console.log(row);
  }
} // Change the value of 'n' to adjust the size of the triangle const n = 5; printTriangle(n);
