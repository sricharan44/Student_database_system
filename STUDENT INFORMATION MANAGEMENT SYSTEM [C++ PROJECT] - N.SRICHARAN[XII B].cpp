/*
					C++ PROJECT
			STUDENT INFROMATION MANAGEMENT PROJECT 
							- N.SRICHARAN	 XII B 
*/				
		
#include<iostream.h>
#include<fstream.h>
#include<ctype.h>
#include<string.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>


class student
{
	int admno,age,standard;
	int date,month,year;
	double cno;
	char fname[20],sname[20],mname[20],address[50],bgroup[10],sex;
	char sub1[10],sub2[10],sub3[10],sub4[10],sub5[10];
	float m1,m2,m3,m4,m5;
	public:
		student()																//DEFAULT CONSTRUCTOR
		{
			
		admno=0;
		age=0;
		standard=0;
		date=0;
		month=0;
		year=0;
		cno=0;
		
		strcpy(fname,"?");
		strcpy(sname,"?");
		strcpy(mname,"?");
		strcpy(address,"?");
		strcpy(bgroup,"?");
		
		sex='?';
		
		strcpy(sub1,"ENGLISH");
		strcpy(sub2,"MATHS");
		strcpy(sub3,"PT");
		strcpy(sub4,"SCIENCE");
		strcpy(sub5,"PAINTING");
		
		m1=0;
		m2=0;
		m3=0;
		m4=0;
		m5=0;
		
		}
		void read_data_1(int ad)												//FUNCTION TO READ DATA
		{  
		
			//GENERAL INFORMATION OF THE STUDENT
			
			cout<<"ADMISSION NO of the student: "<<ad<<endl;					//AUTOMATICALLY GENERATED
			admno=ad;
			
			cout<<"Enter the NAME of the student:[max. 19 characters] \t";		//NAME OF STUDENT
			cin.get();
			cin.getline(sname,19);
			
			cout<<"Enter the CONTACT NUMBER of the student/parent \t";
			cin>>cno;
			
			cout<<"Enter the CLASS in which student is studying[1 - 12] \t";	//CLASS IN WHICH STUDENT IS STUDYING
			cin>>standard;
			
			cout<<"Enter the Date of Birth of the student [DD] \t";				//DATE
			cin>>date;
			
			cout<<"Enter the Month of Birth of the student [MM] \t";			//MONTH
			cin>>month;
			
			cout<<"Enter the Year of Birth of the student [YYYY] \t";			//YEAR
			cin>>year;
			
			cout<<"Enter the AGE of the student: \t";							//AGE OF STUDENT	
			cin>>age;
			
			cout<<"Enter the SEX of the student:[M/F] \t";						//SEX OF STUDENT
			cin>>sex;
			cin.get();
			
			cout<<"Enter the BLOOD GROUP of the student: \t";					//BLOOD GROUP OF STUDENT
			cin.getline(bgroup,9);
			
			cout<<"Enter the FATHER NAME of the student:[max. 19 characters] \t";//FATHER NAME 
			cin.getline(fname,19);
			
			cout<<"Enter the MOTHERS NAME of the student:[max. 19 characters] \t";//MOTHER NAME
			cin.getline(mname,19);
			
			cout<<"Enter the ADDRESS of the student:[max. 49 characters] \t";	//ADDRESS
			cin.getline(address,49);
			cin.get();
		}

		void read_data_2()
		{
			
			//DETAILS REQUIRED FOR GENERATION OF REPORT CARD
			
			cout<<"Enter the 5 subjects opted by student : ";
			
			cout<<"Enter the 1st subject opted by student[max. 9 characters] : \t";//SUB 1 OPTED
			cin.getline(sub1,9);
			
			cout<<"Enter the 2nd subject opted by student[max. 9 characters] : \t";//SUB 2 OPTED
			cin.getline(sub2,9);
			
			cout<<"Enter the 3rd subject opted by student[max. 9 characters] : \t";//SUB 3 OPTED
			cin.getline(sub3,9);
			
			cout<<"Enter the 4th subject opted by student[max. 9 characters] : \t";//SUB 4 OPTED
			cin.getline(sub4,9);
			
			cout<<"Enter the 5th subject opted by student[max. 9 characters] : \t";//SUB 5 OPTED
			cin.getline(sub5,9);
			
			cout<<"Enter the mark of student in[0 - 100] "<<sub1<<" : ";		//MARK IN SUB 1
			cin>>m1;
			
			cout<<"Enter the mark of student in[0 - 100] "<<sub2<<" : ";		//MARK IN SUB 2
			cin>>m2;				
			
			cout<<"Enter the mark of student in[0 - 100] "<<sub3<<" : ";		//MARK IN SUB 3
			cin>>m3;			
			
			cout<<"Enter the mark of student in[0 - 100] "<<sub4<<" : ";		//MARK IN SUB 4
			cin>>m4;
			
			cout<<"Enter the mark of student in[0 - 100] "<<sub5<<" : ";		//MARK IN SUB 5
			cin>>m5;
			
		}
		
		void write_data()														//FUNCTION TO WRITE DATA
		{ 
		
		cout<<admno<<"\t"<<sname<<"\t"<<sex<<"\t"<<standard<<"\t\t"<<bgroup<<"\n";
		
		}
		
		void write_report_card()
		{
			cout<<"\n NAME OF THE STUDENT IS "<<sname;
			cout<<"\n CLASS IN WHICH STUDENT IS STUDYING IS "<<standard;
			cout<<"\n MARKS OBTAINED IN "<<sub1<<" : \t"<<m1;
			cout<<"\n MARKS OBTAINED IN "<<sub2<<" : \t"<<m2;
			cout<<"\n MARKS OBTAINED IN "<<sub3<<" : \t"<<m3;
			cout<<"\n MARKS OBTAINED IN "<<sub4<<" : \t"<<m4;
			cout<<"\n MARKS OBTAINED IN "<<sub5<<" : \t"<<m5;
			cout<<"\n TOTAL MARKS OBTAINED IS :   \t"<<(m1+m2+m3+m4+m5);
			cout<<"\n AVERAGE MARKS OBTAINED IS : \t"<<(m1+m2+m3+m4+m5)/5;	
			
			if((m1+m2+m3+m4+m5)/5 > 33)
			cout<<"\n\n\n\n\n The student has passed succesfully !!! ";
			
			else
			cout<<"\n\n\n\n\n The student has failed ";	
			
		}
		
		int get_admno()															//FUNCTION TO RETURN ADMNO: OF THE STUDENT
		{
			return admno;
		}
		
		int get_standard()														//FUNCTION TO RETURN STANDARD OF THE STUDENT
		{
			return standard;
		}
	};
	
		void subjects_list()
		{
			cout<<"The SUBJECTS provided in the school are listed below[choose any 5 from them] : \t \n";
			
			
			cout<<"\n\t\t\tPRIMARY CLASS	\n\n";
			cout<<"CLASS 01[ENGLISH,DRAWING,PAINTING,RHYMES,HINDI,TAMIL] \n"; 
			cout<<"CLASS 02[ENGLISH,DRAWING,PAINTING,PT,HINDI,TAMIL,SANSKRIT] \n";
			cout<<"CLASS 03[ENGLISH,MATHS,PAINTING,PT,HINDI,TAMIL,SANSKRIT] \n"; 
			cout<<"CLASS 04[ENGLISH,MATHS,PAINTING,PT,HINDI,TAMIL,SANSKRIT] \n";
			cout<<"CLASS 05[ENGLISH,MATHS,PAINTING,PT,HINDI,TAMIL,SANSKRIT] \n"; 
			
			
			cout<<"\n\t\t\tMIDDLE CLASS	\n\n";
			cout<<"CLASS 06[ENGLISH,MATHS,SCIENCE,SOCIAL,PT,HINDI,TAMIL,SANSKRIT] \n"; 
			cout<<"CLASS 07[ENGLISH,MATHS,SCIENCE,SOCIAL,PT,HINDI,TAMIL,SANSKRIT] \n";
			cout<<"CLASS 08[ENGLISH,MATHS,SCIENCE,SOCIAL,PT,HINDI,TAMIL,SANSKRIT] \n"; 
			
			
			cout<<"\n\t\t\tSENIOR CLASS	\n\n";
			cout<<"CLASS 09[ENGLISH,MATHS,PHYSICS,CHEMISTRY,BIOLOGY,SOCIAL,PT,HINDI,TAMIL,SANSKRIT] \n"; 
			cout<<"CLASS 10[ENGLISH,MATHS,PHYSICS,CHEMISTRY,BIOLOGY,SOCIAL,PT,HINDI,TAMIL,SANSKRIT] \n";
			
			 
			cout<<"\n\t\t\tSUPER SENIOR CLASS	\n\n";
			cout<<"CLASS11[ENGLISH,MATHS,PHYSICS,CHEMISTRY,BIOLOGY,CSC,IP,PT,ECONOMICS,BS,ACCOUNTS] \n"; 
			cout<<"CLASS12[ENGLISH,MATHS,PHYSICS,CHEMISTRY,BIOLOGY,CSC,IP,PT,ECONOMICS,BS,ACCOUNTS] \n"; 
			
		}
		void write_to_file(int a)												//FUNCTION TO WRITE STUDENT INFORMATION INTO FILE
		{
			
			student s;
			ofstream fout;
			fout.open("student.dat",ios::app);
			s.read_data_1(a);
			s.read_data_2();
			fout.write((char *)&s,sizeof(student));
			fout.close();
			return;
			
		}
		void read_from_file()													//FUNCTION TO READ STUDENT INFORMATION FROM FILE
		{ 
		
			student s;
			ifstream fin;
			fin.open("student.dat");
			while(fin.read((char *)&s,sizeof(student)))
			{
			s.write_data();
			cout<<endl;
			}
			fin.close();
			return;
			
		}
		
		void modify_record(void)												//FUNCTION TO MODIFY STUDENT INFORMATION
		{
			
			int temp_admno,opt;													//TEMPORARY ADMISSION NO:	
			student s;
			ifstream fin;
			ofstream fout;
			fin.open("student.dat");
			fout.open("temp.dat");												//CREATING A TEMPORARY FILE
			system("cls"); 														//NEW SCREEN APPEARS,HEADER FILE STDLIB.H
			cout<<"\n\t\t\t\t MODIFY RECORD ";
			cout<<"\n\n\n\t\t\tEnter the admission no: to modified : \t";
			cin>>temp_admno;
			cout<<"Which do you want to modify[1.Details /2.Marks] ";
			cin>>opt;
			if(opt==1)
			{
				while(fin.read((char *)&s,sizeof(student)))
				{
					if (temp_admno==s.get_admno())
					{
						s.read_data_1(s.get_admno());
					}
				fout.write((char *)&s,sizeof(student));
				}
			}
			else 
			{
				while(fin.read((char *)&s,sizeof(student)))
				{
					if (temp_admno==s.get_admno())
					{
						s.read_data_2();
					}
				fout.write((char *)&s,sizeof(student));
				}
			}
			fin.close();
			fout.close();
			remove("student.dat");												//REMOVES THE FILE
			rename("temp.dat","student.dat");									//RENAMES THE FILE
			return;
			
		}
		
		void delete_record(void)												// FUNCTION TO DELETE STUDENT INFORMATION
		{
			
			int temp_admno;
			int cnt=0;
			char choice;
			student s;
			ifstream fin;
			ofstream fout;
			fin.open("student.dat");
			fout.open("temp.dat");
			system("cls");
			cout<<"\n\t\t\t\t DELETE RECORD ";
			cout<<"\n\n\n\t\t\tEnter the admission no: to be deleted :";
			cin>>temp_admno;
			
				while(fin.read((char *)&s,sizeof(student)))
				{
					
					if (temp_admno!=s.get_admno())
					{
						fout.write((char *)&s,sizeof(student));
					}
					else
					{
						
						s.write_data();
						cout<<"\n\nDo you want to delete this student ?? \n";
						cin>>choice;
						
						if (choice=='y'||choice=='Y')
						{
							cnt=1;
							cout<<"\n\n\n\t\t\tThe admission no: "<<temp_admno<<" was deleted";	
						}
						
						else
						{
							cnt=0;
							fout.write((char *)&s,sizeof(student)); 
						}
						
					}
					
				if(cnt==0)
				{
					cout<<"\n\n\n\t\t\tThe admission no: "<<temp_admno<<" was not deleted/available ";	
				}
				
			fin.close();
			fout.close();
			remove("student.dat"); 												//REMOVES THE FILE
			rename("temp.dat","student.dat"); 									//RENAMES THE FILE
			return;
			
			}
		}
		
		void search_record()													//FUNCTION TO SEARCH FOR STUDENT INFORMATION
		{
			
			int found=0;
			student s;
			int temp_admno;
			
			cout<<"\n\t\t\t\t SEARCH RECORD ";
			ifstream fin("student.dat");
			cout<<"\n\n\n\n\t\t\tEnter Admno to search :";
			cin>>temp_admno;
			
				while(fin.read((char*)&s,sizeof(student)))
				{
					if(temp_admno==s.get_admno())
					{
						found=1;
						cout<<"\n\n\n\t\t\tAdmission No. "<<temp_admno<<" exists in CLASS "<<s.get_standard()<<"\n\n\n";
					} 
				}
			fin.close();
			if(found ==0)
			cout<<"\n\n\n\t\t\tAdmission No. "<<temp_admno<<" does not exist";
			return;
			
		}
		
		void report_card()													//FUNCTION TO SEARCH FOR STUDENT INFORMATION
		{ 
		
			int found=0;
			student s;
			int temp_admno;
			cout<<"\n\t\t\t\t REPORT CARD ";
			ifstream fin("student.dat");
			cout<<"\n\n\n\n\t\t\tEnter Admno to get report card :";
			cin>>temp_admno;
			
				while(fin.read((char*)&s,sizeof(student)))
				{
					if(temp_admno==s.get_admno())
					{
						found=1;
						cout<<"\n\n\n\t\t\tAdmission No. "<<temp_admno<<" exists\n\n\n";
						s.write_report_card();
					} 
				}
				
			fin.close();
			if(found ==0)
			cout<<"\n\n\n\t\t\tAdmission No. "<<temp_admno<<" does not exist";
			return;
			
		}
		
		void count_record(void)													//FUNCTION TO COUNT THE NUMBER OF STUDENT'S ADDED SO FAR
		{
			int count=0;
			student s;
			int temp_admno;
			cout<<"\n\t\t\t\t COUNT RECORD ";
			ifstream fin("student.dat");
				while(fin.read((char*)&s,sizeof(student)))
				{
				count++;
				}
			fin.close();
			cout<<"\n\n\n\t\t\tTotal Students present is :"<<count<<"\n\n\n\n\n";
			return;
		}

		int adn()
		{
			
	    student s;
	    ifstream fin("student.dat",ios::binary);
	    if(fin)
	    {

		   while( fin.read((char*)&s,sizeof(s)))
		   {
				   }
		   return s.get_admno()+1;
	    }
	    else
		return 0;
		
	 }

int main()
{
	int choice;
	char fopt='N',opt,date[9],time[20];
	clrscr();

	cout<<"\n\n\n\n**************************************************************************\n\n\n\n";
	cout<<"    /ccccccc         ___             ___ 	               	        		\n ";
	cout<<"   ccc             |+++|           |+++|       _   _    _  ___  _   _  ___ 	        \n ";
	cout<<"   ccc         |+++++++++++|   |+++++++++++|  |_| |_|  | |  |  |_  |    |		\n ";
	cout<<"   ccc         |+++++++++++|   |+++++++++++|  |   |\\   |_|  J  |_  |_   |		\n ";
	cout<<"   \\ccccccc        |+++|           |+++|       	       					\n ";
	cout<<"                    ---             ---          	        			\n ";
	cout<<"\n\n\n\n**************************************************************************\n\n";
	
	do
	{

		textcolor(10);
		textbackground(8); 															//NEW SCREEN APPEARS,HEADER FILE STDLIB.H
		cout<<"\n\n\nDate :"<<_strdate(date);
	    cout<<"\t\t\t\t\t\t\tTime :"<<_strtime(time);

		cout<<"\n\t\t|---------------------------------------------------|";
		cout<<"\n\t\t|      STUDENT INFORMATION MANAGEMENT PROGRAM       |";
		cout<<"\n\t\t|---------------------------------------------------|";
		cout<<"\n\n\n\t\t*****************************************************";
		cout<<"\n\n\t\t\t\t  MAIN MENU\n\n";									//MAIN MENU
		cout<<"\n\t\t\t[0] List of subjects for each class[1 - 12]        ";
		cout<<"\n\t\t\t[1] Add all the details of a new Student           ";
		cout<<"\n\t\t\t[2] Show the details of an existing Student        ";
		cout<<"\n\t\t\t[3] Modify the Record of an existing Student       ";
		cout<<"\n\t\t\t[4] Delete the Record of an existing Student       ";
		cout<<"\n\t\t\t[5] Count the number of an Students in the school  ";
		cout<<"\n\t\t\t[6] Search whether the student is available        ";
		cout<<"\n\t\t\t[7] To see report card of a particular student     ";
		cout<<"\n\t\t\t[8] Exit                                           ";
		cout<<"\n\t\t*****************************************************";
		cout<<"\n\n\t\t\t\t Enter your choice :";
		cin>>choice;
		if(choice==0)
		{
			clrscr();
			cout<<"**********************************************************************\n";
			subjects_list();
			cout<<"**********************************************************************\n";
			cout<<"\nPress any key to go to main menu ";
			getch();
		}
		else if(choice==1)
		{
			int adna;
			do
			{
			clrscr();
			adna=adn();
			if(adna==0)
			adna=10000;
			cout<<"\n\n\n\n**********************************************************************\n\n\n\n\n\n";
			write_to_file(adna);
			cout<<"\n\t\t\tStudent added succesfully !! ";
			cout<<"\n\n\n\n**********************************************************************\n\n\n\n\n\n";
			cout<<"Do you want to add another student[Y / N] ?? ";
			cin>>opt;
			}
			while(opt=='Y');
			cout<<"\n\n\n\n\nPress any key to go to main menu ";
			getch();
		}
		else if (choice==2)
		{
			clrscr();
			cout<<"\n\n\n\n**********************************************************************\n\n\n\n\n\n";
			cout<<"**********************************************************************\n";
			cout<<"ADMNO \t SNAME \t\t SEX \t STANDARD \t BGROUP \n";
			cout<<"**********************************************************************\n";
			read_from_file();
			cout<<"\n\n\n\n**********************************************************************\n\n\n\n\n\n";
			cout<<"\n\n\n\n\nPress any key to go to main menu ";
			getch();
		}
		else if (choice==3)
		{
			do
			{
			clrscr();
			cout<<"\n\n\n\n**********************************************************************\n\n\n\n\n\n";
			modify_record();
			cout<<"\n\t\t\tStudent modified succesfully !! ";
			cout<<"\n\n\n\n**********************************************************************\n\n\n\n\n\n";
			cout<<"Do you want to modify details of another student[Y / N] ?? ";
			cin>>opt;
			}
			while(opt=='Y');
			cout<<"\n\n\n\n\nPress any key to go to main menu ";
			getch();
		}
		else if (choice==4)
		{
			do
			{
			clrscr();
			cout<<"\n\n\n\n**********************************************************************\n\n\n\n\n\n";
			delete_record();
			cout<<"\n\t\t\tStudent deleted succesfully !! ";
			cout<<"\n\n\n\n**********************************************************************\n\n\n\n\n\n";
			cout<<"Do you want to delete another student[Y / N] ?? ";
			cin>>opt;
			}
			while(opt=='Y');
			cout<<"\n\n\n\n\nPress any key to go to main menu ";
			getch();
		}
		else if (choice==5)
		{
			clrscr();
			cout<<"\n\n\n\n**********************************************************************\n\n\n\n\n\n";
			count_record();
			cout<<"\n\n\n\n**********************************************************************\n\n\n\n\n\n";
			cout<<"\n\n\n\n\nPress any key to go to main menu ";
			getch();
		}
		else if (choice==6)
		{
			do
			{
			clrscr();
			cout<<"\n\n\n\n**********************************************************************\n\n\n\n\n\n";
			search_record();
			cout<<"\n\n\n\n**********************************************************************\n\n\n\n\n\n";
			cout<<"Do you want to search another student[Y / N] ?? ";
			cin>>opt;
			}
			while(opt=='Y');
			cout<<"\n\n\n\n\nPress any key to go to main menu ";
			getch();
		}
		else if (choice==7)
		{
			do
			{
			clrscr();
			cout<<"\n\n\n\n**********************************************************************\n\n\n\n\n\n";
			report_card();
			cout<<"\n\n\n\n**********************************************************************\n\n\n\n\n\n";
			cout<<"Do you want to see another report card of a student[Y / N] ?? ";
			cin>>opt;
			}
			while(opt=='Y');
			cout<<"\n\n\n\n\nPress any key to go to main menu ";
			getch();
		}
		else if (choice==8)
		{
			cout<<"Are you sure that you want to exit[Y / N] ?? ";
			cin>>fopt;
			if(fopt=='Y')
			{
			clrscr();
			cout<<"\n\t\t\t\t EXIT ";
			cout<<"\n\n\n\n\n**********************************************************************\n\n\n\n\n";
			textcolor(128);
			textbackground(3);
			cout<<"\t\t\tPROJECT DONE BY:-"<<endl<<endl;
			cout<<"\t\t\t\tN.SRICHARAN : XII B\n"<<endl;
			cout<<"\n\n\n\n**********************************************************************\n\n\n\n\n\n";
			cout<<"\n\n\n\n\nPress any key to EXIT ";
			getch();
			}
			else
			{
			cout<<"\n\n\n\n\nPress any key to go to main menu ";
			getch();
			}
		}
		else
		{

			clrscr();
			cout<<"\n\n\n\n**********************************************************************\n\n\n\n\n\n";
			cout<<"\nWRONG CHOICE.......  Please try again\nEnter between 1 to 8 (both inclusive)\n";
			cout<<"\n\n\n\n**********************************************************************\n\n\n\n\n\n";
			cout<<"\n\n\n\n\nPress any key to go to main menu ";
			getch();
		}
	}
	while(fopt!='Y');
	return 0;
}
