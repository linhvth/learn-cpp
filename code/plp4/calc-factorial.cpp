#include <iostream>
using namespace std;

int factorial(int n);

int main()
{
    int n;
    cout << "Enter a positive integer: "; // give input to the program
    cin >> n;

    cout << "The factorial of " << n << " = " << factorial(n) << endl;
    return 0;
}

int factorial(int n)
{
    if (n > 1)
    {
        return n * factorial(n - 1); // recursive step
    }
    else
    {
        return 1; // base case when n = 1
    }
}