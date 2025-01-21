#include <vector>
#include <numeric>

using namespace std;

int solution(vector<int> numbers) {
    int total = 0;
    for (int i = 0; i <= 9; i++) {
        total += i;
    }
    int sum = accumulate(numbers.begin(), numbers.end(), 0);
    
    return total - sum;
}