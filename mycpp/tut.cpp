#include <iostream>
using namespace std;
int glo=10; //global variable
void sum(){
    int a;
    cout<<glo;
}

int main()
{
    int glo=7; //local variable
    int a=6, b=5;
    float pi=3.14;
    char c='k';
    bool d=true;
    sum();
    // cout<<"this is tutorial."<<endl<<"Here the value of a is: "<<a<<endl<<"and the value of b is: "<<b<<endl;
    // cout<<"the value of pi is: "<<pi;
    // cout<<"\nthe value of c is: "<<c;
    cout<<glo<<d;
    return 0;
}