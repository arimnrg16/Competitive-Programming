//Ari Whuandaniel Manurung (12S16015)

#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c,d;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>b;
		long long sum=0;
		int mins=1e7;
		
		for(int j=0;j<b;j++){
			cin>>c;
			sum+=c;
			mins=min(mins,c);
		}
		
		long long ret= sum-1ll*mins*b;
		cout<<ret<<endl;
		
	}
	
}



/*
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=1; i<=t; i++){		
		long long sum=0;
		int mins=1e7;
		int n;
		cin>>n;
		for(int j=0;j<n;j++){
			int x;
			cin>>x;
			sum+=x;
			mins=min(mins,x);
		}
		long long ret= sum-1ll*mins*n;
		cout<<ret<<endl;
		
	}
	return 0;
}

/*
Description:
*/

