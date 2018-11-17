#include<iostream>
#include<algorithm> //class string public:vector
using namespace std;
char foo(char&c){
	if(isupper(c))return tolower(c);
	else if(islower(c))return toupper(c);
	return c;
}
int main() {
	int a=3,b=4;
	cout<<max(a,b)<<endl;//max/min
	cout<<__gcd(a,b)<<endl;
	swap(a,b);
	string s="abasfdFJKDJK";
//	for(int i=0;i<s.size();i++)
	//	s[i]=tolower(s[i]);
//	cout<<s<<endl;
	//transform(s.begin(),s.end(),s.begin(),::toupper);
	transform(s.begin(),s.end(),s.begin(),foo);
	cout<<s<<endl;
	
	
}
