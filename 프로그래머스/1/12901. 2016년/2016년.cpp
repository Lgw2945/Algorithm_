#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    int tmp = 0;
    vector<int> mon = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector<string> week = { "FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    for (int i = 0; i < a - 1; i++)
    {
        tmp += mon[i];
    }
    tmp = (tmp + b - 1) % 7;
    answer = week[tmp];
    return answer;
}