#include <iostream>
#include<stack>
using namespace std;


int main() {

    stack<int> s;

    for(int i=0;i<=5;i++){
        s.push(i);    //O(1)
    }

    //Loop
    while(!s.empty()){
        cout<<s.top()<<" ,";    //O(1)
        s.pop();
    }

    return 0;
}