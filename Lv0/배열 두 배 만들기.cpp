#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    
    for (auto& number : numbers)
    {
        number *= 2;
    }
    
    return numbers;
}
