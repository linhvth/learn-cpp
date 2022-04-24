#include <iostream>
using namespace std;

class Notebook // Base Class
{
public:               // access specifier
    string brand;     // attribute
    char color;       // attribute
    string type;      // attribute
    int numPage;      // attribute
    int pricePerUnit; // attribute

    void notebookDefine(string brand, char color, string type, int numPage,
                        int pricePerUnit)
    {
        this->brand = brand;
        this->color = color;
        this->type = type;
        this->numPage = numPage;
        this->pricePerUnit = pricePerUnit;
    }

    void printNotebook();

    void givePrice()
    {
        cout << "Price per unit: $" << pricePerUnit << endl;
        cout << "" << endl;
    }
};

// Method definition outside the class
void Notebook::printNotebook()
{
    cout << "This notebook is from brand " << brand << endl;
    cout << "This is a " << type << " notebook" << endl;
    cout << "It has " << numPage << " pages" << endl;
}

class Bill : public Notebook // Derived Class
{
public:
    int quantity;

    Bill(int quantity)
    {
        this->quantity = quantity;
    }

    void total()
    {
        cout << "You buy " << quantity << " notebooks" << endl;
        cout << "The price per unit is $" << pricePerUnit << endl;
        long totalPrice = quantity * pricePerUnit;
        cout << "Your total is $" << totalPrice << endl;
        cout << "-----" << endl;
    }
};

int main()
{
    Bill bill(4); // create an object of Bill
    bill.notebookDefine("Crabit", 'r', "grid", 200, 3);

    bill.printNotebook(); // function from Base class
    bill.givePrice();     // function from Base class
    bill.total();         // function from Derivd class
    cout << "" << endl;

    bill.pricePerUnit = 5;
    cout << "After updating price" << endl;
    bill.printNotebook(); // function from Base class
    bill.givePrice();     // function from Base class
    bill.total();         // function from Derivd class

    return 0;
}