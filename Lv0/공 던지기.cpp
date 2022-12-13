#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    
    int index = 0;
    for (int i = 1; i < k; ++i)
    {
        index = (index + 2) % numbers.size();
    }

    return numbers[index];
}
