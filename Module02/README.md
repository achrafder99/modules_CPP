# C++ - Module 02
## Ad-hoc polymorphism, operator overloading, and Orthodox Canonical class form
### Version: 7.1

This document contains the exercises of Module 02 from C++ modules.

## Table of Contents
- [Introduction](#introduction)
- [General Rules](#general-rules)
- [New Rules](#new-rules)
- [Exercise 00: My First Class in Orthodox Canonical Form](#exercise-00-my-first-class-in-orthodox-canonical-form)
- [Exercise 01: Towards a More Useful Fixed-Point Number Class](#exercise-01-towards-a-more-useful-fixed-point-number-class)
- [Exercise 02: Now We're Talking](#exercise-02-now-were-talking)
- [Exercise 03: BSP](#exercise-03-bsp)

## Introduction
C++ is a general-purpose programming language created by Bjarne Stroustrup as an extension of the C programming language, or "C with Classes." The goal of these modules is to introduce you to Object-Oriented Programming using C++.

## General Rules
- Compile your code with `c++` and the flags `-Wall -Wextra -Werror`.
- Your code should compile with the `-std=c++98` flag.
- Follow formatting and naming conventions as specified in the guidelines.
- Use UpperCamelCase for class names and appropriate file naming conventions.
- Output messages should end with a newline character and be displayed to the standard output.
- No specific coding style is enforced, but focus on writing clean and readable code.

## New Rules
- Classes must follow the Orthodox Canonical Form, implementing default constructor, copy constructor, copy assignment operator, and destructor.
- Memory management must be handled to avoid memory leaks.
- Header files should include necessary dependencies and use include guards.
- Use of `using namespace` and `friend` keywords is forbidden.

## Exercise 00: My First Class in Orthodox Canonical Form
In this exercise, you'll create a class to represent fixed-point numbers in the Orthodox Canonical Form. The class will include constructors, member functions, and operators.

## Exercise 01: Towards a More Useful Fixed-Point Number Class
This exercise builds upon the previous one and enhances the `Fixed` class to represent fixed-point numbers with fractional parts. Constructors and member functions for conversion are introduced.

## Exercise 02: Now We're Talking
The `Fixed` class is further improved by overloading comparison and arithmetic operators. Increment and decrement operators are implemented, along with static member functions for finding minimum and maximum values.

## Exercise 03: BSP
This exercise introduces a practical use case where you'll implement a function to determine whether a point is inside a triangle using Binary Space Partitioning (BSP).

## Resources

### Ad-hoc Polymorphism:
- [Wikipedia - Polymorphism (computer science)](https://en.wikipedia.org/wiki/Polymorphism_(computer_science))
- [GeeksforGeeks - Polymorphism in C++](https://www.geeksforgeeks.org/polymorphism-in-c/)
- [Tutorialspoint - Polymorphism in C++](https://www.tutorialspoint.com/cplusplus/cpp_polymorphism.htm)

### Operator Overloading:
- [Wikipedia - Operator Overloading](https://en.wikipedia.org/wiki/Operator_overloading)
- [GeeksforGeeks - Operator Overloading in C++](https://www.geeksforgeeks.org/operator-overloading-c/)
- [cplusplus.com - Operator Overloading](http://www.cplusplus.com/doc/tutorial/operators/)
- [Tutorialspoint - C++ Operator Overloading](https://www.tutorialspoint.com/cplusplus/cpp_operator_overloading.htm)

### Fixed point number
[Fixed - Float - double ](https://www.cim.mcgill.ca/~langer/273/2-notes.pdf)
