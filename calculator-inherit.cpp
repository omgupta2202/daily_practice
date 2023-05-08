#include <iostream>
#include <cmath>
using namespace std;

class simcalc
{

    int a;
    int b;

public:
    simcalc(int u, int v) : a(u), b(v) {}
    simcalc(){}
    void scalc()
    {
        char c;
        cout << "enter your operator " << endl;
        cin >> c;

        switch (c)
        {
        case '+':
            cout << "result " << (a + b) << endl;
            break;
        case '-':
            cout << "result " << (a - b) << endl;
            break;
        case '*':
            cout << "result " << (a * b) << endl;
            break;
        case '/':
            cout << "result " << (a / b) << endl;
            break;
        }
    }
};

class scicalc
{
    float a1, res;

public:
    scicalc(float u) : a1(u) {}
    scicalc(){}
    void sccalc()
    {
        int c;
        cout << "1.sin 2.log 3.tan 4.cos " << endl;
        cin >> c;

        switch (c)
        {
        case 1:
            res=sin(a1);
            break;
        case 2:
           res=log(a1);
            break;
        case 3:
           res=tan(a1);
            break;
        case 4:
           res=cos(a1);
            break;
        }
        cout << "result " << res << endl;
    }
};

class hybrid : public simcalc, public scicalc
{
public:
    hybrid(){}
    hybrid(float x) : scicalc(x){}
    hybrid(float x, float y) : simcalc(x, y){}
};

int main()
{
    float x, y;
    cout << "enter two numbers" << endl;
    cin >> x >> y;
    hybrid f(x, y);
    hybrid g(x);
    f.scalc();
    g.sccalc();
    return 0;
};