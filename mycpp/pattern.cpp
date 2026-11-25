#include<iostream>
using namespace std;

int main(){
    // int x,n;
    // cin>>n;
    // for(x=1;x<=n;x++)
    // {
    //     cout<<x<<" ";
    //     if(x%8==0)
    //     cout<<endl;
    // }
    
    // return 0;

    // int x,y;
    // for (x=1;x<=5;x++)
    // {
    //     for(y=1;y<=x;y++)
    //     {
    //         cout<<(char)(y+64);
    //     }
    //     cout<<endl;
    // }

    //   int x,y;
    // for (x=1;x<=5;x++)
    // {
    //     for(y=1;y<=x;y++)
    //     {
    //         cout<<(char)(x+64);
    //     }
    //     cout<<endl;
    // }

    int x,y;
    for (x=5;x>=1;x--)
    {
        for(y=1;y<=x;y++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}