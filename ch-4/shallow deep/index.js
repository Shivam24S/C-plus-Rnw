// // deep copy

// let person1 = "person1";

// let person2 = person1;

// // console.log("p1", person1);

// // console.log("p2", person2);

// person2 = "other person";

// console.log("p1", person1);

// console.log("p2", person2);

// shallow

let person1 = {
  name: "person1",
};

let person2 = person1;

// console.log("p1", person1);

// console.log("p2", person2);

person2.name = "other person";

console.log("p1", person1);

console.log("p2", person2);
