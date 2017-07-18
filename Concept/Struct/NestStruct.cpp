struct Employee
{
    short id;
    int age;
    float wage;
};
 
struct Company
{
    Employee CEO; // Employee is a struct within the Company struct
    int numberOfEmployees;
};
 
Company myCompany = {{ 1, 42, 60000.0f }, 5 };
