//inbuilt sort function
#include<iostream>
#include<algorithm>

using namespace std;

//here we define a comparitor function so that we can sort our array in max to min order or min to max order
bool compare(int a,int  b)
{
	cout<<"comparing"<<a<<"and"<<b<<endl;
	return a>b;
}


int main()
{
	int n,key;
	cin>>n;
	int a[1000];
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	//sorting of array using sort functiom
	
	sort(a,a+n,compare);                  //here we are not calling the compare function we just sending a function as a parameter  to another function
	
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	
	
	
	return 0;
}
