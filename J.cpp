#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<long long int> P(n);
	for (long long int &temp: P) {
		cin >> temp;
	}
	sort(P.begin(),P.end());
	long long int medio=P[n/2];
	long long int suma=1;
	for(int i=0;i<n && P[i]<=suma;i++){
		suma+=P[i];
	}
	cout<<suma;
	return 0;
}
