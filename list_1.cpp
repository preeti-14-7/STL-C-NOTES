#include <iostream>
#include <list>
using namespace std;


int main() {
    list<int> l;

    //Init 
    list<int> l1{1,2,3,10,8,5};
    //Different Datatype
    list<string> l2{"apple","guava","mango","banana"};
    l2.push_back("pineapple");

    //sort
    l2.sort();

    //reverse
    l2.reverse();

    // pop_front
    cout<<l2.front()<<endl;
    l2.pop_front();

    //add to the front the list
    l2.push_front("kiwi");
    cout<<l2.back()<<endl;
    l2.pop_back();

    //Iterate over the list and print the data
    for(auto it=l2.begin();it!=l2.end();it++){
        cout<< (*it)<<" -> ";
    }
    cout<<endl;


    return 0;
}