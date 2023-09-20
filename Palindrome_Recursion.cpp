#include<bits/stdc++.h>
using namespace std;

bool palindrome(int i , string& s){

    // Base Condition
    // If i exceeds half of the string means all the elements 
    // are compared, we return true.
    if (i>=s.length() / 2 )return true;

    if (s[i]!=s[s.length() - i -1] )return false; 

    return palindrome(i+1,s); // both characters are the same, increment i and check start+1 and end-1 ;
}
int main()
{
    string s ="heh";
   if (palindrome(0,s)){
    cout<<"Number is Palindrome"<<endl;
   }else cout<<"Number is not Palidnrome"<<endl;

    return 0;
}