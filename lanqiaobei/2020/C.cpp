#include<bits/stdc++.h>
using namespace std;
int main(){
	int g[40][40] ;
	g[1][1] = 1 ;
	for(int i = 2 ; i <= 39 ; i ++){
		if(i % 2==0) g[1][i] = g[1][i-1] + 1 ;
		else g[1][i] = g[1][i-1] + 4 * (i/2) ;
	}
	//cout << g[1][39] << endl;//780
	for(int i = 2 ; i <= 39 ; i ++){
		if(i % 2 == 0) g[i][1] = g[i-1][1] + 4 * ((i/2) - 1) + 2 ;
		else g[i][1] = g[i-1][1] + 1 ;
	}
	//cout << g[39][1] << endl;
	cout << (g[39][1] + g[1][39])/2 << endl ;
	return 0 ;
}

