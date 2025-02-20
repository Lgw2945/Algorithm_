#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    string tmp;
    vector<string> arr = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for(auto istrue : s)
    {
        if (isdigit(istrue))
        {
            answer = answer * 10 + istrue - '0';
        }
        else tmp.push_back(istrue);
        
        for(int i=0;i<=9;i++)
        {
            if (arr[i] == tmp)
            {
                answer = answer * 10 + i;
                tmp = "";
                break ;
            }
        }
    }
    return answer;
}