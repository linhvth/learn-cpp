# Selection Control Structures

### Table of Contents

- [Boolean Values](#boolean-values)
- [Conditional Statement](#conditional-statement)
  - [`if` statement](#if-statement)
  - [`if` - `else` statement](#if---else-statement)
  - [`if` - `else if` - `else` statement](#if---else-if---else)
  - [`switch` - `case` statement](#switch---case)
- [The Dangling Else Problem](#the-dangling-else-problem)

## Boolean Values

In C++, there are 02 `bool` (boolean, I mean) values. Their literals are `true` and `false`. We can convert `bool` to integer type: `true` as 1 and `false` as 0.

Example (download and try [bool-values.cpp](https://github.com/linhvth/learn-cpp/blob/40ea8a2279ea64d6c84fe09158eee96577dd8860/coding/bool-values.cpp)):

```cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string filename = "PLP3 Selection Control Structures";
    bool readingPLP3 = true; // boolean

    cout << "Topic : " << filename << endl
         << "Are you reading PLP3? : " << readingPLP3 << endl;

    return 0;
}
```

## Conditional Statement

In C++, there are some types of conditional statements: `if`, `if` - `else`, `if` - `else if` - `else`, and `switch` - `case`.

### `if` statement

Using `if` conditional statement, only execute block code inside the `{}` if and only if the conditional expression is evaluated as `true`.

Example (refer to [conditional-statements.cpp](https://github.com/linhvth/learn-cpp/blob/40ea8a2279ea64d6c84fe09158eee96577dd8860/coding/conditional-statements.cpp))

```cpp
// if statement
int score = 80;
cout << "Your score: " << score << endl;
if (score >= 60)
{
    cout << "Yes! You passed the exam!" << endl;
}

if (score < 60)
{
    cout << "Oh no! You have to do the exam again! :(" << endl;
}
```

You can see that it only prints "Yes! You passed the exam!" since the score (80) is larger than the condition to pass (60).

### `if` - `else` statement

If you have 2 conditions and want to execute corresponding code block for specific condition, you can use `if` - `else` statement. If the condition in `if` statement is `true`, the first code block will be executed and then it will stop executing and get out of the conditional statement, which means it will not run the code block under the `else` statement. Otherwises, the `else` statement is considered and execute.

Example (refer to [conditional-statements.cpp](https://github.com/linhvth/learn-cpp/blob/40ea8a2279ea64d6c84fe09158eee96577dd8860/coding/conditional-statements.cpp))

```cpp
// if-else statement
int score2 = 50;
cout << "Your score: " << score2 << endl;
if (score2 >= 60)
{
    cout << "Yes! You passed the exam!" << endl;
}
else
{
    cout << "Oh no! You have to do the exam again! :(" << endl;
}
```

You can see that in aboe example, the first condition (>= 60) is `false`. Therefore, the code block under `if` statement is not executed. Instead, the program run the code under the `else` statement.

### `if` - `else if` - `else`

When we have more than 2 conditions to test but do not want to write several `if` statements? We go with `else if`.

Example (refer to [conditional-statements.cpp](https://github.com/linhvth/learn-cpp/blob/40ea8a2279ea64d6c84fe09158eee96577dd8860/coding/conditional-statements.cpp))

```cpp
// if - else if - else statement
int bloodPressure = 120;
cout << "Blood Pressure: " << bloodPressure << endl;
if (bloodPressure >= 140)
{
    cout << "Your blood pressure is high" << endl;
}
else if (bloodPressure >= 90)
{
    cout << "You blood pressure is normal" << endl;
}
else
{
    cout << "Your blood pressure is low" << endl;
}
```

### `switch` - `case`

There are some notes when using `switch`:

- Inside the parenthesis of `switch` is an expression. Inside the parenthesis of `case` is a constant-expression.
- The constant-expression for a case must be the same data type as the variable in the switch, and it must be a constant or a literal.
- When there is a match between expression and constant-expression, the code under this corresponding `case` will be executed.
- A `break` statement is needed for each of the cases. If `break` is missing, the program will consider the following case.
- When the `break` is reached, the `switch` will be terminated. The program will go to the next line of code followint `switch` - `case` statement.
- There is an option called `default`. It is similar with `else`: the code under `default` will be considered when none of above cases is `true`.

Example (refer to [conditional-statements.cpp](https://github.com/linhvth/learn-cpp/blob/40ea8a2279ea64d6c84fe09158eee96577dd8860/coding/conditional-statements.cpp))

```cpp
// switch - case
char testScore = 'B';
cout << "Your test score is: " << testScore << endl;
switch (testScore)
{
case 'A':
    cout << "Excellent!" << endl;
    break;
case 'B':
    cout << "You did a good job!" << endl;
    break;
case 'C':
    cout << "You can improve it!" << endl;
    break;
case 'D':
    cout << "You passed the exam!" << endl;
    break;

default:
    cout << "You have to take the exam again! :(" << endl;
    break;
}
```

## The Dangling Else Problem

In C++, we can prevent the Dangling Else problem by making sure that we use braces (`{}`) when we use nested-if statement.
