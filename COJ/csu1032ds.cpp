#include <stdio.h>  
  
int main()  
{  
    int cas,com,mis,num50,num300;  
    scanf("%d",&cas);  
    double d,m,l,hsum,sum,all,num;  
    while(cas--)  
    {  
        scanf("%lf %lf %lf",&d,&m,&l);  
        hsum=0,sum=0,all=0;  
        com=mis=num50=num300=0;  
        for(int i=0;i<l;i++)  
        {  
            scanf("%lf",&num);  
            all+=num+num*( (com-1>0?com-1:0)*d*m )/25;  
            if(num==0) com=0,mis++;  
            else com++;  
            hsum+=num;  
            if(num==50) num50++;  
            if(num==300) num300++;  
        }  
        printf("%.2lf %.2lf%% ",all,hsum*100/(l*300));  
        double temp=hsum*100/(l*300);  
        if(temp==100) printf("SS\n");  
        else  
        {  
            double temp50=num50*50*100/(l*300);  
            double temp300=num300*300*100/(l*300);  
            if(temp300>=90 &&temp50<=1 &&mis==0)  
                printf("S\n");  
            else if(temp300>=80 &&mis==0 || temp300>=90)  
                printf("A\n");  
            else if(temp300>=70&&mis==0 ||temp300>=80)  
                printf("B\n");  
            else if(temp300>=60)  
                printf("C\n");  
            else printf("D\n");  
        }  
    }  
    return 0;  
} 
