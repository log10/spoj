/* rules are clear 1.first letter should not be caps
                   2.name should not contain '_' and capital letter
                   3.change java to c++/c++ to java.
   capital letter = _small letter
   _small letter = capital letter
*/

#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int u,c,i;
    string s;
    while(cin>>s){
        if(s[0]<97||s[0]=='_')
            printf("Error!");
        else if(s[s.size()-1]=='_'||s[0]<97)
            printf("Error!");
        else{
            u=c=0;
            for(i=1;i<s.size()-1;i++){
                if(s[i]=='_'&&s[i+1]<97){
                    printf("Error!");
                   	goto out;
                }
                else if(s[i]=='_')
                    u=1;
                else if(s[i]<97)
                    c=1;
            }
            if(u==c&&c==1)
                printf("Error!\n");
            else if(u==c&&c==0)
                cout<<s;
            else if(u==0&&c==1){
                printf("%c",s[0]);
                for(i=1;i<s.size();i++){
                    if(s[i]<97)
                        printf("_%c",s[i]+32);
                    else
                        printf("%c",s[i]);
                }
            }
            else if(u==1&&c==0){
                printf("%c",s[0]);
                for(i=1;i<s.size();i++){
                    if(s[i]=='_')
                        printf("%c",s[++i]-32);
                    else
                        printf("%c",s[i]);
                }
            }
        }
        out:;
        printf("\n");
    }
    return 0;
}