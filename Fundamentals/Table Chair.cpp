#include <bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{
  //write your code here
  int test;
  cin>>test;
  
  for(int i=0; i<test;i++)
 {
  long long int M,R1,R2,R3;
  cin>>M>>R1>>R2>>R3;
  int n=M%4;
  
  if(n==0)
  cout<<"0"<<endl;
  
  else if(n==1)
  cout<<min(R3,min(R2+R1, R1+R1+R1))<<endl;
  
  else if(n==2)
  cout<<min(R2,min(R1+R1,R3+R3))<<endl;
  
  else
  cout<<min(R1,min(R3+R2,R3+R3+R3))<<endl;
  
 }
  
  return 0;
}
