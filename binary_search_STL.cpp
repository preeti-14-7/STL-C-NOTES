#include <iostream>
#include<algorithm>


using namespace std;


int main()
{
	
	int arr[]={10,20,40,40,40,50,100};
	int n=sizeof(arr)/sizeof(int);
	
	int key;
	cin>>key;
	
	bool present = binary_search(arr,arr+n,key);
	
	if(present)
	   cout<<"Present"<<endl;
	else
	   cout<<"Absent"<<endl;   
	
	
	//two more thing
	//how to find index of array
	//lower_bound(s,e,key)  and upper_bound(s,e,key)
	
	
     auto lb = lower_bound(arr,arr+n,key);
	cout<<"lower bound of"<<key<<"is"<<lb-arr<<endl;
	
	//upper_bound
	
	 auto up = upper_bound(arr,arr+n,key);
	 cout<<"upper bound of"<<key<<"is"<<up-arr<<endl;
	 
	 cout<<"occurnace Frequency of key is  "<<up-lb<<" "<<endl;
	
	
	return 0;
}
