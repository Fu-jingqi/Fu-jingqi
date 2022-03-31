#include<bits/stdc++.h>
using namespace std;
bool check(int a1,int a2,int a3,int a4,int a5){
	if(a1==a2 || a1==a3 || a1 == a4 || a1==a5 || a2==a3||a2==a4||a2==a5||a3==a4||a3==a5||a4==a5) return true ;
	return false ;
}
int main()
{
	int res = -1 ;
	int a[21] = {0,97,92,0 ,0 ,89,82,0 ,0 ,0 ,95,0 ,0 ,94,0 ,0 ,0 ,98,93,0 ,0 };
	int b[21] = {0,90,85,0 ,0 ,83,86,0 ,97,0 ,99,0 ,0 ,91,83,0 ,0 ,83,87,0 ,99};
	int c[21] = {0,0 ,96,0 ,0 ,97,0 ,0 ,96,89,0 ,96,0 ,0 ,87,98,0 ,99,92,0 ,96};
	int d[21] = {0,0 ,0 ,0 ,80,0 ,0 ,87,0 ,0 ,0 ,97,93,0 ,0 ,97,93,98,96,89,95};
	int e[21] = {0,0 ,0 ,93,86,0 ,0 ,90,0 ,0 ,0 ,0 ,98,0 ,0 ,98,86,81,98,92,81};
	for(int i = 1 ; i <= 20 ; i ++){
		for(int j = 1 ; j <= 20 ; j ++){
			for(int q = 1 ; q <= 20 ; q ++){
				for(int k = 1 ;k <= 20 ; k ++){
					for(int l = 1 ; l <= 20 ; l ++){
						if(!check(i,j,k,l,q)){
							int sum = a[i] + b[j] + c[q] + d[k] + e[l] ;
							res = max(res,sum) ;
						}
					}
				}
			}
		}
	}	
	cout << res ;
    return 0;
}
