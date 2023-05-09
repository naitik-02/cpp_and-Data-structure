#include <iostream>
using namespace std;

class Bankdeposite
{
    int principal;
    int years;
    float interestrate;
    float returnvalue;

public:
    Bankdeposite(){}
    Bankdeposite(int p, int y, float r);
    Bankdeposite(int p, int y, int r);
    void show();
};

Bankdeposite :: Bankdeposite(int p, int y, float r)
{
    principal = p;
    years = y;
    interestrate = r;
    returnvalue = principal;
    for (int i = 1; i < y; i++)
    {
        returnvalue = returnvalue*(1 + r);
    }
}
Bankdeposite :: Bankdeposite(int p, int y, int r)
{
    principal = p;
    years = y;
    interestrate = float(r) / 100;
    returnvalue = principal;
    for (int i = 1; i < y; i++)
    {
        returnvalue = returnvalue *(1 + r);
    }
}

void Bankdeposite ::show()
{
    cout << "principal amount was " << principal << " return value after years "
         << years << " is " << returnvalue <<endl;
}

int main()
{
    Bankdeposite bd1 , bd2 , bd3;
    int p, y;

    float r;
    int R;
    cout << "enter the value of p y and r" <<endl;
    cin >> p >> y >> r;

    bd1 = Bankdeposite(p, y, r);
    bd1.show();
    cout << "enter the value of p y and r" <<endl;
    cin >> p >> y >> R;

    bd2 = Bankdeposite(p, y, R);
    bd2.show();

    return 0;
}