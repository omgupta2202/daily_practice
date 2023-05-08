using namespace std;
#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    int r, c, find_element, q, v;
    cout << "enter number of rows" << endl;
    cin >> r >> c;
    cout << "enter number to search" << endl;
    cin >> find_element;
    vector<vector<int>> matrix(r);
    for (int i = 0; i < r; i++)
    {
        matrix[i].assign(c, 0);
        for (int k = 0; k < c; k++)
        {
            cin >> matrix[i][k];
        }
    }
    /*
       vector< vector<int> > arr(n,vector<int>(m));
       for (int i = 0; i < n; i++) {
           for (int j = 0; j < m; j++) {
               cin>>arr[i][j];
           }
       }
       */
    for (int i = 0; i < r; i++)
    {
        for (int k = 0; k < c; k++)
        {
            v = matrix[i][k];
            if (find_element = v)
                q = 1;
        }
    }
    if (q = 1)
        cout << "true" << endl;
    else
        cout << "false" << endl;
}
