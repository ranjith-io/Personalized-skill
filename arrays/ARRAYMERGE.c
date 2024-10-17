// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    
    int size1;
    scanf("%d",&size1);
    int size2;
    scanf("%d",&size2);
    int first[size1];
    int sec[size2];
    
    printf("Enter %d elements",size1);
    for(int i = 0;i<size1;i++)
    {
        scanf("%d",&first[i]);
    }
    printf("Enter %d elements",size2);
    for(int i = 0;i<size2;i++)
    {
        scanf("%d",&sec[i]);
    }
    int tot=size1+size2;
    
    int third[tot];
    int s=0;
    
    for (int i =0 ;i<size1;i++)
    {
        third[i]=first[i];
        s++;
        
    }
    for (int j =0 ;j<size2;j++)
    {
        third[s+j]=sec[j];
    }
    // int tot=size1+size2;
    
    for(int k=0;k<tot;k++)
    {
        printf("%d ",third[k]);
    }
    int i,j,a;
    for ( i = 0; i < tot; ++i) 
    {
        for (j = i + 1; j < tot; ++j)
        {
            if (third[i] > third[j]) 
            {
                a =  third[i];
                third[i] = third[j];
                third[j] = a;
                
            }
            
        }
        
    }
    printf("\n");
    for(int k=0;k<tot;k++)
    {
        printf("%d ",third[k]);
    }
}