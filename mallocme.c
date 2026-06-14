#include<stdio.h>
#include <stdlib.h>

int main()
{
    void * Marks =NULL;
    int size =0;
    
    printf("Enter the no of students:\n");
    scanf("%d",&size);

    Marks = (float *) malloc (size*sizeof(float) );

    printf("Size of the Marks ", Marks);



   

}