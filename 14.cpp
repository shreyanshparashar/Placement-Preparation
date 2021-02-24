#include<bits/stdc++.h>
using namespace std;

int main(){
	int n=5;
	int i , j;
	for(i=0; i<=n-3 ; i++){
		for(j=0 ; j<n-(i+3) ; j++){
			cout<< " ";
		}
		for(j=0 ; j<2*i+1 ; j++)
            cout<< j+1;
		cout<< endl;
	}
	for(i=0; i<n-3 ; i++){
		for(j=0 ; j<=i ; j++){
			cout<< " ";
		}
		for(j=0 ; j<2*n-2*(i+3)-1 ; j++)
            cout<< j+1;
		cout<< endl;
	}

}




