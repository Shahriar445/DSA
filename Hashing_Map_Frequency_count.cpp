#include<bits/stdc++.h>
using namespace std;

void Frequency(int arr[], int n)
{
    unordered_map<int , int > mp;

    for (int i=0 ;i<n;i++)
    {
        mp[arr[i]]++;
    }
    for (auto x:mp){
        cout<<x.first<<" "<< x.second<<endl;
    }
}
int main()
{
    int arr[] = {3,4,3,6,4,3,12,77,9,9};

    int n= 10;
    Frequency(arr,n);



}
