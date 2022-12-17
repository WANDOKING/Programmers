#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    
    int max1 = -1;
    int max2 = -1;
    
    for (int num : numbers)
    {
        if (num > max1)
        {
            max2 = max1;
            max1 = num;
        }
        else if (num > max2)
        {
            max2 = num;
        }
    }
    
    return max1 * max2;
}
