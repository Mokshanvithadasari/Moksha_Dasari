#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    // odd "*"s pyramid pattern
	long long int i, j, m, n, spaces, k;
	cin >> n; //max_width
    if(n%2==0){
        m = n/2;
    }
    else{
        m = (n/2)+1;
    }
    cout << "m is " << m << endl;
    for(i=1;i<=m;i++){
        k=0;
        spaces = abs(m-i);
        for(j=0;j<spaces;j++){
            cout << " ";
        }
        while(k!=2*i-1){
            cout << "*";
            ++k;
        }
        cout << endl;
    }
    for(i=m-1;i>=1;i--){
        spaces = abs(m-i);
        for(j=0;j<spaces;j++){
            cout << " ";
        }
        for(j=i; j<=2*i-1;j++){
            cout << "*";
        }
        for(j=0;j<i-1;j++){
            cout << "*";
        }
        cout << endl;
    }
	return 0;
}
