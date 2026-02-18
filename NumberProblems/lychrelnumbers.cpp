#include<bits/stdc++.h>
using namespace std;

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
	vector<int> v;
	for(int i = 0; i <= 1000; i++){
		if(isLychrel(i)){
			v.push_back(i);
		}else{
			continue;
		}
	}

	cout << "The Lychrel numbers are:" << endl;
	for(auto i : v){
		cout << i << " ";
	}
	cout << endl;
	cout << "The number of Lychrel numbers are: " << v.size() << endl;
}