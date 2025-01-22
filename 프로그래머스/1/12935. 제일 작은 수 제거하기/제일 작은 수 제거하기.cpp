#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int temp = 0;
    
    if(arr.size() == 1)
    {
        answer.push_back(-1);
        return answer;
    }
    
    for(int i = 1; i < arr.size(); i++)
    {
        if(arr[i] < arr[temp])
        {
            temp = i;
        }
    }
    arr.erase(arr.begin() + temp);
    return arr;
}