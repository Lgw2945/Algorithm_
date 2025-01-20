#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    int num_cnt = phone_number.size();
    for (int i = 0; i < num_cnt; i++)
    {
        if (num_cnt - i > 4)
        {
            answer += '*';
        }
        else
        {
            answer += phone_number[i];
        }
    }
    return answer;
}