#include <iostream>
using namespace std;

void Pattern1(int n)
{
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void Pattern2(int n)
{
    // *
    // * *
    // * * *
    // * * * *
    // * * * * *

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void Pattern3(int n)
{
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void Pattern4(int n)
{
    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    // 5 5 5 5 5

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void Pattern5(int n)
{
    // * * * * *
    // * * * *
    // * * *
    // * *
    // *

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void Pattern6(int n)
{
    // 1 2 3 4 5
    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void Pattern7(int n)
{
    //         *
    //       * * *
    //     * * * * *
    //   * * * * * * *
    // * * * * * * * * *

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void Pattern8(int n)
{
    // * * * * * * * * *
    //   * * * * * * *
    //     * * * * *
    //       * * *
    //         *

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * (n - i) + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void Pattern9(int n)
{
    //         *
    //       * * *
    //     * * * * *
    //   * * * * * * *
    // * * * * * * * * *
    // * * * * * * * * *
    //   * * * * * * *
    //     * * * * *
    //       * * *
    //         *

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * (n - i) + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void Pattern10(int n)
{
    // *
    // * *
    // * * *
    // * * * *
    // * * * * *
    // * * * *
    // * * *
    // * *
    // *

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void Pattern11(int n)
{
    // 1
    // 0 1
    // 1 0 1
    // 0 1 0 1
    // 1 0 1 0 1

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i == j || (i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0))
            {
                cout << 1 << " ";
            }
            else
            {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
}

void Pattern12(int n)
{
    // 1             1
    // 1 2         2 1
    // 1 2 3     3 2 1
    // 1 2 3 4 4 3 2 1

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1 << " ";
        }
        for (int j = 1; j <= 2 * (n - i - 1); j++)
        {
            cout << "  ";
        }
        for (int j = i + 1; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void Pattern13(int n)
{
    // 1
    // 2  3
    // 4  5  6
    // 7  8  9  10
    // 11 12 13 14 15

    int a = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << a << " ";
            a++;
        }
        cout << endl;
    }
}

void Pattern14(int n)
{
    // A
    // A B
    // A B C
    // A B C D
    // A B C D E

    for (int i = 0; i < n; i++)
    {
        for (char j = 'A'; j <= 'A' + i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void Pattern15(int n)
{
    // A B C D E
    // A B C D
    // A B C
    // A B
    // A

    for (int i = 0; i < n; i++)
    {
        for (char j = 'A'; j <= 'A' + n - i - 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void Pattern16(int n)
{
    // A
    // B B
    // C C C
    // D D D D
    // E E E E E

    for (char i = 'A'; i < 'A' + n; i++)
    {
        for (int j = 0; j <= i - 65; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void Pattern17(int n)
{
    //         A
    //       A B A
    //     A B C B A
    //   A B C D C B A
    // A B C D E D C B A

    for (int i = 0; i < n; i++)
    {
        char a = 'A' - 1;
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            if (j < i)
            {
                a++;
                cout << a << " ";
            }
            else
            {
                a--;
                cout << a << " ";
            }
        }
        cout << endl;
    }
}

void Pattern18(int n)
{
    // E
    // D E
    // C D E
    // B C D E
    // A B C D E

    char a = 'E';
    for (int i = 0; i < n; i++)
    {
        for (char j = a; j <= a + i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
        a--;
    }
}

void Pattern19(int n)
{
    // * * * * * * * * * *
    // * * * *     * * * *
    // * * *         * * *
    // * *             * *
    // *                 *
    // *                 *
    // * *             * *
    // * * *         * * *
    // * * * *     * * * *
    // * * * * * * * * * *

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        for (int j = 0; j < 2 * i; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        for (int j = 0; j < 2 * (n - i - 1); j++)
        {
            cout << "  ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void Pattern20(int n)
{
    // *                 *
    // * *             * *
    // * * *         * * *
    // * * * *     * * * *
    // * * * * * * * * * *
    // * * * *     * * * *
    // * * *         * * *
    // * *             * *
    // *                 *

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        for (int j = 0; j < 2 * (n - i - 1); j++)
        {
            cout << "  ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 0; j <= n - 1 - i; j++)
        {
            cout << "* ";
        }
        for (int j = 0; j < 2 * i; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void Pattern21(int n)
{
    // * * * *
    // *     *
    // *     *
    // * * * *

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int n = 5;
    Pattern21(n);
}