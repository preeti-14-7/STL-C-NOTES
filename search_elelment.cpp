#include <iostream>
#include<algorithm>


using namespace std;


int main()
{
	int arr[]={1,10,11,8,100,9};
	int n=sizeof(arr)/sizeof(int);
	
	
	int key;
	cin>>key;
	

      auto   it= find(arr,arr+n,key);
	 
	 int index=it-arr;
	 
	 if(index==n)
	     cout<<key<<"Not present at "<<endl;
	 else
	   cout<<"Present at postion"<<index<<endl;
	
	
	return 0;
}
