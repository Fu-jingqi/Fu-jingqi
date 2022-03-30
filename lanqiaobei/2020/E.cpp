#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int Is_Year(int y){
	if(y % 400 == 0 || (y % 4==0 && y % 100 != 0)) return 1;
	else return 0 ;
}
int q_1[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31} ;
int num ;
int main()
{
	long long cnt = 0 ;
	for(int i = 2000 ;i <= 2020 ; i ++){
		if(Is_Year(i)) q_1[2] = 29;  
		else q_1[2] = 28;
		for(int j = 1; j <= 12; j++)
			for(int k = 1; k <= q_1[j]; k++){
				cnt += 1;
				if(k == 1 || num % 7 == 2) cnt++;     
				num++;
				if(i == 2020 && j == 10 && k == 1)
				{
					cout << cnt;
					return 0;
				}
			}	
	}
	return 0;
}

