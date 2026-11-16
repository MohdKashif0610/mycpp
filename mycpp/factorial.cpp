#include<iostream>
using namespace std;

int main(){
    int x,n,fact=1;
    cin>>n;
    for (x=1;x<=n;x++)
    {
        fact=fact*x;
    }
    cout<<fact;
    return 0;
}