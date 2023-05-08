#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class solution
{
public:
    int max1s(int r, int c, vector<vector<int>> mat)
    {
        int temp=0,search=0,l=0;
        for (int i = 0; i < r; i++)
        {
            search=0;
            for (int j = 0; j < c; j++)
            {
               if(mat[i][j]==1);
               search++;
            }
            if (l<search){
            temp=i;
            l=search;
            }
        }
        return temp;
    }
};

int main()
{
    int r, c, n;
    cout << "enter no of rows and columns" << endl;
    cin >> r >> c;
    vector<vector<int>> matrix(r);
    for (int i = 0; i < r; i++)
    {
        matrix[i].assign(c, 0);
        for (int j = 0; j < c; j++)
        {
            cin >> matrix[i][j];
        }
    }
    solution ans;
   auto ob= ans.max1s(r,c,matrix);
   std::cout<<ob<<endl;
}
