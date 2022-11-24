#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money) {
    const int PRICE_ICE_AMERICANO = 5500;
    
    vector<int> answer;
    answer.push_back(money / PRICE_ICE_AMERICANO);
    answer.push_back(money % PRICE_ICE_AMERICANO);
    return answer;
}
