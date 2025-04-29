#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    long long value = 0;
    
    for(int i = 1; i <= N; i++)
    {
        value += i * (N / i);
    }
    
    cout << value << endl;
    
    return 0;
}