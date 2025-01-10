#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = false;
    int origin_x = x;
    int a = 0;
    while(x > 0)
    {
        a += x % 10;
        x /= 10;
    }
    if(origin_x % a == 0) answer = 1;
    return answer;
}