#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n][n];

	for(int i = 1 ; i <= n ; i++){
		
		//making the prefix sum
		// pfs[i] = pfs[i-1] + a[i]; 
		for(int j = 1 ; j <= n ; j++ ){
			cin>>a[i][j];
		}
	}
	
	int q;
	cin>>q;
	while(q--){

		int a1,b,c,d,sum =0;
		cin >> a1 >> b >> c >> d;
		for(int i = a1 ; i <= c ;i++){
			for(int j = b ; j <= d ; j++ ){
				sum = sum +a[i][j];			}
		}
		cout<<sum<<endl;
	}

}