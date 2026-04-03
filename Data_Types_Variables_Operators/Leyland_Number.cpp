#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	double ans = pow(a, b) + pow(b, a);
	cout << fixed << setprecision(0) << ans << endl;
}