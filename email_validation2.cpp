#include<bits/stdc++.h>
using namespace std;
void email_check()
{
	int i,flag=0,c=0,flag2=0;
	string email;
	while (flag2==0)
	{
	cin>>email;
	if(email[0]=='@')
	{
		cout<<"Invalid mail, Try again !! \n";
		flag2=0;
	}
	else{
	for (i=0; i < email.length();i++)
	{
		if (email[i]!='@')
		{
		continue;
		}
	
	else
	{
		i++;
		flag+=1;
			if(email[i]!='.')
			{
			if ((email[i]>=65 && email[i]<=90)|| (email[i]>=97 && email[i] <=122)&&(email[i]!='@'))
			{
				continue;
			}
			else{
			c+=1;
			flag2=0;
			}
			
			}
		else
		{
		i++;
		if ((email[i]>=65 && email[i]<=90)|| (email[i]>=97 && email[i] <=122)&&(email[i]!='@'))
			{
			continue;
			}
			else{
				c+=1;
				flag2=0;
				}
	}
	}
    }
    if(c==0 && flag==1)
    {
    cout<<"Valid mail \n YOUR EMAIL IS SUCCESSFULLY ADDED \n";
    flag2=1;
    break;
	}
	else if(c!=0 || flag!=1)
    {
    cout<<"Invalid mail , Try again !! \n ";
    flag2=0;
	}	
}
}
}

int main()
{
	string email;
	email_check();
	return 0;
}
