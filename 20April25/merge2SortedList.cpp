#include <iostream>
using namespace std;

void mergeArrays(int A[], int m, int B[], int n)
{
    int i = m - 1;     // Last element of initialized A
    int j = n - 1;     // Last element of B
    int k = m + n - 1; // Last position in A

    // Merge from end
    while (i >= 0 && j >= 0)
    {
        if (A[i] > B[j])
        {
            A[k--] = A[i--];
        }
        else
        {
            A[k--] = B[j--];
        }
    }

    // Copy remaining B elements, if any
    while (j >= 0)
    {
        A[k--] = B[j--];
    }
}

int main()
{
    int m, n;

    cout << "Enter number of elements in first array (excluding extra space): ";
    cin >> m;

    cout << "Enter number of elements in second array: ";
    cin >> n;

    int A[100]; // Big enough to hold m + n elements
    int B[100];

    cout << "Enter " << m << " sorted elements for first array:\n";
    for (int i = 0; i < m; ++i)
    {
        cin >> A[i];
    }

    // Fill extra space in A (set to 0 or anything)
    for (int i = m; i < m + n; ++i)
    {
        A[i] = 0;
    }

    cout << "Enter " << n << " sorted elements for second array:\n";
    for (int i = 0; i < n; ++i)
    {
        cin >> B[i];
    }

    mergeArrays(A, m, B, n);

    cout << "Merged array: ";
    for (int i = 0; i < m + n; ++i)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}

// #include <iostream>
// #include <vector>
// using namespace std;

// // Merge function without class
// void mergeArrays(vector<int> &A, int m, vector<int> &B, int n)
// {
//     int idx = m + n - 1; // Index to fill in A
//     int i = m - 1;       // Last valid element in A
//     int j = n - 1;       // Last element in B

//     // Compare and merge from end
//     while (i >= 0 && j >= 0)
//     {
//         if (A[i] >= B[j])
//         {
//             A[idx--] = A[i--];
//         }
//         else
//         {
//             A[idx--] = B[j--];
//         }
//     }

//     // If elements left in B
//     while (j >= 0)
//     {
//         A[idx--] = B[j--];
//     }
// }

// int main()
// {
//     int m, n;
//     cout << "Enter number of elements in first array (excluding extra space): ";
//     cin >> m;

//     cout << "Enter number of elements in second array: ";
//     cin >> n;

//     vector<int> A(m + n); // Final array with space for both arrays
//     vector<int> B(n);

//     cout << "Enter " << m << " sorted elements for first array:\n";
//     for (int i = 0; i < m; ++i)
//     {
//         cin >> A[i];
//     }

//     cout << "Enter " << n << " sorted elements for second array:\n";
//     for (int i = 0; i < n; ++i)
//     {
//         cin >> B[i];
//     }

//     mergeArrays(A, m, B, n); // Perform merge

//     cout << "Merged array: ";
//     for (int i = 0; i < m + n; ++i)
//     {
//         cout << A[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
