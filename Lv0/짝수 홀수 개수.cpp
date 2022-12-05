#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    
    int countEven = 0;
    int countOdd = 0;
    
    for (int num : num_list)
    {
        if (num % 2 == 0)
        {
            countEven++;
        }
        else
        {
            countOdd++;
        }
    }
    
    answer.push_back(countEven);
    answer.push_back(countOdd);
    
    return answer;
}
