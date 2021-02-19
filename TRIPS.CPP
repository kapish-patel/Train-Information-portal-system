/*============================================================================
	TRAIN REGISTRATION INFORMATION PORTAL SYSTEM
============================================================================*/

/*
	DEVLOPER - kapish patel
	username - admin
	password - admin

*/

/*----------------------------------------------------------------------------
					HEADER FILE`S
------------------------------------------------------------------------------*/
#include<conio.h>
#include<iomanip.h>
#include<string.h>
#include<fstream.h>
#include<dos.h>
#include<stdlib.h>
#include<stdio.h>
#include<process.h>
/*----------------------------------------------------------------------------
					PROTOTYPES
------------------------------------------------------------------------------*/
void menu();
void adminmenu();
void registermenu();
void loginmenu();
void infomenu();
void tcmenu();
void addtrain();
void displaymenu();
void searchmenu();
void deletemenu();
void modifymenu();
void recovermenu();
void dall();
void dalle();
void dallm();
void dalld();
void dalla();
void dalldate();
void dallda();
void dallkm();
void sbyname();
void sbyid();
void sbyd();
void sbya();
void sbydate();
void deltrain();
void delpass();
void dispdt();
void dispdpr();
void regist();
void suitable();
void mint();
void minp();
void modall();
void modname();
void modid();
void modprice();
void modarrival();
void moddepat();
void moddate();
void modtime();
void modkm();
void modpall();
void modpname();
void modpemal();
void modpadhar();
void modpdepart();
void modparri();
void modptrain();
void modpadult();
void modpkid();
void modpuser();
void modppass();
void saboutr();
void saboutb();
void sabouts();
void saboutc();
void sabouttc();
void box(int left, int top, int right, int bottom);
void loading();
void login();
void header();
void footer();
void intro();
void conclude();
int line1(int t);
void line2();
void line3();
int line4(int t);
void errorfile();
void error();
void bill();
void complaint();
void cancle();
void displaymenup();
void searchmenup();
void dispalp();
void disptp();
void dispap();
void dispdp();
void dispdatp();
void searchn();
void searcha();
void anycomplaint();
void rectrain();
void recpass();
void steps();

char developer[]="kapish patel";
char school[]="delhi public school gandinagar";
char std[]="(2017-18)";
int roll=23;
char user[]="admin", pwd[]="admin";

/*---------------------------------------------------------------------------
					CLASSES
------------------------------------------------------------------------------*/
class train
{
	private:
		int id;
		char name[20];
		char depature[30];
		char arival[30];
		float price;
		char date[10];
		int coaches;
		int km;
		char type;
		char time[10];
	public:
		void getdata();
		void showdata();
		void disphead()
		{
		 clrscr();
		 cout<<setw(5)<<"id";
		 cout<<setw(10)<<"name";
		 cout<<setw(10)<<"depature";
		 cout<<setw(12)<<"arival";
		 cout<<setw(8)<<"price";
		 cout<<setw(8)<<"date";
		 cout<<setw(12)<<"coaches";
		 cout<<setw(10)<<"type";
		}
		void showall()
		{
		 disphead();
		 cout<<"\n";
		 line2();
		ifstream fint("train.dat",ios::binary);
		while(fint.read((char*)&t,sizeof(t)))
		{
		 cout<<setw(5)<<id;
		 cout<<setw(10)<<name;
		 cout<<setw(10)<<depature;
		 cout<<setw(12)<<arival;
		 cout<<setw(8)<<price;
		 cout<<setw(8)<<date;
		 cout<<setw(12)<<coaches;
		 cout<<setw(10)<<type;
		 cout<<"\n";
		 line1(10);
		}
		 fint.close();
		 getch();
		}

		char* getname()
		{
			return name;
		}
		int getid()
		{
			return id;
		}
		char gettype()
		{
			return type;
		}
		char* getdepature()
		{
			return depature;
		}
		char* getdate()
		{
			return date;
		}
		int getkm()
		{
			return km;
		}
		void modtall()
		{
		cout<<"Enter Train id:";
		cin>>id;
		cout<<"Enter Train name:";
		gets(name);
		cout<<"Enter Train depature:";
		gets(depature);
		cout<<"Enter Train arival:";
		gets(arival);
		cout<<"Enter Train distance travel in(km):";
		cin>>km;
		cout<<"Enter Train price per person:";
		cin>>price;
		cout<<"Enter Train depature time in(h:m):";
		gets(time);
		cout<<"Enter Train depature date(D/M/Y):";
		gets(date);
		}
		void modtname()
		{
			cout<<"Enter Train name:";
			gets(name);
		}
		void modtid()
		{
		cout<<"Enter Train id:";
		cin>>id;
		}
		void modtprice()
		{
		cout<<"Enter Train price per person:";
		cin>>price;
		}
		void modtarival()
		{
		cout<<"Enter Train arival:";
		gets(arival);
		}
		void modtdepature()
		{
		cout<<"Enter Train depature:";
		gets(depature);
		}
		void modtdate()
		{
		cout<<"Enter Train depature date(D/M/Y):";
		gets(date);
		}
		void modttime()
		{
		cout<<"Enter Train depature time in(h:m):";
		gets(time);
		}
		char* getarival()
		{
			return arival;
		}
		void modtkm()
		{
		cout<<"Enter Train distance travel in(km):";
		cin>>km;
		}
		void calcprice()
		{
			if(type=='E')
			{
				if(km>1000) price=km*0.70;
				else if(km>800) price=km*0.75;
				else if(km>600)	price=km*0.80;
				else if(km>400)	price=km*0.85;
				else if(km>200)	price=km*0.90;
				else if(km>100)	price=km*0.95;
				else if(km>0)	price=km*1.00;
			}
			else if(type=='M')
			{
				if(km>1000) 	price=km*0.40;
				else if(km>800)	price=km*0.45;
				else if(km>600)	price=km*0.50;
				else if(km>400) price=km*0.55;
				else if(km>200)	price=km*0.60;
				else if(km>100)	price=km*0.65;
				else if(km>0)	price=km*0.70;
			}
		}
		float getprice()
		{
			return price;
		}
		//void showlist();
}t;
class passenger
{
	private:
		char name[20];
		char adhar[20];
		char email[50];
		char depature[30];
		char arival[30];
		char train[20];
		int adults;
		int kids;
		float price;
		char date[20];
		char username[20];
		char password[20];
		char complaint[100];
	public:
		void getdata();
		void showdata();
		void disphead()
		{
		 clrscr();
		 cout<<setw(8)<<"name";
		 cout<<setw(10)<<"depature";
		 cout<<setw(10)<<"arival";
		 cout<<setw(12)<<"train name";
		 cout<<setw(10)<<"date";
		 cout<<setw(10)<<"price";
		 cout<<setw(8)<<"adults";
		 cout<<setw(10)<<"kids";
		}
		void showall()
		{
		 disphead();
		 cout<<"\n";
		 line2();
		ifstream finp("passenger.dat",ios::binary);
		while(finp.read((char*)&p,sizeof(p)))
		{
		 cout<<"\n";
		 cout<<setw(8)<<name;
		 cout<<setw(10)<<depature;
		 cout<<setw(10)<<arival;
		 cout<<setw(12)<<train;
		 cout<<setw(10)<<date;
		 cout<<setw(10)<<price;
		 cout<<setw(8)<<adults;
		 cout<<setw(10)<<kids;
		 cout<<"\n";
		 line1(10);
		 cout<<"\n";
		 }
		 finp.close();
		 getch();
		}
		char* getadhar()
		{
			return adhar;
		}
		char* getname()
		{
			return name;
		}
		char* gettrain()
		{
			return train;
		}
		void showcomplaint()
		{
			cout<<complaint;
		}
		void complain()
		{
			cout<<"Enter your complaint:";
			gets(complaint);
		}
		char* getdepature()
		{
			return depature;
		}
		char* getarival()
		{
			return arival;
		}
		void showbill()
		{
			cout<<"Name Of Passenger:			"<<name;
			cout<<"\nAdhar Number Of Passenger:		"<<adhar;
			cout<<"\nEmail Of Passenger:			"<<email;
			cout<<"\nDepature:				"<<depature;
			cout<<"\nArival:					"<<arival;
			cout<<"\nNumber Of Adults:			"<<adults;
			cout<<"\nNumber Of Kids:				"<<kids;
			cout<<"\n\n Total Bill Amounted To Ruppes 	"<<price;
		}
		void modall()
		{
			cout<<"Enter Name:";
			gets(name);
			cout<<"Enter email:";
			gets(email);
			cout<<"Enter adharno:";
			gets(adhar);
			cout<<"Enter depature:";
			gets(depature);
			cout<<"Enter arrival:";
			gets(arival);
			cout<<"Enter train name:";
			gets(train);
			cout<<"Enter number of adult:";
			cin>>adults;
			cout<<"Enter number of kids:";
			cin>>kids;
			cout<<"Enter the user name :";
			gets(username);
			cout<<"Enter password of your choice:";
			gets(password);
		}
		void modname()
		{
			cout<<"Enter Name:";
			gets(name);

		}
		void modemail()
		{
			cout<<"Enter email:";
			gets(email);

		}
		void modadhar()
		{
			cout<<"Enter adharno:";
			gets(adhar);

		}
		void moddepature()
		{
			cout<<"Enter depature:";
			gets(depature);

		}
		void modarival()
		{
			cout<<"Enter arrival:";
			gets(arival);

		}
		void modtrainname()
		{
			cout<<"Enter train name:";
			gets(train);

		}
		void modadult()
		{
			cout<<"Enter number of adult:";
			cin>>adults;

		}
		void modkids()
		{
			cout<<"Enter number of kids:";
			cin>>kids;

		}

		void modusername()
		{
			cout<<"Enter the user name :";
			gets(username);
		}
		void modpassword()
		{
			cout<<"Enter password of your choice:";
			gets(password);

		}
		char* getdate()
		{
			return date;
		}
		void calct()
		{
			int i;
			price=adults*t.getprice();
			i=kids*(t.getprice()/2);
			price=price+i;
		}
		//void showlist();
}p;
/*----------------------------------------------------------------------------
					CLASS FUNCTION DEFINATION
------------------------------------------------------------------------------*/
void train::getdata()
{
	clrscr();
	cout<<"Enter Train ID:";
	cin>>id;
	cout<<"Enter Train Name:";
	gets(name);
	cout<<"Enter Train Depature:";
	gets(depature);
	cout<<"Enter Train Arival:";
	gets(arival);
	cout<<"Enter Train Price:";
	cin>>price;
	cout<<"Enter Train Type (E/M):";
	cin>>type;
	cout<<"Enter Train Date (dd-mm-yyyy):";
	gets(date);
	cout<<"Enter Number Of Coaches In Train:";
	cin>>coaches;
	cout<<"Enter Number Of Km To Be Travel:";
	cin>>km;
	cout<<"Enter Train Time (HH:MM):";
	gets(time);
	getch();
	calcprice();
}
void train::showdata()
{
	clrscr();
	 textcolor(10);
	 textbackground(4);
	 gotoxy(26,3);
	 cprintf("  S E A R C H  D E T A I L S  ");
	 textbackground(0);
	 cout<<"\n";
	 line1(11);
	 textcolor(7);
	cout<<"\n";
	cout<<"\nTrain ID............................................:"<<id;
	cout<<"\nTrain Name..........................................:"<<name;
	cout<<"\nTrain Depature......................................:"<<depature;
	cout<<"\nTrain Arival........................................:"<<arival;
	cout<<"\nTrain Price.........................................:"<<price;
	cout<<"\nTrain Type (E/M)....................................:"<<type;
	cout<<"\nTrain Date (dd-mm-yyyy).............................:"<<date;
	cout<<"\nNumber Of Coaches In Train..........................:"<<coaches;
	cout<<"\nNumber Of Km To Be Travel...........................:"<<km;
	cout<<"\nTrain Time (HH:MM)..................................:"<<time;
	cout<<"\n\n";
	line1(10);
	getch();
	textcolor(7);
}
void passenger::getdata()
{
	clrscr();
	cout<<"Enter Name Of Passenger:";
	gets(name);
	cout<<"Enter Adhar Number Of Passenger:";
	gets(adhar);
	cout<<"Enter Email Of Passenger:";
	gets(email);
	cout<<"Enter Depature:";
	gets(depature);
	cout<<"Enter Arival:";
	gets(arival);
	cout<<"Enter Train Name:";
	gets(train);
	cout<<"Enter Date Of Depature";
	gets(date);
	cout<<"Enter Number Of Adults:";
	cin>>adults;
	cout<<"Enter Number Of Kids:";
	cin>>kids;
	cout<<"Make Your Username:";
	gets(username);
	cout<<"Make Your password:";
	gets(password);
	getch();
	calct();
}
void passenger::showdata()
{
	clrscr();
	 textcolor(10);
	 textbackground(4);
	 gotoxy(26,3);
	 cprintf("  S E A R C H  D E T A I L S  ");
	 textbackground(0);
	 cout<<"\n";
	 line1(11);
	cout<<"\n";
	cout<<"\nName Of Passenger.............................:"<<name;
	cout<<"\nAdhar Number Of Passenger.....................:"<<adhar;
	cout<<"\nEmail Of Passenger............................:"<<email;
	cout<<"\nDepature......................................:"<<depature;
	cout<<"\nArival........................................:"<<arival;
	cout<<"\nTrain Name....................................:"<<train;
	cout<<"\nNumber Of Adults..............................:"<<adults;
	cout<<"\nNumber Of Kids................................:"<<kids;
	cout<<"\n\n";
	line1(10);
	getch();
}
/*----------------------------------------------------------------------------
					MAIN FUNCTION
------------------------------------------------------------------------------*/

void main()
{
	clrscr();
	loading();
	intro();
	menu();
	conclude();
	getch();
}
/*----------------------------------------------------------------------------
					FUNCTION DEFINATION
------------------------------------------------------------------------------*/
void menu()
{
	clrscr();
	menu:
	clrscr();
	int i;
	textcolor(7);
	box(20,10,60,16);
	gotoxy(22,11);
	textcolor(12);
	cprintf("1. A D M I N:");
	gotoxy(22,12);
	textcolor(11);
	cprintf("2. R E G I S T E R");
	gotoxy(22,13);
	textcolor(10);
	cprintf("3. P A S S E N G E R   D E T A I L S");
	gotoxy(22,14);
	textcolor(14);
	cprintf("4. I N F O R M A T I O N");
	gotoxy(22,15);
	textcolor(19);
	cprintf("5. T E R M S  &  C O N D I T I O N S");
	gotoxy(22,18);
	textcolor(15);
	cprintf("* * * Enter Your Choice * * *");
	textcolor(7);
	cin>>i;
	switch(i)
	{
		case 1:
		//Declared for verifying the password
		char usr[20], pwd2[20];
		 int chance=1,i=0;
		 //Label assigned for taking input
		 start:
		 i=0;
		 char ch=0;
		 clrscr();
		 header();
		 gotoxy(15,5);
		 cout<<"Enter User Name    : ";
		 cin>>usr;
		 gotoxy(15,6);
		 cout<<"Enter the password : ";
		 do
		 {
		  ch=getch();
		  if(ch!=13)
		  {
		   pwd2[i++]=ch;
		   cout<<"*";
		  }
		  else
		   pwd2[i++]='\0';
		 }
		 while(ch!=13);
		  if(strcmp(usr,user)==0 && strcmp(pwd2,pwd)==0)
		 {
		  gotoxy(15,8);
		  cout<<"Password Matching....";
		  for(int i=1;i<=100;i++)
		  {
		   delay(10);
		   gotoxy(15,11);

		    if(i<100)
		    cout<<i<<"% Loading...";
		   else
		    cout<<i<<"% Loading completed....";
		  }
		  gotoxy(15,15);
		  cout<<"Welcome : "<<developer<<" to train information registeration...";
		  gotoxy(53,20);
		  textcolor(14);
		  cprintf("Press any key to continue...");
		  textcolor(7);
		  footer();
		  getch();
		 }
		 else
		 {
		  gotoxy(15,8);
		  cout<<"Password Wrong....";
		  gotoxy(15,10);
		  cout<<chance<<" used of 3 chances...";
		  gotoxy(15,12);
		  cout<<"Enter the correct credentials";
		  chance++;
		  getch();
		  if(chance<=3) goto start;
		  else
		  {
		   gotoxy(15,14);
		   textcolor(4);
		   cprintf("You are Unauthorized to access....");
		   getch();
		   errorfile();
		   goto menu;
		  }
		  textcolor(7);
		 }
			line3();
			adminmenu();
			goto menu;
		case 2:
			line3();
			registermenu();
			goto menu;
		case 3:
			line3();
			loginmenu();
			goto menu;
		case 4:
			line3();
			infomenu();
			goto menu;
		case 5:
			line3();
			tcmenu();
			goto menu;
	}
	getch();
}
void adminmenu()
{
	clrscr();
	admin:
	clrscr();
	int i;
	textcolor(7);
	box(20,10,60,20);
	gotoxy(22,11);
	textcolor(12);
	cprintf("1. A D D   T R A I N");
	gotoxy(22,12);
	textcolor(11);
	cprintf("2. D I S P L A Y   T R A I N");
	gotoxy(22,13);
	textcolor(10);
	cprintf("3. D I S P L A Y   P A S S E N G E R");
	gotoxy(22,14);
	textcolor(14);
	cprintf("4. S E A R C H   T R A I N");
	gotoxy(22,15);
	textcolor(19);
	cprintf("5. S E A R C H   P A S S E N G E R");
	gotoxy(22,16);
	textcolor(8);
	cprintf("6. D E L E T E");
	gotoxy(22,17);
	textcolor(14);
	cprintf("7. M O D I F Y");
	gotoxy(22,18);
	textcolor(10);
	cprintf("8. R E C O V E R");
	gotoxy(22,19);
	textcolor(13);
	cprintf("9. C O M P L A I N T S");
	gotoxy(22,22);
	textcolor(15);
	cprintf("* * * Enter Your Choice * * *");
	textcolor(7);
	cin>>i;
	switch(i)
	{
		case 1:
			line3();
			addtrain();
			goto admin;
		case 2:
			line3();
			displaymenu();
			goto admin;
		case 3:
			line3();
			displaymenup();
			goto admin;
		case 4:
			line3();
			searchmenu();
			goto admin;
		case 5:
			line3();
			searchmenup();
			goto admin;
		case 6:
			line3();
			deletemenu();
			goto admin;
		case 7:
			line3();
			modifymenu();
			goto admin;
		case 8:
			line3();
			recovermenu();
			goto admin;
		case 9:
			line3();
			anycomplaint();
			goto admin;
	}
	getch();
}
void addtrain()
{
	clrscr();
	ofstream foutt("train.dat",ios::binary|ios::app);
	cout<<"Enter the following data:";
	t.getdata();
	foutt.write((char*)&t,sizeof(t));
	foutt.close();
	getch();
}
void anycomplaint()
{
	clrscr();
	ifstream finc("complaint.dat",ios::binary);
	while(finc.read((char*)&p,sizeof(p)))
	{
		p.showdata();
		cout<<"conplaint is:";
		p.showcomplaint();
		getch();
	}
	finc.close();
	getch();
}
void displaymenup()
{
	clrscr();
	dispp:
	clrscr();
	int i;
	textcolor(7);
	box(20,10,60,16);
	gotoxy(22,11);
	textcolor(12);
	cprintf("1. Display All Passengers");
	gotoxy(22,12);
	textcolor(11);
	cprintf("2. Display Passenger Train Wise");
	gotoxy(22,13);
	textcolor(10);
	cprintf("3. Display Passenger Arival Wise");
	gotoxy(22,14);
	textcolor(14);
	cprintf("4. Display Passenger Depature Wise");
	gotoxy(22,15);
	textcolor(19);
	cprintf("5. Display Passenger Date Wise");
	gotoxy(22,18);
	textcolor(15);
	cprintf("* * * Enter your Choice * * *");
	textcolor(7);
	cin>>i;
	switch(i)
	{
		case 1:
			line3();
			dispalp();
			goto dispp;
		case 2:
			line3();
			disptp();
			goto dispp;
		case 3:
			line3();
			dispap();
			goto dispp;
		case 4:
			line3();
			dispdp();
			goto dispp;
		case 5:
			line3();
			dispdatp();
			goto dispp;
	}
}
void dispalp()
{
	clrscr();
	p.showall();
	getch();
}
void disptp()
{
	clrscr();
	int flag=0,i;
	char a[20];
	cout<<"Enter Train Name:";
	gets(a);
	ifstream finp("passenger.dat",ios::binary);
	while(finp.read((char*)&p,sizeof(p)))
	{
		if(strcmpi(a,p.gettrain())==0)
		{
			p.showdata();
			flag++;
		}
	}
	if(flag==0)
	{
		cout<<a<<"Train not found in database:";
	}
	getch();
	finp.close();
}
void dispap()
{
	clrscr();
	int flag=0;
	char a[20];
	cout<<"Enter Passenger Arival:";
	gets(a);
	ifstream finp("passenger.dat",ios::binary);
	while(finp.read((char*)&p,sizeof(p)))
	{
		if(strcmpi(a,p.getarival())==0)
		{
			p.showdata();
			flag++;
		}
	}
	if(flag==0)
	{
		cout<<a<<"Arival not found in database:";
	}
	getch();
	finp.close();
}
void dispdp()
{
	clrscr();
	int flag=0;
	char a[20];
	cout<<"Enter Passenger Depature:";
	gets(a);
	ifstream finp("passenger.dat",ios::binary);
	while(finp.read((char*)&p,sizeof(p)))
	{
		if(strcmpi(a,p.getdepature())==0)
		{
			p.showdata();
			flag++;
		}
	}
	if(flag==0)
	{
		cout<<a<<"Depature not found in database:";
	}
	getch();
	finp.close();
}
void dispdatp()
{
	clrscr();
	int flag=0;
	char a[20];
	cout<<"Enter Passenger Depature Date: (dd-mm-yyyy)";
	gets(a);
	ifstream finp("passenger.dat",ios::binary);
	while(finp.read((char*)&p,sizeof(p)))
	{
		if(strcmpi(a,p.getdate())==0)
		{
			p.showdata();
			flag++;
		}
	}
	if(flag==0)
	{
		cout<<a<<"Depature Date not found in database:";
	}
	getch();
	finp.close();
}
void searchmenup()
{
	clrscr();
	search:
	clrscr();
	int i;
	textcolor(7);
	box(20,10,60,13);
	gotoxy(22,11);
	textcolor(12);
	cprintf("1. search passenger name");
	gotoxy(22,12);
	textcolor(11);
	cprintf("2. search passenger adhar");
	gotoxy(22,15);
	textcolor(15);
	cprintf("*** Enter Your Choice ***");
	textcolor(7);
	cin>>i;
	switch(i)
	{
		case 1:
			line3();
			searchn();
			goto search;
		case 2:
			line3();
			searcha();
			goto search;
	}
}
void searchn()
{
	clrscr();
	int flag=0;
	char a[20];
	cout<<"Enter Passenger Name:";
	gets(a);
	ifstream finp("passenger.dat",ios::binary);
	while(finp.read((char*)&p,sizeof(p)))
	{
		if(strcmpi(a,p.getname())==0)
		{
			p.showdata();
			flag++;
		}
	}
	if(flag==0)
	{
		cout<<a<<"Name not found in database:";
	}
	getch();
	finp.close();
}
void searcha()
{
	clrscr();
	int flag=0;
	char a[20];
	cout<<"Enter Passenger Adhar:";
	gets(a);
	ifstream finp("passenger.dat",ios::binary);
	while(finp.read((char*)&p,sizeof(p)))
	{
		if(strcmpi(a,p.getadhar())==0)
		{
			p.showdata();
			flag++;
		}
	}
	if(flag==0)
	{
		cout<<a<<"Adhar not found in database:";
	}
	getch();
	finp.close();
}
void displaymenu()
{
	clrscr();
	display:
	clrscr();
	int i;
	textcolor(7);
	box(20,10,60,19);
	gotoxy(22,11);
	textcolor(12);
	cprintf("1. Display All Trains");
	gotoxy(22,12);
	textcolor(11);
	cprintf("2. Display All Express Trains");
	gotoxy(22,13);
	textcolor(10);
	cprintf("3. Display All Mail Trains");
	gotoxy(22,14);
	textcolor(14);
	cprintf("4. Display Trains by Depature");
	gotoxy(22,15);
	textcolor(19);
	cprintf("5. Display Trains by Arival");
	gotoxy(22,16);
	textcolor(8);
	cprintf("6. Display All Trains By Date");
	gotoxy(22,17);
	textcolor(14);
	cprintf("7. Display All Trains By Depature And Arival");
	gotoxy(22,18);
	textcolor(10);
	cprintf("8. Display Train Within Specific Km");
	gotoxy(22,21);
	textcolor(15);
	cprintf("***Enter Your Choice ***");
	textcolor(7);
	cin>>i;
	switch(i)
	{
		case 1:
			line3();
			dall();
			goto display;
		case 2:
			line3();
			dalle();
			goto display;
		case 3:
			line3();
			dallm();
			goto display;
		case 4:
			line3();
			dalld();
			goto display;
		case 5:
			line3();
			dalla();
			goto display;
		case 6:
			line3();
			dalldate();
			goto display;
		case 7:
			line3();
			dallda();
			goto display;
		case 8:
			line3();
			dallkm();
			goto display;
	}
	getch();
}
void dall()
{
	clrscr();
	t.showall();
	getch();

}
void dalle()
{
	clrscr();
	ifstream fint("train.dat",ios::binary);
	while(fint.read((char*)&t,sizeof(t)))
	{
		if(t.gettype()=='E')
		{
			t.showdata();
		}
	}
	getch();
	fint.close();
}
void dallm()
{
	clrscr();
	ifstream fint("train.dat",ios::binary);
	while(fint.read((char*)&t,sizeof(t)))
	{
		if(t.gettype()=='M')
		{
			t.showdata();
		}
	}
	getch();
	fint.close();
}
void dalld()
{
	clrscr();
	char a[30];
	int flag=0;
	cout<<"Enter Train Depature:";
	gets(a);
	ifstream fint("train.dat",ios::binary);
	while(fint.read((char*)&t,sizeof(t)))
	{
		if(strcmpi(a,t.getdepature())==0)
		{
			t.showdata();
			flag++;
		}
	}
	if(flag==0)
	{
		cout<<a<<"Depature not found in database:";
	}

	getch();
	fint.close();

}
void dalla()
{
	clrscr();
	char a[30];
	int flag=0;
	cout<<"Enter Train Arival:";
	gets(a);
	ifstream fint("train.dat",ios::binary);
	while(fint.read((char*)&t,sizeof(t)))
	{
		if(strcmpi(a,t.getarival())==0)
		{
			t.showdata();
			flag++;
		}
	}
	if(flag==0)
	{
		cout<<a<<"Arival not found in database:";
	}

	getch();
	fint.close();

}
void dalldate()
{
	clrscr();
	char a[30];
	int flag=0;
	cout<<"Enter Train Date:";
	gets(a);
	ifstream fint("train.dat",ios::binary);
	while(fint.read((char*)&t,sizeof(t)))
	{
		if(strcmpi(a,t.getdate())==0)
		{
			t.showdata();
			flag++;
		}
	}
	if(flag==0)
	{
		cout<<a<<"Date not found in database:";
	}

	getch();
	fint.close();

}
void dallda()
{
	clrscr();
	char a[30],b[30];
	int flag=0;
	cout<<"Enter Train Depature:";
	gets(a);
	cout<<"Enter Train Arival:";
	gets(b);
	ifstream fint("train.dat",ios::binary);
	while(fint.read((char*)&t,sizeof(t)))
	{
		if(strcmpi(a,t.getdepature())==0&&strcmpi(b,t.getarival())==0)
		{
			t.showdata();
			flag++;
		}
	}
	if(flag==0)
	{
		cout<<a<<"Depature  or arival not found in database:";
	}

	getch();
	fint.close();
}
void dallkm()
{
	clrscr();
	int flag=0,a;
	cout<<"Enter Train Specific Km:";
	cin>>a;
	ifstream fint("train.dat",ios::binary);
	while(fint.read((char*)&t,sizeof(t)))
	{
		if(t.getkm()>=a)
		{
			t.showdata();
			flag++;
		}
	}
	if(flag==0)
	{
		cout<<a<<"km not found in database:";
	}

	getch();
	fint.close();
}

void searchmenu()
{
	clrscr();
	search:
	clrscr();
	int i;
	textcolor(7);
	box(20,10,60,16);
	gotoxy(22,11);
	textcolor(12);
	cprintf("1. Search Train By Name");
	gotoxy(22,12);
	textcolor(11);
	cprintf("2. Search Train By Id");
	gotoxy(22,13);
	textcolor(10);
	cprintf("3. Search Train By Depature");
	gotoxy(22,14);
	textcolor(14);
	cprintf("4. Search Train By Arival");
	gotoxy(22,15);
	textcolor(19);
	cprintf("5. Search Train By date");
	gotoxy(22,18);
	textcolor(15);
	cprintf("* * * Enter Your choice * * *");
	textcolor(7);
	cin>>i;
	switch(i)
	{
		case 1:
			line3();
			sbyname();
			goto search;
		case 2:
			line3();
			sbyid();
			goto search;
		case 3:
			line3();
			sbyd();
			goto search;
		case 4:
			line3();
			sbya();
			goto search;
		case 5:
			line3();
			sbydate();
			goto search;
	}
	getch();
}
void sbyname()
{
	clrscr();
	char a[20];
	int flag=0;
	cout<<"Enter Train Name:";
	gets(a);
	ifstream fint("train.dat",ios::binary);
	while(fint.read((char*)&t,sizeof(t)))
	{
		if(strcmpi(a,t.getname())==0)
		{
			t.showdata();
			flag++;
		}
	}
	if(flag==0)
	{
		cout<<a<<"Train Name Not Found In Database:";
	}
	getch();
	fint.close();
}
void sbyid()
{
	clrscr();
	int a;
	int flag=0;
	cout<<"Enter Train Id:";
	cin>>a;
	ifstream fint("train.dat",ios::binary);
	while(fint.read((char*)&t,sizeof(t)))
	{
		if(a==t.getid())
		{
			t.showdata();
			flag++;
		}
	}
	if(flag==0)
	{
		cout<<a<<"Train id Not Found In Database:";
	}
	getch();
	fint.close();
}
void sbyd()
{
	clrscr();
	char a[20];
	int flag=0;
	cout<<"Enter Train Depature:";
	gets(a);
	ifstream fint("train.dat",ios::binary);
	while(fint.read((char*)&t,sizeof(t)))
	{
		if(strcmpi(a,t.getdepature())==0)
		{
			t.showdata();
			flag++;
			getch();
		}
	}
	if(flag==0)
	{
		cout<<a<<"Train Depature Not Found In Database:";
	}
	getch();
	fint.close();
}
void sbya()
{
	clrscr();
	char a[20];
	int flag=0;
	cout<<"Enter Train Arival:";
	gets(a);
	ifstream fint("train.dat",ios::binary);
	while(fint.read((char*)&t,sizeof(t)))
	{
		if(strcmpi(a,t.getarival())==0)
		{
			t.showdata();
			flag++;
		}
	}
	if(flag==0)
	{
		cout<<a<<"Train Arival Not Found In Database:";
	}
	getch();
	fint.close();
}
void sbydate()
{
	clrscr();
	char a[20];
	int flag=0;
	cout<<"Enter Train Date (dd-mm-yyyy):";
	gets(a);
	ifstream fint("train.dat",ios::binary);
	while(fint.read((char*)&t,sizeof(t)))
	{
		if(strcmpi(a,t.getdate())==0)
		{
			t.showdata();
			flag++;
		}
	}
	if(flag==0)
	{
		cout<<a<<"Train Date Not Found In Database:";
	}
	getch();
	fint.close();
}
void deletemenu()
{
	clrscr();
	delet:
	clrscr();
	int i;
	textcolor(7);
	box(20,10,60,15);
	gotoxy(22,11);
	textcolor(12);
	cprintf("1. Delete Train");
	gotoxy(22,12);
	textcolor(11);
	cprintf("2. Delete Passenger");
	gotoxy(22,13);
	textcolor(10);
	cprintf("3. Display Deleted Train");
	gotoxy(22,14);
	textcolor(14);
	cprintf("4. Display Deleted passenger");
	gotoxy(22,17);
	textcolor(19);
	cprintf("* * * Enter Your Choice * * *");
	textcolor(7);
	cin>>i;
	switch(i)
	{
		case 1:
			line3();
			deltrain();
			goto delet;
		case 2:
			line3();
			delpass();
			goto delet;
		case 3:
			line3();
			dispdt();
			goto delet;
		case 4:
			line3();
			dispdpr();
			goto delet;
	}
	getch();
}
void deltrain()
{
	clrscr();
	int tno;
	char found='n';
	ifstream fint("train.dat",ios::binary);
	ofstream fouttr("recovert.dat",ios::binary|ios::app);
	ofstream fout("temp.dat",ios::binary|ios::app);
	cout<<"\nEnter the Train id. whose record is to be deleted: ";
	cin>>tno;
	while(fint.read((char*)&t,sizeof(t)))
	{
		if(t.getid()==tno)
		{
			fouttr.write((char*)&t,sizeof(t));
			found='y';
		}
		else
		{
			fout.write((char*)&t,sizeof(t));
		}
	}
	if(found=='n') cout<<"\nThe Train No."<<tno<<" is not in the file...\n";
	fint.close();
	fouttr.close();
	fout.close();
	remove("train.dat");
	rename("Temp.dat","train.dat");
	getch();
}
void delpass()
{
	clrscr();
	char tno[10];
	char found='n';
	ifstream finp("passenger.dat",ios::binary);
	ofstream foutpr("recoverp.dat",ios::binary|ios::app);
	ofstream fout("temp.dat",ios::binary|ios::app);
	cout<<"\nEnter the passenger adhar. whose record is to be deleted: ";
	gets(tno);
	while(finp.read((char*)&p,sizeof(p)))
	{
		if(strcmpi(p.getadhar(),tno)==0)
		{
			foutpr.write((char*)&p,sizeof(p));
			found='y';
		}
		else
		{
			fout.write((char*)&p,sizeof(p));
		}
	}
	if(found=='n') cout<<"\nThe Train No."<<tno<<" is not in the file...\n";
	finp.close();
	foutpr.close();
	fout.close();
	remove("passenger.dat");
	rename("Temp.dat","passenger.dat");
	getch();
}
void dispdt()
{
	clrscr();
	int i;
	cout<<"Enter Train Id:";
	cin>>i;
	ifstream fintr("recovert.dat",ios::binary);
	while(fintr.read((char*)&t,sizeof(t)))
	{
		t.showdata();
	}
	getch();
	fintr.close();
}
void dispdpr()
{
	clrscr();
	char i[20];
	cout<<"Enter Passenger Adhar:";
	gets(i);
	ifstream finpr("recoverp.dat",ios::binary);
	while(finpr.read((char*)&p,sizeof(p)))
	{
		p.showdata();
	}
	getch();
	finpr.close();
}
void modifymenu()
{
	clrscr();
	modi:
	clrscr();
	int i;
	textcolor(7);
	box(20,10,60,13);
	gotoxy(22,11);
	textcolor(12);
	cprintf("1. Modify In Train");
	gotoxy(22,12);
	textcolor(11);
	cprintf("2. Modify In Passenger");
	gotoxy(22,15);
	textcolor(15);
	cprintf("* * * Enter Your Choice * * *");
	textcolor(7);
	cin>>i;
	switch(i)
	{
	case 1:
		line3();
		clrscr();
		mint();
		getch();
		goto modi;
	case 2:
		line3();
		clrscr();
		minp();
		getch();
		goto modi;
	}
	getch();
}
void mint()
{
	clrscr();
	min:
	clrscr();
	int i;
	textcolor(7);
	box(20,8,60,18);
	gotoxy(22,9);
	textcolor(12);
	cout<<"1. modify all";
	gotoxy(22,10);
	textcolor(11);
	cout<<"2. modify name";
	gotoxy(22,11);
	textcolor(10);
	cout<<"3. modify id";
	gotoxy(22,12);
	textcolor(14);
	cout<<"4. modify price";
	gotoxy(22,13);
	textcolor(19);
	cout<<"5. modify arrival";
	gotoxy(22,14);
	textcolor(8);
	cout<<"6. modify depature";
	gotoxy(22,15);
	textcolor(10);
	cout<<"7. modify date";
	gotoxy(22,16);
	textcolor(12);
	cout<<"8. modify time";
	gotoxy(22,17);
	textcolor(11);
	cout<<"9. modify km";
	gotoxy(22,20);
	textcolor(15);
	cout<<"* * *Enter your choice * * *";
	textcolor(7);
	cin>>i;
	switch(i)
	{
	 case 1:
		line3();
		modall();
		goto min;
	 case 2:
		line3();
		modname();
		goto min;
	 case 3:
		line3();
		modid();
		goto min;
	 case 4:
		line3();
		modprice();
		goto min;
	 case 5:
		line3();
		modarrival();
		goto min;
	 case 6:
		line3();
		moddepat();
		goto min;
	 case 7:
		line3();
		moddate();
		goto min;
	 case 8:
		line3();
		modtime();
		goto min;
	 case 9:
		line3();
		modkm();
		goto min;
	}
}
void modall()
{
	clrscr();
	int c,no;
	int flag=0;
	cout<<"Enter Train Id";
	cin>>no;
	fstream fiot("train.dat",ios::in|ios::out|ios::binary);
	while(fiot.read((char*)&t,sizeof(t)))
	{
		c=fiot.tellg();
		if(no==t.getid())
		{
			t.modtall();
			fiot.seekg(c-sizeof(t));
			fiot.write((char*)&t,sizeof(t));
			flag++;
			break;
		}
	}
	if(flag==0)
	cout<<"\nThe train id"<<no<<" not found.";
	fiot.close();
	getch();
}
void modname()
{
	clrscr();
	//cout<<"2. modify name:";
	int c,no;
	int flag=0;
	cout<<"Enter Train Id:";
	cin>>no;
	fstream fiot("train.dat",ios::in|ios::out|ios::binary);
	while(fiot.read((char*)&t,sizeof(t)))
	{
		c=fiot.tellg();
		if(no==t.getid())
		{
			t.modtname();
			fiot.seekg(c-sizeof(t));
			fiot.write((char*)&t,sizeof(t));
			flag++;
			break;
		}
	}
	if(flag==0)
	cout<<"\nThe train id"<<no<<" not found.";
	fiot.close();

	getch();
}
void modid()
{
	clrscr();
	//cout<<"3. modify id:";
	int c,no;
	int flag=0;
	cout<<"Enter Train Id";
	cin>>no;
	fstream fiot("train.dat",ios::in|ios::out|ios::binary);
	while(fiot.read((char*)&t,sizeof(t)))
	{
		c=fiot.tellg();
		if(no==t.getid())
		{
			t.modtid();
			fiot.seekg(c-sizeof(t));
			fiot.write((char*)&t,sizeof(t));
			flag++;
			break;
		}
	}
	if(flag==0)
	cout<<"\nThe train id"<<no<<" not found.";
	fiot.close();

	getch();
}
void modprice()
{
	clrscr();
	int c,no;
	int flag=0;
	cout<<"Enter Train Id:";
	cin>>no;
	fstream fiot("train.dat",ios::in|ios::out|ios::binary);
	while(fiot.read((char*)&t,sizeof(t)))
	{
		c=fiot.tellg();
		if(no==t.getid())
		{
			t.modtprice();
			fiot.seekg(c-sizeof(t));
			fiot.write((char*)&t,sizeof(t));
			flag++;
			break;
		}
	}
	if(flag==0)
	cout<<"\nThe train id"<<no<<" not found.";
	fiot.close();

	getch();
}
void modarrival()
{
	clrscr();
	//cout<<"5. modify arrival:";
	int c,no;
	int flag=0;
	cout<<"Enter Train Id:";
	cin>>no;
	fstream fiot("train.dat",ios::in|ios::out|ios::binary);
	while(fiot.read((char*)&t,sizeof(t)))
	{
		c=fiot.tellg();
		if(no==t.getid())
		{
			t.modtarival();
			fiot.seekg(c-sizeof(t));
			fiot.write((char*)&t,sizeof(t));
			flag++;
			break;
		}
	}
	if(flag==0)
	cout<<"\nThe train id"<<no<<" not found.";
	fiot.close();
	getch();
}
void moddepat()
{
	clrscr();
	//cout<<"6. modify depature:";
	int c,no;
	int flag=0;
	cout<<"Enter Train Id:";
	cin>>no;
	fstream fiot("train.dat",ios::in|ios::out|ios::binary);
	while(fiot.read((char*)&t,sizeof(t)))
	{
		c=fiot.tellg();
		if(no==t.getid())
		{
			t.modtdepature();
			fiot.seekg(c-sizeof(t));
			fiot.write((char*)&t,sizeof(t));
			flag++;
			break;
		}
	}
	if(flag==0)
	cout<<"\nThe train id"<<no<<" not found.";
	fiot.close();

	getch();
}
void moddate()
{
	clrscr();
	//cout<<"7. modify date:";
		int c,no;
	int flag=0;
	cout<<"Enter Train Id:";
	cin>>no;
	fstream fiot("train.dat",ios::in|ios::out|ios::binary);
	while(fiot.read((char*)&t,sizeof(t)))
	{
		c=fiot.tellg();
		if(no==t.getid())
		{
			t.modtdate();
			fiot.seekg(c-sizeof(t));
			fiot.write((char*)&t,sizeof(t));
			flag++;
			break;
		}
	}
	if(flag==0)
	cout<<"\nThe train id"<<no<<" not found.";
	fiot.close();

	getch();
}
void modtime()
{
	clrscr();
	//cout<<"8. modify time:";
		int c,no;
	int flag=0;
	cout<<"Enter Train Id:";
	cin>>no;
	fstream fiot("train.dat",ios::in|ios::out|ios::binary);
	while(fiot.read((char*)&t,sizeof(t)))
	{
		c=fiot.tellg();
		if(no==t.getid())
		{
			t.modttime();
			fiot.seekg(c-sizeof(t));
			fiot.write((char*)&t,sizeof(t));
			flag++;
			break;
		}
	}
	if(flag==0)
	cout<<"\nThe train id"<<no<<" not found.";
	fiot.close();


	getch();
}
void modkm()
{
	clrscr();
	int c,no;
	int flag=0;
	cout<<"Enter Train Id:";
	cin>>no;
	fstream fiot("train.dat",ios::in|ios::out|ios::binary);
	while(fiot.read((char*)&t,sizeof(t)))
	{
		c=fiot.tellg();
		if(no==t.getid())
		{
			t.modtkm();
			fiot.seekg(c-sizeof(t));
			fiot.write((char*)&t,sizeof(t));
			flag++;
			break;
		}
	}
	if(flag==0)
	cout<<"\nThe train id"<<no<<" not found.";
	fiot.close();

	getch();
}

void minp()
{
	clrscr();
	mip:
	clrscr();
	int i;
	textcolor(7);
	box(20,6,60,18);
	gotoxy(22,7);
	textcolor(12);
	cout<<"1.modify all";
	gotoxy(22,8);
	textcolor(11);
	cout<<"2.modify name";
	gotoxy(22,9);
	textcolor(10);
	cout<<"3.modify email";
	gotoxy(22,10);
	textcolor(14);
	cout<<"4.modify adharno";
	gotoxy(22,11);
	textcolor(19);
	cout<<"5.modify depature";
	gotoxy(22,12);
	textcolor(8);
	cout<<"6.modify arrival";
	gotoxy(22,13);
	textcolor(10);
	cout<<"7.modify trainname";
	gotoxy(22,14);
	textcolor(12);
	cout<<"8.modify number of adult";
	gotoxy(22,15);
	textcolor(11);
	cout<<"9.modify number of kids";
	gotoxy(22,16);
	textcolor(10);
	cout<<"10.modify username";
	gotoxy(22,17);
	textcolor(14);
	cout<<"11.modify password";
	gotoxy(22,20);
	textcolor(15);
	cout<<"* * * Enter your choice * * *:";
	textcolor(7);
	cin>>i;
	switch(i)
	{
		case 1:
			line3();
			modpall();
			goto mip;
		case 2:
			line3();
			modpname();
			goto mip;
		case 3:
			line3();
			modpemal();
			goto mip;
		case 4:
			line3();
			modpadhar();
			goto mip;
		case 5:
			line3();
			modpdepart();
			goto mip;
		case 6:
			line3();
			modparri();
			goto mip;
		case 7:
			line3();
			modptrain();
			goto mip;
		case 8:
			line3();
			modpadult();
			goto mip;
		case 9:
			line3();
			modpkid();
			goto mip;
		case 10:
			line3();
			modpuser();
			goto mip;
		case 11:
			line3();
			modppass();
			goto mip;
	}
	getch();
}
void modpall()
{
	clrscr();
	//cout<<"1.modify all:";
	int c;
	char no[20];
	int flag=0;
	cout<<"Enter Adhar Number:";
	gets(no);
	fstream fiop("passenger.dat",ios::in|ios::out|ios::binary);
	while(fiop.read((char*)&p,sizeof(p)))
	{
		c=fiop.tellg();
		if(strcmpi(no,p.getadhar())==0)
		{
			fiop.seekp(c-sizeof(p));
			p.modall();
			fiop.write((char*)&p,sizeof(p));
			flag++;
			break;
		}
	}
	if(flag==0)
	cout<<"\nThe passenger adhar"<<no<<" not found.";
	fiop.close();
	getch();
}
void modpname()
{
	clrscr();
	//cout<<"2.modify name";
	int c;
	char no[20];
	int flag=0;
	cout<<"Enter Adhar Number:";
	gets(no);
	fstream fiop("passenger.dat",ios::in|ios::out|ios::binary);
	while(fiop.read((char*)&p,sizeof(p)))
	{
		c=fiop.tellg();
		if(strcmpi(no,p.getadhar())==0)
		{
			fiop.seekp(c-sizeof(p));
			p.modname();
			fiop.write((char*)&p,sizeof(p));
			flag++;
			break;
		}
	}
	if(flag==0)
	cout<<"\nThe passenger adhar"<<no<<" not found.";
	fiop.close();
	getch();
}
void modpemal()
{
	clrscr();
	//cout<<"3.modify email";
	int c;
	char no[20];
	int flag=0;
	cout<<"Enter Adhar Number";
	gets(no);
	fstream fiop("passenger.dat",ios::in|ios::out|ios::binary);
	while(fiop.read((char*)&p,sizeof(p)))
	{
		c=fiop.tellg();
		if(strcmpi(no,p.getadhar())==0)
		{
			fiop.seekp(c-sizeof(p));
			p.modemail();
			fiop.write((char*)&p,sizeof(p));
			flag++;
			break;
		}
	}
	if(flag==0)
	cout<<"\nThe passenger adhar"<<no<<" not found.";
	fiop.close();
	getch();
}
void modpadhar()
{
	clrscr();
	//cout<<"4.modify adharno";
	int c;
	char no[20];
	int flag=0;
	cout<<"Enter Adhar Number";
	gets(no);
	fstream fiop("passenger.dat",ios::in|ios::out|ios::binary);
	while(fiop.read((char*)&p,sizeof(p)))
	{
		c=fiop.tellg();
		if(strcmpi(no,p.getadhar())==0)
		{
			fiop.seekp(c-sizeof(p));
			p.modadhar();
			fiop.write((char*)&p,sizeof(p));
			flag++;
			break;
		}
	}
	if(flag==0)
	cout<<"\nThe passenger adhar"<<no<<" not found.";
	fiop.close();
	getch();
}
void modpdepart()
{
	clrscr();
	//cout<<"5.modify depature";
	int c;
	char no[20];
	int flag=0;
	cout<<"Enter Adhar Number:";
	gets(no);
	fstream fiop("passenger.dat",ios::in|ios::out|ios::binary);
	while(fiop.read((char*)&p,sizeof(p)))
	{
		c=fiop.tellg();
		if(strcmpi(no,p.getadhar())==0)
		{
			fiop.seekp(c-sizeof(p));
			p.moddepature();
			fiop.write((char*)&p,sizeof(p));
			flag++;
			break;
		}
	}
	if(flag==0)
	cout<<"\nThe passenger adhar"<<no<<" not found.";
	fiop.close();
	getch();
}
void modparri()
{
	clrscr();
	//cout<<"6.modify arrival";
	int c;
	char no[20];
	int flag=0;
	cout<<"Enter Adhar number:";
	gets(no);
	fstream fiop("passenger.dat",ios::in|ios::out|ios::binary);
	while(fiop.read((char*)&p,sizeof(p)))
	{
		c=fiop.tellg();
		if(strcmpi(no,p.getadhar())==0)
		{
			fiop.seekp(c-sizeof(p));
			p.modarival();
			fiop.write((char*)&p,sizeof(p));
			flag++;
			break;
		}
	}
	if(flag==0)
	cout<<"\nThe passenger adhar"<<no<<" not found.";
	fiop.close();
	getch();
}
void modptrain()
{
	clrscr();
	//cout<<"7.modify trainname";
	int c;
	char no[20];
	int flag=0;
	cout<<"Enter Adhar number:";
	gets(no);
	fstream fiop("passenger.dat",ios::in|ios::out|ios::binary);
	while(fiop.read((char*)&p,sizeof(p)))
	{
		c=fiop.tellg();
		if(strcmpi(no,p.getadhar())==0)
		{
			fiop.seekp(c-sizeof(p));
			p.modtrainname();
			fiop.write((char*)&p,sizeof(p));
			flag++;
			break;
		}
	}
	if(flag==0)
	cout<<"\nThe passenger adhar"<<no<<" not found.";
	fiop.close();
	getch();
}
void modpadult()
{
	clrscr();
       //cout<<"8.modify number of adult";
	int c;
	char no[20];
	int flag=0;
	cout<<"Enter Adhar Number:";
	gets(no);
	fstream fiop("passenger.dat",ios::in|ios::out|ios::binary);
	while(fiop.read((char*)&p,sizeof(p)))
	{
		c=fiop.tellg();
		if(strcmpi(no,p.getadhar())==0)
		{
			fiop.seekp(c-sizeof(p));
			p.modadult();
			fiop.write((char*)&p,sizeof(p));
			flag++;
			break;
		}
	}
	if(flag==0)
	cout<<"\nThe passenger adhar"<<no<<" not found.";
	fiop.close();
	getch();
}
void modpkid()
{
	clrscr();\
	//cout<<"9.modify number of kids";
	int c;
	char no[20];
	int flag=0;
	cout<<"Enter Adhar Number:";
	gets(no);
	fstream fiop("passenger.dat",ios::in|ios::out|ios::binary);
	while(fiop.read((char*)&p,sizeof(p)))
	{
		c=fiop.tellg();
		if(strcmpi(no,p.getadhar())==0)
		{
			fiop.seekp(c-sizeof(p));
			p.modkids();
			fiop.write((char*)&p,sizeof(p));
			flag++;
			break;
		}
	}
	if(flag==0)
	cout<<"\nThe passenger adhar"<<no<<" not found.";
	fiop.close();
	getch();
}
void modpuser()
{
	clrscr();
	//cout<<"10.modify username";
	int c;
	char no[20];
	int flag=0;
	cout<<"Enter Adhar Number:";
	gets(no);
	fstream fiop("passenger.dat",ios::in|ios::out|ios::binary);
	while(fiop.read((char*)&p,sizeof(p)))
	{
		c=fiop.tellg();
		if(strcmpi(no,p.getadhar())==0)
		{
			fiop.seekp(c-sizeof(p));
			p.modusername();
			fiop.write((char*)&p,sizeof(p));
			flag++;
			break;
		}
	}
	if(flag==0)
	cout<<"\nThe passenger adhar"<<no<<" not found.";
	fiop.close();
	getch();
}
void modppass()
{
	clrscr();
	//cout<<"11.modify password";
	int c;
	char no[20];
	int flag=0;
	cout<<"Enter Adhar Number:";
	gets(no);
	fstream fiop("passenger.dat",ios::in|ios::out|ios::binary);
	while(fiop.read((char*)&p,sizeof(p)))
	{
		c=fiop.tellg();
		if(strcmpi(no,p.getadhar())==0)
		{
			fiop.seekp(c-sizeof(p));
			p.modpassword();
			fiop.write((char*)&p,sizeof(p));
			flag++;
			break;
		}
	}
	if(flag==0)
	cout<<"\nThe passenger adhar"<<no<<" not found.";
	fiop.close();
	getch();
}
void recovermenu()
{
	clrscr();
	rec:
	clrscr();
	int i;
	textcolor(7);
	box(20,10,60,13);
	gotoxy(22,11);
	textcolor(12);
	cprintf("1. Recover Train");
	gotoxy(22,12);
	textcolor(11);
	cprintf("2. Recover Passenger");
	gotoxy(22,15);
	textcolor(15);
	cprintf("* * * Enter Your Choice * * *");
	textcolor(7);
	cin>>i;
	switch(i)
	{
		case 1:
			line3();
			rectrain();
			goto rec;
		case 2:
			line3();
			recpass();
			goto rec;
	}
	getch();

}
void rectrain()
{
	clrscr();
	int a,flag=0;
	cout<<"Enter Train Id:";
	cin>>a;
	ofstream foutt("train.dat",ios::binary|ios::app);
	ifstream fintr("recovert.dat",ios::binary);
	ofstream fout("temp.dat",ios::binary|ios::app);

	while(fintr.read((char*)&t,sizeof(t)))
	{
		if(a==t.getid())
		{
			flag++;
			t.showdata();
			foutt.write((char*)&t,sizeof(t));
			getch();
		}
		else
		{
			fout.write((char*)&t,sizeof(t));
		}
	}
	if(flag==0)
	{
		cout<<"not found";
	}
	getch();
	foutt.close();
	fintr.close();
	fout.close();
		remove("recovert.dat");
	rename("temp.dat","recovert.dat");
	getch();
}
void recpass()
{
	clrscr();
	char a[20];
	int flag=0;
	cout<<"Enter Passenger Adhar:";
	cin>>a;
	ofstream foutp("passenger.dat",ios::binary|ios::app);
	ifstream finpr("recoverp.dat",ios::binary);
	ofstream fout("temp.dat",ios::binary|ios::app);

	while(finpr.read((char*)&p,sizeof(p)))
	{
		if(strcmpi(a,p.getadhar())==0)
		{
			flag++;
			p.showdata();
			foutp.write((char*)&p,sizeof(p));
			getch();
		}
		else
		{
			fout.write((char*)&p,sizeof(p));
		}
	}
	if(flag==0)
	{
		cout<<"not found";
	}
	getch();
	foutp.close();
	finpr.close();
	fout.close();
	remove("recoverp.dat");
	rename("temp.dat","recoverp.dat");
	getch();
}
void registermenu()
{
	clrscr();
	registerm:
	clrscr();
	int i;
	textcolor(7);
	box(20,10,60,13);
	gotoxy(22,11);
	textcolor(12);
	cprintf("1. Register");
	gotoxy(22,12);
	textcolor(11);
	cprintf("2. Suitable Search");
	gotoxy(22,15);
	textcolor(15);
	cprintf("* * * Enter Your Choice * * *");
	textcolor(7);
	cin>>i;
	switch(i)
	{
		case 1:
			line3();
			regist();
			goto registerm;
		case 2:
			line3();
			suitable();
			goto registerm;
	}
	getch();
}
void regist()
{
	clrscr();
	ofstream foutp("passenger.dat",ios::binary|ios::app);
	p.getdata();
	foutp.write((char*)&p,sizeof(p));
	foutp.close();
	getch();
}
void suitable()
{
	clrscr();
	int i;
	char depart[20],ariv[20],date[20];
	cout<<"Enter Depature:";
	gets(depart);
	cout<<"Enter Arrival:";
	gets(ariv);
	cout<<"Enter date of Depature (dd-mm-yyyy):";
	gets(date);
	ifstream fint("train.dat",ios::binary);
	while(fint.read((char*)&t,sizeof(t)))
	{
		if(strcmpi(depart,t.getdepature())==0&&strcmpi(ariv,t.getarival())==0&&strcmpi(date,t.getdate())==0)
		{
			t.showdata();
		}
	}
	fint.close();
	getch();
}
void loginmenu()
{
	clrscr();
	login:
	clrscr();
	int i;
	textcolor(7);
	box(20,10,60,14);
	gotoxy(22,11);
	textcolor(12);
	cprintf("1. Cancelation");
	gotoxy(22,12);
	textcolor(11);
	cprintf("2. Bill");
	gotoxy(22,13);
	textcolor(10);
	cprintf("3. Complaint");
	gotoxy(22,16);
	textcolor(15);
	cprintf("* * * Enter Your Choice * * *");
	textcolor(7);
	cin>>i;
	switch(i)
	{
		case 1:
			line3();
			cancle();
			goto login;
		case 2:
			line3();
			bill();
			goto login;
		case 3:
			line3();
			complaint();
			goto login;
	}
	getch();
}
void cancle()
{
	clrscr();
	char a[20];
	int flag=0;
	cout<<"Enter Passenger Adhar:";
	gets(a);
	ifstream finp("passenger.dat",ios::binary);
	ofstream fout("dell.dat",ios::binary);
	while(finp.read((char*)&p,sizeof(p)))
	{
		if(strcmpi(a,p.getadhar())==0)
		{
			flag++;
			cout<<"This record will be cacnled:";
			p.showdata();
			getch();
		}
		else
		{
			fout.write((char*)&p,sizeof(p));
		}
	}
	if(flag==0)
	{
		cout<<"not found";
	}
	getch();
	finp.close();
	fout.close();
	remove("passenger.dat");
	rename("dell.dat","passenger.dat");

}
void bill()
{
	clrscr();
	char a[20];
	int flag=0;
	cout<<"Enter Passenger Adhar:";
	gets(a);
	ifstream finp("passenger.dat",ios::binary);
	while(finp.read((char*)&p,sizeof(p)))
	{
		if(strcmpi(a,p.getadhar())==0)
		{
			p.showbill();
			flag++;
			getch();
		}
	}
	if(flag==0)
	{
		cout<<a<<"Adhar number not found:";
	}
	finp.close();
	getch();
}
void complaint()
{
	clrscr();
	char a[20];
	int flag=0;
	cout<<"Enter Passenger Adhar:";
	gets(a);
	ifstream finp("passenger.dat",ios::binary);
	ofstream foutc("complaint.dat",ios::binary|ios::app);
	while(finp.read((char*)&p,sizeof(p)))
	{
		if(strcmpi(a,p.getadhar())==0)
		{
			p.complain();
			foutc.write((char*)&p,sizeof(p));
			flag++;
			getch();
		}
	}
	if(flag==0)
	{
		cout<<a<<"Adhar number not found:";
	}
	 finp.close();
	 foutc.close();
	getch();
}


void infomenu()
{
	clrscr();
	info:
	clrscr();
	int i;
	textcolor(7);
	box(20,10,60,17);
	gotoxy(22,11);
	textcolor(12);
	cprintf("1. Display All Trains");
	gotoxy(22,12);
	textcolor(11);
	cprintf("2. Display All Express Trains");
	gotoxy(22,13);
	textcolor(10);
	cprintf("3. Display All Mail Trains");
	gotoxy(22,14);
	textcolor(14);
	cprintf("4. Display Trains by Depature");
	gotoxy(22,15);
	textcolor(19);
	cprintf("5. Display Trains by Arival");
	gotoxy(22,16);
	textcolor(8);
	cprintf("6. steps for the software");
	gotoxy(22,19);
	textcolor(15);
	cprintf("* * * Enter Your Choice * * *");
	textcolor(7);
	cin>>i;
	switch(i)
	{
		case 1:
			line3();
			dall();
			goto info;
		case 2:
			line3();
			dalle();
			goto info;
		case 3:
			line3();
			dallm();
			goto info;
		case 4:
			line3();
			dalld();
			goto info;
		case 5:
			line3();
			dalla();
			goto info;
		case 6:
			line3();
			steps();
			goto info;
	}
	getch();
}
void steps()
{
	clrscr();
	inform:
	clrscr();
	int i;
	textcolor(7);
	box(20,10,60,16);
	gotoxy(22,11);
	textcolor(12);
	cprintf("1. steps about registeration");
	gotoxy(22,12);
	textcolor(11);
	cprintf("2. steps about bill");
	gotoxy(22,13);
	textcolor(10);
	cprintf("3. steps about search");
	gotoxy(22,14);
	textcolor(14);
	cprintf("4. steps about cancellation");
	gotoxy(22,15);
	textcolor(19);
	cprintf("5. steps about terms and conditions");
	gotoxy(22,18);
	textcolor(15);
	cprintf("* * * Enter your choice * * *");
	cin>>i;
	switch(i)
	{
		case 1:
			line3();
			saboutr();
			goto inform;
		case 2:
			line3();
			saboutb();
			goto inform;
		case 3:
			line3();
			sabouts();
			goto inform;
		case 4:
			line3();
			saboutc();
			goto inform;
		case 5:
			line3();
			sabouttc();
			goto inform;
	}
	getch();
}
void saboutr()
{
	clrscr();
	cout<<"step1. first choose the registeration option from the main menu\n\n\n";
	cout<<"step2. select the train registeration option:";
	getch();
}
void saboutb()
{
	clrscr();
	cout<<"step1. first select registeration from main menu:";
	cout<<"step2. secondly select login in that:";
	cout<<"step3. then select the bill to see the bill (invoice)";
	getch();
}
void sabouts()
{
	clrscr();
	cout<<"step1. first select registeration from main menu:";
	cout<<"step2. secondly select search in that:";
	cout<<"step3. search accordingly:";
	getch();
}
void saboutc()
{
	clrscr();
	cout<<"step1. first select registeration from main menu:";
	cout<<"step2. secondly select login in that:";
	cout<<"step3. after login select the cancalation option:";
	getch();
}
void sabouttc()
{
	clrscr();
	cout<<"step1. first select the informatio from main menu:";
	cout<<"step2. select terms and condition from that:";
	getch();
}
void tcmenu()
{
	clrscr();
	cout<<"1. please give complete information:\n\n";
	cout<<"2. please give correct information:\n\n";
	cout<<"3. cancllation cannot be recovered:\n\n";
	cout<<"4. recover of data can be done by admin only:\n\n";
	cout<<"5. update any record is to be infrom to admin department:\n";
	getch();
}
void box(int left, int top, int right, int bottom)
{
	int i;
	clrscr();
	gotoxy(left,top);
	printf("%c",218);
	for(i=0;i<right-left-1;i++)
		{
			printf("%c",196);
		}
	printf("%c",191);
	for(i=1;i<bottom-top;i++)
		{
			gotoxy(left,top+i);
			printf("%c",179);
			gotoxy(right,top+i);
			printf("%c",179);
		}
	gotoxy(left,bottom);
	printf("%c",192);
	for(i=0;i<right-left-1;i++)
		{
			printf("%c",196);
		}
	printf("%c",217);
}
void loading()
{
	clrscr();
	char c=178;
	int i;
	textcolor(7);
	box(1,10,80,12);
	for(i=2;i<80;i++)
	{
		gotoxy(i,11);
		textcolor(11);
		cprintf("%c",c);
		delay(100);
		textcolor(15);
		if(i<=20)
		{
		gotoxy(25,15);
		cprintf(" S T O R I N G   M E M O R Y ");
		}
		else
		{
		if(i<=40)
		{
			gotoxy(26,15);
		cprintf(" C O M P A T A B I L I T Y ");
		}
		else
		{
		if(i<=60)
		{
			gotoxy(25,15);
		cout<<(" F E A C H I N G   D A T A B A S I S ");
		}
		else
		{
		if(i<=80)
		{
			gotoxy(13,15);
		cprintf(" C R E A T I N G  S O F T W A R E  E N V I R O N M E N T ");
		}
		}
		}
		}
	 }
	 gotoxy(13,15);
	 textbackground(0);
	 cprintf("         C O M P A T A B L E   T O   R U N               ");
	 gotoxy(10,20);
	 textcolor(14);
	 cprintf("press any key to continue . . .");
	getch();
	textcolor(7);


}
void login()
{
 //Declared for verifying the password
 char usr[20], pwd2[20];
 int chance=1,i=0;
 //Label assigned for taking input
 start:
 i=0;
 char ch=0;
 clrscr();
 header();
 gotoxy(15,5);
 cout<<"Enter User Name    : ";
 cin>>usr;
 gotoxy(15,6);
 cout<<"Enter the password : ";
 do
 {
  ch=getch();
  if(ch!=13)
  {
   pwd2[i++]=ch;
   cout<<"*";
  }
  else
   pwd2[i++]='\0';
 }while(ch!=13);

  if(strcmp(usr,user)==0 && strcmp(pwd2,pwd)==0)
 {
  gotoxy(15,8);
  cout<<"Password Matching....";
  for(int i=1;i<=100;i++)
  {
   delay(10);
   gotoxy(15,11);

    if(i<100)
    cout<<i<<"% Loading...";
   else
    cout<<i<<"% Loading completed....";
  }
  gotoxy(15,15);
  cout<<"Welcome : "<<developer<<" to train information registeration...";
  gotoxy(53,20);
  textcolor(14);
  cprintf("Press any key to continue...");
  textcolor(7);
  footer();
  getch();
 }
 else
 {
  gotoxy(15,8);
  cout<<"Password Wrong....";
  gotoxy(15,10);
  cout<<chance<<" used of 3 chances...";
  gotoxy(15,12);
  cout<<"Enter the correct credentials";
  chance++;
  getch();
  if(chance<=3) goto start;
  else
  {
   gotoxy(15,14);
   textcolor(4);
   cprintf("You are Unauthorized to access....");
   getch();

  }
  textcolor(7);
 }
}
void header()
{
 cout<<"\n\n";
 textbackground(4);
 textcolor(10);
 cprintf("  T R A I N   I N F O R M A T I O N   R E G I S T E R A T I O N   P O R T A L  ");
 textcolor(7);
 textbackground(0);
 cout<<"\n";
}

//Setting the footer to display the information of developer at bottom of page
void footer()
{
 textbackground(4);
 textcolor(10);
 gotoxy(2,23);
 cprintf(" Made By: %s, %s, %s, Roll No. %d.",developer,school,std,roll);
 textcolor(7);
 textbackground(0);
}

//Displaying the first page on the screen.
void intro()
{
clrscr();
 header();
 cout<<endl<<endl;
 line1(11);
 cout<<"\n\n";
 line2();
 gotoxy(3,14);
 textcolor(11);
 cprintf(" T R A I N   I N F O R M A T I O N   R E G I S T E R A T I O N   P O R T A L  \n");
 cout<<"\n\n";
 line1(10);
 cout<<"\n\n";
 line2();
 cout<<"\n";
 footer();
 textcolor(7);
 getch();
 line3();
}
void conclude()
{
 clrscr();
 header();
 line1(11);
 cout<<"\n\n";
 //stars();
 line2();
 gotoxy(34,10);
 textcolor(11);
 cprintf("T H A N K S");
 gotoxy(34,12);
 cprintf("   F O R   ");
 gotoxy(34,14);
 cprintf(" U S I N G ");
 textbackground(0);
 cout<<endl<<endl<<endl;
 line1(10);
 cout<<"\n\n";
// stars();
 line2();
 footer();
 getch();
}
int line1(int t)
{
	int i;
	for(i=0;i<80;i++)
	{
		textcolor(t);
		cprintf(".",1);
	}
	textcolor(7);
	return 0;
}
void line2()
{
	int i,g;
	for(i=0;i<80;i++)
	{
		g=random(2);
		if(g==1)
		{
			textcolor(random(15));
			cprintf("*");
		}
		else
		{
			textcolor(random(15));
			cprintf("-");
		}

	}
	textcolor(7);

}
void line3()
{
	clrscr();
	int i,j;
	for(i=0;i<80;i++)
	{
		delay(10);
		gotoxy(i,5);
		textcolor(11);
		cprintf("_");
		gotoxy(80-i,15);
		textcolor(10);
		cprintf("_");
	}
	delay(100);
	textcolor(7);
}
int line4(int t)
{
	int i;
	for(i=0;i<80;i++)
	{
		textcolor(t);
		cprintf("_",1);
	}
	textcolor(7);
	return 0;
}
void errorfile()
{
	clrscr();
	int i,j;
	for(i=0;i<49;i++)
	{
		clrscr();
		textcolor(12);
		gotoxy(i,10);
		textcolor(12);
		cprintf(" F I L E S");
		gotoxy(80-i,10);
		cprintf("D E L E T I N G");
		delay(20);
		textcolor(10);
	}
		for(i=0;i<101;i++)
		{
			if(i<100)
			{
				gotoxy(15,15);
				delay(10);
				cout<<i<<"%LOADING";
			}
			else
			{      gotoxy(15,15);
				cout<<i<<"%LOADING COMPLETED";
			}
		}
	getch();
	textcolor(7);
}
