#include <string>
#include <vector>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    
    int countStudent = number.size();
    for (int i = 0; i < countStudent - 2; i++)
    {
        for (int j = i + 1; j < countStudent - 1; j++)
        {
            for (int k = j + 1; k < countStudent; k++)
            {
                if (number[i] + number[j] + number[k] == 0)
                {
                    answer++;
                }
            }
        }
    }
    
    return answer;
}
