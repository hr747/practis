#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string document, history;

    for (int i = 0; i < n; i++)
    {
        string action;
        cin >> action;

        if (action == "TYPE")
        {
            char letter;
            cin >> letter;
            document.push_back(letter);
            history.clear();
        }
        else if (action == "UNDO")
        {
            if (!document.empty())
            {
                history.push_back(document.back());
                document.pop_back();
            }
        }
        else if (action == "REDO")
        {
            if (!history.empty())
            {
                document.push_back(history.back());
                history.pop_back();
            }
        }
    }

    cout << document << endl;
    return 0;
}