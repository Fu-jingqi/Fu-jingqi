#include<bits/stdc++.h>

using namespace std;
int main()
{
	int n ;cin >> n ;
	int k = n ;
	int s1 = 0 , s2 = 0 ;
	while(n--){
		int x ;
		cin >> x ;
		if(x >= 60) s1 ++ ;
		if(x >= 85) s2 ++ ;
	}
	double res1 = s1 * 1.0 / k ;
	double res2 = s2 * 1.0 / k ;
	cout << fixed << setprecision(0) << res1 * 100 << "%"<< endl ;
	cout << fixed << setprecision(0) << res2 * 100 << "%" << endl ;
	return 0;
}


