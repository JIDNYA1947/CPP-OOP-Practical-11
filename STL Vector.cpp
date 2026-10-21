
#include <iostream>
#include <vector>
using namespace std;

class ShoppingCart
{
    vector<int> prices;

public:
    void addProduct(int price)
    {
        prices.push_back(price);
        cout << "Product added successfully!" << endl;
    }

    void removeProduct()
    {
        if (!prices.empty())
        {
            prices.pop_back();
            cout << "Last product removed!" << endl;
        }
        else
        {
            cout << "Shopping cart is empty!" << endl;
        }
    }

    void display()
    {
        int total = 0;

        cout << "Product Prices: ";
        for (int price : prices)
        {
            cout << price << " ";
            total += price;
        }

        cout << "\nTotal Bill: Rs. " << total << endl;
    }
};

int main()
{
    ShoppingCart s;
    int choice, price;

    do
    {
        cout << "\n1. Add Product";
        cout << "\n2. Remove Last Product";
        cout << "\n3. Display Cart and Bill";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter product price: ";
                cin >> price;
                s.addProduct(price);
                break;

            case 2:
                s.removeProduct();
                break;

            case 3:
                s.display();
                break;

            case 4:
                cout << "Exiting program.";
                break;

            default:
                cout << "Invalid choice!";
        }
    } while (choice != 4);

    return 0;
}
