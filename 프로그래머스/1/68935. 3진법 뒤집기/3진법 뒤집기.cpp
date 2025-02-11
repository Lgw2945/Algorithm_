#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n) {
    int answer = 0;
    int pow = 1;
    string a = "";
    while(n)
    {
        a = to_string(n % 3) + a;
        n /= 3;
    }
    
    reverse(a.begin(), a.end());
    
    for(int i = a.length() - 1; i >= 0; i--)
    {
        answer += (a[i] - '0') * pow;
        pow *= 3;
        
    }
    return answer;
}