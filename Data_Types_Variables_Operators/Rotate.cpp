#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;

	int a = s[0] - '0';
	int b = s[1] - '0';
	int c = s[2] - '0';

	int abc = (a*100) + (b*10) + (c*1);
	int bca = (b*100) + (c*10) + (a*1);
	int cab = (c*100) + (a*10) + (b*1);

	int sum = abc + bca + cab;

	cout << sum << endl;
}