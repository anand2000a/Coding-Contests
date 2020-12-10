class Solution
{
public:
    int minOperations(vector<int> &nums)
    {
        int ans = 0;

        while (1)
        {
            int count = 0;

            int i;
            for (i = 0; i < n; i++)
            {

                if (nums[i] & 1)
                    break;

                else if (nums[i] == 0)
                    count++;
            }

            if (count == n)
                return ans;

            if (i == n)
            {

                for (int j = 0; j < n; j++)
                    nums[j] = nums[j] / 2;
                ans++;
            }

            for (int j = i; j < n; j++)
            {
                if (nums[j] & 1)
                {
                    nums[j]--;
                    ans++;
                }
            }
        }
    }
};