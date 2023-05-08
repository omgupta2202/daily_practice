#include <iostream>

#include <string>

using namespace std;

string reverseWord(string str)
{

    char temp;
    int i;
    int n = str.size();
    for (i = 0; i < n / 2; i++)
    {
        temp = str[i];
        str[i] = str[n - 1 - i];
        str[n - 1 - i] = temp;
    }
    return str;
}
int main()
{

    int t,j;
    cin >> t;
     for (j = 0; j < t; j++)
    {
        string s;
        cin >> s;
        cout << reverseWord(s) << endl;
    }
    return 0;
}
