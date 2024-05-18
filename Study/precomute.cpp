#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int main(){
	int n;
	cin>>n;
	int a[n],count[N];
	for(int i = 0 ; i < N ; i ++){
		count[i] = 0;
	}

	for(int i = 0 ; i < n ; i ++){
		int var;
		cin>>var;
		a[i] = var;
		count[var]++;
	}

	int q;
	cin>>q;
	while(q--){
		int x;
		cin>>x;
		cout<<count[x]<<endl;
	}
}