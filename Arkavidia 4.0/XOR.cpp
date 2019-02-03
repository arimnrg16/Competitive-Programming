//Ari Whuandaniel Manurung (12S16015)

#include<bits/stdc++.h>
using namespace std;

	long long rec(long long x){
		if(x%4==0)
		return 0;
		if(x%4==3)
		return x^rec(x-1);	
	}
	
	int main(){
		int t;
		cin>>t;
		for(int i=0; i<t; i++){
			long long l,r;
			cin>>l>>r;
			
			printf("%lld\n",rec(r) ^ rec(l-1));
			cout<<endl;
		}


	return 0;
}

/*
Description:
*/

