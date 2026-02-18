#include<bits/stdc++.h>
using namespace std;

long long digitCount(long long n){
	int count = 0;
		while(n > 0){
		count++;
		n /= 10;
	}
	return count;
}

bool isNarcissistic(long long int n){
	long long d = digitCount(n);
	int result = 0;
	int temp = n;
	while(temp > 0){
		result += pow((temp%10) , d);
		temp /= 10;
	}

	return result == n;
}

int main(){
	vector<long long> v;
	long long i = 1;
	while(v.size() < 15){
		if(isNarcissistic(i)){
		v.push_back(i);
		}
	i++;
	}
	cout << "The first 15 Narcissistic Decimal Numbers are: ";
	for(auto i : v){
		cout << i << " ";
	}
}