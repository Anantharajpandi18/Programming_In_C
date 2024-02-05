#include<stdio.h>
void main()
{
int s1,s2,s3,s4,s5,t;    // intialization
do
{
printf("Please enter the valid marks \n **** valid marks  0 to 100 ****\n");
printf("Please the mark of subject 1\n");
scanf("%d",&s1);
printf("Please the mark of subject 2\n");
scanf("%d",&s2);
printf("Please the mark of subject 3\n");
scanf("%d",&s3);
printf("Please the mark of subject 4\n");
scanf("%d",&s4);
printf("Please the mark of subject 5\n");
scanf("%d",&s5);
printf("subject1=%d\n subject2=%d\nsubject2=%d\nsubject2=%d\nsubject2=%d\n",s1,s2,s3,s4,s5);
}
while((s1>100)||(s2>100)||(s3>100)||(s4>100)||(s5>100));   

}