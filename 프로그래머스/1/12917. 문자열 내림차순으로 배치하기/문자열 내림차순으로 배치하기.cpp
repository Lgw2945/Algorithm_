#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    for(int i = 0; i < s.size(); i++)
    {
        char a = s[i];
        int del = 0;
        for(int j = i+1; j < s.size(); j++)
        {
            if(a < s[j])
            {
                a = s[j];
                del = j;
            }
        }
        answer.push_back(a);
        s.erase(del, 1);
        i--;
    }
    return answer;
}