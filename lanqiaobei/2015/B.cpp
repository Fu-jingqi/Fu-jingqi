#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10 ;
using LL = long long ;
int a[N] ;
int check(int x){
    while(x){
        if(x % 10 == 4) return 0 ;
        x /= 10 ;
    }
    return 1 ;
}

int main()
{

    int cnt = 0;
    for(int i = 10000 ; i <= 99999 ; i ++){
        if(check(i)) cnt ++ ;
    }    
    cout << cnt ;
    return 0;
}

