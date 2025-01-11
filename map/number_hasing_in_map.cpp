#include<bits/stdc++.h>
using namespace std;
int  main()
{ //number hashing in map 
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
   cin>>arr[i];
  }
  //pre-compute the frequency of each number
  map<int , int> mp;
  for(int i=0;i<n;i++)
  {
     mp[arr[i]]++;
  }
  int q;
  cin>>q;
  //query
  while(q--)
  {
   int number;

    cin>>number;

    cout<<mp[number]<<endl;
   //fetch
  }
  return 0;
}