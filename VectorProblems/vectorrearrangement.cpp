#include<bits/stdc++.h>
using namespace std;

bool test(vector<int> &nums){
	sort(nums.begin(), nums.end());

	for(int i = 0; i < nums.size() - 1; i++){
		if(nums[i+1] != (nums[i]+1)){
			return false;
		}
	}
	return true;
}

int main(){
	vector<int> nums;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		nums.push_back(x);
	}

	sort(nums.begin(), nums.end());

	cout << "The given numbers are: ";

	for(int i = 0; i < nums.size(); i++){
		cout << nums[i] << " ";
	}
	cout << endl;

	cout << "The given numbers are ";

	if(test(nums) == true){
		cout << "Consequtive" << endl;
	}else{
		cout << "Not Consequtive" << endl;
	}
}