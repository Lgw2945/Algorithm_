#include <vector>
#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; ++i) 
    {
        if (num % i == 0) return false;
    }
    return true;
}

int solution(vector<int> nums) {
    int answer = 0;
    int sum = 0;
    
    for(int x = 0; x < nums.size() - 2; x++)
    {
        for(int y = x + 1; y < nums.size() - 1; y++)
        {
            for(int z = y + 1; z < nums.size(); z++)
            {
                sum = nums[x] + nums[y] + nums[z];
                if (isPrime(sum)) 
                {
                    answer++;
                }
            }
        }
    }
    return answer;
}