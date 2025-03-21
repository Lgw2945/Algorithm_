#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int a = 0;
    int b = 0;
    char x;
    
    for(int i = 0; i < s.length(); i++)
    {
        if(a == 0 && b == 0) {
            x = s[i];
        }
        
        if(s[i] == x)
        {
            a++;
        }
        else
        {
            b++;
        }
        
        if(a == b)
        {
            answer++;
            a = 0;
            b = 0;
        }   
    }
    
    if(a > 0 || b > 0)
    {
        answer++;
    }
    
    return answer;
}