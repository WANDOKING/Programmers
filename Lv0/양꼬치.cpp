#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    
    k -= (n / 10);
    if (k < 0)
    {
        k = 0;
    }
    
    return 12000 * n + k * 2000;
}
