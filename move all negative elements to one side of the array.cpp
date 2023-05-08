#include <iostream>
using namespace std;

int main()
{
    int n, l = 0;
    cout << "enter no of elements" << endl;
    cin >> n;
    int arr[n], arr_sorted[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < n; j++)
    {
        if (arr[j] < 0)
        {
            arr_sorted[l] = arr[j];
            l++;
        }
    }

    for (int x = 0; x < n; x++)
        if (arr[x] > 0)
        {
            arr_sorted[l] = arr[x];
            l++;
        }
    for (int y = 0; y < n; y++)
    {
        cout << arr_sorted[y] << endl;
    }
    return 0;
}