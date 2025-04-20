#include <iostream>
using namespace std;
// WITH EXTRA SPACE
int main()
{
    int n;
    cout << "Enter the size of sorted array: ";
    cin >> n;

    int arr[100], temp[100];

    cout << "Enter " << n << " sorted elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int j = 0;
    for (int i = 0; i < n - 1; i++)
    {
        // CHECKING ONLY LAST OCCURENCE OF THE ELEMENT
        if (arr[i] != arr[i + 1])
        {
            temp[j] = arr[i];
            j++;
        }
    }

    // Last element is always unique in sorted array
    temp[j] = arr[n - 1];
    j++; // increase size of unique elements

    cout << "Array after removing duplicates:\n";
    for (int i = 0; i < j; i++)
    {
        cout << temp[i] << " ";
    }
    cout << endl;

    return 0;
}

// WITHOUT EXTRA SPACE

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the size of the sorted array: ";
//     cin >> n;

//     int arr[100]; // Assuming max 100 elements
//     cout << "Enter " << n << " sorted elements:\n";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int j = 0;
//     for (int i = 0; i < n - 1; i++)
//     {
//         if (arr[i] != arr[i + 1])
//         {
//             arr[j] = arr[i];
//             j++;
//         }
//     }

//     // Store the last element (always needed)
//     arr[j] = arr[n - 1];
//     j++; // j now holds the size of the array without duplicates

//     cout << "Array after removing duplicates:\n";
//     for (int i = 0; i < j; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
