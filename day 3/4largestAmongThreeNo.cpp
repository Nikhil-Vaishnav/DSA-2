#include<iostream>
using namespace std;

int main() {

    int a , b, c;

    cout<<"Enter The First No - :-";
    cin>>a;//input

    cout<<"Enter The First No - :-";
    cin>>b;//input

    cout<<"Enter The First No - :-";
    cin>>c;//input

    if(a >= b && a >= c){
        cout<<"It Is The Largest :- "<<a <<endl;//output
    }
    else if( b >= c){
        cout<<"It Is The Largest :- "<<b <<endl;//output
    }
    else{
        cout<<"It Is The Largest :- "<<c <<endl;//output
    }
    return 0;
};