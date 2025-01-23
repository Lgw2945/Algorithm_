#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int i = s.size() / 2;
    
    if(s.size() % 2 == 0)
    {
        answer.push_back(s[i-1]);
        answer.push_back(s[i]);
    }
    else
    {
        answer.push_back(s[i]);
    }
    return answer;
}