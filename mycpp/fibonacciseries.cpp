#include<iostream>
using namespace std;

int main(){
    int n,a=0,b=1,x,c;
    cin>>n;
    for(x=1;x<=n;x++)
    {
        cout<<a<<", ";
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}