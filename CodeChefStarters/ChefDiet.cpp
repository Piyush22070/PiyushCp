#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k,a,store;
	    bool pass = true;
	    cin>>n>>k;
	    for(int i = 1 ; i <= n ; i++){
	        cin>>a;
	        if( a >= k){
	             store = a-k;
	        }
	        if(a < k){
	            a = a+ store;
	            if( a <  k){
	                cout<<"NO "<<i<<endl;
	                pass = false;
	                store = 0 ;
	                break;
	            }else{
	                store = a-k;
	            }
	        }
	        
	    }
	    if(pass){
	        cout<<"YES\n";
	    }
	   
	    
	}

}
