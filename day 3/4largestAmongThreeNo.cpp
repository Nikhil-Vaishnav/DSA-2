#include<iostream>
using namespace std;

int main() {

    int a , b, c;

    cout<<"Enter the First No. :-";
    cin>>a;//input

    cout<<"Enter the First No. :-";
    cin>>b;//input

    cout<<"Enter the First No. :-";
    cin>>c;//input

    if(a >= b && a >= c){
        cout<<"It is the largest :- "<<a <<endl;//output
    }
    else if( b >= c){
        cout<<"It is the largest :- "<<b <<endl;//output
    }
    else{
        cout<<"It is the largest :- "<<c <<endl;//output
    }
    return 0;
};