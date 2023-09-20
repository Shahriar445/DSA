#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int n){
     cout<<"Ther reversed Array is :- ";

     for (int i=0 ;i<n;i++){
        cout<<arr[i]<<" ";
     }
  
}
void reverseArray(int arr[],int start,int end)
{

   
    if (start<end){

        swap(arr[start],arr[end]);
        reverseArray(arr,start+1,end-1);
    }


}
int main()
{
    int n=5 ;
    int arr[] = {4,3,6,5,7};
    reverseArray(arr,0,n-1);
    printArray(arr,n);

    return 0;
}