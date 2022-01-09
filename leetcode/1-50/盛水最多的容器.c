int maxArea(int* height, int heightSize){
    int left = 0;
    int right = heightSize - 1;
    int maxarea = 0;
    while (left < right) {
        int area;
        if (height[left] < height[right]) {
            area = (right - left) * height[left];
            left++;
        } else {
            area = (right - left) * height[right];
            right--;
        }
        maxarea = fmax(maxarea, area);
    }
    return maxarea;
}
