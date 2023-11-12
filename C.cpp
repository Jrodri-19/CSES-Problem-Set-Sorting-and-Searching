#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	long int n,x,suma{0},l{0},r{0},conteo{0};
	cin>>n>>x;
	r=n-1;
	vector<long int> p(n);
	for(long int &temp:p){
		cin>>temp;
	}
	sort(p.begin(),p.end());
	while(l<=r){
		if(p[l]+p[r]<=x)++l;
		++conteo;
		--r;
	}
	cout<<conteo;
	
	return 0;
}

