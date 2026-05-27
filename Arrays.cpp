#include <bits\stdc++.h>
using namespace std;

int largestNumber(vector<int> v)
{
    int large = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] > large)
        {
            large = v[i];
        }
    }
    return large;
}

int SecondLargest(vector<int> v)
{
    int large = v[0];
    int slarge = -1;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] > large)
        {
            slarge = large;
            large = v[i];
        }
    }
    return slarge;
}

bool CheckArraySorted(vector<int> v)
{
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] > v[i + 1])
        {
            return false;
        }
    }
    return true;
}

void RemoveDuplicates(vector<int> v)
{
    vector<int> ans;
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] == v[i + 1])
        {
            v[i] = -1;
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] != -1)
        {
            ans.push_back(v[i]);
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}

void LeftRotatebyD(vector<int> &v, int d)
{
    reverse(v.begin(), v.end());
    reverse(v.begin() + d, v.end());
    reverse(v.begin(), v.begin() + d);
}

void MoveAllZerosToEnd(vector<int> &v)
{
    int left = 0;
    int right = v.size() - 1;
    while (left < right)
    {
        if (v[left] == 0 && v[right] != 0)
        {
            swap(v[left], v[right]);
            left++;
            right--;
        }
        else
        {
            if (v[left] != 0)
            {
                left++;
            }
            if (v[right] == 0)
            {
                right--;
            }
        }
    }
}

int LinearSearch(vector<int> v, int k)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == k)
        {
            return i;
        }
    }
    return -1;
}

void UnionOfArrays(vector<int> a, vector<int> b)
{
    vector<int> ans;
    int left = 0;
    int right = 0;
    while (left < a.size() && right < b.size())
    {
        if (a[left] < b[right])
        {
            if (ans.size() == 0 || ans.back() != a[left])
            {
                ans.push_back(a[left]);
            }
            left++;
        }
        else
        {
            if (ans.size() == 0 || ans.back() != b[right])
            {
                ans.push_back(b[right]);
            }
            right++;
        }
    }

    if (right < b.size())
    {
        ans.push_back(b[right]);
        right++;
    }

    if (left < a.size())
    {
        ans.push_back(a[left]);
        left++;
    }

    for (auto it : ans)
    {
        cout << it << " ";
    }
}

void IntersectionOfArrays(vector<int> a, vector<int> b)
{
    vector<int> v;
    int left = 0;
    int right = 0;
    while (left < a.size() && right < b.size())
    {
        if (a[left] == b[right])
        {
            v.push_back(a[left]);
            left++;
            right++;
        }
        else
        {
            if (a[left] > b[right])
            {
                right++;
            }
            if (a[left] < b[right])
            {
                left++;
            }
        }
    }

    for (auto it : v)
    {
        cout << it << " ";
    }
}

int FindMissingNumber(vector<int> v)
{
    int sum = 0;
    int sumi = 0;
    sum = v[v.size() - 1] * (v[v.size() - 1] + 1) / 2;
    for (int i = 0; i < v.size(); i++)
    {
        sumi += v[i];
    }
    return sum - sumi;
}

int MaxConsecutiveOnes(vector<int> v)
{
    int one = 0;
    int maxone = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 1)
        {
            one++;
            maxone = max(one, maxone);
        }
        else
        {
            one = 0;
        }
    }
    return maxone;
}

int NumberAppearOnce(vector<int> v)
{
    int xr = 0;
    for (int i = 0; i < v.size(); i++)
    {
        xr = xr ^ v[i];
    }
    return xr;
}

int LongestSubarrayWithSumK(vector<int> v, int k)
{
    int left = 0;
    int right = 0;
    int sum = 0;
    int len = 0;
    int maxlen = 0;
    while (right < v.size())
    {
            sum += v[right];
            right++;
            len += 1;
        
        if(sum>k)
        {
            sum -= v[left];
            left++;
            len -= 1;
        }
        maxlen = max(len, maxlen);
    }
    return maxlen;
}

int main()
{
    vector<int> v = {1, 2, 3, 1, 1, 1, 1, 2, 3};
    int k = 6;
    cout << LongestSubarrayWithSumK(v, k);
}