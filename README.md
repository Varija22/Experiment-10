Program 1: Swap Two Numbers Using Call by Reference

AIM:

To write a program in C++ to swap two numbers using the concept of **call by reference**.

Software Used:

Programiz

Theory:

In C++, **call by reference** allows a function to modify the original variables passed to it. When a variable is passed by reference, any changes made to the variable inside the function affect the original variable. This is done by passing references using the `&` symbol in the function parameters.

Algorithm:

1. Start the program.
2. Define a `swap` function that takes two integers by reference.
3. Inside the function, use a temporary variable to swap the values.
4. In `main()`, declare two integers and initialize them.
5. Call the `swap` function.
6. Print the values of the two variables after swapping.
7. End the program.

Conclusion:

The program successfully demonstrates swapping of two variables using call by reference, with changes reflecting in the original variables.


Program 2: Increment Salary Using Call by Reference

AIM:

To write a program in C++ to increment a salary value using **call by reference**.

Software Used:

Programiz

Theory:

Call by reference allows a function to modify the original value of the variable passed. In this program, the salary value is passed by reference to the `increment()` function, which increases it by a fixed amount (e.g., 5000). The updated value reflects in the original variable.

Algorithm:

1. Start the program.
2. Define a function `increment` that takes an integer by reference.
3. Inside the function, increase the value by 5000.
4. In `main()`, declare and initialize an integer variable `sal` as the base salary.
5. Print the original salary.
6. Call `increment(sal)` to modify the salary.
7. End the program.

Conclusion:

The program successfully increments the salary value using call by reference, and the change reflects in the original variable.

Program 3: Display Before and After Swap

AIM:

To write a program in C++ to display the values before and after swapping two numbers using **call by reference**.

Software Used:

Programiz

Theory:

This program shows how to swap two variables and clearly print their values before and after the swap. It uses call by reference to ensure the original variables are modified directly, and outputs are used to confirm the effect of the function.

Algorithm:

1. Start the program.
2. Define a `swap` function that takes two integer references.
3. Use a temporary variable inside the function to swap values.
4. In `main()`, declare and initialize two integer variables.
5. Print the values before the swap.
6. Call the `swap()` function.
7. Print the values after the swap.
8. End the program.

Conclusion:

The program successfully shows the values of two variables before and after swapping using call by reference.

