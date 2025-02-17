#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    long long b = stoll(p);
    int len = p.length();
    
    for(int i = 0; i <= t.length() - len; i++)
    {
        long long a = stoll(t.substr(i, len));
        if(a <= b)
        {
            answer++;
        }
    }
    return answer;
}