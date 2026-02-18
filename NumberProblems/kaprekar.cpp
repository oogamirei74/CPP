#include<bits/stdc++.h>
using namespace std;

/*
Kaprekar number is a positive integer. The square of a number can be divided into two parts and the sum of the two parts will be equal to the given number.
	45^2 = 45 x 45
	   	 = 2025
	   	 = 20 | 25
	   	 = 20 + 25
	   	 = 45 = the number given; So, 45 is a Kaprekar Number.
*/

int main(){
	int n;
	cin >> n;

	int sq = pow(n, 2);

	int d = 0;
	int temp = n;
	while(temp > 0){
		d++;
		temp /= 10;
	}

	int divisor = pow(10, d);
	int right = sq % divisor;
	int left = sq / divisor;

	if((left + right) == n){
		cout << n << " is the Kaprekar Number." << endl;
	}else{
		cout << n << " is not the Kaprekar Number." << endl;
	}
}