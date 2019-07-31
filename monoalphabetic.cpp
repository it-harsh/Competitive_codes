#include<iostream>
#include<string.h>
#include<stdio.h>
char a[2][26]={{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'},{'x','t','b','u','v','p','c','q','a','b','o','g','f','k','r','w','d','y','m','s','n','z','l','i','h','j'}};
using namespace std;
string encrypt(string s){

    int i;
    for(i=0;i<s.length();i++){
             if(s[i]==' '){
            }
            else{
                for(int j=0;j<26;j++){
                        if(a[0][j]==s[i]){
                                //cout<<"\n j = "<<a[0][j]<<"  i= "<<i;
                                s[i]=a[1][j];
                                break;
                                }
                }
            }
    }

    return s;
}
string decrypt (string s){

        int i;

    for(i=0;i<s.length();i++){
             if(s[i]==' '){
            }
            else{
                for(int j=0;j<26;j++){
                        if(a[1][j]==s[i]){
                                //cout<<"\n j = "<<a[0][j]<<"  i= "<<i;
                                s[i]=a[0][j];
                                break;
                                }
                }
            }
    }


    return s;
}
int main(){


    cout<<"Enter your text : ";
    string text;
    getline(cin,text);
    string etext,dtext;
    etext=encrypt(text);
    cout<<"\nYour encrypted text is : "<<etext;
    dtext=decrypt(etext);
    cout<<"\nYour decrypted text is : "<<dtext;

}
