#include<iostream>
using namespace std;
int main(){
    float n;
    cout<<"Enter the number : ";
    cin >> n;
    for(;n;){
        int x=n%2;
        if(n%2==0){
            cout<<"It's a power of 2";
        }
        if(n/2<=1){
            cout<<"It's not a power of 2";
        }
        else n++;
    }
 return 0;
}