class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans = 0; 
 
    while (1) 
    { 
        int zero_count = 0; 
  
        int i;
        for (i=0; i<n; i++) 
        { 
  
            if (target[i] & 1) 
                break; 
  
  
            else if (target[i] == 0) 
                zero_count++; 
        } 
  
  
        if (zero_count == n) 
          return result; 
  
  
        if (i == n) 
        { 
  
            for (int j=0; j<n; j++) 
               target[j] = target[j]/2; 
            result++; 
        } 
   
        for (int j=i; j<n; j++) 
        { 
           if (target[j] & 1) 
           { 
              target[j]--; 
              result++; 
           } 
        } 
    } 
    }
};