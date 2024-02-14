/*

=> Some Important Headerfiles ==>

-> #ifdef:
Used for conditional compilation. It checks whether a macro is defined.
If the specified macro is defined, the code following #ifdef is compiled.
Otherwise, the code following #ifdef is skipped.

Example:

#ifdef DEBUG
printf("Debug mode enabled.\n");
#endif

-> #ifndef:

Similar to #ifdef, but checks whether a macro is NOT defined.
If the specified macro is NOT defined, the code following #ifndef is compiled.
Otherwise, the code following #ifndef is skipped.

Example:

#ifndef NDEBUG
printf("Debug assertions enabled.\n");
#endif

-> The preprocessor directives `#if`, `#elif`, `#else`, and `#endif` are used for conditional compilation. They allow sections of code to be included or excluded from the compilation process based on certain conditions. Here are their use cases and examples:

1. **`#if`**:
   - Used to start a conditional block based on a specified condition.
   - If the condition evaluates to true (non-zero), the code following `#if` is compiled.
   - If the condition evaluates to false (zero), the code following `#if` is skipped until an `#elif`, `#else`, or `#endif` directive is encountered.
   - Example:
     ```c
     #if DEBUG_LEVEL > 2
     printf("Debugging information level 3\n");
     #endif
     ```

2. **`#elif`**:
   - Used to specify an alternative condition to be evaluated if the preceding `#if` or `#elif` condition was false.
   - If the condition evaluates to true (non-zero), the code following `#elif` is compiled.
   - Example:
     ```c
     #if DEBUG_LEVEL == 1
     printf("Debugging information level 1\n");
     #elif DEBUG_LEVEL == 2
     printf("Debugging information level 2\n");
     #elif DEBUG_LEVEL > 2
     printf("Debugging information level 3 or higher\n");
     #else
     printf("No debugging information\n");
     #endif
     ```

3. **`#else`**:
   - Used to specify code that should be compiled if none of the preceding conditions in the block were true.
   - The `#else` directive does not have a condition associated with it.
   - Example:
     ```c
     #if defined(DEBUG)
     printf("Debugging enabled\n");
     #else
     printf("Debugging disabled\n");
     #endif
     ```

4. **`#endif`**:
   - Used to end a conditional block started by `#if`, `#elif`, or `#else`.
   - Marks the end of the block of code that is conditionally compiled.
   - Example:
     ```c
     #if defined(_WIN32)
     #include <windows.h>
     #elif defined(__linux__)
     #include <unistd.h>
     #else
     #error "Unsupported operating system"
     #endif
     ```

These directives are commonly used to write platform-specific code, enable or disable debugging features, or configure compile-time options based on specific conditions. They provide a way to write more flexible and portable code in C.

*/