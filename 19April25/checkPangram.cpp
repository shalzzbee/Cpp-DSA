#include <iostream>
// 🔹 This includes the input/output library.
// It lets you use cout for printing and cin or getline() for input.

#include <unordered_set>
// 🔹 This includes the unordered_set container.
// It stores unique elements only, and we use it to track letters.

#include <string>
// 🔹 This allows you to use the string data type.

#include <cctype> // for tolower()
// 🔹 This library gives you functions like tolower() and isalpha() to handle characters (like converting to lowercase or checking if a character is a letter).

using namespace std;

// 🔹 We are defining a class named Solution.
// A class is like a container for related functions (here, just one function).
class Solution
{
public:
    bool checkIfPangram(string sentence)
    {
        unordered_set<char> alphabetSet; // 🔹 We create a set that stores characters — but only unique ones.
        // Duplicate letters will automatically be ignored.

        //         🔹 This is a range-based for loop.
        // It goes through each character c in the sentence one by one.
        for (char c : sentence)
        {
            if (isalpha(c)) // This checks if the character c is a letter (ignores spaces, digits, symbols).
            {
                alphabetSet.insert(tolower(c)); // convert to lowercase
            }
        }

        return alphabetSet.size() == 26;
    }
};

int main()
{
    Solution sol;
    string input;

    cout << "Enter a sentence: ";
    getline(cin, input);

    if (sol.checkIfPangram(input))
    {
        cout << "The sentence is a pangram." << endl;
    }
    else
    {
        cout << "The sentence is not a pangram." << endl;
    }

    return 0;
}
