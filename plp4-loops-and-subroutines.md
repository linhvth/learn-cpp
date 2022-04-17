# Loops and Subroutines

### Table of Contents

- [Loops in C++](#loops-in-c)
  - [while](#while)
  - [do-while](#do-while)
  - [for](#for)
- [Recursion](#recursion)
- [Function](#function)

## Loops in C++

### while

`while` loop allows us to run a block of code zero or many times. The number of executions depends on the expression in the parenthesis `()` followed by the syntax `while`. The syntax of `while` loop is:

```
while (expression) {
    statements;
}
```

(for example, please refer to [loops.cpp](./code/plp4/loops.cpp))

The expression will be tested. If return `true`, the code block inside `{}` will be executed. If return `false`, the program will not continue to consider `while` loop and move to the next line of code. Make sure to have an exit condition (when the expression is evaluated to `false`) to exit the `while` loop, or else it will run forever and meet the runtime error.

### do-while

Similar to `while` loop, inside the body loop, there must be an update to make the expression to be false at somewhere to exit the loop and avoid runtime error.

```
do {
    statements;
}
while (expression);
```

(for example, please refer to [loops.cpp](./code/plp4/loops.cpp))

Unlike `while` loop and `for` loop, `do-while` loop is post-test. It always runs the body loop first, then evaluate the loop condition to decide whether continue to execute the body loop. Thus, `do-while` always executes at least once.

### for

`for` loop allows to execute a code block a number of times depends on the counter inside the parenthesis `()`. It has 3 part: (1) initialize statement, for example `i=0`; (2) test statement or loop condition, for example `i < 10`; and (3) update statement, for example `i+++` (increasement). Syntax for `for` loop:

```
for (initStatement; testStatement (loopCondition); updatStatement) {
    codeBlock;
}
```

(for example, please refer to [loops.cpp](./code/plp4/loops.cpp))

Similar to `while` loop, `for` loop is pre-test, which means it tests the condition first, if return `true`, executes the body loop.

## Recursion

C++ supports recursion. Put it simple, recursion means a process that a function calls itself until a condition (base condition) is met. This type of function is called recursive function.
About how it works, please refer to the code file [calc-factorial.cpp](./code/plp4/calc-factorial.cpp). This example is about write a recursive function to calculate the factorial of an input `n`.

## Function

- C++ allows functions having multiple parameters, even when these parameters are different in types. (see [multiply-2-nums.cpp](./code/plp4/multiply-2-nums.cpp) for example)
- C++ does not have an official way to return multiple values from a function. Many people recommend that can use `struct` instead.
- C++ is both pass-by reference and pointer.
