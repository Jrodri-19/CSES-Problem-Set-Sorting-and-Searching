#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<long long int> nums(n);
	for (long long int &temp: nums) {
		cin >> temp;
	}
	long long int max_global = nums[0];
	long long int max_local = nums[0];
	for (int i = 1; i < n; ++i) {
		max_local = max(nums[i], max_local + nums[i]);
		max_global = max(max_global, max_local);
	}
	cout <<  max_global ;
	return 0;
}
