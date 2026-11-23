#include<iostream>
using namespace std;

int main(){
    // int m,n,rev,a,b,c;
    // cin>>n;
    // m=n;
    // a=n%10;
    // n=n/10;
    // b=n%10;
    // n=n/10;
    // c=n;
    // rev=100*a+10*b+1*c;
    // if(rev==m)
    // {
    //     cout<<"palandrome number";
    // }
    // else
    // {
    //     cout<<"not palandrome number";
    // }

    // with loop 
    int n,rev,m,r;
    cin>>n;
    m=n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(rev==m)
    {
        cout<<"palandrome number";
    }
    else
    {
        cout<<"not palandrome number";
    }
}
