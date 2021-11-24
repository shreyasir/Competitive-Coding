// https://leetcode.com/problems/two-sum/
public class Two_Sum
{
    //Solution 1
    public int[]? TwoSum1(int[] nums, int target)
    {
        for (int i = 0; i < nums.Length; i++)
        {
            for (int j = i + 1; j < nums.Length; j++)
            {
                if (i != j)
                {
                    int value = nums[i] + nums[j];
                    if (value == target)
                    {
                        return new int[] { i, j };
                    }
                }
            }
        }
        return null;
    }

    //Solution 2
    public int[]? TwoSum2(int[] nums, int target)
    {
        Dictionary<int, int> result = new Dictionary<int, int>();
        for (int i = 0; i < nums.Length; i++)
        {
            if (result.ContainsKey(target - nums[i]))
            {
                return new int[] { i, result[target - nums[i]] };
            }
            result.Add(nums[i], i);
        }
        return new int[] { 0, 0 };
    }
}