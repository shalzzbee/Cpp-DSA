#include <iostream>
using namespace std;

// ARMSTROG NUMBER IS A NUMBER WHOS DIGIT RAISED TO THE POWER NUM Of DIGITS GIVE THE SAME NUMBER
// 153 = 1^3 + 5^3 + 3^3
// 153 = 1 + 125 + 27
// 153 = 153

// division by 10  opertaion will give usthe digits of that number
//   153/10 = 15 remainder 3
//    15/10 = 1  remainder 5
//     1/10 = 0  remainder 1

int countDigits(int num)
{
    int digits = 0;
    while (num != 0)
    {
        num /= 10;
        digits++;
    }
    return digits;
}

int power(int x, int y)
{
    int result = 1;
    // runing it y number of times : 2^3 = 2*2*2=8
    for (int i = 0; i < y; i++)
    {
        result *= x;
    }
    return result;
}

bool isArmstrong(int num)
{
    int totalDigits = countDigits(num);
    int sum = 0;
    int temp = num;

    while (temp != 0)
    {
        int digit = temp % 10;
        temp /= 10;
        sum += power(digit, totalDigits);
    }
    return sum == num;
}

int main()
{
    int x;
    cout << "Enter num to be checked: ";
    cin >> x;
    if (isArmstrong(x))
    {
        cout << x << " is an armstrong number!" << endl;
    }
    else
    {
        cout << x << " is not an armstrong number!" << endl;
    }

    return 0;
}