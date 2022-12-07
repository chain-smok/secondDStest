#include <stdio.h>
#include <string.h>

int main(){
  char d[1001];
  int c0,c1,i;
  scanf("%s",d);
  while(strlen(d)>1||d[0]!='0'){
    c0=c1=0;
    for(i=0;i<strlen(d);i++){
      if(i%2==1){
        c1+=d[i]-'0';
      }else{
        c0+=d[i]-'0';
      }
    }
    if(c0%11==c1%11){
      printf("%s is a multople of 11.\n",d);
    }else{
      printf("%s is not a multiple of 11.\n",d);
    }
    scanf("%s",d);
  }
}
