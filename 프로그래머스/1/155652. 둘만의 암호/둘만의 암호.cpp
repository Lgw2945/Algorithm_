#include <string>
#include <vector>
using namespace std;

string solution(string s, string skip, int index) {
    vector<char> valid_alpha;
    for (char c = 'a'; c <= 'z'; c++) 
    {
        bool is_skip = false;
        for (char skip_c : skip) 
        {
            if (c == skip_c) 
            {
                is_skip = true;
                break;
            }
        }
        if (!is_skip) 
        {
            valid_alpha.push_back(c);
        }
    }
    
    string answer = "";
    for (char c : s) {
        int curr_idx = 0;
        for (int i = 0; i < valid_alpha.size(); i++) 
        {
            if (c == valid_alpha[i]) 
            {
                curr_idx = i;
                break;
            }
        }
        
        int new_idx = (curr_idx + index) % valid_alpha.size();
        answer += valid_alpha[new_idx];
    }
    
    return answer;
}