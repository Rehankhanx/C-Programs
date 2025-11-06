#include <iostream>
using namespace std;
int main()
{
    double units, price, bill, due;
    double wait;
    cout << "_______Units Consumed______" << endl;
    cin >> units;
    cout << "_______Electricity cost per unit_______" << endl;
    cin >> price;
    bill = units * price;
    due = bill * 1.10;
    cout << "Your bill is " << endl
         << "_____________" << bill << "PKR" << endl;
    cout << "Bill after due date" << due << endl;
    cout<< "Good By";
    cin>> wait;
}