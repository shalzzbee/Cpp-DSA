#include <iostream>
#include <climits>
using namespace std;

int maxDifference(int arr[], int n)
{
    int min = arr[0], max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    int max_diff = max - min;
    return max_diff;
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n]; // Step 1: Declare an array of size n

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i]; // Step 2: Take input from user
    }

    int result = maxDifference(arr, n);               // Step 3: Call function to find max difference
    cout << "Maximum Difference: " << result << endl; // Step 4: Print result

    return 0;
}
