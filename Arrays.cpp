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

        if (sum > k)
        {
            sum -= v[left];
            left++;
            len -= 1;
        }
        maxlen = max(len, maxlen);
    }
    return maxlen;
}

vector<int> twoSum(vector<int> v, int target)
{
    vector<int> out;
    sort(v.begin(), v.end());
    int left = 0;
    int right = v.size() - 1;
    int sum = 0;
    while (left < right)
    {
        sum = v[left] + v[right];
        if (sum == target)
        {
            out.push_back(v[left]);
            out.push_back(v[right]);
            break;
        }
        if (sum > target)
        {
            right--;
        }
        else
        {
            left++;
        }
    }
    return out;
}

void SortArraysOf0_1_2(vector<int> &v)
{
    int left = 0;
    int right = v.size() - 1;
    int mid = 0;
    while (mid <= right)
    {
        if (v[mid] == 0)
        {
            swap(v[mid], v[left]);
            left++;
            mid++;
        }

        else if (v[mid] == 1)
        {
            mid++;
        }

        else if (v[mid] == 2)
        {
            swap(v[mid], v[right]);
            right--;
        }
    }
}

int MajorityElement(vector<int> v)
{
    int el = v[0];
    int cnt = 1;
    for (int i = 1; i < v.size(); i++)
    {
        if (cnt == 0)
        {
            el = v[i];
        }

        if (v[i] == el)
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }

    int cnt1 = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == el)
        {
            cnt1++;
        }
    }
    if (cnt1 > v.size() / 2)
    {
        return el;
    }
    return -1;
}

int MaximumSubarraySum(vector<int> v)
{
    int sum = 0;
    int maxi = INT_MIN;
    int start;
    int end;
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
        if (sum < 0)
        {
            sum = 0;
            start = i + 1;
        }

        if (sum > maxi)
        {
            end = i;
        }
        maxi = max(maxi, sum);
    }

    for (int i = start; i <= end; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return maxi;
}

vector<int> BuyandSellStock(vector<int> v)
{
    vector<int> ans;
    int profit = INT_MIN;
    int a = v[0];
    int b;
    for (int i = 1; i < v.size(); i++)
    {
        if (profit < v[i] - a)
        {
            profit = v[i] - a;
            b = v[i];
        }
        a = min(v[i], a);
    }
    ans.push_back(a);
    ans.push_back(b);
    return ans;
}

void RearrangeElementsBySign(vector<int> &v)
{
    int left = 0;
    int right = 1;
    while (left < v.size() && right < v.size())
    {
        if (v[left] < 0 && v[right] > 0)
        {
            swap(v[left], v[right]);
            left += 2;
            right += 2;
        }

        else if (v[left] > 0)
        {
            left += 2;
        }
        else if (v[right] < 0)
        {
            right += 2;
        }
    }
}

void NextPermutation(vector<int> &v)
{
    int indx = -1;
    for (int i = v.size() - 2; i >= 0; i--)
    {
        if (v[i] < v[i + 1])
        {
            indx = i;
            break;
        }
    }

    if (indx == -1)
    {
        reverse(v.begin(), v.end());
    }
    else
    {
        int mini = INT_MAX;
        int indx2;
        for (int i = indx + 1; i < v.size(); i++)
        {
            if (v[i] == 0)
            {
                continue;
            }
            else
            {
                mini = min(mini, v[i]);
                indx2 = i;
                swap(v[indx], v[indx2]);
            }
        }

        sort(v.begin() + indx + 1, v.end());
    }
}

vector<int> LeaderInArray(vector<int> v)
{
    vector<int> out;
    int left = 0;
    int right = 1;
    while (left < v.size())
    {
        if (right >= v.size())
        {
            out.push_back(v[left]);
            left++;
            right = left + 1;
            continue;
        }
        if (v[left] > v[right])
        {
            right++;
        }

        else
        {
            left++;
            right = left + 1;
        }
    }
    return out;
}

int LongestConsecutiveSequence(vector<int> v)
{
    sort(v.begin(), v.end());
    int el = v[0];
    int len = 1;
    int maxlen = INT_MIN;
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] == v[i + 1])
        {
            continue;
        }

        else if (v[i] + 1 == v[i + 1])
        {
            len++;
        }
        else
        {
            el = v[i + 1];
            len = 1;
        }
        maxlen = max(len, maxlen);
    }
    return maxlen;
}

void SetMatrixZero(vector<vector<int>> &v)
{
    vector<int> col(v[0].size(), 0);
    vector<int> row(v.size(), 0);
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            if (v[i][j] == 0)
            {
                col[j] = 1;
                row[i] = 1;
            }
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            if (col[j] == 1 || row[i] == 1)
            {
                v[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

void RotateImage(vector<vector<int>> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            swap(v[i][j], v[j][i]);
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        reverse(v[i].begin(), v[i].end());
    }

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

void SpiralMatrix(vector<vector<int>> v)
{
    int left = 0;
    int right = v[0].size() - 1;
    int top = 0;
    int bottom = v.size() - 1;

    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            cout << v[top][i] << " ";
        }
        top++;

        for (int i = top; i <= bottom; i++)
        {
            cout << v[i][right] << " ";
        }
        right--;

        for (int i = right; i >= left; i--)
        {
            cout << v[bottom][i] << " ";
        }
        bottom--;

        for (int i = bottom; i >= top; i--)
        {
            cout << v[i][left] << " ";
        }
        left++;
    }
}

void MajorityElementNby3(vector<int> v)
{
    vector<int> ans;
    map<int, int> mpp;
    for (int i = 0; i < v.size(); i++)
    {
        mpp[v[i]]++;
    }

    for (auto it : mpp)
    {
        if (it.second > v.size() / 3)
        {
            ans.push_back(it.first);
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}

void ThreeSum(vector<int> v)
{
    sort(v.begin(), v.end());
    set<vector<int>> st;
    for (int i = 0; i < v.size(); i++)
    {
        if (i > 0 && v[i] == v[i - 1])
        {
            continue;
        }
        int k = v.size() - 1;
        for (int j = i + 1; j < v.size(); j++)
        {
            while (j < k)
            {
                int sum = v[i];
                sum += v[j];
                sum += v[k];
                if (sum == 0)
                {
                    vector<int> temp = {v[i], v[j], v[k]};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                    j++;
                    k--;
                    while (j < k && v[j] == v[j - 1])
                        j++;
                    while (j < k && v[k] == v[k + 1])
                        k--;
                }
                else if (sum > 0)
                {
                    k--;
                }
                else
                {
                    j++;
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

void FourSum(vector<int> v, int target)
{
    sort(v.begin(), v.end());
    set<vector<int>> st;
    for (int i = 0; i < v.size(); i++)
    {
        if (i > 0 && v[i] == v[i - 1])
            continue;
        for (int j = i + 1; j < v.size(); j++)
        {

            int k = j + 1;
            int l = v.size() - 1;
            while (k < l)
            {
                int sum = v[i];
                sum += v[j];
                sum += v[k];
                sum += v[l];
                if (sum == target)
                {
                    vector<int> temp = {v[i], v[j], v[k], v[l]};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                    k++;
                    l--;
                    while (k < l && v[k] == v[k - 1])
                        k++;
                    while (k < l && v[l] == v[l - 1])
                        l--;
                }
                else if (sum > target)
                    l--;
                else
                    k++;
            }
        }
        vector<vector<int>> ans(st.begin(), st.end());
        for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < ans[i].size(); j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
    }
}

void CountSubarrayWithXorK(vector<int> v, int k)
{

    int cnt = 0;
    for (int i = 0; i < v.size(); i++)
    {
        int xr = 0;
        for (int j = i; j < v.size(); j++)
        {
            xr = xr ^ v[j];
            if (xr == k)
            {
                cnt++;
            }
        }
    }
    cout << cnt;
}

void MergeOverlapingIntervals(vector<vector<int>> v)
{
    sort(v.begin(), v.end());
    vector<vector<int>> ans;
    for (int i = 0; i < v.size(); i++)
    {
        if (ans.empty() || ans.back()[1] < v[i][0])
        {
            ans.push_back({v[i][0], v[i][1]});
        }
        else
        {
            ans.back()[1] = max(ans.back()[1], v[i][1]);
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

void MergeTwoSortedArray(vector<int> a, vector<int> b)
{
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int i = 0;
    int j = 0;
    while (j < b.size())
    {
        if (i >= a.size() || a[i] > b[j])
        {
            a.insert(a.begin() + i, b[j]);
            j++;
        }
        else
        {
            i++;
        }
    }
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}

void MissingAndRepeatedValue(vector<int> v)
{
    int dup = -1;
    int mis = -1;
    map<int, int> mpp;
    for (int i = 0; i < v.size(); i++)
    {
        mpp[v[i]]++;
    }
    for (int i = 1; i <= v.size(); i++)
    {
        if (mpp[i] == 2)
        {
            dup = i;
        }
        if (mpp[i] == 0)
        {
            mis = i;
        }
    }
    vector<int> ans = {dup, mis};
    for (auto it : ans)
    {
        cout << it << " ";
    }
}

void CountInversion(vector<int> v)
{
    int cnt = 0;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[i] > v[j])
            {
                cnt++;
            }
        }
    }
    cout << cnt;
}

void ReversePair(vector<int> v)
{
    int cnt = 0;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[i] > 2 * v[j])
            {
                cnt++;
            }
        }
    }
    cout << cnt;
}