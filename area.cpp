#include <iostream>
using namespace std;
int main ()
{
 float area,length,width;
 long price;
 char wait;

 cout<< "::::To find area please enter width and length" << endl;

 cout << "Enter Length in (ft)" << endl;
 cin >> length;

 cout << "Enter width in (ft) " << endl;
 cin >> width;

  area = length*width;

 cout << "Area = "<< area <<"Square feet"<<endl;

 cout<< "Enter Y and Enter to view property price "<<endl;
 cin >> wait;

 price = area*11500; 

 cout<<"The value of your property is " <<price<< "PKR";


}