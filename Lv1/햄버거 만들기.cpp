#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredients) {
    int answer = 0;

    vector<int> cuttingBoard;
    cuttingBoard.reserve(ingredients.size());

    int i = 0;
    for (int ingredient : ingredients)
    {
        if (ingredient == 1 && i >= 3)
        {
            if (cuttingBoard[i - 1] == 3 && cuttingBoard[i - 2] == 2 && cuttingBoard[i - 3] == 1)
            {
                answer++;
                i -= 3;
                continue;
            }
        }

        cuttingBoard[i] = ingredient;
        i++;
    }

    return answer;
}
