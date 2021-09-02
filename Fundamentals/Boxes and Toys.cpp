#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t,count=0;
  cin>>t;
  while(t--)
  {
    int t,c;
    cin>>t>>c;
    if(c-t>=2)
    {
      count++;
    }
  }
  cout<<count;
  
  return 0;
}
