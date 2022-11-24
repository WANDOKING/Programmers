#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    bool bIsNotPrime[1000001] = { false, };
    int sqrtN = sqrt(n);
    
    for (int i = 2; i <= sqrtN; ++i)
    {
        for (int j = i * 2; j <= n; j += i)
        {
            bIsNotPrime[j] = true;
        }
    }
    
    int answer = 0;
    for (int i = 2; i <= n; ++i)
    {
        if (bIsNotPrime[i] == false)
        {
            answer++;
        }
    }
    
    return answer;
}
