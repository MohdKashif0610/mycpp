#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"enter the value three numbers ";
    cin>>a>>b>>c;
    if(a==b && b==c){
        cout<<"all the numbers are equal";
    }
    else if(a>=b && a>=c){
        cout<<a<<" is the greatest number";
    }
    else if(b>=a && b>=c){
        cout<<b<<" is the greatest number";
    }
    else{
        cout<<c<<" is the greatest number";
    }
    return 0;
}