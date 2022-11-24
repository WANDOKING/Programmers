#include <string>
#include <vector>

using namespace std;

int g_num = -1;
int g_result = -1;

void solveRecursive(const string& target, string temp = "")
{
    g_num++;

    if (temp == target)
    {
        g_result = g_num;
        return;
    }

    if (temp.size() == 5)
    {
        return;
    }

    solveRecursive(target, temp + 'A');
    solveRecursive(target, temp + 'E');
    solveRecursive(target, temp + 'I');
    solveRecursive(target, temp + 'O');
    solveRecursive(target, temp + 'U');
}

int solution(string word)
{
    solveRecursive(word);
    return g_result;
}
