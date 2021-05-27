#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,pos=0,ele,flag=0;
	cout<<"enter the size of array"<<endl;
	cin>>n;
	int a[n];
	cout<<"enter the array elements"<<endl;
	for(int i=0;i<n;i++)
	{
	   cin>>a[i]; //read elements from the user
	}
	cout<<"enter the element to delete"<<endl;
	cin>>ele;//element to be deleted
	for(int i=0;i<n;i++)
	{
		if(a[i]==ele)//checking the element is present in the array or not
		{
			pos=i;//it store the index of the element
			flag=1;//it indicates that the element is found
			break;
		}
	}
	if(flag==0)
    {
    	cout<<"element is not found";
	}
	else
	{
	    for(int j=pos;j<n-1;j++)//deleting the element
	    {
	    	a[j]=a[j+1];
		}
		n--;
        cout<<"array after deleting the "<<ele<<endl;
	    for(int i=0;i<n;i++)
	    {
		    cout<<a[i]<<endl;
	    }
    }
	return 0;
	
}
