#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    int answer = 0;
    
    while (slice * answer < n)
    {
        answer++;
    }
    
    return answer;
}
