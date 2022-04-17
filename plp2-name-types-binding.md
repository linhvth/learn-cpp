# **Data Types and Naming Convention**

## **Data Types in C++**

Primitive types, those are built-in or predefined data types, can be used directly to declare variables. Primitive data type specifies the size and type of variable values.

- `bool`: `true` or `false`
- `int`: integers without decimals
- `char`: single character (can be letter or number or ASCII values)
- `float`: float point number. For fractioal numbers having less than 7 decimal digits
- `double`: also float point number but more decimal digits than `float`
- `void`: valueless, has no associated values

Example (refer to file [data-types.cpp](./code/plp2/data-types.cpp)):

```cpp
bool testBoolean = false;               // boolean
int testNum = 35;                       // Integer (whole number)
float testFloat = 3.14;                 // Floating point number
double testDouble = 3.14159265359;      // Floating point number
char testChar = '3';                    // Character
```

Note: We can see from the printed result that the value of `false` is printed as `0`.

## **C++ Identifiers**

### **Valid Indentifiers in C++**

- Identifiers must begin with a letter or underscore. They cannot be named beginning with a numeric digit or any special character. Digits can be used in the variable names after the first character.
- A keyword cannot be used as an identifier, which means we should avoid those are already keywords or reserved words in C++. Refer to the list of C++ keywords and reserved words [here](https://en.cppreference.com/w/cpp/keyword).
- Identifiers in C++ are case-sensitive. `someName` and `somename` are distinct.

### **Name Convention**

There are some conventions that are widely accepted by programmers to help withthe consistency for the better understanding. Some highlights:

- Using underscores to visually distinguish does not violate the rules. However, we prefer using **camelCase** style as a practice to name variables (for example: thisNum, numOfApples, etc.)
- While the variable names begin with lower case letter, the class name should be uppercase.

## **Binding**

#### **Static or Dynamic**

C++ is statically-typed which means variable types are known at compile time and types are associated with variables not values. We must declare the type of a variable before we can use that variable, for example: `int thisNum = 3;`

#### **Strongly-typed or Weakly-typed**

C++ is strongly-typed (explicit), which means we cannot make conversions between unrelated types implicitly. Try this below example to see if it can execute (you can go to [strongly-typed.cpp](./code/plp2/strongly-typed.cpp) to download and execute code):

```cpp
int main() {
    cout << "Check if C++ can make conversions between unrelated types implicitly";
    string courseName = "CS";
    courseName = courseName + 308;
    return 0;
}
```

As we observe, the code above throws an error and cannot compile since we try to concatenate a string and an integer. So to concatenate, we have to convert int to string. However, if we try to add an int to a char, it's actually appropriate since C++ will refer the char to ASCII value and add to the int (convince yourself by executing [int-char-add.cpp](./code/plp2/int-char-add.cpp)).

## References

- C++ Primer (5th Edition)
- [C++ Data Types](https://www.geeksforgeeks.org/c-data-types/) by GeeksforGeeks
- [Naming Convention for C++](https://www.geeksforgeeks.org/naming-convention-in-c/) by GeeksforGeeks
