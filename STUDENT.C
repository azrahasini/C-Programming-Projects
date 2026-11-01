#include<stdio.h>
#include<conio.h>
struct student
{
char Name[50];
int Rollno;
int Marks;
char City[50];
char Dream[50];
};
void main()
{
int i;
struct student s[5];
clrscr();
for(i=0;i<5;i++)
{
printf("\nEnter student detail number:%d\n",i+1);
printf("Enter the student name:");
scanf("%s",s[i].Name);
printf("Enter the student rollno:");
scanf("%d",&s[i].Rollno);
printf("Enter the student marks:");
scanf("%d",&s[i].Marks);
printf("Enter the student city:");
scanf("%s",s[i].City);
printf("Enter the student dream:");
scanf("%s",s[i].Dream);
}
printf("\n=====5 student details=====\n");
for(i=0;i<5;i++)
{
printf("\nStudent:%d\n",i+1);
printf("Name:%s\n",s[i].Name);
printf("Rollno:%d\n",s[i].Rollno);
printf("Marks:%d\n",s[i].Marks);
printf("City:%s\n",s[i].City);
printf("Dream:%s\n",s[i].Dream);
}
getch();
}
