#include <iostream>
using namespace std;

int minimum(int arr[], int n)
{
    int i;
    int min = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int n;

    // Input array size
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    // Declare array
    int arr[n];

    // Input elements
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Call the function and print the minimum element
    int minValue = minimum(arr, n);
    cout << "The minimum element in the array is: " << minValue << endl;

    return 0;
}