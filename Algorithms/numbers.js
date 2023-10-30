const numbers = [4, 6, 8, 2, 7, 5, 0];
let found = false;

for (let i = 0; i < numbers.length; i++) {
  if (numbers[i] === 0) {
    found === true;
    break;
  }
}

if (found) {
  console.log("Found");
} else {
  console.log("Not Found");
}
