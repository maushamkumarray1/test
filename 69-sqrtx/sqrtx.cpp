class Solution {
public:
    int mySqrt(int x) {
        if(x==0||x==1){
            return x;
        }
        int low=1;
        int high=x;
        while(low<=high){
            int mid= low+(high-low)/2;
            long long square = (mid*1ll)*(mid*1ll);
            if(square==x){
                return mid;
            }
            else if(square>x){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return high;       
    }
};