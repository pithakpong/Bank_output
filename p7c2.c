#include <stdio.h> 

int main()
{ 
    int cost,a[3] = {0,0,0};
    scanf("%d",&cost);  
    if(cost %100 == 0) 
    { 

    
    while(cost > 0) 
    {  
        if(cost - 1000 >= 0) 
        { 
          cost -= 1000;
          a[0]++;  
        }
        else 
        { 
            if(cost - 500 >= 0)
            { 
                cost -= 500;
                a[1]++; 
                while(cost > 0 && cost < 500) 
                { 
                    a[2]++;
                    cost-=100;
                }
            } 
            else 
            { 
                while(cost > 0 && cost < 500) 
                { 
                    a[2]++;
                    cost-=100;
                }
            }
        }
        
    } 

    } 
    printf("1000*%d\n",a[0]); 
    printf("500*%d\n",a[1]); 
    printf("100*%d\n",a[2]); 
}