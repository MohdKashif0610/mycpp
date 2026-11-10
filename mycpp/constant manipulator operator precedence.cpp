#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    // int a= 34;
    // cout<<"the value of a was "<<a<<endl;
    // a= 45;
    // cout<<"the value of a is "<<a<<endl;
     
    // // *****Constants in c++*******
    // const int b= 45; // this is a constant variable which cannot be changed
    // cout<<"the value of b is "<<b<<endl;
    // // b=34; // this will cause an error because b is a constant variable
    
    // ******manipulator in c++******
    int a= 3 , b= 47 , c= 345;
    cout<<"the value of a without setw is : "<<a<<endl;
    cout<<"the value of b without setw is : "<<b<<endl;
    cout<<"the value of c without setw is : "<<c<<endl;    

    cout<<"the value of a is : "<<setw(3)<<a<<endl;    
    cout<<"the value of b is : "<<setw(3)<<b<<endl;    
    cout<<"the value of c is : "<<setw(3)<<c<<endl;    


    // operator precedence
    // int a =3, b=4;
    // // int c= (a*5)+b;
    // int c =((((a*5)+b)-45)+67);
    // cout<<c;

    return 0;
}