#include<iostream>
using namespace std;

int main(){
    int m,n,rev,a,b,c;
    cin>>n;
    m=n;
    a=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
    c=n;
    rev=100*a+10*b+1*c;
    if(rev==m)
    {
        cout<<"palandrome number";
    }
    else
    {
        cout<<"not palandrome number";
    }
}
