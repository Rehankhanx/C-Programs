#include <iostream>
using namespace std;
int main ()
{
    float weight,height,bmi;
    cout<< "Enter your weight"<<endl;
    cin>>weight;

    cout << "Enter your height in inch"<<endl;
    cin>>height;
    
     height = height * 0.0254;

    bmi=weight/height;

    cout << "Your BMI is " <<bmi <<endl;





}