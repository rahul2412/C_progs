struct clg
{
int clg_id;
char clg_name[30];
};
struct student
{
int rollno;
char name[30];
float per;
struct clg obj;
}obj1;
main()
{

printf("enter roll no: ");
scanf("%d",&obj1.rollno);
printf("enter name: ");
scanf("%s",obj1.name);
printf("enter percentage: ");
scanf("%f",&obj1.per);
printf("enter clg_id: \n");
scanf("%d",&obj1.obj.clg_id);
printf("enter clg_name: \n");
scanf("%s",obj1.obj.clg_name);
//print these details
printf("details are-\n");
printf("%d",obj1.rollno);
printf("%d",obj1.obj.clg_id);
printf("%s",obj1.obj.clg_name);
}
