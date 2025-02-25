#include <string>
#include <vector>
#include <set>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> tmp;
    for(int i = 0; i < numbers.size() - 1; i++)
    {
        for(int j = i+1; j < numbers.size(); j++)
        {
            tmp.push_back(numbers[i] + numbers[j]);
        }
    }
    set<int> answerSet(tmp.begin(), tmp.end());
    vector<int> answer(answerSet.begin(), answerSet.end());
    return answer;
}