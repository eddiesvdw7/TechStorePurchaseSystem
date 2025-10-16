#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    // --- Variable Declarations ---
    string username;
    string last_name;
    int item_count;
    double subtotal = 0.0;
    double total = 0.0;
    double discount = 0.0;
    int item_number = 0;
    int qty = 0;
    double discount_rand = 0.0;

    // --- Prices for Catalogue Items ---
    const double prices[9] = { 0, 150, 250, 100, 500, 750, 1200, 1000, 300 };

    // --- User Input: Names ---
    cout << "Please Enter Your First Name: ";
    getline(cin, username);
    cout << "Please Enter Your Last Name: ";
    getline(cin, last_name);

    // --- Display Catalogue ---
    cout << "\n\nTech Store Catalogue:\n";
    cout << "1. Wireless Mouse - R150.00\n";
    cout << "2. Bluetooth Speaker - R250.00\n";
    cout << "3. USB Flash Drive - R100.00\n";
    cout << "4. Gaming Keyboard - R500.00\n";
    cout << "5. Noise-Cancelling Headphones - R750.00\n";
    cout << "6. Smartwatch - R1,200.00\n";
    cout << "7. External Hard Drive - R1,000.00\n";
    cout << "8. Portable Charger - R300.00\n";

    // --- Get Item Count ---
    cout << "\n\nHow many items would you like to purchase? (up to 10): ";
    cin >> item_count;

    while (item_count < 1 || item_count > 10) {
        cout << "Invalid Input! Enter a Number Between 1 and 10: ";
        cin >> item_count;
    }

    // --- Item Selection & Subtotal Calculation ---
    for (int i = 0; i < item_count; ++i) {
        cout << "Enter the item number (1-8): ";
        cin >> item_number;

        while (item_number < 1 || item_number > 8) {
            cout << "Invalid Input! Enter a Number Between 1 and 8: ";
            cin >> item_number;
        }

        cout << "Enter the Quantity: ";
        cin >> qty;

        while (qty <= 0) {
            cout << "Invalid Input! Enter a Positive Number: ";
            cin >> qty;
        }

        subtotal += prices[item_number] * qty;
    }

    // --- Discount Calculation ---
    if (subtotal > 2000.0) {
        discount = 0.15;
        discount_rand = subtotal * discount;
    }

    total = subtotal - discount_rand;

    // --- Display Final Totals ---
    cout << fixed << setprecision(2);
    cout << "\nSubtotal: R" << subtotal << '\n';
    cout << "Discount: R" << discount_rand << '\n';
    cout << "Final Total: R" << total << '\n';

    return 0;
}
