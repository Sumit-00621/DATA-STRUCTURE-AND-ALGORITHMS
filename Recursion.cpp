#include <bits\stdc++.h>
using namespace std;

void PrintNameNtimes(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << "Sumit Sharma" << " ";
    PrintNameNtimes(i + 1, n);
}

void Print1toN(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << i << " ";
    Print1toN(i + 1, n);
}

void PrintNto1(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    cout << i << " ";
    PrintNto1(i - 1, n);
}

// using BackTracking
void print1toN_1(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    print1toN_1(i - 1, n);
    cout << i << " ";
}

// using BackTracking
void printNto1_1(int i, int n)
{
    if (i > n)
    {
        return;
    }
    printNto1_1(i + 1, n);
    cout << i << " ";
}

int SumOfNumbers(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + SumOfNumbers(n - 1);
}

int FactorialofN(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * FactorialofN(n - 1);
}

vector<int> ReverseArray(vector<int> &v, int l, int r)
{
    if (l > r)
    {
        return v;
    }
    swap(v[l], v[r]);
    return ReverseArray(v, l + 1, r - 1);
}

bool CheckStringPalindrome(string s, int l, int r)
{
    if (l >= r)
    {
        return true;
    }
    if (s[l] != s[r])
    {
        return false;
    }
    return CheckStringPalindrome(s, l + 1, r - 1);
}

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n = 4;
    cout << fibonacci(n);
}