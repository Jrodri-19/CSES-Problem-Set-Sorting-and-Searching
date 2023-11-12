#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	long int n,temp;
	cin>>n;
	set<long int> x;
	for(int i=0;i<n;i++){
		cin>>temp;
		x.insert(temp);
	}
	
	cout<<x.size();
	
	return 0;
}
