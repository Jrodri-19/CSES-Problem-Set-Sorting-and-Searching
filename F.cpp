#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	long int n,temp_a{0},temp_b{0}, limit_sup{0},conteo{0};
	cin>>n;
	std::vector<pair<long int,long int>> a_b;
	for(long int i=0;i<n;++i){
		cin>>temp_a>>temp_b;
		a_b.push_back({temp_a,temp_b});
	}
	sort(a_b.begin(),a_b.end(),[](const auto& a, const auto& b) {
		return a.second < b.second;
	});
	
	for(const auto& lista:a_b){
		if(lista.first >= limit_sup){
			++conteo;
			limit_sup=lista.second;
		}
	}
	cout<<conteo;
	return 0;
}
