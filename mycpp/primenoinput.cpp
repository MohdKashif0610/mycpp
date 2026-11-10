#include<iostream>
using namespace std;

int main(){
    int i,j,count;
    cout<<"enter the number";
    cin>>i;
    count=0;
    for (j = 1; j <=i; j++)
    {
        if (i % j == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << i << " is a prime number." << endl;
    }
    else
    {
        cout << i << " is not a prime number." << endl;
    }
}