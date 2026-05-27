#include <bits\stdc++.h>
using namespace std;

void CountDigits(int n)
{
    int cnt = 0;
    while (n > 0)
    {
        cnt++;
        n /= 10;
    }
    cout << cnt;
}

void ReverseNumber(int n)
{
    int rev = 0;
    while (n > 0)
    {
        rev *= 10;
        rev += n % 10;
        n /= 10;
    }
    cout << rev;
}

void CheckPalindrome(int n)
{
    int dup = n;
    int rev = 0;
    while (n > 0)
    {
        rev *= 10;
        rev += n % 10;
        n /= 10;
    }
    if (dup == rev)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}

void CheckArmstrong(int n)
{
    int dup = n;
    int arm = 0;
    while (n > 0)
    {
        arm += pow((n % 10), 3);
        n /= 10;
    }
    if (dup == arm)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}

// Brute Force
void DivisorOfNumber(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
}

// Better Approach
void DivisorOfNumberr(int n)
{
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            if (n / i != i)
            {
                cout << n / i << " ";
            }
        }
    }
}

// Brute Force
void CheckPrime(int n)
{
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt++;
        }
    }
    if (cnt == 2)
    {
        cout << "Prime";
    }
    else
    {
        cout << "Not Prime";
    }
}

// Better Approach
void CheckPrimee(int n)
{
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cnt++;
            if (n / i != i)
            {
                cnt++;
            }
        }
    }
    if (cnt == 2)
    {
        cout << "Prime";
    }
    else
    {
        cout << "Not Prime";
    }
}

// Brute Force
void HCF(int n1, int n2)
{
    int hcf;
    for (int i = min(n1, n2); i >= 1; i--)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            hcf = i;
            break;
        }
    }
    cout << hcf;
}

// Euclidean Algorithm
void HCFF(int n1, int n2)
{
    while (n1 > 0 && n2 > 0)
    {
        if (n1 > n2)
        {
            n1 = n1 % n2;
        }
        else
        {
            n2 = n2 % n1;
        }
    }
    if (n1 == 0)
    {
        cout << n2;
    }
    else
    {
        cout << n1;
    }
}

int main()
{
    int n1 = 25;
    int n2 = 5;
    HCFF(n1, n2);
}