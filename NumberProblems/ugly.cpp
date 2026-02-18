#include<bits/stdc++.h>
using namespace std;

//Ugly number means the prime factors of that number will be 2, 3 and/or 5

//I have made the mistake of thinking prime numbers == ugly numbers.
// bool isUgly(int n){
// 	if(n <= 1) return false;
// 	for(int i = 2; i <= sqrt(n); i++){
// 		if((n % i) == 0) return false; 
// 	}
// 	return true;
// }

bool isUgly(int n){
	if(n <= 0) return false; //Ugly numbers are positive integers

	while(n % 2 == 0){
		n /= 2;
	}

	while(n % 3 == 0){
		n /= 3;
	}

	while(n % 5 == 0){
		n /= 5;
	}

	return (n == 1);
}

int main(){
	int n;
	cin >> n;
	if(isUgly(n)) cout << "The number " << n << " " << "is UGLY" << endl;
	else{
		cout << "The number " << n << " " << "is not UGLY" << endl;
	}
}