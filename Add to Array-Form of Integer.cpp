class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {  
        vector<int>v; 
        for(int i =num.size()-1; i>=0; i--) {
            v.push_back( (k+num[i])%10);
            k+=num[i]; 
            k/=10; 
        }
        while(k>=1){ 
            v.push_back(k%10); 
        k/=10; 
        
        }
        reverse(v.begin(),v.end()); 
        return v; 
    }
    
};
