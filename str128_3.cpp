#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	vector<int> a;
	cin>>t;
	while(t--){
	    
	    int size;;
	    cin>>size;

	    for(int i = 0 ; i < size ; i++){
	        int e;
	        cin>>e;
	        a.push_back(e);
	    }

	    int expected = 0 ,counter =0;
	    sort(a.begin(),a.end());
	    
	    for(int i = 0 ; i < size && expected <= size - 1 ; i++ ){
	        
	            if(a[i] > expected){
	                counter = counter + a[i] - expected;
	            }
	             else if(a[i] < expected){
	                counter = counter + expected - a[i];
	            }
	        expected++;
	    }
	    cout<<counter<<"\n";
	    a.clear();
	}

}