#include<iostream>
using namespace std;
int main (){
	cout<<"=== SEGITIGA ==="<<endl;
	int n = 6;
	for (int a = 1; a <= n; a++){
		for (int b = n; b > a; b--){
			cout<<" ";
		}
		for (int c = 1; c <= (2*a - 1); c++){
			cout<<"*";
		}
		cout<<endl;
	}
}
