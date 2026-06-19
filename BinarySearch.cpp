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

void KokoEatingBanana(vector<int> nums, int x)
{
    int ans;
    int low = 1;
    int high = *max_element(nums.begin(), nums.end());
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += ceil((double)nums[i] / mid);
        }
        if (sum <= x)
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

void MinimumDaysToMakeMBoquets(vector<int> nums, int m, int k)
{
    int out = -1;
    int low = *min_element(nums.begin(), nums.end());
    int high = *max_element(nums.begin(), nums.end());
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int cnt = 0;
        int ans = 0;
        if (nums.size() < (m * k))
        {
            out = -1;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] <= mid)
            {
                cnt++;
            }
            else
            {
                ans += cnt / k;
                cnt = 0;
            }
        }
        ans += cnt / k;
        if (ans < m)
        {
            low = mid + 1;
        }
        else
        {
            out = mid;
            high = mid - 1;
        }
    }
    cout << out;
}

void CapacityToShipPackagesWithinDDays(vector<int> nums, int d)
{
    int out;
    int low = *max_element(nums.begin(), nums.end());
    int high = accumulate(nums.begin(), nums.end(), 0);
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int cnt = 0;
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (cnt + nums[i] <= mid)
            {
                cnt += nums[i];
            }
            else
            {
                ans++;
                cnt = nums[i];
            }
        }
        ans++;
        if (ans <= d)
        {
            out = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << out;
}

void KthMissingPositiveNumber(vector<int> v, int k)
{
    int ans;
    int low = 0;
    int high = v.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int missing = v[mid] - (mid + 1);
        if (missing < k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    ans = low + k;
    cout << ans;
}

int main()
{
    vector<int> v = {4,7,9,10};
    int d = 4;
    KthMissingPositiveNumber(v, d);
}