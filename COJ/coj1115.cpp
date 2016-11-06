#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
char s[1005][1005];
struct node
{
    node *a[27];                         
    int p;                               
}*t,*h;

                      
int i,j,t0,n,length;                       
void make(int k,node* h)                 
{
    h->p++;                              
    if(k>length) return ;
    if(h->a[s[i][k]-'a']!=NULL) make(k+1,h->a[s[i][k]-'a']);
    else  
    {
        int x,j;
        for(x=k;x<=length;x++)
        {
            t=new node;                  
            t->p=1;
            for(j=0;j<26;j++) t->a[j]=NULL;
            h->a[s[i][x]-'a']=t;         
            h=t;       
        }
    }
    return;
}

void find(int k,int m,node* h)  
{
    t0++;
    if(k==strlen(s[m])-1||h->p==1) return ;
    find(k+1,m,h->a[s[m][k+1]-'a']);
}

void release(struct node* now) 
{
    if(now==NULL) return ;
    for(int i=0;i<26;i++)
    {
        if(now->a[i])
        {
            release(now->a[i]);
            now->a[i]=NULL;
        }
    }
    free(now);
}
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);                        
        h=new node;                            
        h->p=0;
        for(i=0;i<26;i++) h->a[i]=NULL;        
        for(i=1;i<=n;i++)
        {
            scanf("%s",s[i]);                   
            length=strlen(s[i])-1;                  
            make(0,h);
        }
        int sum=0;
        for(i=1;i<=n;i++)
        {
            t0=0;
            find(0,i,h->a[s[i][0]-'a']);
            sum+=t0;
        }
        release(h);
        printf("%d\n",sum);
    }
    return 0;
}
