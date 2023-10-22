class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows<2){
            return s;
        }
        vector<string>v(numRows);
        int change=0;
        int r=0;
        for(int i=0;i<s.size();i++){
            v[r].push_back(s[i]);
            if(change%2==0){
                r++;
            }
            else{
                r--;
            }
            if(r==0){
                change++;
            }
            else if(r==numRows-1){
                change++;
            }
        }
        string ans;
        for(int i=0;i<numRows;i++){
            ans+=v[i];
        }
        return ans;
    }
};
