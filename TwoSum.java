import java.util.HashMap;
import java.util.Map;

public class TwoSum {
    public static void main(String[] args) {

    }
    public static int[] twoSum(int[] nums, int target) {
        // Create a map to store the complements and their corresponding indices.
        Map<Integer, Integer> complements = new HashMap<>();
        // Loop through the array of numbers.
        for (int i = 0; i < nums.length; i++) {
            // Check if the current number is in the map. If it is, that means we have found a pair of numbers that add up to the target.
            Integer complementIndex = complements.get(nums[i]);
            // If the complementIndex is not null, it means we have found a pair that adds up to the target.
            if (complementIndex != null) {
                // Return the indices of the two numbers that add up to the target.
                return new int[]{i, complementIndex};
            }
            // If we haven't found a pair, store the complement of the current number (target - nums[i]) and its index in the map.
            complements.put(target - nums[i], i);
        }
        // If the function has not returned by this point, no two numbers that add up to the target have been found.

        return nums;
    }

}