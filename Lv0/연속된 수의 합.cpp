#include <string>
#include <climits>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    
    int start = -100;
    while (true)
    {
        int sum = 0;
        for (int i = 0; i < num; ++i)
        {
            sum += start + i;
        }
        
        if (sum == total)
        {
            for (int i = 0; i < num; ++i)
            {
                answer.push_back(start + i);
            }
            break;
        }
        
        start++;
    }
    
    return answer;
}
