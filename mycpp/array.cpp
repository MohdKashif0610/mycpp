#include<iostream>
using namespace std;

int main(){
    // Array is a collection of similar data types
    int marks[4] = {23, 45, 56, 89};
    cout<<"These are marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    int mathmarks[4];
    mathmarks[0] = 34;
    mathmarks[1] = 56;
    mathmarks[2] = 78;
    mathmarks[3] = 90;
    cout<<"These are math marks"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    // you can change the value of an array
    mathmarks[2] = 100;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;

    return 0;
}