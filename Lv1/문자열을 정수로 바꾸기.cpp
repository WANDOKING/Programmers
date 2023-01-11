#include <string>
#include <vector>

using namespace std;

int solution(string s) {

    int answer = 0;

    int temp = 1;
    for (auto it = s.rbegin(); it != s.rend(); ++it)
    {
        if (*it == '-')
        {
            answer *= -1;
            break;
        }
        else if (*it == '+')
        {
            break;
        }

        answer += temp * (*it - '0');
        temp *= 10;
    }

    return answer;
}
