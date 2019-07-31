#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
string encrypt(string s,string k){

    //when key  is smaller than PT
    if(k.length()<s.length()){
    int length=k.length(),z=0;
    for(int j=length;j<=s.length();j++){
            if(s[j]==' '){
                j++;
            }else{
            k+=k[z%length];
            z++;
            }
    }
    }
    //cout<<"\nkey is "<<k<<" length  "<<k.length();

    for(int i=0,x=0;i<s.length();i++){
        if(s[i]==' '){
            }
        else{
                int temp = int(s[i]+k[x]-123);
                x++;
                if(temp>=97){
                    s[i]=temp;
                }
                else{
                    int t1=97-temp;
                    s[i]=123-t1;
                }
            }

    }

    return s;
}
string decrypt(string s,string k){

     //when key  is smaller than PT
    if(k.length()<s.length()){
    int length=k.length(),z=0;
    for(int j=length;j<=s.length();j++){
            if(s[j]==' '){
                j++;
            }else{
            k+=k[z%length];
            z++;
            }
        }
    }

    for(int i=0,x=0;i<s.length();i++){
         if(s[i]==' '){
            }
        else{
                int temp=abs(int(k[x]-s[i]));
                    if(k[x]<=s[i])
                        s[i]=97+temp;
                    else
                        s[i]=123-temp;
                x++;
        }

    }

    return s;
}

int main(){

    string text,key;
    //cout<<char(97)<<" "<<char(122) ;
    cout<<"POLYAPLHABETIC CIPHER (Note : key and plain text must be of same length ,PT can contain spaces but key cannot)"<<endl;
    cout<<"Enter your text :";
    getline(cin,text);
    cout<<"Enter your key  :";
    cin>>key;
    string temp=encrypt(text,key);
    cout<<"\nEncrypted string is : "<<temp<<"\n";
    cout<<"\n\nDecrypted string is  : "<<decrypt(temp,key)<<endl;

return 0;
}


