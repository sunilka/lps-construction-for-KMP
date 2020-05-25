// lps -> longest prefix also as suffix
// below code shows the lps array construction

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int nooftestcases;
    cin>>nooftestcases;

    while(nooftestcases--){
        string pat;
        cin>>pat;
        int lps[pat.length()];
        lps[0] = 0;

        int i=1;
        int j=0;

        while(i<pat.length()){

            if(pat[i] == pat[j]){
                lps[i] = j+1;
                j++;
                i++;
            }

            else{
                if(j == 0){
                    lps[i] = 0;
                    i++;
                }
                else{
                    j = lps[j-1];
                }
            }
        }
        printf("\n printing the lps array here \n");
        for(int i=0;i<pat.length();i++){
            cout<<lps[i]<<" ";
        }
        cout<<endl;
    }
}
