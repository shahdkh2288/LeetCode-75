class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        //my solution beats 22.54%
        // int len = word1.size();
        // int len2 = word2.size();
        // bool bigger = false;
        // if(len>len2){
        //     bigger = true;
        // }
        // string s = "";
        // int cnt =0,cnt1=0;
        // if(bigger){
        //     for(int i=0;i<len;i++){
        //          if(cnt1!=len2){
        //             s+=word1[i];
        //             s+=word2[i];
        //             cnt1++;
        //          }else{
        //             s+=word1[i];
        //          }
                 
                
        //     }
        // }else{
        //     for(int i=0;i<len2;i++){
        //         if(cnt!=len){
        //             s+=word1[i];
        //             s+=word2[i];
        //             cnt++;
        //          }else{
        //             s+=word2[i];
        //          }
                
               
        //     }
        // }

        //return s;
        //solution beats 100.00%
        string s = "";
        int i=0;
        while(i<word1.length() || i<word2.length()){
            if(i<word1.length()){
                s+=word1[i];
            }
            if(i<word2.length()){
                s+=word2[i];
            }
            i++;
        }
        return s;
        
    }
    
};