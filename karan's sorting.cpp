#include<bits/stdc++.h>
#include<string>
using namespace std;
//void duplicates(string);
int main(){


	long int h = 0,x=1,i=0;
	string s;
	cin>>s;

	if((s[0] >= 'a' && s[0] <= 'z') || (s[0] >= 'A' && s[0] <= 'Z') ){

		char array[26] = {};
		for(int j=0;j<26;j++){
			array[j] = j + 'a' ;
		}

		for(int i=0;i<s.length();i++){
			if((s[i] >= 'A' && s[i] <= 'Z')){
				s[i] = s[i] + 32;
			}
		}
		for(int i=0;i<s.length();i++){
			x=1;
			x = x << int(s[i]) - 97;
			h = (h|x);
		}
		for(int  i=0;i<26;i++){
			x=1;
			x = x << i;
			if( (x&h) > 0 ){
				cout<<array[i]<<" ";
			}
    	}
	}
	else if(s[i] >= '0' && s[i] <= '9'){
		char array[10] = {'0','1','2','3','4','5','6','7','8','9'};
		for(int i=0;i<s.length();i++){
			x=1;
			x = x << int(s[i]) - 48;
			h = (h|x);
		}
		for(int  i=0;i<10;i++){
			x=1;
			x = x << i;
			if( (x&h) > 0 ){
				cout<<array[i]<<" ";
			}
		}
	}


	return 0;
}
