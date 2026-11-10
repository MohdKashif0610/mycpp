#include <iostream>
using namespace std;

int main(){
    // cout<<"this is program";
    int age;
    cout<<"tell me your age"<<endl;
    cin>>age;

    // selection control structure: if else-if else ladder
    // if((age<18) && (age>0))
    // {
    //     cout<<"You can not come to my party";
    // }
    // else if(age==18)
    // {
    //     cout<<"You are a kid and you will get a kid pass to the party"<<endl;
    // }
    // else if(age<1)
    // {
    //     cout<<"you are not yet born"<<endl;
    // }
    // else
    // {
    //     cout<<"You are come to my party";
    // }

    // selection control structure: switch case statements
    switch (age)
    {
    case 18:
    cout<<"You are 18"<<endl;
    break;

    case 2:
    cout<<"you are 2"<<endl;
    break;

    case 22:
    cout<<"you are 22"<<endl;
    break;

    default:
    cout<<"No special cases"<<endl;
    break;

    }

    cout<<"Done with switch case";
}