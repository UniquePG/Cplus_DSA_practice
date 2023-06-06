#include <iostream>
using namespace std;

int main()
{
    // Largest word in a sentance
    int n;
    cout << "Enter lenght of the word: " << endl;
    cin >> n;
    cin.ignore();

    char arr[n + 1];
    cout << "Enter Your sentance: " << endl;
    cin.getline(arr, n); // To take input of whole sentance with space
    cin.ignore();        // jab getline function use hoga to ise likhna he hai

    int i = 0;
    int currlen = 0;
    int maxlen = 0;
    int st = 0, maxst = 0;

    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (currlen > maxlen)
            {
                maxlen = currlen;
                maxst = st;     // largest word print karane ke liye
            }
            currlen = 0;
            st = i + 1;
        }
        else
            currlen++;

        if (arr[i] == '\0')
            break;

        i++;
    }

    cout << "Largest word lenght: " << endl;
    cout << maxlen << endl;
    cout << "Largest word: " << endl;
    for (int i = 0; i < maxlen; i++)
    {

        cout << arr[i + maxst];
    }
    return 0;
}