class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxWater=0;
        int left=0, right = heights.size()-1;

        while(left <= right){
            int leftHeight= heights[left];
            int rightHeight= heights[right];
            int currentWater = min(leftHeight,rightHeight)*(right-left);
            maxWater = max(currentWater,maxWater);
            // if(leftHeight<heights[left+1])left++;
            // else if (rightHeight <heights[right-1])right--;
            // else {right--;left++;}
            if(leftHeight<rightHeight)left++;else right--;
        }
        return maxWater;
    }
};
