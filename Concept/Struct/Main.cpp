struct Empolyee
{
  short id;
  int age;
  double wage;
};

Employee joe; // struct Employee is capitalized, variable joe is not

Employee frank; // create an Employee struct for Frank

Employee joe; // create an Employee struct for Joe
joe.id = 14; // assign a value to member id within struct joe
joe.age = 32; // assign a value to member age within struct joe
joe.wage = 24.15; // assign a value to member wage within struct joe
 
Employee frank; // create an Employee struct for Frank
frank.id = 15; // assign a value to member id within struct frank
frank.age = 28; // assign a value to member age within struct frank
frank.wage = 18.27; // assign a value to member wage within struct frank

Employee joe = { 1, 32, 60000.0 }; // joe.id = 1, joe.age = 32, joe.wage = 60000.0
Employee frank = { 2, 28 }; // frank.id = 2, frank.age = 28, frank.wage = 0.0 (default initialization)

// c++11

Employee joe { 1, 32, 60000.0 }; // joe.id = 1, joe.age = 32, joe.wage = 60000.0
Employee frank { 2, 28 }; // frank.id = 2, frank.age = 28, frank.wage = 0.0 (default initialization)
