#include <bits/stdc++.h>
 
using namespace std;


int PowerOfN(int n){
	int ans=1;
	
	for(int i=1;i<n;i++){
		if(i*i<=n){
			ans=i;
		}
		else{
			break;
		}
	}
	return ans;
}
 
int main() {


	#ifndef ONLINE_JUDGE
	freopen("input1.txt","r",stdin);
	freopen("output1.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	

	cout<<PowerOfN(n);


    
    return 0;
}
