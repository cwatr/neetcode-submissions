class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str = strs[0];

        for(int i=1;i<strs.size();i++){
            if(strs[i]=="") return "";
            int mn = min(str.size(), strs[i].size());
            int mx = max(str.size(), strs[i].size());

           // cout<<str<<" "<<strs[i]<<endl;
            for(int j=0;j<mx;j++){
                if(j==mn){
                    str=str.substr(0,j);
                    break;
                }
                if(str[j]!=strs[i][j]){
                    str=str.substr(0,j);
                  //  cout<<str.substr(0,j)<<endl;
                    break;
                }
            }
        }

        return str;
    }
};