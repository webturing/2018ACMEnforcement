#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#define endl '\n'
#define FOR(i,a,b) for(int i=a;i<=b;i++)
int main() {
	FOR(a,1,333)FOR(b,a+1,500){
		int c=1000-a-b;
		if(c<=b)continue;
		c=sqrt(a*a+b*b);
		if(c*c==a*a+b*b){
			std::cout<<a<<" "<<b<<" "<<c<<endl;
		}
	}
	return 0;
}
