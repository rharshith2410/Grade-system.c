#include<stdio.h>
int main()
int marks=0;
{
  printf("Enter the student's marks \n");
  scanf("%d",&marks);
  
  if(marks>=85 && marks<=100)
   {
     printf("Grade A \n");
   }
  
  else if(marks>=70 && marks<=84)
   {
     printf("Grade B \n");
   }
  
  else if(marks>=55 && marks<=69)
   {
     printf("Grade C \n");
   }
  
  else if(marks>=40 && marks<=54)
   { 
     printf("Grade D \n");
   }

  else
   {
     printf("Fail");
   }

}
