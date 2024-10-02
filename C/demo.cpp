#include<iostream>
using namespace std;

int power(int n, int x)
{
    int ans = 1;
    for(int i = 1; i <= x; i++)
    {
        ans = ans * 2;
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    int c = 0;
    for(int i = 1; i <= n; i++)
    {
        int a = power(2,i);
        if(a == n)
            c = 1;            
    }

    if(c)
        cout << "power of 2";
    else 
        cout << "not a power of 2";
    return 0;
}