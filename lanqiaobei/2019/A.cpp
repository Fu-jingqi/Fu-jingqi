#include<bits/stdc++.h>
using namespace std ;
const int N = 20190325 ;
int dp[N] ;
int main(){
	dp[1] = 1 ;
	dp[2] = 1 ;
	dp[3] = 1 ;
	int k = 20190324 ;
	for(int i = 4 ; i <= k ; i ++){
		dp[i] = (dp[i-1]% 10000 + dp[i-2]% 10000 + dp[i-3]% 10000) % 10000 ;
	}
	cout << dp[20190324] ;
 	return 0 ;
}
