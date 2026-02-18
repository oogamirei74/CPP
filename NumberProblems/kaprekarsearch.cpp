#include<bits/stdc++.h>
using namespace std;

bool isKaprekar(int n){

	int sq = n * n;
	int d = 0;
	int temp = n;
	while(temp > 0){
		d++;
		temp /= 10;
	}
	int divisor = pow(10, d);
	int right = sq % divisor;
	int left = sq / divisor;

	return ((left + right) == n);
}

int main(){
	vector<int> v;

	for(int i = 1; i <= 1000; i++){
		if(isKaprekar(i)) v.push_back(i);
		else continue;
	}

	cout << "The size of the vector is: " << v.size() << endl;
	cout << "The Kaprekar numbers less than 1000 are: ";
	for(auto i : v){
		cout << i << " ";
	}
}