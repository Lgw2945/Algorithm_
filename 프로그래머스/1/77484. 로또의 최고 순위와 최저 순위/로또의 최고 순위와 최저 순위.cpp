#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int count = 0;
    int zero = 0;
    
    for(int a : lottos)
    {
        if(a == 0)
        {
            zero++;
        }
        else
        {
            for(int b : win_nums)
            {
                if(a == b)
                {
                    count++;
                    break;
                }
            }
        }
    }
    int max = count + zero;
    int min = count;
    
    int max_rank = (max >= 2) ? 7 - max : 6;
    int min_rank = (min >= 2) ? 7 - min : 6;
    
    answer.push_back(max_rank);
    answer.push_back(min_rank);
    
    return answer;
}