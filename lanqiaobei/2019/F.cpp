#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
typedef long long ll;
int main(void)
{
	int n; cin>>n;
	ll max=-9999999,max_d=0;
	for(int i=0,length=1,depth=1;i<n;depth++,length*=2)
	{
		ll s=0;
		for(int j=0;j<length&&i<n;j++,i++)
		{
			int x;
			cin>>x;
			s+=x;
		}
		if(s>max)
		{
			max=s;
			max_d=depth;
		}
	}
	cout<<max_d<<endl;
	return 0;
} 

