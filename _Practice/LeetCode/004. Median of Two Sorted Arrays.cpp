// Binary search
// https://leetcode.com/problems/median-of-two-sorted-arrays/
// Time: O(log(min(n1, n2)))

class Solution {
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2) {
        if (nums1.size() > nums2.size()) {
            return findMedianSortedArrays(nums2, nums1);
        }
        int n1 = nums1.size();
        int n2 = nums2.size();

        int lo = 0, hi = n1;
        while (lo <= hi) {

            int pivot1 = lo + ((hi - lo) >> 1);
            int pivot2 = ((n1 + n2 + 1) >> 1) - pivot1;

            int l1 = (pivot1 == 0) ? INT_MIN : nums1[pivot1 - 1];
            int r1 = (pivot1 == n1) ? INT_MAX : nums1[pivot1];

            int l2 = (pivot2 == 0) ? INT_MIN : nums2[pivot2 - 1];
            int r2 = (pivot2 == n2) ? INT_MAX : nums2[pivot2];

            if (l1 <= r2 && l2 <= r1) {
                if ((n1 + n2) % 2) {
                    return max(l1, l2);
                }
                return (max(l1, l2) + min(r1, r2)) / 2.0;
            }
            if (l1 > r2) {
                hi = pivot1 - 1;
            } else {
                lo = pivot1 + 1;
            }
        }
        return -1.0;
    }
};
