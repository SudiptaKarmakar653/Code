#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;

    if(num%2==0 && num%3==0){
        cout<<"Even and divisible by 3"<<endl;

         
    }
    else{
        cout<<"Not for us"<<endl;
    }
return 0;
}