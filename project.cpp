
#include <iostream>
using namespace std;

class BakeryShop
{
  int choice, quantity;
  int price, total = 0;

public:
  void takeOrder()
  {
    cout << "\n===== BAKERY MENU =====\n";
    cout << "1. Cake    - Rs. 500\n";
    cout << "2. Bread   - Rs. 40\n";
    cout << "3. Pastry  - Rs. 60\n";
    cout << "4. Cookies - Rs. 100\n";

    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter quantity: ";
    cin >> quantity;

    switch (choice)
    {
    case 1:
      price = 500;
      break;
    case 2:
      price = 40;
      break;
    case 3:
      price = 60;
      break;
    case 4:
      price = 100;
      break;

    default:
      cout << "Invalid choice!\n";
      return;
    }

    total += price * quantity;
    cout << "Order added successfully!\n";
  }

  void placeOrder()
  {
    cout << "\nOrder placed successfully!\n";
  }

  void generateOrder()
  {
    cout << "\n===== ORDER RECEIPT =====\n";
    cout << "Order ID: 101\n";
    cout << "Total Bill: Rs. " << total << endl;
    cout << "Thank you for visiting!\n";
  }
};

int main()
{
  BakeryShop shop;
  char again;

  do
  {
    shop.takeOrder();

    cout << "Add another item? (y/n): ";
    cin >> again;

  } while (again == 'y' || again == 'Y');

  shop.placeOrder();
  shop.generateOrder();

  return 0;
}

#include <iostream>
using namespace std;

class BakeryShop
{
  int choice, quantity;
  int price, total = 0;

public:
  void takeOrder()
  {
    cout << "\n===== BAKERY MENU =====\n";
    cout << "1. Cake    - Rs. 500\n";
    cout << "2. Bread   - Rs. 40\n";
    cout << "3. Pastry  - Rs. 60\n";
    cout << "4. Cookies - Rs. 100\n";

    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter quantity: ";
    cin >> quantity;

    switch (choice)
    {
    case 1:
      price = 500;
      break;
    case 2:
      price = 40;
      break;
    case 3:
      price = 60;
      break;
    case 4:
      price = 100;
      break;

    default:
      cout << "Invalid choice!\n";
      return;
    }

    total += price * quantity;
    cout << "Order added successfully!\n";
  }

  void placeOrder()
  {
    cout << "\nOrder placed successfully!\n";
  }

  void generateOrder()
  {
    cout << "\n===== ORDER RECEIPT =====\n";
    cout << "Order ID: 101\n";
    cout << "Total Bill: Rs. " << total << endl;
    cout << "Thank you for visiting!\n";
  }
};

int main()
{
  BakeryShop shop;
  char again;

  do
  {
    shop.takeOrder();

    cout << "Add another item? (y/n): ";
    cin >> again;

  } while (again == 'y' || again == 'Y');

  shop.placeOrder();
  shop.generateOrder();

  return 0;
}
