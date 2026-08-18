class Solution {
public:
    int trap(vector<int>& height) {
        int lmax = 0, rmax =0,  total =0,  left =0;
        int right = height.size()-1;
        while(left<right){
            if(height[left]<height[right]){
                if(lmax>height[left]){
                    total += lmax - height[left];
                }
                else{
                    lmax = height[left];
                }
                left++;
            }
            else{
                if(rmax > height[right]){
                    total += rmax - height[right];
                }
                else{
                    rmax = height[right];
                }
                right--;
            }
        }
        return total;
    }
};