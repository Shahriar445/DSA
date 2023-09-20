#include<bits/stdc++.h>
using namespace std;


int fun(int n){

    if (n==0){ // base condition 
        return 0;
    }

    return n + fun(n-1);
}
int main()
{
    int n=5; // Here let'st take a value of n to be 5
    
    cout<<fun(n)<<endl;
    return 0;
}