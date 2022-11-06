#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    
    int countEmptyCola = n;
    
    while (countEmptyCola >= a)
    {
        int countNewCola = countEmptyCola / a * b;
        answer += countNewCola;
        countEmptyCola = (countEmptyCola % a) + countNewCola;
    }
    
    return answer;
}
