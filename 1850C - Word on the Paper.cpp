#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        char grid[8][8];
        for (int i = 0; i < 8; ++i)
        {
            for (int j = 0; j < 8; ++j)
            {
                cin >> grid[i][j];
            }
        }

        string word;
        for (int j = 0; j < 8; ++j)
        {
            for (int i = 0; i < 8; ++i)
            {
                if (grid[i][j] != '.')
                {
                    word += grid[i][j];
                }
            }
        }

        cout << word << endl;
    }

    return 0;
}
