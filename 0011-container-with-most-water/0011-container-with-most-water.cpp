class Solution {
public:
    int maxArea(vector<int>& height) {
        int low = 0;
        int high = height.size() - 1;
        int area = 0;
        for (int i = 0; i < height.size(); i++) {
            while (high > low) {
                int length = min(height[low], height[high]);
                int breadth = high - low;
                area = max(area,length * breadth);
                if(height[low]<height[high])
                low++;
                else
                high--;
            }
        }
        return area;
    }
};