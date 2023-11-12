#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	long int n,m,temp{0};
	cin>>n>>m;
	multiset<long int> h;
	for(long int i=0;i<n;++i){
		cin>>temp;
		h.insert(temp);
	}
	for(long int j=0;j<m;++j){
		cin>>temp;
		auto it=h.lower_bound(temp);
		if(*it==temp){
			cout<<*it<<"\n";
			h.erase(it);
		}else{
			if(it!=h.begin()){
				--it;
				cout<<*it<<"\n";
				h.erase(it);
			}else{
				std::cout<<"-1\n";
			}
		}
		
	}
	return 0;
}
