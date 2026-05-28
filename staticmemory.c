#include <stdio.h>

int main() 
{
    float Marks[5];///20 bytes  As 5 marks * float 4 
    printf("Enter your marks:\n");

    //SEquence
    scanf("%f",&Marks[0]);    
    scanf("%f",&Marks[1]);
    scanf("%f",&Marks[2]);
    scanf("%f",&Marks[3]);
    scanf("%f",&Marks[4]);

    
    return 0;
}