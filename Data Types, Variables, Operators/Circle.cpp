#include<bits/stdc++.h>
#define pi 3.141592653589793

using namespace std;

int main(){
	double r;
	cin >> r;

	double area = pi * r * r;
	double circ = 2 * pi * r;

	cout << fixed << setprecision(6) << area << " " << fixed << setprecision(6) << circ << endl;
}