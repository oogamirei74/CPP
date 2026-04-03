#include <bits/stdc++.h>
using namespace std;

int main(){
	int N, M;
	cin >> N >> M;

	int x, y;
	cin >> x >> y;

	int nx = N * x;
	int my = M * y;

	int total = nx + my;

	cout << total << endl;
}