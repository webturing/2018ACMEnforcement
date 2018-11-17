#include<iostream>
#include<string> //class string public:vector
using namespace std;
int main() {
	string a;//a is empty
	string b(3,'a');
	cout<<b<<endl;
	char s[100]="abc";
	string c(s+1,2);
	cout<<c<<endl;
	string c2("def");
	
	string d(c2.begin()+1,c2.end());
	cout<<d<<endl;
	string e(c2.rbegin(),c2.rend());
	cout<<e<<endl;
	printf("%s",e.c_str());
	
}
