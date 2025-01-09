#include <string>
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

--- or ---

#include <string>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;

    string a = to_string(n);
    sort(a.begin(), a.end(), greater<char>());
    return answer = stoll(a);
}
