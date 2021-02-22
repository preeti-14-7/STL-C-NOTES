#include <iostream>
#include <vector>
using namespace std;

int main()
 {
     //intialise vector in this way
    vector<int> v;
    vector<int> u(5,10);          //five ints with value 10
    vector<int> w(u.begin(),u.end());
    vector<int> d{1,2,3,4,5};

    //how to iterrate over the vector
        //1st way
                for( int i=0;i<w.size();i++){
                    cout<<w[i]<<" ";
                } 
        //2nd way      auto -> vector<int> :: iterator 
                for(auto it=w.begin();it!=w.end();it++)
                {
                    cout<<(*it)<<" ";
                }
        //3rd way 
                for(int x:w){
                cout<<x<<",";
                }

    //how to take input
    vector<int>a;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        v.push_back(a[i]);
    }

    int A[] = {1,2,3,4,5};
    vector<int> z;
    for(int i=0;i<5;i++){
        z.push_back(A[i]);
    }

    
    //Size vs Capapcity vs Max Size
        cout<<d.size()<<endl;
        cout<<d.capacity()<<endl;
        cout<<d.max_size()<<endl;
    //understand size of vector
     cout<<v.size()<<endl;
     cout<<v.capacity()<<endl;   //size of undelying array 
     cout<<v.max_size()<<endl;    //max no of elem a vect can store in wrost case acc to avlab memory

    return 0;
}