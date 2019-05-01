#include <bits/stdc++.h>

using namespace std;

void powerCount(string s){	
	int n = s.size();
	vector<int> p(n);
	p[0] = 0;
	for(int i = 1;i<n;++i){
		int j = p[i-1];

		while(j>0 && s[i]!=s[j]){
			j = p[j-1];
		}
		
		//int result = 0;
		if(s[i] == s[j]){
			j = j+1;
			//result = j;
		}
		p[i] = j;
		//positions.push_back(p[i]);
	}

	int differentLetters = s.substr(0, n - p[n-1]).size();

	if(differentLetters==n){
		cout << 1 << "\n";
	}else{
		cout << n/differentLetters << "\n";
	}
}

int main(){

	string s;
	while(cin >> s && s!="."){
		powerCount(s);
	}
	//cout << "\n";

	return 0;
}