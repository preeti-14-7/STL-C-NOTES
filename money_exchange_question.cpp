//indian money chnage

#include<iostream>
#include<algorithm>

using namespace std;

bool compare(int a,int  b)
{
	//cout<<"comparing"<<a<<"and"<<b<<endl;
	return a<=b;
}


int main()
{
	int coin[]={1,2,5,10,20,50,100,200,500,2000};
	int n=sizeof(coin)/sizeof(int);
	int money;
	cin>>money;

	 while(money!=0)
	 {
	 	int lb=lower_bound(coin,coin+n,money,compare)-coin-1;
	 	cout<<coin[lb]<<" ";
	 	money=money-coin[lb];
	 }
	
	return 0;
}
