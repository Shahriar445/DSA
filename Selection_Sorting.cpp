#include<bits/stdc++.h>
using namespace std;


void Selection_Sort(int arr[], int n)
{

	for (int i =0 ;i<=n-2;i++)
	{
		int mini = i;
		for (int j=i; j<=n-1;j++)
		{
			if (arr[j] < arr[mini])
			{
				mini=j;
			}
		}


		swap(arr[i],arr[mini]);

	}



}
int main(){

     // Write Code here
	int n;
	cin>>n;
	int arr[n];
	for (int i =0 ;i<n;i++)
    {cin>>arr[i];}

	Selection_Sort(arr,n);

// Printing arry ;
	for (int  i=0 ;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;


}
