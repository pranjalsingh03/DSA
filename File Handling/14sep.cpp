#include<iostream>
#include<fstream>
#include<string>
using namespace std;


int main()
{
string s="welcome to programming in Java";
int len=s.length();
fstream file;
file.open("test.txt",ios::in|ios::out);
for(int i=0;i<len;i++)
file.put(s[i]);
file.seekg(0);
file.seekg(-4,ios::end);
char ch;
file.get(ch);
while(file.eof()==0)
{
	cout<<ch;
	file.get(ch);
}
return 0;
}

