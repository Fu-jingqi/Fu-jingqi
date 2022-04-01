#include<bits/stdc++.h>

using namespace std ;
const int N = 1e6 +19 ;
int a[N] ,b[N];
int main(){
	int n ;
	cin >> n ;
	for(int i = 0 ; i < n ; i ++) cin >> a[i] ;
	sort(a,a+n) ;
	for(int i = 0 ; i < n - 1 ; i ++){
		b[i] = a[i+1] - a[i] ;
	}
	int re = b[0], d;
	for(int i = 0 ; i < n - 1 ; i ++){
		re = __gcd(re,b[i]) ;
	}
	int k = a[0] ,cnt = 1;
	while(k != a[n-1]){
		k += re ;
		cnt ++ ;
	}
	cout << cnt << "\n" ;
	return 0 ;
}