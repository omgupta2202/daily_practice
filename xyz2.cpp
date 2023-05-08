#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout << "enter no of elements" << endl;
    cin >> n;
    int arr[n], arr_sorted[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long sum = INT_MIN;
    long temp = 0;
    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < n; j++)
        {
            temp = temp + arr[j];

            if (temp > sum)
            {
                sum = temp;
            }
        }
        temp = 0;
    }
    cout << sum << endl;
    return 0;
}