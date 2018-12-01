#include<bits/stdc++.h>
using namespace std;
int gcd2(int a,int b){//∑«µ›πÈ–¥∑®  log(Max(a,b))
	while(b){
		int r=a%b;
		a=b;
		b=r;
	}
	return a;
}
int gcd(int a,int b){return b?gcd(b,a%b):a;} 
int lcm(int a,int b){
	return a/gcd(a,b)*b;
}
int main() {
	cout<<gcd(6,8)<<endl;
	cout<<__gcd(6,8)<<endl;
	int a[]={120,320,75,25,215};
	int s=0;
	for(int i=0;i<5;i++)//reduce
		s=gcd(s,a[i]);
		
	cout<<s<<endl;
	int p=1;
	for(int i=0;i<5;i++)
		p=lcm(p,a[i]);
	cout<<p<<endl;
	return 0;
}
