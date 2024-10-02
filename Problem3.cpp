#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;

    if(num%3==0 || num%5==0){
        cout<<"Divisible by 3 or 5"<<endl;

         
    }
    else{
        cout<<"Not for us"<<endl;
    }
return 0;
}