#include <iostream>
using namespace std;
int fib(int n)
{
    if (n <= 1)
        return n;
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}
int main()
{
    int n;
    cout << "Enter your fib number:";
    cin >> n;
    cout << "Fib:" << fib(n) << endl;
    system("pause");
}