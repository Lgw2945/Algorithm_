#include <string> //필요없음
#include <vector> //필요없음
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    long long x = sqrt(n);
    if(x*x == n) return pow(x+1,2);
    return -1;
}
