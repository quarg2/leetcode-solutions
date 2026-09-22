class Solution {
    public int maxProfit(int[] prices) {
        int profit = 0;
        int buy = prices[0];

        for (int i = 0; i < prices.length; i++) {
            if (prices[i] < buy) {
                buy = prices[i];
            }
            profit = ((prices[i] - buy) > profit) ? prices[i] - buy : profit;
        }

        return profit;
    }
}

/*
Test cases
- prices = [7,1,5,3,6,4], result = 5
- prices = [7,6,4,3,1], result = 0
*/