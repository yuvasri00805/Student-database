#include<stdio.h>
struct student
{
 int roll_number;
 char name[50];
 int cut_off;
 char city[50];
 char dream[50];
};
void read_input(struct student s[],int size);
void display_output(struct student s[], int size);
int main()
  {
   int count;
   struct student s[62];
   printf("enter the student count:");
   scanf("%d",&count);
   if(count<=0||count>1)
   {
   printf("invalid student count!\n");
   return 0;
   }
   read_input(s, count);
   display_output(s, count);
   return 0;
  }
void read_input(struct student s[],int size)
   {
    int i,counter=1;
    for(i=0;i<size;i++)
    {
     printf("\nenter the student%d details:\n",counter);
     printf("enter the roll number:");
     scanf("%d",&s[i].roll_number);
     printf("enter the name:");
     scanf(" %49[^\n]",s[i].name);
     printf("enter the cut-off:");
     scanf(" %d",&s[i].cut_off);
     printf("enter the city:");
     scanf(" %49[^\n]", s[i].city);
     printf("enter the dream:");
     scanf(" %49[^\n]",s[i].dream);
     counter++;
    }
   }
void display_output(struct student s[],int size)
     {
      int i,counter=1;
      for(i=0;i<size;i++)
      {
       printf("\nstudent %d roll number=%d\n",counter,s[i].roll_number);
       printf("student%d name=%s\n",counter,s[i].name);
       printf("student %d cut-off=%d\n",counter,s[i].cut_off);
       printf("student %d city=%s\n",counter,s[i].city);
       printf("student %d dream=%s\n",counter,s[i].dream);
       counter++;
      }
    }