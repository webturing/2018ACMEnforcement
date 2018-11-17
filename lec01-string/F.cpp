#include<iostream>
#include<string>
#include<algorithm>
#define endl '\n'

int main() {
	int n;
	std::cin>>n;
	while(n--) {
		std::string a,b;
		std::cin>>a>>b;
		std::sort(a.begin(),a.end());
		std::sort(b.begin(),b.end());
		a.erase(unique(a.begin(),a.end()),a.end());
		b.erase(unique(b.begin(),b.end()),b.end());	
		if(a==b)std::cout<<"Yes"<<endl;
		else std::cout<<"No"<<endl;
	
	}
	return 0;
}
