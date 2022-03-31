#include<bits/stdc++.h>
using namespace std;
int main()
{
	//char a = 'A' ;
	//int k = a - 64;
	//cout << k ;
	int k = 2019 ;
	int h = 0;
	int a[100] ;
	while(k){
		a[h++] = k % 26 ;
		k /= 26 ;
	}
	for(int i = h-1 ; i >= 0 ; i --) {
		char c = a[i] + 64;
		cout << c ;
	}
	
    return 0;
}
