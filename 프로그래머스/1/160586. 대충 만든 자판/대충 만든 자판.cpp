#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    unordered_map<char, int> char_cost;
    
    for (const string& keys : keymap) 
    {
        for (int i = 0; i < keys.size(); ++i) 
        {
            char c = keys[i];
            if (char_cost.find(c) == char_cost.end()) 
            {
                char_cost[c] = i + 1;
            } 
            else 
            {
                char_cost[c] = min(char_cost[c], i + 1);
            }
        }
    }
    
    vector<int> answer;
    
    for (const string& target : targets) 
    {
        int total_cost = 0;
        bool impossible = false;
        
        for (char c : target) 
        {
            if (char_cost.find(c) == char_cost.end()) 
            {
                impossible = true;
                break;
            }
            total_cost += char_cost[c];
        }
        answer.push_back(impossible ? -1 : total_cost);
    }
    
    return answer;
}