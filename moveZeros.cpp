#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {0, 1, 0, 3, 12};
    int n = nums.size();
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] != 0)
        {
            nums[j] = nums[i];
            j++;
        }
    }
    for (int i = j; i < n; i++)
    {
        nums[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}