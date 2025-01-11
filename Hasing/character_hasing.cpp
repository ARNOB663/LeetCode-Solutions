#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //'a' =>97
    //'z' =>122
    string s;
    cin>>s;
    //pre calculation

     int hash[26] = {0};
      for(int i=0;i<s.size();i++)
      {
          hash[s[i] - 'a']++;
      }
    int q;
    cin>> q;

    while(q--)
    {
        char c;
        cin>>c;
        //fecth

        cout<<hash[c-'a'] <<endl;
    }
return 0;

}
