#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Please enter your age :-";
     cin>>age;

    if(age >= 18){
        cout<<"You can Vote";
    }
    else{
        cout<<"You cannot vote";
    }

    return 0;
};