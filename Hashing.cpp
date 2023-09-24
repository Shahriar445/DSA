
// lets find how many element have in arry , give an querry that Given an array of integers: [1, 2, 1, 3, 2] and we are given some queries: [1, 3, 4, 2, 10]. For each query, we need to find out how many times the number appears in the array. For example, if the query is 1 our answer would be 2, and if the query is 4 the answer will be 0.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for (int i =0 ;i<n;i++)
	{
		cin>>arr[i];

	}


	// Precompute;


	int hash[15]= {0};

	for (int i =0 ;i<n;i++){

		hash[arr[i]] += 1;
	}

	int q ;
	cin>>q;

	while (q--)
	{
		int num;

		cin>>num;

		cout<<hash[num]<<endl;
	}
}
