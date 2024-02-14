// structure of arrays 

#include <stdio.h>

// Define a structure of arrays
struct StructureOfArrays {
    int array_member1[5];
    float array_member2[10];
};

int main() {
    // Declare and define a variable of the structure of arrays
    struct StructureOfArrays data;

    // Assign values to elements of the arrays
    for (int i = 0; i < 5; i++) {
        data.array_member1[i] = i * 2;
    }

    for (int i = 0; i < 10; i++) {
        data.array_member2[i] = i * 1.5;
    }

    // Access and print values of elements
    for (int i = 0; i < 5; i++) {
        printf("data.array_member1[%d] = %d\n", i, data.array_member1[i]);
    }

    for (int i = 0; i < 10; i++) {
        printf("data.array_member2[%d] = %.2f\n", i, data.array_member2[i]);
    }

    return 0;
}
