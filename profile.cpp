#include <iostream>
using namespace std;
int main ()
{

    string name;
    int rollno;
    float marks;
    float age;

    cout<<"Enter Name:" ;
    cin>>name;  
    cin.ignore( ); // ignore leftover newline
getline(cin, name);
    cout<<"Enter Roll No:";
    cin>>rollno;
    cout<< "Enter Marks";
    cin>> marks;
    cout<< "Enter age";
    cin>> age;
    cout<< ":::::Profile Summary:::::"<<endl;
    cout<<"Name:"<< name <<endl;            
    cout<<"Roll No:"<< rollno <<endl;
    cout<<"Marks:"<< marks <<endl;      
    cout<<"Age:"<< age <<endl;
    return 0;








}
    


