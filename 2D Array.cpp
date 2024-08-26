//Ari Whuandaniel Manurung (12S16015)
// new update from 2024


//kali ini kita diminta untuk membuat program untuk menghitung maksimum dari setiap matrix
//yang sudah dibagi bagi menjadi beberapa matrix kecil seperti yg udah dicatat kemarin

#include<bits/stdc++.h>
using namespace std;
/*
int main(){
	int matrix[6][6];
	for(int i=0; i<6; i++){//inputan matrixnya
		for(int j=0; j<6; j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	
	int maxsum = -1000,jj=0;
	for(int i=0; i<4; i++){
		int sum=0;
		for(int j=jj; j<jj+3; j++){
			sum+= matrix[i+2][j];
		}
		jj= (jj<3)? jj+1: 0;
		if(sum>maxsum) maxsum = sum;
		if( jj!= 0) i--;
	}
	printf (" %d", maxsum);
	return 0;
}

*/

int main(){
	vector<vector<int>> arr(6, vector<int>(6));
	for(int arr_i=0; arr_i<6;  arr_i++){
		for(int arr_j=0; arr_j< 6; arr_j++){
			cin>>arr[arr_i][arr_j];
		}
	}
	
	vector<int > res;
	res.reserve(18);
	
	for(unsigned int j=0; j<4; ++j){
		for(unsigned int i=0; i<4; ++i){
		res.push_back(arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2]);
		}
	}
	cout<<*max_element(res.begin(), res.end())<<endl;
	return 0;
}

/*
Description: https://www.hackerrank.com/challenges/2d-array/problem
*/

