#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool com(char a, char b) {
    return a > b;
}

long long solution(long long n) {
    long long answer = 0;
    
    string a = to_string(n);
    
    sort(a.begin(), a.end(), com);
    
    return answer = stoll(a);
}