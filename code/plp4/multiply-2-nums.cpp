#include <iostream>
using namespace std;

int multiply(int a, int b, bool action);

int main()
{
    int a, b;

    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    bool bool_multiply = true;
    int ans = multiply(a, b, bool_multiply);
    cout << "The multiplication of a and b is " << ans << endl;

    return 0;
}

int multiply(int a, int b, bool action)
{
    if (action)
    {
        int result = a * b;
        return result;
    }
    else
    {
        return 0;
    }
}