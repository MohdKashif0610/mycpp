// there are two types of header files:
// 1. system header files: It comes with the compiler
#include <iostream>
// 2. user defined header files: It is written by the programmer
// include "this.h" //--> this will produce an error if this.h is not present in the current directory

using namespace std; // this line means that we are using the standard namespace

int main(){
    int a=4, b=5;
    cout<<"Operator in c++"<<endl;
    cout<<"Following are the types of operators in c++"<<endl;
    // Arithmetic operators
    cout<<"The value of a+b is: "<<a+b<<endl;
    cout<<"The value of a-b is: "<<a-b<<endl;
    cout<<"The value of a*b is: "<<a*b<<endl;
    cout<<"The value of a/b is: "<<a/b<<endl;
    cout<<"The value of a%b is: "<<a%b<<endl;
    cout<<"The value of a++ is: "<<a++<<endl;
    cout<<"The value of a-- is: "<<a--<<endl;
    cout<<"The value of ++a is: "<<++a<<endl;
    cout<<"The value of --a is: "<<--a<<endl;   

    // Assignment operators --> used to assign values to variables
    // int x=3, y=4;
    // char c='a';

    // comparison operators --> used to compare two values
    cout<<"The value of a==b is: "<<(a==b)<<endl;   
    cout<<"The value of a!=b is: "<<(a!=b)<<endl;   
    cout<<"The value of a>b is: "<<(a>b)<<endl;   
    cout<<"The value of a<b is: "<<(a<b)<<endl;   
    cout<<"The value of a>=b is: "<<(a>=b)<<endl;   
    cout<<"The value of a<=b is: "<<(a<=b)<<endl; 
    
    // logical operators --> used to combine conditional statements
    cout<<"The value of logical and operator ((a==b) && (a<b)) is: "<<((a==b) && (a<b))<<endl;
    cout<<"The value of logical or operator ((a==b) || (a<b)) is: "<<((a==b) || (a<b))<<endl;   
    cout<<"The value of logical not operator (!(a==b)) is: "<<(!(a==b))<<endl;

    return 0;
}