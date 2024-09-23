
---

#### Overview:
The `Pointer.cpp` file demonstrates the use of pointers in C++, including their basic usage, pointer arithmetic, and operations on variables through pointers. The examples included show how to manipulate memory addresses, modify values of variables indirectly through pointers, and how pointers behave with different data types, including structs.

#### Features Covered:

1. **Basic Pointer Operations:**
   - Declaring a pointer.
   - Assigning the address of a variable to a pointer.
   - Dereferencing a pointer to access and modify the value of a variable.
   
2. **Pointer Arithmetic:**
   - Modifying variables through pointers.
   - Demonstrates how pointers can point to different variables and affect their values.

3. **Constant Pointers:**
   - Use of constant pointers (`const int*`), showing that the value pointed to cannot be modified.

4. **Pointers with Structs:**
   - Shows how pointers can be used to access members of a struct.

5. **Pointer in Function Arguments:**
   - The `increasePrice(double* price)` function demonstrates passing pointers to functions to modify the original variable's value.

---

#### Code Highlights:

- **Pointer Declaration and Dereferencing:**
   ```cpp
   int number = 10;
   int *pointer = &number;
   cout << "Value of pointer: " << *pointer << endl;
   ```

- **Changing Variable Value via Pointer:**
   ```cpp
   *pointer = 20;
   cout << "New value of number: " << number << endl;
   ```

- **Pointer in Function:**
   ```cpp
   void increasePrice(double* price) {
       *price *= 1.2;
   }
   ```

- **Pointers and Structs:**
   ```cpp
   struct Pointer {
       int a;
       int b;
   };

   Pointer p = {30, 50};
   Pointer* pValue = &p;
   cout << "Value of a: " << pValue->a << endl;
   ```

---

#### What are Pointers?

Pointers are variables that store the memory address of another variable. They are a powerful feature of C++ that allows for efficient memory management and direct memory manipulation. 

- **Declaring a Pointer:**
   To declare a pointer, you specify the type of variable it will point to, followed by an asterisk (`*`).
   ```cpp
   int* ptr; // A pointer to an integer variable
   ```

- **Dereferencing a Pointer:**
   Dereferencing a pointer means accessing or modifying the value stored at the address the pointer is pointing to. This is done using the dereference operator (`*`).
   ```cpp
   *ptr = 10; // Assigns the value 10 to the memory location ptr points to.
   ```

- **Address-of Operator (`&`):**
   This operator is used to get the address of a variable.
   ```cpp
   ptr = &var; // ptr now holds the address of var
   ```

---