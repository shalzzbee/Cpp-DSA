#include <iostream>
using namespace std;

int main()
{
    int n, fact;
    cout << "Enter no to find factorial: ";
    cin >> n;
    fact = 1;
    if (n == 0)
    {
        cout << "\nFactorial : 1";
    }
    else if (n < 0)
        cout << "\nFactorial of -ve no is 0";

    else
    {
        while (n >= 1)
        {
            fact *= n;
            n--;
        }
        cout << "\nFactorial : " << fact;
    }

    return 0;
}