#include<iostream>
using namespace std;

int c= 45;

int main(){
    // *******Built-in data types in c++*******
    // int a,b,c;
    // cout<<"Enter the value of a: "<<endl;
    // cin>>a;
    // cout<<"Enter the value of b: "<<endl;
    // cin>>b;
    // c=a+b;
    // cout<<"The sum of a and b is: "<<c<<endl;
    // cout<<"the global c is: "<<::c<<endl; // this will print the global c value which is 45

    // *******float, double and long double literals*********
    // float d=34.4f; /*f means float and l means long double*/
    // long double e=34.4l;
    // cout<<"The value of d is: "<<d<<endl;
    // cout<<"The value of e is: "<<e<<endl;
    // cout<<"The size of 34.4 is: "<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4f is: "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4F is: "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4l is: "<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4L is: "<<sizeof(34.4L)<<endl;

    // ******Reference variables in c++*******
    // float x= 455;
    // float & y= x; // y is a reference variable which refers to x
    // cout<<x<<endl;
    // cout<<y<<endl;

    // *****Typecasting in c++*******
    int a=45;
    float b= 45.46;
    cout<<"the value of a is "<<(float)a<<endl; // typecasting a to float
    cout<<"the value of b is "<<(int)b; // typecasting b to int
    cout<<"the value of b is "<<int(b); // typecasting b to int
    cout<<"the value of a is "<<float(a)<<endl;
    int c = int (b);

    cout<<"the expression is "<<a + b<<endl; 
    cout<<"the expression is "<<a + int(b)<<endl; 
    cout<<"the expression is "<<a + (int)b<<endl; 

    return 0;
}