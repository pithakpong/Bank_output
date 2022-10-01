#include <stdio.h> 
int main() 
{ 
    int cost,multi = 10,i = 0,p = 0,r = 0,fr = 0;   
    scanf("%d",&cost); 
    int trans = cost;
    if(cost % 100 == 0) 
    { 
        while(cost > 0 ) 
        { 
            cost = cost/multi; 
            i++;
        }   
    }     
        p = trans/1000;
        if((trans / 100)%10  >= 5) 
        { 
            fr = ((trans/100)%10) / 5; 
            r = ((trans/100)%10) - 5;
        } 
        else 
        { 
            r = (trans/100)%10;
        } 
        printf("1000*%d\n",p); 
        printf("500*%d\n",fr); 
        printf("100*%d\n",r);  
    
} 
