#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int countPizza = 1;
    
    while ((6 * countPizza) % n != 0)
    {
        countPizza++;
    }
    return countPizza;
}
