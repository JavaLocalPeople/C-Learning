struct Person
{
    int age;
    double weight;
};
Person person; // define a person
 
// Member selection using reference to struct
Person &ref = person;
ref.age = 5;


struct Person
{
    int age;
    double weight;
};
Person person;
 
// Member selection using pointer to struct
Person *ptr = &person;
(*ptr).age= 5;
