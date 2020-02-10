#include<bits/stdc++.h>
using namespace std;
int main() {
	int T,n;
	long long ans;
	cin>>T;
	for(int t=0;t<T;t++){
		ans =0;
		cin>>n;
		long long X[n];
		int bombs[n];
		for(int i=0;i<n;i++)
			cin>>X[i];
		for(int i=0;i<n;i++)
			cin>>bombs[i];
		sort(X,X+n);
		sort(bombs,bombs+n);
		for(int i=0;i<n;i++){
			ans = (ans+((abs(X[i]-X[i+1])%1000000007)*bombs[i+1]%1000000007)%1000000007)%1000000007;
		}
		ans = (ans+(abs(X[0]-X[n-1])*bombs[n-1])%1000000007)%1000000007;
		cout<<ans%1000000007<<endl;		
	}
	return 0;
}
