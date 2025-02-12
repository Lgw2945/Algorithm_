#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string s) {
    int a = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == ' ')
        {
            a = 0;
            continue;
        }
        if(a % 2 == 0)
        {
            s[i] = toupper(s[i]);
        }
        else
        {
            s[i] = tolower(s[i]);
        }
        a++;
    }
    return s;
}