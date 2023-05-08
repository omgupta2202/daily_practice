#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class solution
{
public:
	vector<vector<int>> sorted_matrix(int r, int c, vector<vector<int>> mat)
	{
		vector<int> v;
		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				v.push_back(mat[i][j]);
			}
		}
		sort(v.begin(), v.end());
		int l = 0;
		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				mat[i][j] = v.at(l);
				l++;
			}
		}
		for (int i = 0; i < mat.size(); i++)
		{
			for (int j = 0; j < mat[i].size(); j++)
			{
				cout << mat[i][j] << " ";
			}
			cout << endl;
		}
		return mat;
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
	ans.sorted_matrix(r, c, matrix);
}
