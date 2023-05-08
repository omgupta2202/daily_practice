#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    // Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int>> mat, int r, int c)
    {
        vector<int> v;
        int top = 0, bottom = r - 1, right = c - 1, left = 0;

        while (top <= bottom && right >= left)
        {
            for (int i = left; i <= right; i++)
            {
                v.push_back(mat[top][i]);
            }
            top++;
            for (int i = top; i <= bottom; i++)
            {
                v.push_back(mat[i][right]);
            }
            right--;
            if (top <= bottom)
            {
                for (int i = right; i >= left; i--)
                {
                    v.push_back(mat[bottom][i]);
                }
                bottom--;
            }
            if (left <= right)
            {
                for (int i = bottom; i >= top; i--)
                {
                    v.push_back(mat[i][left]);
                }
                left++;
            }
        }
        return v;
    }
};

int main()
{

    int r, c;
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

    Solution ob;
    vector<int> result = ob.spirallyTraverse(matrix, r, c);
    for (int i = 0; i < result.size(); ++i)
        cout << result[i] << " ";
    cout << endl;

    return 0;
}