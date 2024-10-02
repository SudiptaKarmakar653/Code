#include<iostream>
using namespace std;
int main(){

int m;
cout<<"Enter Number of Rows : ";
cin>>m;
int n;
cout<<"Enter Number of Column : ";
cin>>n;
int firstrow=m/m;
int firstcolumn=n/n;
int lastrow=m;
int lastcolumn=n;
for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){
        if(i==firstrow || j==firstcolumn ||i==lastrow || j==lastcolumn){

            cout<<"*"<<" ";
        }
        else{cout<<"  ";}

         
    } 

cout<<endl;

}


}














 
   






  
 
