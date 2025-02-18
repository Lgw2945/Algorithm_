#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int width = 0;
    int height = 0;
    
    for(int i = 0; i < sizes.size();i++)
    {
        if( sizes[i][0] < sizes[i][1])
        {
            swap(sizes[i][1],sizes[i][0]);
        }
        
        width = max(width,sizes[i][0]);
        height = max(height,sizes[i][1]);
    }
    
    int answer = width * height;
    return answer;
}