#include <string>
#include <vector>
#include <algorithm>//max쓸거

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int one[] = {1, 2, 3, 4, 5};
    int two[] = {2, 1, 2, 3, 2, 4, 2, 5};
    int three[] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    
    for(int i=0; i<answers.size(); i++){
        if(one[i%5] == answers[i]) count1++;
        if(two[i%8] == answers[i]) count2++;
        if(three[i%10] == answers[i]) count3++;            
    }
    
    int MaxCount = max({count1, count2, count3});
    
    if(MaxCount == count1) answer.push_back(1);
    if(MaxCount == count2) answer.push_back(2);
    if(MaxCount == count3) answer.push_back(3);
    
    return answer;
}