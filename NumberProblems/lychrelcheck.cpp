#include<bits/stdc++.h>
using namespace std;

/*
Lychrel number is the number which's reverse will not make the palindrome after the addition even after a lot of Iterations.
	Reverse of 56 = 65
				  = 56 + 65
				  = 121; is a Palindrome; So, 56 is not the Lychrel Number.
*/

string conversion(long long int n){
	string converted = "";
	while(n > 0){
		char digit = (n % 10) + '0';
		converted += digit;
		n /= 10;
	}
	reverse(converted.begin(), converted.end());

	return converted;
}

bool isPalindrome(string s){
	string rev = s;
	reverse(rev.begin(), rev.end());

	return rev == s;
}

string revAdd(string s){
	string rev = s;
	reverse(rev.begin(), rev.end());

	string result = "";
	int carry = 0;
	int n = s.size();

	for(int i = n - 1; i >= 0; i--){
		int digitsum = (s[i] - '0') + (rev[i] - '0') + carry;
		result += (digitsum % 10) + '0';
		carry = digitsum / 10;
	}
	if(carry){
		result += carry + '0';
	}

	reverse(result.begin(), result.end());

	return result;
}

bool isLychrel(long long int n, int maxIterations = 1000){
	string s = conversion(n);
	for(int i = 0; i <= maxIterations; i++){
		s = revAdd(s);
		if(isPalindrome(s)) {
			return false;
		}
	}
	return true;
}

int main(){
	long long int n;
	cin >> n;

	if(isLychrel(n)){
		cout << n << " is the Lychrel candidate." << endl;
	}else{
		cout << n << " is not the Lychrel candidate." << endl;
	}
}