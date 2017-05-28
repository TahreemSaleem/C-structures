#include <stdio.h>
#include <conio.h>
#define SIZE 10;

struct info{
	char name[30];
	char designation[10];
	int salary;
}E10;

int main()
{ 
 struct info Ei;
	int i;int temp=0;
	for(i=1; i<=SIZE ; i++)
	{ 
	struct info Ei;
	printf("ENTER YOUR NAME\n");
	scanf("%s", &Ei.name);
	printf("ENTER YOUR DESIGNATION\n");
	scanf("%s", &Ei.designation);
	printf("ENTER YOUR SALARY\n");
	scanf("%d", &Ei.salary);
	printf("\n");
	if (Ei.salary>temp){
			temp=Ei.salary;}
	}
	
	printf("The greatest salary is %d\n", temp);

		printf("%s%17s%17s","NAME", "DESIGNATION","SALARY");
		printf("\n");
	for(i=1; i<= SIZE ; i++){
		struct info Ei;
	printf("%s%17s%17d\n", Ei.name, Ei.designation, Ei.salary);
	
	}
	return 0;
}
