#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int i=1, j, rows , a , b, c;
	cin >> rows;
	for(i=1;i<=rows;i++){
	    a = 0;
	    b = 1;
	    for(j=1;j<=i;j++)
        {
            c = a+b;
            cout << c << " ";
            a=b;
            b=c;
        }
        cout << "\n";
	}
	return 0;
}

