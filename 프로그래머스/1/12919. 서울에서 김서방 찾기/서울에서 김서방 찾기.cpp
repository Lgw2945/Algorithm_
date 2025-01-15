#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "김서방은 ";
    for(int x = 0; x < seoul.size(); x++)
    {
        if(seoul[x] == "Kim")
        {
            answer += to_string(x);
            //answer.push_back('에 있다');
            answer += "에 있다";
        }
    }
    //cout << "김서방은 " << answer << "에 있다";
    return answer ;
}