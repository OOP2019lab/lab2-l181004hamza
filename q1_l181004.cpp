#include<iostream>
#include<string>
using namespace std;
#include "q1_l181004.h"

	void comparison(gitHubUser user1, gitHubUser user2)
	{
		if( user1.email==user2.email && user1.firstName==user2.firstName && user1.userName==user2.userName && user1.password==user2.password && user1.foldercount==user2.foldercount)
			cout<<"same user"<<endl;
		else
			cout<<"not same"<<endl;
	}

	bool exists(gitHubUser *arr, int size, string userName)
	{
		bool present=false;

		for(int i=0;i<size;i++)
		{
			if(arr[i].userName == arr[i-1].userName)
			{
				cout<<"username already exists"<<endl;
				present=true;
			}
		}

		return present;
	}

	void inputfromUser(gitHubUser *user,int size)
	{
	
		cout<<"enter number of users"<<endl;
		cin>>size;

		for(int i=1;i<=size;i++)
		{
		
			//bool flag=false;
			cout<<"enter user name :";
			cin>>user[i].userName;
		
			/*while (flag==false)
			{
				if(exists(user,size,user[i].userName)==true)
				{
					cout<<"enter new username"<<endl;
					cin>>user[i].userName;
				}
			}*/

			
			cout<<"enter first name :";
			cin>>user[i].firstName;
			cout<<"enter password :";
			cin>>user[i].password;
			cout<<"enter email :";
			cin>>user[i].email;
			cout<<"enter folder count :";
			cin>>user[i].foldercount;
			cout<<endl;
		}
	}

	int searchUsers(gitHubUser* user, int size, string userName)
	{
		int address;
		cout<<"enter username"<<endl;
		cin>>userName;

		for(int i=0;i<size;i++)
		{
			if(user[i].userName==userName)
			{
				bool flag=true;
				address=i;
			}

		}
		return address;
	}

	

	int main()
	{
		gitHubUser *user;
		gitHubUser user1,user2;

		int size=2;

			cout<<"for comparison:"<<endl;
			cout<<endl;
			cout<<"enter first name of u1:";
			cin>>user1.firstName;
			cout<<"enter user name of u1:";
			cin>>user1.userName;
			cout<<"enter password of u1:";
			cin>>user1.password;
			cout<<"enter email of u1:";
			cin>>user1.email;
			cout<<"enter folder count of u1 :";
			cin>>user1.foldercount;
			cout<<endl;
			cout<<"enter first name of u2:";
			cin>>user2.firstName;
			cout<<"enter user name of u2:";
			cin>>user2.userName;
			cout<<"enter password of u2:";
			cin>>user2.password;
			cout<<"enter email of u2:";
			cin>>user2.email;
			cout<<"enter folder count of u2:";
			cin>>user2.foldercount;
			cout<<endl;

			comparison(user1,user2);

			cout<<endl;
			cout<<"for input from user"<<endl;
			cout<<endl;

			user=new gitHubUser [size];

			inputfromUser(user,size);		


		system("pause");
	}