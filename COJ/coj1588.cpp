#include<iostream>
#include<iomanip>
using namespace std;

struct HfmTree//定义 HuffmanTree结构体 
{  
    unsigned int weight;     
	unsigned int parent,lchild,rchild; 
}; 

void Select(HfmTree *HT,int i,int &s1,int &s2)  //选较小的结点来构造树  
{  
    int j,k=1;                     
	while(HT[k].parent!=0)         
	    k++;    
	s1=k;     
	for(j=1;j<=i;++j)        
	    if(HT[j].parent==0&&HT[j].weight<HT[s1].weight)    
		    s1=j;    
	k=1;     
	while((HT[k].parent!=0||k==s1))       
	    k++;    
	s2=k; 
    for(j=1;j<=i;++j)        
	    if(HT[j].parent==0&&HT[j].weight<HT[s2].weight&&j!=s1)    s2=j; 
} 

int main()
{
    int T;
	cin>>T;
	while(T--)
	{
		HfmTree *HT;
		int m,i,s1,s2,n;
		unsigned int sum=0; 
		cin>>n;   
		m=2*n-1;     
		HT=new HfmTree[m+1];       
		for(i=1;i<=n;++i)//初始前n个双亲结点  
		    HT[i].parent=0;      
		for(;i<=m;++i)//初始m的权与双亲结点   
		{        
		    HT[i].weight=0;    
		    HT[i].parent=0;   
	    } 
	    for(i=1;i<=n;++i)  //人工输入权值       
	     	cin>>HT[i].weight;
	    for(i=n+1;i<=m;++i)//创建HufmanTree     
	    {  
	    	Select(HT,i-1,s1,s2); //s1 是最小的, s2 是次小的       
	    	HT[s1].parent=i;       
	    	HT[s2].parent=i;       
	    	HT[i].lchild=s1;       
	    	HT[i].rchild=s2;        
	    	HT[i].weight=HT[s1].weight+HT[s2].weight;
			sum+=HT[i].weight; 
	   	} 
		cout<<sum<<endl;   
	}	
	return 0;
}
