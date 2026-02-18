#include<bits/stdc++.h>
using namespace std;

/*
Deficient Numbers are those whose proper divisor's sum will be less than the actual number.
	15 = 1 x 15
	   = 3 x 5
sum of proper divisors = 1 + 3 + 5 = 9 < 15; is a deficient number
*/

int main(){
	int n;
	cin >> n;

	int sum = 1;
	for(int i = 2; i <= n/2; i++){
		if((n % i) == 0) sum += i;
	}

	if(sum < n){
		cout << "The number is Deficient.";
	}
	else{
		cout << "The number is not Deficient.";
	}
}