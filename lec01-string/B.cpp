#include<iostream>
#include<string>
#include<algorithm>
#define endl '\n'
bool ok(std::string&s) {
	if(s.find('4')!=std::string::npos)return false;
	int six=std::count(s.begin(),s.end(),'6');
	int eight=std::count(s.begin(),s.end(),'8');
	return six+eight>=5;
}
int main() {
	int tot=0;
	std::string s;
	while(std::cin>>s) {
		if(ok(s)) {
			std::cout<<s<<endl;
			++tot;
		}
	}
	std::cout<<tot<<endl;
	return 0;
}
