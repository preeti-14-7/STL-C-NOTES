#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

bool comapre(string a,string b)
{
    if(a.length() == b.length())
    {
         return a<b;
    }
    return a.length()<b.length();
}


int main()
{
    int t;
    cin>>t;
    cin.get();

    string s[100];

    for(int i=0;i<t;i++)
    {
         getline(cin,s[i]);
    }
    sort(s,s+t,comapre);
    for(int i=0;i<t;i++)
    {
         cout<<s[i]<<endl;
    }

   return 0;
}


