#include <stdio.h>

int main()
{
   
    int marks[5], count=0; 
    int i;
    for(i=0; i<5; i++)
    {
        printf("enter the integers\n");
        scanf("%d", &marks[i]);
    }
    
    for(i=0; i<5; i++)
    {
        if(marks[i]%2==0)
        {
            count+=1;
        } 
        
        else if (marks[i]==5)
        {
            count+=5;
        }
        else
        {
            count+=3;
        }
    }
    
    printf("Output %d", count);
    
    return 0;

}