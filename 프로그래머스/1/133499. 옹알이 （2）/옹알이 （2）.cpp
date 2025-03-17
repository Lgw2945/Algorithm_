#include <string>
#include <vector>

using namespace std;

bool canMake(string s, string prev, vector<string>& talk) {
    if (s.empty()) return true;
    
    for (string word : talk) {
        if (s.substr(0, word.length()) == word) {
            if (word != prev) {
                string next = s.substr(word.length());
                if (canMake(next, word, talk)) return true;
            }
        }
    }
    return false;
}

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> talk = {"aya", "ye", "woo", "ma"};
    
    for (string s : babbling) {
        if (canMake(s, "", talk)) {
            answer++;
        }
    }
    return answer;
}