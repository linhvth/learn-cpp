# The first step of learning C++

An overview of C++, including its history, how it works, and what you can do with it.

## What is C++?

There was a project named "C with Classes" which was developed by [Bjarne Stroustrup](https://www.stroustrup.com/) in 1979. In 1984, it was renamed to C++. C++ is actually a superset of C, which means it was created based on C language but has a lot of improvements/features. Therefore, C++ is a compiled language as C.

Bjarne Stroustrup created C++ with an aim of using for object-oriented programming, which leads to the wide use of this language in the fields of game engines, computer graphics, ect. Fun fact: The Google Search Engine is also built in C++.

## Getting Started

In this section, we will setup the environment (in Windows) and try our first program: Hello World!

### **Setup environment**

#### Step 1: Install an IDE

I personally prefer Visual Studio Code. Go to [Download Visual Studio Code](https://code.visualstudio.com/download) to get the lastest version. Then, search for C/C++ extension for Visual Studio Code and install it (see the image below).

![C/C++ extension in Visual Studio Code](images/cpp-extension-vsc.png)

#### Step 2: Install a compiler

As mentioned above, since C++ is a compiled language, we have to install a compiler in order to translate our script to machine language. For Windows, I use MinGW-w64. You can go [here](https://sourceforge.net/projects/mingw/) to install MinGW-w64. Note that you may want to add the path of the software's path to your machine.

### **"Hello World!"**

The code block below shows how we can print "Hello World!" in C++ (refer to [helloworld.cpp](coding/hello-world.cpp) file to download and execute the program)

```cpp
#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World!";
    return 0;
}
```

Some notes:

- `<iostream` is the class containing the printing method of `cout` that we use.
- `std::cout << "string to print"` prints the string inside the quotation marks (output) on the screen. In the code above, we declare `using namespace std` that C++ is notified that we use the namespace of `std` which have the syntax `cout`. Therefore, we do not have to write `std` in the line 6. Read more about `std::cout` in [here](https://www.cplusplus.com/reference/iostream/cout/).
- `return 0;` is a signal for the end of the program.

## References

- [Wikipedia | C++](https://en.wikipedia.org/wiki/C%2B%2B)
- [freeCodeCamp | The C++ Programming Language](https://www.freecodecamp.org/news/the-c-plus-plus-programming-language/)
