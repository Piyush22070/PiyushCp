#include<bits/stdc++.h>
using namespace std;
char upper(char c){
	return 'A' + (c - 'a');
}
int main(){
	
	// getline(cin,s);
	 while(true){

	 string s ;
	 cin>>s;

	 if(s.size() == 0){
	 	break;
	 }

	// for(int i = 0 ; i < s.size();i++){
	// 	cout<<(char)toupper(s[i]);
	// }

	for(int i = 0 ; i < s.size();i++){
		s[i]= upper(s[i]);
	}
	cout<<s;

	}
}