#include<iostream>
using namespace std;

char board[3][3];

void resetboard(){

    board[0][0] = '1';
    board[0][1] = '2';  
    board[0][2] = '3';
    board[1][0] = '4';
    board[1][1] = '5';
    board[1][2] = '6';
    board[2][0] = '7';
    board[2][1] = '8';
    board[2][2] = '9';
}    

void printboard(){
        cout<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<endl;
        cout<<"--|---|--"<<endl;
        cout<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<endl;
        cout<<"--|---|--"<<endl;
        cout<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<endl;
    }

int main(){
    resetboard();
    printboard();
    return 0;
}