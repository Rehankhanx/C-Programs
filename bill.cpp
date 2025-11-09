#include <iostream>
using namespace std;

int main() {
    double units, price, bill, due, over1;

    cout << "_______Units Consumed______" << endl;
    cin >> units;

    // 👇 Decide price automatically based on unit range
    if (units <= 100) {
        price = 9;
    } 
    else if (units <= 200) {
        price = 12;
    } 
    else if (units <= 300) {
        price = 28;
    } 
    else if (units <= 600) {
        price = 38;
    } 
    else {
        price = 45; // optional for above 600
    }

    bill = units * price;
    due = bill * 1.10;   // +10% after due date
    over1 = bill * 1.25; // +25% surcharge

    cout << "-----------------------------------------" << endl;
    cout << "Units Consumed: " << units << endl;
    cout << "Rate per Unit: " << price << " PKR" << endl;
    cout << "Bill: " << bill << " PKR" << endl;
    cout << "Bill After Due Date (10% extra): " << due << " PKR" << endl;

    // Optional message for heavy usage
    if (units > 199) {
        cout << "Heavy usage detected! With 25% surcharge: " << over1 << " PKR" << endl;
    }

    cout << "-----------------------------------------" << endl;
    return 0;
}
