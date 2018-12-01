#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int add(int a,int b){
	return a+b;
}
void add2(int a,int b,int&c){
	c=a+b;
} 
int main(){
	int a=3,b=4,c;
	add2(a,b,c);
	cout<<c<<endl;
	return 0;
}

