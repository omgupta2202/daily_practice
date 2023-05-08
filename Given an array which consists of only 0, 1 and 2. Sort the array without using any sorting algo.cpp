using namespace std;
#include <iostream>

class solution
{
public:
	int a = 0, b = 0, c = 0, j;
	int return_abc(int x, int y, int arr[], int f)
	{
		for (j = 0; j < y; j++)
		{
			if (arr[j] == f)
				a++;
		}
		return a;
	}
};
int main()
{
	int no_of_elements;
	cin >> no_of_elements;
	int a[no_of_elements], c1, c2, c3;
	for (int i = 0; i <= no_of_elements - 1; i++)
	{
		cin >> a[i];
	}
	solution ob;
	c1 = ob.return_abc(0, no_of_elements, a, 0);
	for (int e = 0; e < c1; e++)
	cout<<"0"<<endl;
	c2 = ob.return_abc(0, no_of_elements, a, 1);
	for (int f = 0; f < c1; f++)
	cout<<"1"<<endl;
	c3 = ob.return_abc(0, no_of_elements, a, 2);
	for (int g = 0; g < c1; g++)
	cout<<"2"<<endl;
	return 0;
}
