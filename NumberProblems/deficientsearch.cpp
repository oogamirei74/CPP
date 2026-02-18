#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v;

	v.push_back(1);

	for(int i = 1; i <= 100; i++){
		int sum = 1;
		for(int j = 2; j <= i / 2; j++){
			if((i%j) == 0) sum += j;
		}
	if(sum < i) v.push_back(i);
	else continue;
	}

	cout << "The size of the vector: " << v.size() << endl;

	cout << "The Deficient numbers between 1 to 1000 are" << endl;

	for(auto i : v){
		cout << i << " ";
	}

}