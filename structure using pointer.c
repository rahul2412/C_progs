struct student{
int id;
char name[50];
float per;
};
main()
{
int i;
struct student r1;
struct student *ptr1;
ptr1=&r1;
printf("enter id: ");
scanf("%d",&(ptr1->id));
scanf("%s",&(ptr1->name));
scanf("%f",&(ptr1->per));
printf("id= %d\n",ptr1->id);
printf("name= %s\n",ptr1->name);
printf("per= %f\n",ptr1->per);
}
