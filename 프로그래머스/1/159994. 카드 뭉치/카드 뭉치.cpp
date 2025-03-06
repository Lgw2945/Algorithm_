#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
    vector<string> tmp;
    for(int i = 0; i < goal.size(); i++)
    {
        if(*cards1.begin() == goal[i])
        {
            tmp.push_back(*cards1.begin());
            cards1.erase(cards1.begin());
        }
        else if(*cards2.begin() == goal[i])
        {
            tmp.push_back(*cards2.begin());
            cards2.erase(cards2.begin());
        }
        else
        {
            answer = "No";
        }
    }
    if(tmp == goal)
    {
        answer = "Yes";
    }
    return answer;
}