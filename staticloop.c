#include <stdio.h>

int main() 
{
    float Marks[5];///20 bytes  
    
    int i = 0;
    printf("Enter your marks:\n");

    //iteration
       ///  1   2    3
    for(i=0;i<5  ;i++)
    {
      scanf("%f",&Marks[i]);  //4    
    }

    printf("Enter marks are:\n ");

    //iteration
     ///  1   2    3
    for(i=0;   i<5  ;i++)   
    {
      printf("%f\n", Marks[i]);  //4    
    }    
    return 0;
}