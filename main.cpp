#include<iostream.h>
using namespace std;
main(){
	cout<<"helloworld"<<endl;
	int num;
	cin>>num;
	int array[num],firstBig,secondBig,newArray[num];
	int arraySum=0,arraySumSecondBig=0;
	for(int i=0;i<num;i++)
		{
			cin>>array[i];
		}
	for(int i=0;i<num;i++){
		arraySum=arraySum+array[i];
	}
	for(int i=0;i<num;i++){
		for(int j=i+1;j<num;j++){
			if(array[i]>array[j])
			{
				firstBig=array[i];
				secondBig=array[j];
			}
			else{
				firstBig=array[j];
				secondBig=array[i];
			}
		}
	}
	for(int i=0;i<num;i++){
		newArray[i]=secondBig;}
	for(int i=0;i<num;i++){
		arraySumSecondBig=arraySumSecondBig+newArray[i];
	}
	if(arraySum<arraySumSecondBig)
		cout<<secondBig<<endl;
	
}
