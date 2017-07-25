const int value = 5;
const int *ptr = &value; // this is okay, ptr is pointing to a "const int"
*ptr = 6; // not allowed, we can't change a const value
