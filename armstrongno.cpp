#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int m,a,b,c,d,sum,n;
    cin>>n;
    m=n;
    a=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
    c=n%10;
    n=n/10;
    d=n;
    sum= pow(a,4) + pow(b,4) + pow(c,4) + pow(d,4);

    if(sum==m)
    {
        cout<<"Armstrong number";
    }
    else
    {
        cout<<" not Arnstrong number";
    }
    return 0;
}