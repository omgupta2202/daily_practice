using namespace std;
#include <iostream>
#include <string>

int main()
{
    string str, str_rev;
    int str_len, j, q = 0, k = str_len - 1;
    cout << "enter length of string" << endl;
    cin >> str_len;
    for (int i = 0; i < str_len; i++)
    {
        cin >> str[i];
    }
    for (j = 0; j < str_len; j++)
    {
        str_rev[j] = str[k];
        k--;
    }
    for (int a = 0, b = 0; a < str_len, b < str_len; a++, b++)
    {
        if (str_rev[a] != str[b])
            q = 1;
    }
    if (q == 1)
        cout << "string is not palindrome" << endl;
    else
        cout << "string is  palindrome" << endl;
}
/* better code-->

#include<iostream>
#include<string>
using namespace std;
class Solution {
   public:
      int isPalindrome(string S)
      {
        int n=S.size();
        for(int i=0;i<n/2;i++)
        {
            if(S[i]!=S[n-1-i])
                return 0;
        }
        return 1;
    }
};
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;

        Solution ob;

        cout << ob.isPalindrome(s) << "\n";
    }

    return 0;
}
    */