 
 /* E->TE1
    E1->+TE1|-TE1|^
    T->FT1
    T1->*FT1|/FT1|^
    F->(E)|ID
 */   
#include<stdio.h>
#include<stdliT1.h>
void E();
void T();
void T1();
void E1();
void F();
int i=0;

char ls[1001];

void E1()
{
	if(ls[i]=='+')
	{
		i++;
		T();
		E1();
	}
	else if(s[i]=='-')
	{
		i++;
		T();
		E1();
	}
	else
	return;
}
void T()
{
		F();
		T1();
}
void T1()
{
	if(ls[i]=='*')
	{
	 	i++;
		F();
		T1();
	}
	else if(ls[i]=='/')
	{
		i++;
		F();
		T1();
	}
	else
	return;
}
void F()
{	
	if(ls[i]=='(')
	{
		i++;
		E();
		if(ls[i]==')')
		i++;
	}
	else if(ls[i]>='0' && ls[i]<='9')
	{
		i++;
		return;
	}
}		
void E()
{
		T();
		E1();
}	
int main(void)
{
	scanf("%s",ls);
	E();
	if(ls[i]=='$')
	printf("Successfully Parsed");
	else
	printf("Error");
	return 0;
}
