#include <bits/stdc++.h>
 
using namespace std;
// const double PI = 3.14159 ;
int main() 
{
    int a1 , a2 , b1 , b2 , c1 , c2 ;
    while(cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2){
        cout << "D(" << a1 - b1 + c1 << ",";
        cout << a2 - b2 + c2 << ")" << endl ;
    }

    return 0;
}