inline int add(int a, int b) {
    return a + b;
}

// These functions are executed by placing a copy of the function in the code section instead of transferring control to the function by pushing the function to stack
// This is done to reduce the overhead of function call
// Sometimes if the function is too complex the compiler may ignore the inline keyword 