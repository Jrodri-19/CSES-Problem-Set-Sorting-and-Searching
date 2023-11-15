#include <bits/stdc++.h>
using namespace std;


int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	
	long int n, x;
	std::cin >> n >> x;
	
	std::vector<std::pair<long int, long int>> a;
	
	for (long int i = 0; i < n; ++i) {
		long int temp;
		std::cin >> temp;
		a.push_back(std::make_pair(temp, i + 1));
	}
	
	std::sort(a.begin(), a.end());
	/*
	for (long int i = 0; i < n; ++i) {
		cout << "Término " << i + 1 << ": (" << a[i].first << ", " << a[i].second << ")\n";
	}*/
	long int j = 0;
	n--;
	while (j < n) {
		long int complement = x - a[j].first;
		
		// Utiliza a[n-1] en lugar de a[n-1][0]
		if (a[n ].first > complement) {
			n--;
		} else if (a[n].first == complement) {
			if(a[j].second>a[n-1].second){
				std::cout <<a[n].second<< " " <<a[j].second;
			}else{
				std::cout <<a[j].second << " " <<a[n].second;
			}
			break;
		} else {
			j++;
		}
	}
	if(j==n){
		std::cout <<-1;
	}
	
	return 0;
}
