/*

=> exploring  "math.h" ==>

The `math.h` header file in C provides declarations for various mathematical functions and constants. These functions are typically used for performing mathematical operations like trigonometric functions, logarithms, exponentiation, and rounding.

Here are some common use cases and examples for the `math.h` header file:

1. **Trigonometric Functions**:
   - Use Case: Calculating trigonometric values such as sine, cosine, and tangent.
   - Example:
     ```c
     #include <stdio.h>
     #include <math.h>

     int main() {
         double angle = 45.0;
         double radian = angle * (M_PI / 180.0);  // Convert degrees to radians
         double sine_value = sin(radian);
         printf("Sine of %.1f degrees: %.4f\n", angle, sine_value);
         return 0;
     }
     ```

2. **Exponential and Logarithmic Functions**:
   - Use Case: Calculating exponential and logarithmic values.
   - Example:
     ```c
     #include <stdio.h>
     #include <math.h>

     int main() {
         double x = 2.0;
         double exp_value = exp(x);  // Calculate e raised to the power of x
         double log_value = log(x);  // Calculate natural logarithm of x
         printf("e^%.1f = %.4f\n", x, exp_value);
         printf("ln(%.1f) = %.4f\n", x, log_value);
         return 0;
     }
     ```

3. **Power Functions**:
   - Use Case: Computing powers and roots.
   - Example:
     ```c
     #include <stdio.h>
     #include <math.h>

     int main() {
         double base = 2.0;
         double exponent = 3.0;
         double power_value = pow(base, exponent);  // Compute base raised to the power of exponent
         printf("%.1f raised to the power of %.1f: %.1f\n", base, exponent, power_value);
         return 0;
     }
     ```

4. **Rounding Functions**:
   - Use Case: Rounding floating-point numbers to the nearest integer.
   - Example:
     ```c
     #include <stdio.h>
     #include <math.h>

     int main() {
         double value = 3.6;
         double rounded_value = round(value);  // Round value to the nearest integer
         printf("Rounded value of %.1f: %.1f\n", value, rounded_value);
         return 0;
     }
     ```

These are just a few examples of the many mathematical functions provided by `math.h`. By including this header file in your C program, you gain access to a wide range of mathematical capabilities for performing complex calculations.

*/