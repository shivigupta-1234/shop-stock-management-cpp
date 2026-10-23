#include <iostream>
using namespace std;
class shop
{
    // by default all members in class are private
    int itemId[10000];
    int itemPrice[10000];
    int stockAvailable[10000];
    int counter;

public:
    void _counter(void) { counter = 0; }
    void setData(void);
    void displayData(void);
};

void shop::setData(void)
{
    cout << "ENTER THE ID OF THE ITEM :" << endl;
    cin >> itemId[counter];

    cout << "ENTER THE PRICE OF THE ITEM WITH ITEM ID :" << itemId[counter] << endl;
    cin >> itemPrice[counter];

    cout << "ENTER THE STOCK OF THE ITEM WITH IDEM ID " << itemId[counter] << " AND WITH PRICE " << itemPrice[counter] << " : " << endl;
    cin >> stockAvailable[counter];

    counter++;
}

void shop::displayData(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "*****ACCORDING TO THE GIVEN DATA*****" << endl;
        cout << "THE ID OF THE ITEM IS :" << itemId[i] << endl;
        cout << "THE PRICE OF THE ITEM IS :" << itemPrice[i] << endl;
        if (stockAvailable[i] <= 10000 && stockAvailable[i] >= 5000)
        {
            cout << "THIS ITEM IS PRESENT IN ENOUGH AMOUNT RIGHT NOW " << endl;
        }
        else if (stockAvailable[i] < 5000)
        {
            cout << "THIS ITEM IS PRESENT IN LIMITED AMOUNT RE_STOCK IT ASAP " << endl;
        }
    }
}

int main()
{
    shop ZSquareMall;
    ZSquareMall._counter();
    int i = 0, itemNumber;
    cout << "ENTER THE NUMBER OF ITEMS YOU WANT TO CHECK : " << endl;
    cin >> itemNumber;
    for (int i = 0; i < itemNumber; i++)
    {
        ZSquareMall.setData();
    }

    ZSquareMall.displayData();

    cout << "****THANK YOU****" << endl;

    return 0;
}