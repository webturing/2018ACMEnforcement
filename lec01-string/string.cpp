#include<iostream>
#include<string> //class string public:vector
#include<algorithm>
int main() {
	std::string s;
	std::cout<<s<<"\n";
	s="abcaaa";
	std::cout<<s<<"\n";
	std::cout<<s.size()<<"\n";//s.length();
	sort(s.begin(),s.end());//vector
	std::cout<<s<<"\n";
	s=s+"hello";
	std::cout<<s<<"\n";
	s.erase(s.begin()+4);
	std::cout<<s<<"\n";
	//count char 'a' in string s
	std::cout<<std::count(s.begin(),s.end(),'a')<<"\n";
	//char 'x' first postion
	std::cout<<std::find(s.begin(),s.end(),'l')-s.begin()<<"\n";
	std::cout<<s.find('l')<<"\n";
	std::cout<<(s.find('x')==std::string::npos)<<"\n";
	reverse(s.begin(),s.end());
	std::cout<<s<<"\n";
	s.erase(s.begin()+s.find('a'),s.end());
	std::cout<<s<<"\n";
	string t(s);
	string w(s.begin(),begin()+5);
}
