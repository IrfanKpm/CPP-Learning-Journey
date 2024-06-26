# CPP-Learning-Journey

This repository contains a collection of C++ files representing my coding journey while learning C++ through various online resources, primarily YouTube videos. Each lab file (e.g., `lab1.cpp`, `lab2.cpp`, etc.) corresponds to a specific concept or exercise covered during my learning process.

## Topics Covered

### **Lab 1** > [lab1.cpp](./lab1.cpp)

- **Basic Output**: Demonstrates basic usage of `cout` for outputting text to the console.
- **Comments**: Shows both single-line (`//`) and multi-line (`/* */`) comments in C++.

### **Lab 2** > [lab2.cpp](./lab2.cpp)

- **Character Literals**: Demonstrates usage of character literals in C++.
  - Includes examples of escape sequences (`\`, `\a`, `\t`) and handling of single and double quotes (`\'`, `\"`).

### **Lab 3** > [lab3.cpp](./lab3.cpp)

- **Data Types**:
  - **Primitive Data Types**: Introduces various primitive data types in C++.
    - **Character**: Demonstrates the `char` data type with character literals.
    - **Boolean**: Introduces the `bool` data type with boolean literals (`true`).
    - **Integer**: Shows both signed (`int`) and unsigned (`unsigned int`) integer data types.
    - **Floating-point**: Demonstrates `float` and `double` data types for single and double precision floating-point numbers.

### **Lab 4** > [lab4.cpp](./lab4.cpp)

- **Input and Output**:
  - **Input using getline**: Uses `getline` to read a string input from the user (`name`).
  - **Input using cin**: Uses `cin` to read an integer input from the user (`x`).

### **Lab 5** > [lab5.cpp](./lab5.cpp)

- **Pointers**:
  - **Pointer Basics**: Introduces pointers in C++.
  - **Pointer Assignment**: Assigns an integer variable and uses a pointer to access its address and value.
  - **Pointer Dereferencing**: Demonstrates dereferencing a pointer to access and modify the value of a variable.

### **Lab 6** > [lab6.cpp](./lab6.cpp)

- **More on Pointers and References**:
  - **Pointer to Variable**: Declares a pointer (`myp`) and assigns it the address of an integer variable (`score`).
  - **Reference Variable**: Introduces a reference variable (`another_score`) and demonstrates its assignment and modification.
  - **Effect of Reference**: Shows how modifying the reference (`another_score`) affects the original variable (`score`).

### **Lab 7** > [lab7.cpp](./lab7.cpp)

- **Arrays and Pointers**:
  - **Static Array**: Initializes and accesses elements in a static array (`arr`).
  - **Dynamic Initialization**: Initializes and accesses elements in a dynamically sized array (`arr2`).
  - **Pointer Arithmetic**: Demonstrates pointer arithmetic to access and modify array elements.

### **Lab 8** > [lab8.cpp](./lab8.cpp)

- **Size of Data Types**:
  - **Size in Bytes and Bits**: Displays the size of various integer data types (`short int`, `int`, `long int`, `long long int`) in both bytes and bits.

### **Lab 9** > [lab9.cpp](./lab9.cpp)

- **Conditional Statements**:
  - **If-Else Statements**: Demonstrates the use of `if`, `else if`, and `else` statements based on different conditions.
  - **Ternary Operator**: Shows the usage of the ternary conditional operator (`? :`) to simplify conditional expressions.

### **Lab 10** > [lab10.cpp](./lab10.cpp)

- **Switch Statement**:
  - **Switch-Case**: Demonstrates the use of `switch` statement to evaluate different cases based on the value of `day`.
    - Outputs the day of the week corresponding to the value of `day`.
    - Includes a `default` case for handling invalid inputs.

### **Lab 11** > [lab11.cpp](./lab11.cpp)

- **Loops**:
  - **For Loop**: Uses a `for` loop to iterate through an array (`arr`) and print its elements.
  - **While Loop**: Demonstrates a `while` loop to iterate through an array (`arr`) and print its elements until a condition (`arr[j] == 1`) is met.
  - **Do-While Loop**: Uses a `do-while` loop to iterate through an array (`arr`) and print its elements, including a special message when a specific value (`8`) is encountered.

### **Lab 12** > [lab12.cpp](./lab12.cpp)

- **String Handling**:
  - **Character Array**: Initializes a character array (`my_name`) with a string literal and demonstrates two methods to iterate through and print its characters.
    - Uses a traditional `for` loop with array indexing.
    - Utilizes a range-based `for` loop to achieve the same result.

### **Lab 13** > [lab13.cpp](./lab13.cpp)

- **Exception Handling**:
  - **Try-Catch Block**: Introduces exception handling in C++ using `try`, `catch`, and `throw` keywords.
    - Throws an exception (`"key"`) and catches specific exceptions (`int`, `float`) with corresponding handlers.
    - Includes a generic catch-all handler (`catch (...)`) for any unhandled exceptions.

### **Lab 14** > [lab14.cpp](./lab14.cpp)

- **Functions**:
  - **Function Definition**: Defines a function (`add`) with parameters `x` and `y` to perform addition.
  - **Function Prototypes**: Introduces function prototypes (`int add(int x, int y);`) and their role in C++.
  - **Function Calls**: Demonstrates calling functions (`sayTwo()`, `returnTree()`, `add(6, 5)`) from `main()` and printing their results.

### **Lab 15** > [lab15.cpp](./lab15.cpp)

- **Pass by Value and Pass by Reference**:
  - **Pass by Value**: Demonstrates passing arguments to a function (`changeValue`) by value.
    - Modifies the value of `a` within the function scope without affecting the original variable.
  - **Pass by Reference**: Illustrates passing arguments to a function (`setTozero`) by reference using reference variables (`&`).
    - Modifies the value of `a` directly, reflecting changes in the original variable (`x`) outside the function.

### **Lab 16** > [lab16.cpp](./lab16.cpp)

- **Static Variables in Functions**:
  - **Static Variable Declaration**: Defines a static variable (`life`) within a function (`lifeUp()`).
  - **Function Execution**: Calls `lifeUp()` multiple times from `main()`, incrementing and returning the static variable.
  - **Lifetime of Static Variable**: Demonstrates how static variables persist their values across function calls.

### **Lab 17** > [lab17.cpp](./lab17.cpp)

- **Bitwise Operations**:
  - **Bitwise AND (`&`)**: Performs bitwise AND operation between `x` and `y`.
  - **Bitwise OR (`|`)**: Performs bitwise OR operation between `x` and `y`.
  - **Bitwise XOR (`^`)**: Performs bitwise XOR operation between `x` and `y`.
  - **Right Shift (`>>`)**: Shifts bits of `x` to the right by 1 position.
  - **Bitwise NOT (`~`)**: Performs bitwise NOT operation on `x`.

### **Lab 18** > [lab18.cpp](./lab18.cpp)

- **Pointers and Dynamic Memory Allocation**:
  - **Case 1: Pointer to Existing Variable**:
    - `ptr1` points to the memory address of the existing variable `x`.
    - Address stored in `ptr1`: Address of variable `x`.
    - Value pointed to by `ptr1`: Value of `x` (1000).
  
  - **Case 2: Pointer to Dynamically Allocated Memory**:
    - `ptr2` points to a dynamically allocated memory location for an integer.
    - Address stored in `ptr2`: Address of the dynamically allocated memory.
    - Value pointed to by `ptr2`: Initially undefined until assigned (`*ptr2 = x;`).
    - Memory allocated with `new` must be freed using `delete` to prevent memory leaks.
    - After `delete`, set `ptr2` to `nullptr` to avoid dangling pointers.

  - **Usage**: Demonstrates the use of pointers with existing variables and dynamically allocated memory in C++.

