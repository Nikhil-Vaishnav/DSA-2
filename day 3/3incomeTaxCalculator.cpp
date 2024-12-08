#include<iostream>
using namespace std;
int main(){

    int income;
    long tax;

    cout<<"Plase enter you Income :- ";
    cin>>income;

    if(income < 5){
        tax = 0;
    }
    else if(income <= 10){
        tax = 0.2 * income;
    }
    else {
        tax = 0.3 * income;
    }
    cout<<"Tax = "<<(tax * 100000)<<endl;

    return 0;
};