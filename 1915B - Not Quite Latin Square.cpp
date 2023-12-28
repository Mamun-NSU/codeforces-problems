#include <iostream>
#include <vector>

using namespace std;

char findReplacedLetter(const vector<string> &latinSquare)
{
    for (char ch = 'A'; ch <= 'C'; ++ch)
    {
        bool found = false;

        for (int i = 0; i < 3; ++i)
        {
            int count = 0;
            for (int j = 0; j < 3; ++j)
            {
                if (latinSquare[i][j] == ch || latinSquare[i][j] == '?')
                {
                    count++;
                }
            }
            if (count == 2 && (latinSquare[i][0] == '?' || latinSquare[i][1] == '?' || latinSquare[i][2] == '?'))
            {
                found = true;
                break;
            }
        }
        if (!found)
        {

            for (int j = 0; j < 3; ++j)
            {
                int count = 0;
                for (int i = 0; i < 3; ++i)
                {
                    if (latinSquare[i][j] == ch || latinSquare[i][j] == '?')
                    {
                        count++;
                    }
                }
                if (count == 2 && (latinSquare[0][j] == '?' || latinSquare[1][j] == '?' || latinSquare[2][j] == '?'))
                {
                    found = true;
                    break;
                }
            }
        }

        if (!found)
        {
            return ch;
        }
    }

    return '!';
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        vector<string> latinSquare(3);

        for (int i = 0; i < 3; ++i)
        {
            cin >> latinSquare[i];
        }

        char result = findReplacedLetter(latinSquare);
        if (result != '!')
        {
            cout << result << endl;
        }
        else
        {
            cout << "Missing letter not found!" << endl;
        }
    }

    return 0;
}
