#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	long int n,m,k,i{0},j{0},conteo{0};
	cin>>n>>m>>k;
	vector<long int> a(n);
	vector<long int> b(m);
	for(long int &temp:a){
		cin>>temp;
	}
	for(long int &temp:b){
		cin>>temp;
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	while(i<n && j<m){
		if(b[j]>=a[i]-k&&b[j]<=a[i]+k){
			++conteo;
			++i;++j;
		}else if(b[j]<a[i]-k){
			++j;
		}else{
			++i;
		}
	}
	cout<<conteo;
	return 0;
}
