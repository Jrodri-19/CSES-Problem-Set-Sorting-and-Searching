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
	long long int suma=0;
	for(int i=0;i<n;i++){
		if(medio>P[i]){
			suma=suma+medio-P[i];
		}
		if(medio<P[i]){
			suma=suma-medio+P[i];
		}
	}
	cout<<suma;
	return 0;
}
