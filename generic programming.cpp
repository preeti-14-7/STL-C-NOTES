//generic programing using template, here generic means u can work with any kind of data type 

// linear search
#include <iostream>
#include<list>

using namespace std;
//templates: it gives freedom for anytype of array
template<class T>
int search(T arr[], T key,int n)                           // here we can change the int arr and int key  with T for making this programe generic so that 
{
	for(int p=0;p<n;p++)                                   // we can use it for every kind of variable
	{
		if(arr[p]==key)
		return p;
	}
	
	return n;
}
//templates +itarotr
template< class ForwardIterator, class T>
ForwardIterator search( ForwardIterator start, ForwardIterator end, T key)
{
	while(start!=end)
	
	{
		if(*start==key)
		    return start;
		    
		start++;    
	}
	
	return end;
}

int main()
{
	/*int a[]={1,2,3,8,4,9};
	int key=8;
	int n=sizeof(a)/sizeof(int);
	cout<<search(a,key,n)<<endl;
	
	float b[]={1.5,1.6,1.9,1.3};
	float k=1.3;
	
	cout<<search(b,k,n)<<endl;
	*/
	list<int> l;
	
	l.push_back(1);
	l.push_back(4);
	l.push_back(7);
	l.push_back(9);
	l.push_back(8);

   list<int> ::iterator it= search(l.begin(), l.end(), 7);
    
    if(it==l.end())
         cout<<"element not present"<<endl;
	else
    	cout<<*it<<endl;
	
	
	return 0;
}
