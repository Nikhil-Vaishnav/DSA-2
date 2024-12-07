#include<iostream>
using namespace std;

int main(){
    int marks;
    if (marks >=90){
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
    else if(marks >=50){
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


    return 0;

}