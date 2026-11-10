#include <iostream>
using namespace std;

int main(){
    int s1,s2,s3,s4,s5,percentage;
    cout<<"Enter marks of 5 subjects: ";
    cin>>s1>>s2>>s3>>s4>>s5;
    percentage=(s1+s2+s3+s4+s5)/5;
    if(percentage>=90){
        cout<<"Grade A+";
    }
    else if(percentage>=80 && percentage<90){
        cout<<"Grade A";
    }
    else if(percentage>=70 && percentage<80){
        cout<<"Grade B";
    }
    else if(percentage>=60 && percentage<70){
        cout<<"Grade C";
    }
    else if(percentage>=50 && percentage<60){
        cout<<"Grade D";
    }
    else{
        cout<<"Fail";
    }
    
}