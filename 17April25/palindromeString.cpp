#include <iostream>
#include <string>
using namespace std;

// Class to check if a string is a valid palindrome considering only alphanumeric characters
class Solution
{
public:
    // Helper function to check if a character is alphanumeric
    bool isAlphaNum(char ch)
    {
        return (ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z');
    }

    // Function to check if a string is a palindrome
    bool isPalindrome(string s)
    {
        int st = 0, end = s.length() - 1;

        while (st < end)
        {
            // Skip non-alphanumeric characters from the start
            if (!isAlphaNum(s[st]))
            {
                st++;
                continue;
            }
            // Skip non-alphanumeric characters from the end
            if (!isAlphaNum(s[end]))
            {
                end--;
                continue;
            }
            // Compare characters in a case-insensitive manner
            if (tolower(s[st]) != tolower(s[end]))
            {
                return false;
            }
            st++;
            end--;
        }

        return true;
    }
};

// Main function for testing the isPalindrome method
int main()
{
    Solution sol;
    string input;

    cout << "Enter a string to check for palindrome: ";
    getline(cin, input);

    bool result = sol.isPalindrome(input);
    if (result)
    {
        cout << "The string is a palindrome." << endl;
    }
    else
    {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
