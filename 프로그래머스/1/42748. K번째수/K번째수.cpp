#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> temp;
    for(int y = 0; y < commands.size(); y++)
    {
        int i = commands[y][0];
        int j = commands[y][1];
        int k = commands[y][2];
        
        vector<int> temp(array.begin() + i - 1, array.begin() + j);
        sort(temp.begin(), temp.end());
        answer.push_back(temp[k-1]);
    }
    return answer;
}