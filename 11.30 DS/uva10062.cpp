#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
int main(){
  int i,len,max,set=0,d;
  int freq[256];//ASCII code:0~127
  string str;
  char c;
  while(getline(cin,str)){
    for(i=0;i<256;i++){
      freq[i]=0;
    }

    len=(int)str.length();
    for(i=0;i<len;i++){
      freq[str[i]]++;
    }
    
     /*for(i=0;i<256;i++){
      cout<<i<<" "<<freq[i]<<" "<<endl;
    }*/
    max=0;
    for(i=0;i<=255;i++){
      if(freq[i]>max){
        max=freq[i];
      }
    }
    /*cout<<"max:"<<max<<endl;*/
     /*for(d=127;d>=0;d--){
       if(freq[d]!=0){
        cout<<d<<" "<<freq[d]<<endl;
     }*/
    set++;
    if(set>1)printf("\n");
   for(i=1;i<=max;i++){
    for(d=255;d>=0;d--){
       if(freq[d]==i){
        char t=d;
        /*cout<<t<<" "<<i<<endl;*/
        cout<<d<<" "<<i<<endl;
       }
       }
    }
   }
}

