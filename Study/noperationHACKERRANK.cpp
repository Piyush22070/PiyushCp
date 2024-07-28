#include <bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
long long int a[N];
int main(){
	int n,t,l,r,s;
	cin>>n>>t;
	while(t--){
		cin>>l>>r>>s;
		a[l] += s;
		a[r+1] -= s;
	}
	//prefix sum
	for(int i = 1 ; i <= n ; i++){
		a[i] += a[i-1];
	}

	long long  max= -1;
	for(int i = 1 ; i <= n ; i++){
		if( max < a[i] ){
			max = a[i];
		}
	}
	cout<<max;


}