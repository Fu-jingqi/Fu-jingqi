#include<bits/stdc++.h>
using namespace std;
int check(int x){
	int k = x ;
	while(k){
		if(k % 10 == 2 || k % 10 == 4) return 0;
		k /= 10 ;
	}
	return 1 ;
}
int main()
{
	int cnt = 0;
	for(int i = 1 ; i < 2019 ; i ++){
		for(int j = i + 1 ; j < 2019 ; j ++){
			int k = 2019 - i - j ;
			if(k != i && k != j && k > i && k > j){
				if(check(i) && check(j) && check(k)) cnt ++ ;
			}
		}
	}
	cout << cnt ;
    return 0;
}
