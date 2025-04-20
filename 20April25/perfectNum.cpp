#include <iostream>
using namespace std;

// A perfect number is a positive integer that is equal to the sum of its proper divisors, excluding itself.
// A number is perfect if all the numbers that divide it (other than itself) add up to the number itself.

// Example:
// 6
// Proper divisors: 1, 2, 3
// Sum = 1 + 2 + 3 = 6 → ✅ So, 6 is a perfect number.

// 28
// Proper divisors: 1, 2, 4, 7, 14
// Sum = 1 + 2 + 4 + 7 + 14 = 28 → ✅ Perfect number

// 12
// Proper divisors: 1, 2, 3, 4, 6
// Sum = 1 + 2 + 3 + 4 + 6 = 16 → ❌ Not perfect

bool isPerfect(int n)
{
    int s = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            s += i;
        }
    }

    if (n == s)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cout << "Enter number to be checked: ";
    cin >> n;

    bool checked = isPerfect(n);
    if (checked)
    {
        cout << "Yes " << n << " is a perfect number!\n";
    }
    else
    {
        cout << "No " << n << " is not a perfect number!\n";
    }
    return 0;
}