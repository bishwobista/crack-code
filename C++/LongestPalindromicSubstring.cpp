class Solution {
public:
    string longestPalindrome(string s) {
        string ans;
        int length=0;
        pair<int,int>p;
        for(int i=0,j=s.size()-1;i<s.size()&&j>=i;){
            int flag=1;
                for(int k=i,l=j;l>=k;k++,l--){
                    if( s[k]!=s[l]){
                        flag=0;
                        break;
                    }
                }
                if(flag==1){
                if(abs(j-i+1)>length){
                    p.first=i;
                    p.second=j;
                    length=abs(j+1-i);
                }
            }
            j--;
            if(j==i){
                i++;
                j=s.size()-1;
            }
        }
        if(length!=0){
            int b=max(p.first,p.second);
            int c=min(p.first,p.second);
            for(int i=c;i<=b;i++){
                ans.push_back(s[i]);
            }
        }
        else{
            ans.push_back(s[0]);
        }
        return ans;
    }
};
