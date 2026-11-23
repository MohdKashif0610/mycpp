#include<iostream>
#include<cmath>
using namespace std;

int main(){
    // int m,a,b,c,sum,n;
    // cin>>n;
    // m=n;
    // a=n%10;
    // n=n/10;
    // b=n%10;
    // n=n/10;
    // c=n;
    // sum= pow(a,3) + pow(b,3) + pow(c,3);

    // if(sum==m)
    // {
    //     cout<<"Armstrong number";
    // }
    // else
    // {
    //     cout<<" not Arnstrong number";
    // }
    // return 0;

    // with loop
    int n,m,r,c=0,sum=0;
    cin>>n;
    m=n;
    while(n>0)
    {
        n=n/10;
        c++;
    }
    n=m;
    while(n>0)
    {
        r=n%10;
        sum=sum+round(pow(r,c));
        n=n/10;
    }
    if(sum==m)
    {
        cout<<"Armstrong number";
    }
    else
    {
        cout<<" not Armstrong number";
    }
}