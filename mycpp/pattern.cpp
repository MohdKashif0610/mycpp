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

    // int x,y;
    // for (x=5;x>=1;x--)
    // {
    //     for(y=1;y<=x;y++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // int x,y;
    // for (x=5;x>=1;x--)
    // {
    //     for(y=1;y<=5-x;y++)
    //     {
    //         cout<<" ";
    //     }
    //     for(y=1;y<=2*x-1;y++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // int x,y;
    // for (x=1;x<=5;x++)
    // {
    //     for(y=1;y<=5-x;y++)
    //     {
    //         cout<<" ";
    //     }
    //     for(y=1;y<=2*x-1;y++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // int x,y;
    // for (x=1;x<=5;x++)
    // {
    //     for(y=1;y<=5-x;y++)
    //     {
    //         cout<<" ";
    //     }
    //     for(y=1;y<=2*x-1;y++)
    //     {
    //         cout<<y;
    //     }
    //     cout<<endl;
    // }

    // int x,y;
    // for (x=1;x<=5;x++)
    // {
    //     for(y=1;y<=5-x;y++)
    //     {
    //         cout<<" ";
    //     }
    //     for(y=65;y<=63+x*2;y++)
    //     {
    //         cout<<(char)y;
    //     }
    //     cout<<endl;
    // }

    // int x,y;
    // for (x=1;x<=5;x++)
    // {
    //     for(y=1;y<=5-x;y++)
    //     {
    //         cout<<" ";
    //     }
    //     for(y=1;y<=x;y++)
    //     {
    //         cout<<y;
    //     }
    //     for(y=x-1;y>=1;y--)
    //     {
    //         cout<<y;
    //     }
    //     cout<<endl;
    // }

    // int x,y;
    // for (x=1;x<=5;x++)
    // {
    //     for(y=1;y<=5-x;y++)
    //     {
    //         cout<<" ";
    //     }
    //     for(y=x;y>=1;y--)
    //     {
    //         cout<<y;
    //     }
    //     for(y=2;y<=x;y++)
    //     {
    //         cout<<y;
    //     }
    //     cout<<endl;
    // }

    // int x,y,z=1;
    // for (x=1;x<=5;x++)
    // {
    //     for(y=1;y<=5-x;y++)
    //     {
    //         cout<<" ";
    //     }
    //     for(y=1;y<=2*x-1;y++)
    //     {
    //         if(z==1)
    //         {
    //             cout<<z;
    //             z=2;
    //         }
    //         else if(z==2)
    //         {
    //             cout<<z;
    //             z=3;
    //         }
    //         else
    //         {
    //             cout<<z;
    //             z=1;
    //         }
    //     }
    //     cout<<endl;
    // }

    char z='A';
    int x,y;
    for (x=1;x<=5;x++)
    {
        for(y=1;y<=5-x;y++)
        {
            cout<<" ";
        }
        for(y=1;y<=2*x-1;y++)
        {
            if(z=='A')
            {
                cout<<z;
                z='B';
            }
            else if(z=='B')
            {
                cout<<z;
                z='C';
            }
            else
            {
                cout<<z;
                z='A';
            }
        }
        cout<<endl;
    }
}