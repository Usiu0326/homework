#include <stdio.h> 
#define SIZE 10

void bubbleSort( int  const *  array, int size);    
 
int main(void)
{
   int a[10]={5,7,21,39,14,99,11,46,20,16};
   int i,size;
   
   puts("��ƱƧǫe");
   
    for(i=0;i<=9;i++)
    {
     printf("%d ",a[i]);
    }
    bubbleSort( a, 10);
    
 puts("\n��ƱƧǫ�\n");
 for(i=0;i<=9;i++)
 {
  printf("%d ",a[i]);
 }
}

void swap(int *element1Ptr,int *element2Ptr)
{
 int hold= *element1Ptr;
 *element1Ptr=*element2Ptr;
 *element2Ptr=hold;
}
