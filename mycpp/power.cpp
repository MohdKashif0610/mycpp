#include<iostream>
#include<math.h>
using namespace std;


int main(){
    int a,b,x,r=1;
    cin>>a>>b;
    for (x=1;x<=b;x++)
    {
        r=r*a;
    }
    cout<<r;
    return 0;
}