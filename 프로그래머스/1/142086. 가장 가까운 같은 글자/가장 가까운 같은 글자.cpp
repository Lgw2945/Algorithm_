#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer(s.size(), -1);
    
    for (int i = s.size() - 1; i >= 0; i--)
    {
        for(int j = i - 1; j >= 0; j--)
        {
            if(s[i] == s[j])
            {
                answer[i] = i - j;
                break;
            }
        }
    }
    return answer;
}