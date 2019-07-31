#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
string encrypt(string s,int k){

    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            }
        else{
            if(int(s[i]+k)<=122)
                s[i]=s[i]+k;

            else{
                int t = int(s[i]+k);
                t=(t%122);
               // cout<<"\n"<<s[i]<<"  "<<t;
                s[i]=char(96+t);
            }
        }

    }

    return s;
}
string decrypt(string s,int k){

    for(int i=0;i<s.length();i++){
         if(s[i]==' '){
            }
        else{
            if(int(s[i]-k)>=97&&int(s[i]-k)<122)
                 s[i]=s[i]-k;
            else{
                int t = 97 - int(s[i]-k);

                //cout<<"\n"<<s[i]<<"  "<<t;
                s[i]=char(123-t);
            }
        }

    }

    return s;
}

int main(){


    string text;
    int key;

    //cout<<char(97)<<" "<<char(122) ;
    cout<<"WELCOME TO CEASER CIPHER (Note : Only for lower case sentences)"<<endl;
    cout<<"Enter your text :";
    getline(cin,text);
    cout<<"Enter your key :";
    cin>>key;
    string temp=encrypt(text,key);
    cout<<"\nEncrypted string is : "<<temp;
    cout<<"\n\nDecrypted string is  : "<<decrypt(temp,key)<<endl;

return 0;
}


