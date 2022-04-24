# Objects and Classes

C++ does support Objects because it is an object-oriented programming language. To learn about Objects, we have to first look at how Classes work.

### Table of Contents

- [Classes](#classes)
- [Objects in C++](#objects)
- [Naming conventions](#naming-conventions)
- [Standard Methods](#standard-methods)
- [Inheritance](#inheritance)

_**Note:** All code examples provided in this tutorial are part of the file [notebook.cpp](./code/plp5/notebook.cpp). You can download and run the file for the demonstration._

## Classes

Classes contains **attributes** (variables) and **methods** (functions). We can refer those elements as "class members".

To define a class, use the keyword `class`. Remember to have a semicolon `;` to finish the class definition. Consider the example below:

```cpp
class Notebook        // Class
{
public:               // access specifier
    string brand;     // attribute
    char color;       // attribute
    ...               // other attributes

    void notebookDefine(...){...} // method or function

    void givePrice(){...}         // method or function
};
```

You may notice the access specifier `public` in the example. In C++, we have 03 types of access specifiers: `public`, `protected`, and `private`. For more information, please refer to [Member Access Control (C++)](https://docs.microsoft.com/en-us/cpp/cpp/member-access-control-cpp?view=msvc-170).

## Objects

An Object is an instance of a class. Memory allocation does not happen when defining Classes but until objects are created. To create an object, use the syntax `ClassName ObjectName;`

```cpp
class Notebook {...}; // the class Notebook

int main()
{
    Notebook crabit;  // create an object of Notebook
    return 0;
}
```

All the members of the class are accessible through object. Look at the example below:

```cpp
class Notebook {...};       // Base Class

class Bill : public Notebook // Derived Class of Buy
{
    (...)
    void total(){...}
};

int main()
{
    Buy bill(...);          // create an object of Buy
    bill.total();           // access the Buy class's function
    bill.pricePerUnit = 5;  // access and change the Buy class's attribute
    return 0;
}
```

## Naming conventions

### Classes

- The class name should be a noun as we expect a class will produce objects.
- Names of C++ classes should begin with a capital letter, and not contain any underscores ( `_` ). Use upper case letters as separators between 2 words. (CamelCase)

### Methods

- The function/method's name should begin with a verb since we expect it does an specific action.
- The first character of function/ method argument names should be lower case (camelCase)

### Instance variables

- Should use camelCase

## Reference

- [w3schools | C++ Classes/Objects](https://www.w3schools.com/cpp/cpp_classes.asp)
- [C++ Classes and Objects](https://www.geeksforgeeks.org/c-classes-and-objects/)
- [Member Access Control (C++)](https://docs.microsoft.com/en-us/cpp/cpp/member-access-control-cpp?view=msvc-170)
- [Inheritance (C++)](https://docs.microsoft.com/en-us/cpp/cpp/inheritance-cpp?view=msvc-170)
