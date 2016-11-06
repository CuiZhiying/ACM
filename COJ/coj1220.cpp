#include <stdio.h>
main()
{
 int  n,m;
 while(scanf("%d%d",&n,&m)!=EOF){
  int a[n];
  int t;
  for(int i=0;i<n;i++){
   a[i]=0;   
  }
  for(int i=0;i<m;i++){
      scanf("%d",&t);
      a[t-1]++;
  }
  int max=0,f=0;
  for(int i=0;i<n;i++){
   if(a[i]>max){
    max=a[i];
    f=i+1;
   } 
  }
  printf("%d\n",f);
 }
}  
