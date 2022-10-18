#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t!=0){
		int n;
		cin>>n;
		vector<int>vec(n);
		for(int i=0;i<n;i++){
			cin>>vec[i];
		}
		int x=*max_element(vec.begin(), vec.end());
		int y=*min_element(vec.begin(), vec.end());
		if(y==x){
		cout<<0<<endl;
		}
		else if(vec[n-1]==x){
			cout<<1<<endl;
		}
		else 
		cout<<2<<endl;
		
		t--;
	}

}
