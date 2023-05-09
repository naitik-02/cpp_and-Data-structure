#include <iostream>
using namespace std;

class shop
{
    int itemID[100];
    int itemPRICE[100];
    int counter;

public:
    void ititcounter(void) { counter = 0; }
    void setprice(void);
    void displayprice(void);
};

void shop :: setprice(void)
{
    cout << "enter the ID of item " << endl;
    cin >> itemID[counter];

    cout << "enter the price of item " << endl;
    cin >> itemPRICE[counter];
    counter++;
}
void shop::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {

        cout << "the price of the item id " << itemID[i] << "is   " << itemPRICE[i] << endl;
    }
}

int main()
{
    shop dukaan;
    dukaan.ititcounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();

    return 0;
}