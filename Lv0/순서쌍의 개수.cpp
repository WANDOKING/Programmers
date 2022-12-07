#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    int sqrtN = sqrt(n);
    for (int i = 1; i <= sqrtN; ++i)
    {
        if (n % i == 0)
        {
            answer++;
        }
    }
    
    if (sqrtN * sqrtN == n)
    {
        answer = answer * 2 - 1;
    }
    else
    {
        answer = answer * 2;
    }
    
    return answer;
}
