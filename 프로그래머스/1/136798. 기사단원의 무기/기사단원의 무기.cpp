#include <string>
#include <vector>

using namespace std;

int Divisor(int n) 
{
    int count = 0;
    for (int x = 1; x * x <= n; x++) 
    {
        if (n % x == 0) 
        {
            count++;
            if (x != n / x) 
            {
                count++;
            }
        }
    }
    return count;
}

int solution(int number, int limit, int power) {
    int answer = 0;    
       
    for(int i = 1; i <= number; i++)
    {
        int tmp = Divisor(i);
        if(tmp <= limit)
        {
            answer += tmp;
        }
        else
        {
            answer += power;
        }
    }
    return answer;
}