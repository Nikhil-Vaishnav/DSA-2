#include<iostream>
using namespace std;

int main(){

    int marks;
    cout<<"Enter the marks:-";
    cin>>marks;

    if (marks > 100){
        cout<<"Marks are out of Range.";
    }
    else if(marks >= 90){
        cout<<"A++";
    }
    else if(marks >= 80){
        cout<<"A+";
    }
    else if(marks >= 70){
        cout<<"A";
    }
    else if(marks >= 60){
        cout<<"B+";
    }
    else if(marks >= 50){
        cout<<"B";
    }
    else if(marks >= 40){
        cout<<"C";
    }
    else if(marks >= 30){
        cout<<"D";
    }
    else if(marks >= 25 || marks >= 0){
        cout<<"Fail";
    }
    else{
        cout<<"Enter the marks in range between 0 to 100.";
    };


    return 0;

}