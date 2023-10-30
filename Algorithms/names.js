const names = ["Bill", "Charlie", "Fred", "George", "Ginny", "Percy", "Ron"];
let found = false;

for (let i = 0; i < names.length; i++) {
  if (names[i] === "Ron") {
    found = true;
    break;
  }
}

if (found) {
  console.log("Found");
} else {
  console.log("Not Found");
}
