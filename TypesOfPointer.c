/*

Null Pointer: This pointer points to nothing. It is represented by the constant NULL. It's often used to initialize pointers before assigning them a valid memory address or to check if a pointer is pointing to anything.

Void Pointer: Also known as a generic pointer, it is a pointer that has no specific data type associated with it. It can be assigned to any pointer type, but it cannot be dereferenced directly. It's often used in functions that need to accept any kind of pointer.

Pointer to Function: This type of pointer points to a function rather than a data object. It's particularly useful in implementing callback functions and for dynamic function invocation.

Pointer to Array: In C, an array name can be used as a pointer that points to the first element of the array. So, a pointer to an array essentially points to the first element of that array.

Pointer to Structure: This type of pointer points to a structure in memory. It allows for dynamic memory allocation for structures and facilitates accessing structure members dynamically.

wild pointer: A pointer bahaves like a wild poinrer when declared but uninitialized. So they point to random location

dangling pointer: Its a pointer pointing to a memory location that has been freed up.

*/