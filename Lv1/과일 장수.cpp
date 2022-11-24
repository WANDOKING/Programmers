#include <string>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> scores) {
    int answer = 0;
    
    sort(scores.rbegin(), scores.rend());
    
    int appleInBoxCount = 0;
    int minAppleScore = INT_MAX;
    for (int score : scores)
    {
        if (score < minAppleScore)
        {
            minAppleScore = score;
        }
        appleInBoxCount++;
        
        if (appleInBoxCount == m)
        {
            answer += minAppleScore * m;
            appleInBoxCount = 0;
            minAppleScore = INT_MAX;
        }
    }
    return answer;
}
