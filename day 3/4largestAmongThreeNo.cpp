#include<iostream>
using namespace std;

int main() {

    int a , b, c;

    cout<<"Enter the First No. :-";
    cin>>a;

    cout<<"Enter the First No. :-";
    cin>>b;

    cout<<"Enter the First No. :-";
    cin>>c;

    if(a >= b && a >= c){
        cout<<"It is the largest :- "<<a <<endl;
    }
    else if( b >= c){
        cout<<"It is the largest :- "<<b <<endl;
    }
    else{
        cout<<"It is the largest :- "<<c <<endl;
    }
    return 0;
};