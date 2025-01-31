#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    for(int i = left; i <= right; i++)
    {
        vector<int> num;
        for(int j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {
                num.push_back(j);
            }
        }
        
        if(num.size() % 2 == 0)
        {
            answer += i;
        }
        else
        {
            answer -= i;
        }
    }
    return answer;
}