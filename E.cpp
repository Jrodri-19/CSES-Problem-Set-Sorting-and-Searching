#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	long int n,temp_a{0},temp_b{0}, clientes{0},maxC{0};
	cin>>n;
	std::vector<pair<long int,int>> a_b;
	for(long int i=0;i<n;++i){
		cin>>temp_a>>temp_b;
		a_b.push_back({temp_a,1});
		a_b.push_back({temp_b,-1});
	}
	sort(a_b.begin(),a_b.end());
	
	for(const auto& lista:a_b){
		clientes+=lista.second;
		maxC=max(maxC,clientes);
	}
	cout<<maxC;
	return 0;
}
