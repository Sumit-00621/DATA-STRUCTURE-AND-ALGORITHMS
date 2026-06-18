#include <bits/stdc++.h>
using namespace std;

void SearchInSortedArray(vector<int> v, int x)
{
    int ans;
    int low = 0;
    int high = v.size() - 1;
    int mid;
    while (mid <= high)
    {
        mid = (low + high) / 2;
        if (v[mid] == x)
        {
            ans = mid;
            break;
        }
        else if (v[mid] < x)
        {
            low = mid + 1;
        }

        else
        {
            high = mid - 1;
        }
    }
    cout << ans;
}

void LowerBound(vector<int> v, int x)
{
    int ans;
    int low = 0;
    int high = v.size() - 1;
    int mid = 0;
    while (mid <= high)
    {
        mid = (low + high) / 2;
        if (v[mid] >= x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << ans;
}

void UpperBound(vector<int> v, int x)
{
    int ans;
    int low = 0;
    int high = v.size() - 1;
    int mid = 0;
    while (mid <= high)
    {
        mid = (low + high) / 2;
        if (v[mid] > x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << ans;
}

void SearchInsertPosition(vector<int> v, int x)
{
    int ans;
    int low = 0;
    int high = v.size() - 1;
    int mid = 0;
    while (mid <= high)
    {
        mid = (low + high) / 2;
        if (v[mid] == x)
        {
            ans = mid;
            break;
        }
        if (v[mid] < x && v[mid + 1] > x)
        {
            ans = mid + 1;
            break;
        }

        else if (v[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << ans;
}

void FloorAndCielInSortedArray(vector<int> v, int x)
{
    int floor;
    int ciel;
    int low = 0;
    int high = v.size() - 1;
    int mid = 0;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (v[mid] > x)
        {
            ciel = v[mid];
            high = mid - 1;
        }
        else if (v[mid] < x)
        {
            floor = v[mid];
            low = mid + 1;
        }
        else
        {
            floor = v[mid];
            ciel = v[mid];
            break;
        }
    }
    cout << floor << " " << ciel;
}

void LastOccurenceInArray(vector<int> v, int x)
{
    int ans = -1;
    int low = 0;
    int high = v.size() - 1;
    int mid = 0;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (v[mid] == x)
        {
            ans = mid;
            low = mid;
        }
        else if (v[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << ans;
}

void CountOccurenceInSortedArray(vector<int> v, int x)
{
    int cnt = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == x)
        {
            cnt++;
        }
    }
    cout << cnt;
}

void SearchInRotatedSortedArrayI(vector<int> v, int x)
{
    int ans = -1;
    int low = 0;
    int high = v.size() - 1;
    int mid = 0;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (v[mid] == x)
        {
            ans = mid;
            break;
        }

        if (v[low] <= v[mid])
        {
            if (v[low] <= x && x < v[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (v[mid] < x && x <= v[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    cout << ans;
}

void SearchElementInRotatedSortedArrayII(vector<int> v, int x)
{
    bool ans = false;
    int low = 0;
    int high = v.size() - 1;
    int mid = 0;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (v[mid] == x)
        {
            ans = true;
            break;
        }
        if (v[low] == v[mid] && v[mid] == v[high])
        {
            low++;
            high--;
        }

        if (v[low] <= v[mid])
        {
            if (v[low] <= x && x < v[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (v[mid] < x && x <= v[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    cout << ans;
}

void MinimumInRotatedArray(vector<int> v)
{
    int low = 0;
    int high = v.size() - 1;
    while (low < high)
    {
        int mid = (low + high) / 2;
        if (v[mid] > v[high])
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    cout << v[low];
}

void FindHowManyTimesArrayRotated(vector<int> v)
{
    int low = 0;
    int high = v.size() - 1;
    while (low < high)
    {
        int mid = (low + high) / 2;
        if (v[mid] > v[high])
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    cout << low;
}

void PeakElementInRotatedArray(vector<int> v)
{
    int low = 0;
    int high = v.size() - 1;
    while (low < high)
    {
        int mid = (low + high) / 2;
        if (v[mid] > v[mid - 1] && v[mid] > v[mid + 1])
        {
            cout << mid;
            break;
        }
        if (v[mid] > v[high])
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
}

void FindigSqrtOfNUmber(int x)
{
    int ans;
    int low = 1;
    int high = 36;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (x < 2)
        {
            ans = x;
        }

        if (mid * mid <= x)
        {
            ans = mid;
            low = mid + 1;
        }

        else
        {
            high = mid - 1;
        }
    }
    cout << ans;
}

void nthRootOfNumber(int n, int x)
{
    int ans = -1;
    int low = 1;
    int high = 36;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        long long cube = 1;
        for (int i = 0; i < n; i++)
        {
            cube *= mid;
        }
        if (cube == x)
        {
            ans = mid;
            break;
        }
        if (cube < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << ans;
}

void SmallestDivisor(vector<int> v, int limit)
{
    sort(v.begin(), v.end());
    int ans;
    int low = 1;
    int high = v.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (v.size() > limit)
        {
            ans = -1;
            return;
        }
        int div = 0;
        for (int i = 0; i < v.size(); i++)
        {
            div += v[i] / mid;
        }
        if (div <= limit)
        {
            ans = v[mid];
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << ans;
}

int main()
{
    vector<int> v = {8, 4, 2, 3};
    int n = 10;
    SmallestDivisor(v, n);
}