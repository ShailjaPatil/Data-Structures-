#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t!=0){
		long long n,sum=0;
		cin>>n;
		long long b[2*n];
		for(int i=0;i<2*n;i++){
			cin>>b[i];
		sum+=b[i];
		}
		if(sum%2==0)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	
		t--;
	}
}
