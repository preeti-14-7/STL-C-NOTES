#include <iostream>
#include<queue>
using namespace std;


int main() {

    queue<int> q;

    for(int i=0;i<=5;i++){
        q.push(i);    //O(1)
    }

    //Loop
    while(!q.empty()){
        cout<<q.front()<<" -> ";    //O(1)
        q.pop();
    }

    return 0;
}