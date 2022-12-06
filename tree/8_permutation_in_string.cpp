//permutation in string 
class Solution {
public:
    bool checkInclusion(string s1, string s2)
     {
         if(s2.size()<s1.size())
          return false;
          else if(s2==s1)
          return true;
          int k=s1.size();
          map<char,int>hash1;
          for(int i=0;i<k;i++)
          {
              hash1[s1[i]]++;
          }
          int i=0,j=k-1;
          while(j<s2.size())
          {
              map<char,int>hash2;
              for(int l=i;l<=j;l++)
              {
                  hash2[s2[l]]++;
              }
              int flag=1;
              for(int l=i;l<=j;l++)
              {
                  if(hash2[s2[l]]!=hash1[s2[l]])
                  {
                      flag=0;
                      break;
                  }
              }
              if(flag)return true;
              i++,j++;
          }
         
            return false;
          
          }
};