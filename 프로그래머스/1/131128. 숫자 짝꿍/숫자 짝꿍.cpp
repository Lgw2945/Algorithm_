#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string X, string Y) {
    int countX[10] = {0};
    int countY[10] = {0};
    
    for(char c : X) {
        countX[c - '0']++;
    }
    for(char c : Y) {
        countY[c - '0']++;
    }
    
    string answer = "";
    
    for(int i = 9; i >= 0; i--) {
        int common = min(countX[i], countY[i]);
        for(int j = 0; j < common; j++) {
            answer += (i + '0');
        }
    }
    
    if(answer.empty()) {
        return "-1";
    }
    if(answer[0] == '0') {
        return "0";
    }
    
    return answer;
}