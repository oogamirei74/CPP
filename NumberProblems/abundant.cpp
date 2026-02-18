#include<bits/stdc++.h>
using namespace std;

/*
Abundant Number means the sum of its proper divisors will be greater than the actual number.
	18 = 1 x 18
	   = 2 x 9
	   = 3 x 6
sum of proper divisors = 1 + 2 + 3 + 6 + 9 = 21 > 18; is an Abundant Number.
*/


int main(){
	int n;
	cin >> n;

	int sum = 1;
	for(int i = 2; i <= n/2; i++){
		if((n % i) == 0) sum += i;
	}
	if(sum > n) cout << "The number is Abundant.";
	else{
		cout << "The number is not Abundant." << endl;
	}
}