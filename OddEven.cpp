#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the Number"<<endl;
    cin>>num;
    cout<<"Entered Number is "<<num<<endl;

    if(num%2==0){
        cout<<"Number is Even";
    }else{
        cout<<"Number is Odd";
    }
}