#include <bits/stdc++.h>
using namespace std;
int main()
{
   vector<pair<string,vector<pair<double,int>>>> arr;
   int n;
   cin>>n;
   int rates=0;
   for(int i=0;i<n;i++)
   {
       string x;
       cin>>x;
       double y;
       cin>>y;
       int z;
       cin>>z;
       
       rates+=y*z;
       
   }
   cout<<rates/n;
}