#include<iostream>
using namespace std;
int main()
{
	int size=5;
	int array[size],temp,i,j;
	for(int i=0;i<size;i++)
	{
		cout<<"Enter number "<<i+1<<" for the array"<<endl;
		cin>>array[i];
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(array[i]>array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
	cout<<"The sorted array is: "<<endl;
	for(i=0;i<size;i++)
	{
		cout<<array[i]<<endl;
	}
	if(array[1]>array[0]&&array[1]<array[2]&&array[1]<array[3]&&array[1<array[4]])
	{
		cout<<"The second smallest element is"<<endl;
		cout<<array[1];
	}
	return 0;
}