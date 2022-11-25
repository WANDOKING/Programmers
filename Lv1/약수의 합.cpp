#include <string>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    int sqrtN = sqrt(n);
    
    for (int i = 1; i <= sqrtN; ++i)
    {
        if (n % i == 0)
        {
            answer += i;
            
            if (n / i != i)
            {
                answer += n / i;
            }
        }
    }
    
    return answer;
}
