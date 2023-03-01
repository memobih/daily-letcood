class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums,0,nums.size()-1) ; 
        return nums; 
    }
   void mergesort(vector<int>& nums,int st , int end ) { 
    if(st>=end) return ;
     long long mid=(st+end)/2; 
       mergesort( nums , st,mid); 
           mergesort( nums , mid+1,end); 
        merge( nums ,  st ,  end ,  mid); 
    }
    void merge(vector<int>& nums , int st , int end , int  mid) { 
        int siz1=mid-st+1; 
        int siz2=end-mid;
        int id1=0,id2=0,id=st;
        auto *arr1=new int[siz1]; 
          auto *arr2=new int[siz2]; 
        for(int i =0; i<siz1; i++) arr1[i]=nums[st+i]; 
       for(int i =0; i<siz2; i++) arr2[i]=nums[mid+1+i]; 
        while(id1<siz1&&siz2>id2) { 
        if(arr1[id1]<=arr2[id2])
        nums[id++]=arr1[id1++]; 
    
         else if(arr1[id1]>arr2[id2])
        nums[id++]=arr2[id2++]; 
        }
        for(int i =id1; i<siz1; i++) nums[id++]=arr1[i];
          for(int i =id2; i<siz2; i++) nums[id++]=arr2[i];
  delete []arr1; 
        delete []arr2; 
    } 
};
