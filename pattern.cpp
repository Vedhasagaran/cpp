#include <bits/stdc++.h>
using namespace std;


void print1(int n) {
    for(int i = 0; i < n; i++){
		for(int j = 0 ; j < n ; j++){
			cout << "*" << " ";
		}
		cout << endl;
	}
}

void print2(int n) {
	for(int i = 0 ; i <= n ; i++){
		for(int j = 0 ; j <= i ; j++){
			cout << "*" << " ";
		}
		cout << endl;
	}
}

void print3(int n) {
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= i ; j++){
			cout << j << " ";
		}
		cout << endl;
	}
}

void floydTriangle(int n){
	int a = 1;
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= i; j++){
			cout << a  << " ";
			a++;
		}
		cout << endl;
	}
}



int main() {
	int t;
	cin >> t;

	for(int i = 0; i < t; i++){
	    int n;
	    cin >> n;
	    floydTriangle(n);
	    cout << endl;
	}

	return 0;
}
