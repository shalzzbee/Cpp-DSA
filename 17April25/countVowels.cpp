#include <iostream>
using namespace std;

int main()
{
    string s;
    int count = 0;

    cout << "Enter a string : ";
    getline(cin, s);

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            count++;
        }
    }

    cout << "\nThe number of vowels are: " << count;
}