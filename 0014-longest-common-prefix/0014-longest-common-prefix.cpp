class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        if (strs.size()==1) return strs[0];
        string output="";
        if(strs[0]=="") return "";
        int i = 0;
        while(strs[0][i]!='\0' && strs[0][i]==strs[strs.size()-1][i]){
            output.push_back(strs[0][i]);
            i++;
        }
        cout<<output;
        return output;
    }
};