class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        map<char,int>mp,mp2; 
 for (int i=0; i<s1.size() ; i++) mp[s1[i]]++,mp2[s1[i]]++; 
        int l =0 , r= 0 , c=0;  
        while (l<s2.size()) { 
         while(r<s2.size()&&mp[s2[r]]){
              mp[s2[r]]-- ; 
             r++ ;
             c++; 
         }
       if(c==s1.size())  return 1; 
            else c--; 
          if(mp2[s2[l]]) mp[s2[l]]++; 
                        if(c<0) c=0; 

            if(r<s2.size()and mp2[s2[r]]==0&&mp2[s2[l]]==0)
            r++,c=0; 
                        l++;   

        }
        return 0;
    }
};
