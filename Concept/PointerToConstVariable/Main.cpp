const int value = 5;
const int *ptr = &value; // this is okay, ptr is pointing to a "const int"
*ptr = 6; // not allowed, we can't change a const value

int value = 5;
const int *ptr1 = &value; // ptr1 points to a "const int", so this is a pointer to a const value.
int *const ptr2 = &value; // ptr2 points to an "int", so this is a const pointer to a non-const value.
const int *const ptr3 = &value; // ptr3 points to a "const int", so this is a const pointer to a const value.
