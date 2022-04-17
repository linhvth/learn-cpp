#include <iostream>
using namespace std;

int forLoop(int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * i;
    }

    return ans;
}

int whileLoop(int n)
{
    int ans = 1;
    while (n > 0)
    {
        ans = ans * n;
        n = n - 1;
    }

    return ans;
}

int dowhile(int n)
{
    int ans = 1;
    do
    {
        ans = ans * n;
        n = n - 1;
    } while (n > 0);
    return ans;
}

int main()
{
    int n = 5;
    int testFor = forLoop(n);
    cout << "The factorial of " << n << " = " << testFor << endl;

    int testWhile = whileLoop(n);
    cout << "The factorial of " << n << " = " << testWhile << endl;

    int testDoWhile = dowhile(n);
    cout << "The factorial of " << n << " = " << testDoWhile << endl;

    return 0;
}