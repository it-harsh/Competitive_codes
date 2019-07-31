#include<iostream>
#include<string.h>
#include<stdio.h>
#include<unordered_map>
using namespace std;
string encrypt(string s,string k){

    unordered_map <char,int> umap;

    //for(char i='a';i<='z';i++){
     //   umap[i]=0;
    //}
    for(int i=0;i<k.length();i++){
        umap[k[i]]++;
    }
    for(char i='a';i<'z';i++){
        cout<<"i = "<<i<<"  "<<umap[i]<<endl;
    }
    string minkey;
    for(char i='a';i<'z';i++){
        if(umap[i]>=1){
                minkey = minkey + i;
        }
    }
    cout<<minkey;



    //cout<<"\nkey = "<<k<<"  minkey = "<<minkey;

    //for(i=0;i<s.length();i++){
      //       if(s[i]==' '){
       //     }
        //    else{
//
 //           }
   // }

    return s;
}
string decrypt (string s,string k){

        int i;

    for(i=0;i<s.length();i++){
             if(s[i]==' '){
            }
            else{

            }
    }


    return s;
}
int main(){


    cout<<"Enter your text : ";
    string text,key;
    getline(cin,text);
    cout<<"Enter your key : ";
    cin>>key;
    string etext,dtext;
    etext=encrypt(text,key);
    cout<<"\nYour encrypted text is : "<<etext;
    //dtext=decrypt(etext,key);
    //cout<<"\nYour decrypted text is : "<<dtext;

}
