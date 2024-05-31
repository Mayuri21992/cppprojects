#include<iostream>
using namespace std;
int findCommonFactor(int n1,int n2){
  int counter=0
  for(int i=1;i<n1 && i<n2;i++)
    {
      if(n1%i==0 && n2%i==0)
        counter++;
    }
  return counter;
}
main()
{
  int num1,num2,commonFactorCount=0;
  cin>>num1>>num2;
  commonFactorCount=findCommonFactor(num1,num2);
  cout<<commonFactorCount<<endl;
  
}
