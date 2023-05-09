#include <iostream>
#include <string>

using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void checkBinary(void);
    void once_complement(void);
    void display(void);
};

void binary::read(void)
{
    cout << "enter the binary number :" << endl;
    cin >> s;
}

void binary ::checkBinary(void)
{
    for (int i = 0; i < s.length(); i++)
    {

        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "not a binary number " << endl;
            exit(0);
        }
    }
}

void binary ::once_complement(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}
int main()
{
    binary naitik;
    naitik.read();
    naitik.checkBinary();
    naitik.display();
    naitik.once_complement();
     naitik.display();
    return 0;
}