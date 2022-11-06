#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) {
    int answer;
    if (common[1] - common[0] == common[2] - common[1])
    {
        int commonDiff = common[1] - common[0];
        answer = common[common.size() - 1] + commonDiff;
    }
    else
    {
        int commonRatio = common[1] / common[0];
        answer = common[common.size() - 1] * commonRatio;
    }
    
    return answer;
}
