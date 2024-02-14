/*

=> exploring "stdlib.h" ==>

The `stdlib.h` header file in C provides various functions for performing general utility tasks, including memory allocation, random number generation, string conversion, sorting, and program termination. Here are some common use cases and examples for the `stdlib.h` header file:

1. **Memory Allocation Functions**:
   - Use Case: Allocating and deallocating memory dynamically.
   - Example:
     ```c
     #include <stdio.h>
     #include <stdlib.h>

     int main() {
         // Allocate memory for an integer
         int *ptr = (int *)malloc(sizeof(int));
         if (ptr == NULL) {
             printf("Memory allocation failed\n");
             return 1;
         }

         // Assign a value to the allocated memory
         *ptr = 42;
         printf("Value of allocated memory: %d\n", *ptr);

         // Deallocate the memory
         free(ptr);
         return 0;
     }
     ```

2. **Random Number Generation Functions**:
   - Use Case: Generating random numbers for simulations, games, etc.
   - Example:
     ```c
     #include <stdio.h>
     #include <stdlib.h>
     #include <time.h>

     int main() {
         // Seed the random number generator
         srand(time(NULL));

         // Generate and print a random number between 1 and 100
         int randomNumber = rand() % 100 + 1;
         printf("Random number: %d\n", randomNumber);
         return 0;
     }
     ```

3. **String Conversion Functions**:
   - Use Case: Converting strings to numerical values and vice versa.
   - Example:
     ```c
     #include <stdio.h>
     #include <stdlib.h>

     int main() {
         // Convert string to integer
         char str[] = "123";
         int num = atoi(str);
         printf("Converted integer: %d\n", num);

         // Convert integer to string
         int number = 456;
         char buffer[10];
         itoa(number, buffer, 10);
         printf("Converted string: %s\n", buffer);
         return 0;
     }
     ```

4. **Program Termination Functions**:
   - Use Case: Terminating the program and returning an exit status.
   - Example:
     ```c
     #include <stdlib.h>

     int main() {
         int status = 0;
         // Terminate the program with exit status
         exit(status);
     }
     ```

5. **Sorting Functions**:
   - Use Case: Sorting arrays of elements.
   - Example:
     ```c
     #include <stdio.h>
     #include <stdlib.h>

     // Comparator function for sorting integers in ascending order
     int compare(const void *a, const void *b) {
         return (*(int *)a - *(int *)b);
     }

     int main() {
         int arr[] = {5, 2, 8, 3, 1};
         int n = sizeof(arr) / sizeof(arr[0]);

         // Sort the array
         qsort(arr, n, sizeof(int), compare);

         // Print the sorted array
         for (int i = 0; i < n; i++) {
             printf("%d ", arr[i]);
         }
         printf("\n");
         return 0;
     }
     ```

These examples demonstrate some of the most commonly used functions provided by `stdlib.h` for performing general utility tasks in C. By including this header file in your C program, you gain access to a wide range of functions for memory management, random number generation, string conversion, sorting, and program termination.

*/