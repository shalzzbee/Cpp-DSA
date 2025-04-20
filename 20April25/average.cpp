#include <iostream>
using namespace std;

int main()
{

    int num, i;
    float temp, sum = 0, avg;
    cout << "How many numbers to be added: ";
    cin >> num;

    for (i = 0; i < num; i++)
    {
        cin >> temp;
        sum += temp;
    }

    avg = sum / num;
    cout << "Sum= " << sum << endl;
    cout << "Average= " << avg << endl;

    return 0;
}