#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Class to reverse words in a string
class Solution
{
public:
    string reverseWords(string s)
    {
        int n = s.length();
        string ans = "";

        // Reverse the entire string
        reverse(s.begin(), s.end());

        for (int i = 0; i < n; i++)
        {
            string word = "";

            // Extract individual words
            while (i < n && s[i] != ' ')
            {
                word += s[i];
                i++;
            }

            // Reverse each word and append it to the result
            reverse(word.begin(), word.end());

            if (word.length() > 0)
            {
                ans += " " + word;
            }
        }

        // Remove the leading space
        return ans.substr(1);
    }
};

// Main function to test the solution
int main()
{
    Solution sol;
    string input;

    cout << "Enter a sentence: ";
    getline(cin, input);

    string result = sol.reverseWords(input);
    cout << "Reversed words: " << result << endl;

    return 0;
}
