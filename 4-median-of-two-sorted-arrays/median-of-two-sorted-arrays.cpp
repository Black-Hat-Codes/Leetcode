class Solution {
public:
    double findMedianSortedArrays(vector<int>& arr1, vector<int>& arr2) {
       int n=arr1.size();
       int m=arr2.size();
       vector<int>arr3(n+m);
       int i=0,j=0,k=0;
       while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }else{
            arr3[k++]=arr2[j++];
        }
       } 
       while(i<n){
        arr3[k++]=arr1[i++];
       }
       while(j<m){
        arr3[k++]=arr2[j++];
       }
       int t=n+m;
       double ans;
       if(t%2!=0){
        ans=arr3[t/2];
       }else{
        ans=(arr3[t/2-1]+arr3[t/2])/2.0;
       }
       return ans;
    }
};