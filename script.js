const newMap = new Map([
  ["key1", "value1"],
  ["key2", "value2"],
  ["key3", "value3"],
]);

for (const [key, value] of newMap) {
  console.log(`${key} = ${value}`);
}
newMap.forEach((value, key) => {
  console.log(`${key} = ${value}`);
});

const newSets = new Set(["value1", "value2", "value3", "value4"]);
for (const value of newSets) {
  console.log(value);
}
newSets.forEach((value) => {
  console.log(value);
});
