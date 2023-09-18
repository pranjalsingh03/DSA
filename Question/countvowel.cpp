#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin("hello.txt");
    ofstream fout("output.txt", ios::out);
    string s, s1 = "";
    fin >> s;
    for (auto i : s)
    {
        if ((i == 'a' || i == 'e' || i == 'o' || i == 'u') && (s[0] != i))
        {
            fout << s << " ";
            cout << s << " " << endl;
            break;
            }
            else{
                fout<<s<<" "<<endl;
                }
                }
            }
        