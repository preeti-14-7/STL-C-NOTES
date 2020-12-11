#include <iostream>
#include<list>

using namespace std;

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

//templates +itarotr+compartor
template< class ForwardIterator, class T,class compare>
ForwardIterator search( ForwardIterator start, ForwardIterator end, T key,compare cmp)
{
	while(start!=end)
	
	{
		if(cmp(*start,key))
		    return start;
		    
		start++;    
	}
	
	return end;
}


class Book
{
	public:
	string name;
	int price;
	
	Book()
	{
		
	}
	Book(string name,int price)
	{
		this->name = name;
		this->price = price;
	}
};

class BookCompare{
	public:
		bool operator()(Book A, Book B)
		{
			if(A.name==B.name)
			    return true;
			return false;    
    	}
	
};




int main()
{
	Book b1("c++",100);   //old  edition
	Book b2("java",120);
	Book b3("python",130);
	Book b4(b1);
	
	
	list<Book>l;
	l.push_back(b1);
	l.push_back(b2);
	l.push_back(b3);
	
	Book Booktofind("c++",110);   //new edition
	BookCompare cmp;
	
	
	 list<Book> ::iterator it = search(l.begin(),l.end(),Booktofind,cmp);
	 
	 if(it!=l.end())
	 {
	 	cout<<"book found in the library"<<endl;
	 }
	 else
	{
	    cout<<"not found"<<endl;
	}
	
/*	if(cmp(b1,Booktofind))
	     cout<<"True same Books!"<<endl;
//	else*/
	   
	   
	   
	   return 0;
}













