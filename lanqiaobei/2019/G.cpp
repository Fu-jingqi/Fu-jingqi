#include<bits/stdc++.h>
using namespace std ;
const int N = 20190325 ;
int dp[N] ;
bool check(int x){
	while(x){
		int f = x % 10 ;
		if(f == 2 || f == 0 || f == 1 || f == 9) return false ;
		x /= 10 ;
	}
	return true ;
}
int main(){
	int n ;cin >> n ;
	int sum = 0 ;
	for(int i = 1 ; i <= n ; i ++){
		if(!check(i)) {
			sum += i ;
			//cout << i << " " ;
		}
	}cout << sum ;
 	return 0 ;
}
