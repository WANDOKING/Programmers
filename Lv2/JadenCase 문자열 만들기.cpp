#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int i = 0;
    bool bConvertUppercase = true;
    while (s[i] != '\0')
    {
        if (bConvertUppercase == true)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                s[i] -= 32;
            }

            bConvertUppercase = false;
        }
        else
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] += 32;
            }
        }

        if (s[i] == ' ')
        {
            bConvertUppercase = true;
        }

        ++i;
    }

    return s;
}
