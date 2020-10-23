#include<iostream>
#include <conio.h>
using namespace std;
int getdirection()
{
    int ret = 0;
    while (ret == 0)
    {
        int ch = _getch();
        if (isascii(ch))
            continue;
        ch = _getch();
        switch (ch)
        {
        case 72:ret = 1;
            break;
        case 80:ret = 2;
            break;
        default:
            break;
        }
    }
    return ret;
}
int main()
{
    for (int k = 0; k < 10; k++)
        cout << getdirection();
    system("pause");
    return 0;
}