#include <iostream>
using namespace std;
int main()
{
    int somename, someName, SomeName, SOMENAME;

    cout << "Check if C++ can make conversions between unrelated types implicitly" << endl;
    string courseType = "CS";
    // try this below line of code, this will throw an error in terminal
    // courseType = courseType + 308;
    cout << courseType << endl;

    return 0;
}