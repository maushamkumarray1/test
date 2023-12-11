class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        if(n1>n2){
           return  findMedianSortedArrays(nums2,nums1);
        }
        int n=n1+n2;
        int left=(n1+n2+1)/2;
        int low=0;
        int high=n1;

        while(low<=high){
        int cut1=low+(high-low)/2;
        int cut2=left-cut1;
        int l1=INT_MIN;
        int l2=INT_MIN;
        int r1=INT_MAX;
        int r2=INT_MAX;   
        if(cut1<n1){
            r1=nums1[cut1];
        }
        if(cut2<n2){
            r2=nums2[cut2];
        }
        if(cut1-1>=0){
            l1=nums1[cut1-1];

        }
        if(cut2-1>=0){
            l2=nums2[cut2-1];

        }
        if(l1<=r2&&l2<=r1){
            if(n%2){
                return max(l1,l2);

            }
            else{
                return  ((double)(max(l1,l2)+min(r1,r2))/2);
            }

        }
        else if(l1>r2){
            high=cut1-1;

        }
        else{
            low=cut1+1;
        }
            

        }
        return 0;

        
    }
};