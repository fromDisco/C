## Variable Scope
```c
// is initialized to 0 by compiler
// -> lives as long as the program is running
int globalVar; /* global variable */

int main(void) {
    // no initialization but declaration
    // Pointer pointer points to whatever garbage is already in that memory location
    // -> lives as long as the function is executed
    int localVar; /* local variable */
}
```

