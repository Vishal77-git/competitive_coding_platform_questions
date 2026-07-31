void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    for(int i = m; i < n + m; i++){
        nums1[i] = nums2[i - m];
    }
    for (int pass = 0; pass < nums1Size - 1; pass++) {
    for (int i = 0; i < nums1Size - pass - 1; i++) {
        if (nums1[i] > nums1[i + 1]) {
            int temp = nums1[i];
            nums1[i] = nums1[i + 1];
            nums1[i + 1] = temp;
        }
    }
}
}