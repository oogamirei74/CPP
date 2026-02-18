#include<bits/stdc++.h>
using namespace std;

int main(){
	long long a = 2;
	long long b = 1;

	cout << a << " " << b << " ";

	int i = 3;
	while(i <= 10){
		long long c = a + b;
		cout << c << " ";
		a = b;
		b = c;
		i++;
	}

}