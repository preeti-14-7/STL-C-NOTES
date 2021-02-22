#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char s[100] = "Today/is my birthday/14 july";

    char *ptr = strtok(s,"/");
    cout<<ptr<<endl;

    while( ptr !=  NULL)
    {
        ptr = strtok(NULL,"/");
        cout<<ptr<<endl;
    }

    return 0;

}