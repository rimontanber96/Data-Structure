#include<bits/stdc++.h>
using namespace std;
int main(){
    char str1[100],str2[100];
    cout<<"enter the string:";
   cin. getline(str1,100);
    cout<<"enter the pattern:";
   cin. getline(str2,100);
    int l1=0,l2=0;
    while(str1[l1]!='\0'){
     l1++;}
     
     while(str2[l2]!='\0'){
     l2++;}
     int max=l1-l2+1;
     bool flag;
        bool found=false;
        for(int i=0;i<max;i++){
            flag=true;
            for(int j=0;j<l2&& flag==true;j++){
                if(str1[i+j]!=str2[j]){
                    flag=false;
                }
            }
            if(flag==true){
                cout<<"pattern found at index "<<i<<endl;
                found=true;
                break;
            }
        }
        if(found==false){
            cout<<"pattern not found"<<endl;
        }


    
}