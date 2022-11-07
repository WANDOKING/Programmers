#include <string>
#include <vector>

using namespace std;

vector<int> solution(int denum1, int num1, int denum2, int num2) {
    
    int resultDenum = denum1 * num2 + denum2 * num1;
    int resultNum = num1 * num2;
    
    int a = resultDenum;
    int b = resultNum;
    while (a % b != 0)
    {
        int temp = a;
        a = b;
        b = temp % b;
    }
    int gcd = b;
    
    vector<int> answer;
    answer.push_back(resultDenum / gcd);
    answer.push_back(resultNum / gcd);
    
    return answer;
}
