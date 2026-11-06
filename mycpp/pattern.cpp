#include<iostream>
using namespace std;

int main(){
    int x,n;
    cin>>n;
    for(x=1;x<=n;x++)
    {
        cout<<x<<" ";
        if(x%8==0)
        cout<<endl;
    }
    
    return 0;
}