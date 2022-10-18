#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t!=0){
		int n,x,max;
		cin>>n>>x;
		int a[n];
		max=x;
		for(int i=0;i<n;i++){
			cin>>a[i];
			x+=a[i];
			if(x>max)
			max=x;
		}
		cout<<max<<endl;
		t--;
	}
}
