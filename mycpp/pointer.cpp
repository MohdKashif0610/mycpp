#include<iostream>
using namespace std;

int main(){
    // What is a pointer? ----> Data type which holds the address of other data types 
    int a=3;
    int* b=&a;
    // & --->(Address of) Operator
    cout<<"The Address of a is "<<&a<<endl;
    cout<<"The Address of a is "<<b<<endl;

    

    return 0;
}