void main()
{
int a,*p;
p=&a;
printf("enter first number \n");
scanf("%d",p);
printf("entered first number is %d \n",*p);
printf("enter second number \n");
scanf("%d",p+1);
printf("entered second number is %d \n",*(p+1));
printf("enter next number \n");
scanf("%d",p+2);
printf("entered number is %d \n",*(p+2));
getch();
clrscr();



}