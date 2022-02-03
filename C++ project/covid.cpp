
#include<iostream>
#include<conio.h>
#include<istream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include"windows.h"
#include <cmath>
#include <iomanip>
#include <stdio.h>

using namespace std;
void login();
void registr();
void forgot();
void passwd();
void passwd1();
struct doctor
{
    string userA;
    string psA;
    string emailA;
    string phonenumberA;
    string addressA;
    string nidA;
}doctorData;

struct patient
{
    string userB;
    string psB;
    string emailB;
    string phonenumberB;
    string addressB;
    string nidB;

}patientData;

struct admin
{
    string userC;
    string psC;
    string emailC;
    string phonenumberC;
    string addressC;
    string nidC;
}adminData;

class account1
{
	int acno1;
	char name1[50];
	int deposit1;
	char type1;
public:
	void create_account1();
	void show_account1() const;
	void modify1();
	void dep1(int);
	void draw1(int);
	void report1() const;
	int retacno1() const;
	int retdeposit1() const;
	char rettype1() const;
};

void account1::create_account1()
{
	system("CLS");
	cout<<"\n\t\t\tEnter the ID No. : ";
	cin>>acno1;
	cout<<"\n\n\t\t\tEnter The Name of the Patient : ";
	cin.ignore();
	cin.getline(name1,50);
	cout<<"\n\t\t\tAre you Effected by Corona? (Y/N) : ";
	cin>>type1;
	type1=toupper(type1);
	cout<<"\n\t\t\tHow Many Symptoms You Have? : ";
	cin>>deposit1;
	cout<<"\n\n\t\t\tAccount Created..";
}

void account1::show_account1() const
{
	cout<<"\n\t\t\tID No. : "<<acno1;
	cout<<"\n\t\t\tPatient Name : ";
	cout<<name1;
	cout<<"\n\t\t\tEffected : "<<type1;
	cout<<"\n\t\t\tSymptoms : "<<deposit1;
}


void account1::modify1()
{
	cout<<"\n\t\t\tID No. : "<<acno1;
	cout<<"\n\t\t\tModify Patient Name : ";
	cin.ignore();
	cin.getline(name1,50);
	cout<<"\n\t\t\tModify Effected : ";
	cin>>type1;
	type1=toupper(type1);
	cout<<"\n\t\t\tModify Symptoms : ";
	cin>>deposit1;
}


void account1::dep1(int x1)
{
	deposit1+=x1;
}

void account1::draw1(int x1)
{
	deposit1-=x1;
}

void account1::report1() const
{
	cout<<acno1<<setw(10)<<" "<<name1<<setw(10)<<" "<<type1<<setw(6)<<deposit1<<endl;
}

int account1::retacno1() const
{
	return acno1;
}

int account1::retdeposit1() const
{
	return deposit1;
}

char account1::rettype1() const
{
	return type1;
}



void write_account1();
void display_sp1(int);
void modify_account1(int);
void delete_account1(int);
void display_all1();
void deposit_withdraw1(int, int);



class account
{
	int acno;
	char name[50];
	int deposit;
	char type;
public:
	void create_account();
	void show_account() const;
	void modify();
	void dep(int);
	void draw(int);
	void report() const;
	int retacno() const;
	int retdeposit() const;
	char rettype() const;
};

void account::create_account()
{
	system("CLS");
	cout<<"                                                              ";
	cout<<"==============================================================";
	cout<<"|\n\t\t\tEnter the ID No. : ";
	cin>>acno;
	cout<<"|\n\n\t\t\tEnter The Name of the Patient : ";
	cin.ignore();
	cin.getline(name,50);
	cout<<"|\n\t\t\tAre you Effected by Corona? (Y/N) : ";
	cin>>type;
	type=toupper(type);
	cout<<"|\n\t\t\tHow Many Symptoms You Have? : ";
	cin>>deposit;
	cout<<"                            \n\n\t\t\tAccount Created..                 ";
}

void account::show_account() const
{
	cout<<"\n\t\t\tID No. : "<<acno;
	cout<<"\n\t\t\tPatient Name : ";
	cout<<name;
	cout<<"\n\t\t\tEffected : "<<type;
	cout<<"\n\t\t\tSymptoms : "<<deposit;
}


void account::modify()
{
	cout<<"\n\t\t\tID No. : "<<acno;
	cout<<"\n\t\t\tModify Patient Name : ";
	cin.ignore();
	cin.getline(name,50);
	cout<<"\n\t\t\tModify Effected : ";
	cin>>type;
	type=toupper(type);
	cout<<"\n\t\t\tModify Symptoms : ";
	cin>>deposit;
}


void account::dep(int x)
{
	deposit+=x;
}

void account::draw(int x)
{
	deposit-=x;
}

void account::report() const
{
	cout<<acno<<setw(10)<<" "<<name<<setw(10)<<" "<<type<<setw(6)<<deposit<<endl;
}

int account::retacno() const
{
	return acno;
}

int account::retdeposit() const
{
	return deposit;
}

char account::rettype() const
{
	return type;
}



void write_account();
void display_sp(int);
void modify_account(int);
void delete_account(int);
void display_all();
void deposit_withdraw(int, int);



int Guess;
int Total;

class Question

{

    private:

        string Question_Text;

        string Answer_1;

        string Answer_2;


        int Correct_Answer;

        int Question_Score;



    public:

        void setValues (string, string, string, int, int);

        void askQuestion ( );



};



void Question::setValues (string q,string a1,string a2,int ca,int pa)

{

    Question_Text = q;

    Answer_1 = a1;

    Answer_2 = a2;

    Correct_Answer = ca;

    Question_Score = pa;

}



void Question::askQuestion()

{

    cout << Question_Text<<endl<<endl;

    cout << "    1. " << Answer_1<<endl;

    cout << "    2. " << Answer_2<<endl<<endl;

    cout << "         Answer 1 or 2 ?   ";

    cin >> Guess;



    if (Guess == Correct_Answer)

    {

        Total = Total +Correct_Answer ;

        cout<<"                                                         \n\n"<<endl;
        cout << "       Symptoms:     " << Total << "      Out of      " << Question_Score << "  !  "<<endl<<endl;

    }

    else

    {
        cout<<"                                                          \n\n"<<endl;
        cout << "      Symptoms:     " << Total << "       Out of      " << Question_Score << "  !  "<<endl<<endl;

        cout<<endl;

    }



}
int GuessA;
int TotalA;

class QuestionA

{

    private:

        string Question_Text;

        string Answer_1;

        string Answer_2;


        int Correct_Answer;

        int Question_Score;



    public:

        void setValues (string, string, string, int, int);

        void askQuestion ( );



};



void QuestionA::setValues (string q,string a1,string a2,int ca,int pa)

{

    Question_Text = q;

    Answer_1 = a1;

    Answer_2 = a2;

    Correct_Answer = ca;

    Question_Score = pa;

}



void QuestionA::askQuestion()

{

    cout << Question_Text<<endl<<endl;

    cout << "    1. " << Answer_1<<endl;

    cout << "    2. " << Answer_2<<endl<<endl;

    cout << "         Answer 1 or 2 ?   ";

    cin >> Guess;



    if (Guess == Correct_Answer)

    {

        Total = Total +Correct_Answer ;

        cout<<"                                                         \n\n"<<endl;
        cout << "       Symptoms:     " << Total << "      Out of      " << Question_Score << "  !  "<<endl<<endl;

    }

    else

    {
        cout<<"                                                          \n\n"<<endl;
        cout << "      Symptoms:     " << Total << "       Out of      " << Question_Score << "  !  "<<endl<<endl;

        cout<<endl;

    }



}
 int option;
 int main()
{
    int choice;


    cout<<"\n\n\n\n\n\n\n                                !==============================================================================================!\n";
cout<<"\t\t\t\t!______________________________________________________________________________________________!\n";
cout<<"\t\t\t\t!==|                                                                                        |==!\n";
cout<<"\t\t\t\t!==|                                                                                        |==!\n";
cout<<"\t\t\t\t!==|                                                                                        |==!\n";
cout<<"\t\t\t\t!==|                                                                                        |==!\n";
cout<<"\t\t\t\t!==|                                                                                        |==!\n";
cout<<"\t\t\t\t!==|                                                                                        |==!\n";
cout<<"\t\t\t\t!==|                                                                                        |==!\n";
cout<<"\t\t\t\t!==|                                    @@ COVID-19 @@          		            |==!\n";
cout<<"\t\t\t\t!==|                                                                                        |==!\n";
cout<<"\t\t\t\t!==|                                                                                        |==!\n";
cout<<"\t\t\t\t!==|                                                                                        |==!\n";
cout<<"\t\t\t\t!==|                                                                                        |==!\n";
cout<<"\t\t\t\t!==|                                                                                        |==!\n";
cout<<"\t\t\t\t!==|                                                                                        |==!\n";
cout<<"\t\t\t\t!==|                                                                                        |==!\n";
cout<<"\t\t\t\t!==|________________________________________________________________________________________|==!\n";
cout<<"\t\t\t\t!----------------------------------------------------------------------------------------------!\n\n\n\n\t\t\t\t\t";
system("pause");
system("cls");


cout<<"\n\n\n\n\n\n\n                                 *****************************************************************************************\n";
cout<<"\t\t\t\t _________________________________________________________________________________________\n";
cout<<"\t\t\t\t|                                                                                        |\n";
cout<<"\t\t\t\t|                                                                                        |\n";
cout<<"\t\t\t\t|                          D E A F             H E A V E N                               |\n";
cout<<"\t\t\t\t|                                                                                        |\n";
cout<<"\t\t\t\t|                                                                                        |\n";
cout<<"\t\t\t\t|                                                                                        |\n";
cout<<"\t\t\t\t|        #PROJECT BY                                                                     |\n";
cout<<"\t\t\t\t|                                                                                        |\n";
cout<<"\t\t\t\t|             * -- *JANNATUL FERDOUS UMAMA                                               |\n";
cout<<"\t\t\t\t|                                ID(20-42616-1)                                          |\n";
cout<<"\t\t\t\t|             * -- *MIRZA MOHIUDDIN                                                      |\n";
cout<<"\t\t\t\t|                                ID(20-43598-1)                                          |\n";
cout<<"\t\t\t\t|             * -- *ATIQUR RAHMAN AKASH                                                  |\n";
cout<<"\t\t\t\t|                                ID(20-42566-1)         		                 |\n";
cout<<"\t\t\t\t|             * -- *SAIFUL ISLAM                                                         |\n";
cout<<"\t\t\t\t|                                ID(20-42585-1)                                          |\n";
cout<<"\t\t\t\t|                                                                                        |\n";
cout<<"\t\t\t\t|                                                                                        |\n";
cout<<"\t\t\t\t|                                                                                        |\n";
cout<<"\t\t\t\t|            *****************              ***************            ***************   |\n";
cout<<"\t\t\t\t|  *********                    *********                    *********                   |\n";
cout<<"\t\t\t\t|________________________________________________________________________________________|\n";
cout<<"\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
system("pause");
system("cls");


cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t";
cout<<"\n\n\t\t\t\t               ==================================================================\t \n\n";
cout<<"\t\t\t\t\t\t_________________________________________________________________ \n";
cout<<"\t\t\t\t\t\t|                        *****TARGET--------                      |\n";
cout<<"\t\t\t\t\t\t|                                                                 |\n";
cout<<"\t\t\t\t\t\t|  There's currently no vaccine to prevent corona virus           |\n";
cout<<"\t\t\t\t\t\t|     disease(COVID-19).So our system will help you to            |\n";
cout<<"\t\t\t\t\t\t|        be aware and get help from it.                           |\n";
cout<<"\t\t\t\t\t\t|                                                                 |\n";
cout<<"\t\t\t\t\t\t|_________________________________________________________________|\n\n";
cout<<"\t\t\t\t\t\t==================================================================\n\n";
cout<<"\t\t\t\t\t\t                      WELCOME TO OUR PROJECT                      \n\n";
cout<<"\t\t\t\t\t\t         =================================================        \n\n";
  system("pause");
system("cls");

cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t \n\n";
cout<<"\n\n\t\t\t\t\t\tPlease,  Choose from the following Options: \n\n";
cout<<"\t\t\t\t\t\t _________________________________________________________________\n";
cout<<"\t\t\t\t\t\t|                                           	                  |\n";
cout<<"\t\t\t\t\t\t|             1  >> LOG IN                                        |\n";
cout<<"\t\t\t\t\t\t|             2  >> REGISTER                                      |\n";
cout<<"\t\t\t\t\t\t|             3  >> FORGET PASSWORD                               |\n";
cout<<"\t\t\t\t\t\t|                                                                 |\n";
cout<<"\t\t\t\t\t\t|                                                                 |\n";
cout<<"\t\t\t\t\t\t|_________________________________________________________________|\n\n";
cout<<"\t\t\t\t\t\tEnter your choice: ";


    cin>>choice;
    switch(choice)
    {
    case 1:
        login();
        break;
    case 2:
        registr();
        break;
    case 3:
        forgot();
        break;
    case 4:
        cout<< "               Thanks for using the login page\n           ";
        break;
    default:
        cout<<"                Sorry wrong choice selected\n               ";
        main();
    }
}


void write_account()
{
	account ac;
	ofstream outFile;
	outFile.open("account.dat",ios::binary|ios::app);
	ac.create_account();
	outFile.write(reinterpret_cast<char *> (&ac), sizeof(account));
	outFile.close();
}

void display_sp(int n)
{
	account ac;
	bool flag=false;
	ifstream inFile;
	inFile.open("account.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	cout<<"\n\t\t\tBALANCE DETAILS\n";
    	while(inFile.read(reinterpret_cast<char *> (&ac), sizeof(account)))
	{
		if(ac.retacno()==n)
		{
			ac.show_account();
			flag=true;
		}
	}
    inFile.close();
	if(flag==false)
		cout<<"\n\n\t\t\tAccount number does not exist";
}



void modify_account(int n)
{
	bool found=false;
	account ac;
	fstream File;
    File.open("account.dat",ios::binary|ios::in|ios::out);
	if(!File)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	while(!File.eof() && found==false)
	{
		File.read(reinterpret_cast<char *> (&ac), sizeof(account));
		if(ac.retacno()==n)
		{
			ac.show_account();
			cout<<"\n\n\t\t\tEnter The New Details of account"<<endl;
			ac.modify();
			int pos=(-1)*static_cast<int>(sizeof(account));
			File.seekp(pos,ios::cur); //fncallat1353
		    File.write(reinterpret_cast<char *> (&ac), sizeof(account));
		    cout<<"\n\n\t\t\tRecord Updated";
		    found=true;
		  }
	}
	File.close();
	if(found==false)
		cout<<"\n\n\t\t\tRecord Not Found ";
}



void delete_account(int n)
{
	account ac;
	ifstream inFile;
	ofstream outFile;
	inFile.open("account.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	outFile.open("Temp.dat",ios::binary);
	inFile.seekg(0,ios::beg);
	while(inFile.read(reinterpret_cast<char *> (&ac), sizeof(account)))
	{
		if(ac.retacno()!=n)
		{
			outFile.write(reinterpret_cast<char *> (&ac), sizeof(account));
		}
	}
    inFile.close();
	outFile.close();
	remove("account.dat");
	rename("Temp.dat","account.dat");
	cout<<"\n\nRecord Deleted ..";
}


void display_all1()
{
	system("CLS");
	account ac;
	ifstream inFile;
	inFile.open("account.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	cout<<"\n\n\t\tPATIENTS RECORD\n\n";
	cout<<"====================================================\n";
	cout<<"ID no.      NAME       Effected  \Symptoms\n";
	cout<<"====================================================\n";
	while(inFile.read(reinterpret_cast<char *> (&ac), sizeof(account)))
	{
		ac.report();
	}
	inFile.close();
}









void write_account1()
{
	account ac;
	ofstream outFile;
	outFile.open("account.dat",ios::binary|ios::app);
	ac.create_account();
	outFile.write(reinterpret_cast<char *> (&ac), sizeof(account));
	outFile.close();
}

void display_sp1(int n)
{
	account ac;
	bool flag=false;
	ifstream inFile;
	inFile.open("account.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	cout<<"\n\t\t\tBALANCE DETAILS\n";
    	while(inFile.read(reinterpret_cast<char *> (&ac), sizeof(account)))
	{
		if(ac.retacno()==n)
		{
			ac.show_account();
			flag=true;
		}
	}
    inFile.close();
	if(flag==false)
		cout<<"\n\n\t\t\tAccount number does not exist";
}



void modify_account1(int n)
{
	bool found=false;
	account ac;
	fstream File;
    File.open("account.dat",ios::binary|ios::in|ios::out);
	if(!File)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	while(!File.eof() && found==false)
	{
		File.read(reinterpret_cast<char *> (&ac), sizeof(account));
		if(ac.retacno()==n)
		{
			ac.show_account();
			cout<<"\n\n\t\t\tEnter The New Details of account"<<endl;
			ac.modify();
			int pos=(-1)*static_cast<int>(sizeof(account));
			File.seekp(pos,ios::cur); //fncallat1353
		    File.write(reinterpret_cast<char *> (&ac), sizeof(account));
		    cout<<"\n\n\t\t\tRecord Updated";
		    found=true;
		  }
	}
	File.close();
	if(found==false)
		cout<<"\n\n\t\t\tRecord Not Found ";
}



void delete_account1(int n)
{
	account ac;
	ifstream inFile;
	ofstream outFile;
	inFile.open("account.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	outFile.open("Temp.dat",ios::binary);
	inFile.seekg(0,ios::beg);
	while(inFile.read(reinterpret_cast<char *> (&ac), sizeof(account)))
	{
		if(ac.retacno()!=n)
		{
			outFile.write(reinterpret_cast<char *> (&ac), sizeof(account));
		}
	}
    inFile.close();
	outFile.close();
	remove("account.dat");
	rename("Temp.dat","account.dat");
	cout<<"\n\nRecord Deleted ..";
}


void display_all()
{
	system("CLS");
	account ac;
	ifstream inFile;
	inFile.open("account.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	cout<<"\n\n\t\tPATIENTS RECORD\n\n";
	cout<<"====================================================\n";
	cout<<"ID no.      NAME       Effected  \Symptoms\n";
	cout<<"====================================================\n";
	while(inFile.read(reinterpret_cast<char *> (&ac), sizeof(account)))
	{
		ac.report();
	}
	inFile.close();
}





void passwd(char*ar,int max)
{
    char ch;
    int x=0;
    while(1)
    {
        ch=getch();
        if(ch==13)
        {
            ar[x]='\0';
            break;
        }
        if(ch==8 && x!=0)
        {
            cout<<"\b \b";
            if(x<=max && x>0)
                x--;
        }
        else
            if(x<max && ch!=8)
        {
            cout<<"*";
            ar[x]=ch;
            x++;
        }
    }
}
void passwd1(char*ar,int max)
{
    char ch1;
    int x1=0;
    while(1)
    {
        ch1=getch();
        if(ch1==13)
        {
            ar[x1]='\0';
            break;
        }
        if(ch1==8 && x1!=0)
        {
            cout<<"\b \b";
            if(x1<=max && x1>0)
                x1--;
        }
        else
            if(x1<max && ch1!=8)
        {
            cout<<"*";
            ar[x1]=ch1;
            x1++;
        }
    }
}
void registr()
{
    int exist1;
    char u[15],ps[11];
    string reguser,regpass,regemail,regphonenumber,regaddess,regnid,passwd;
    system("cls");
    cout<<"                                                                                                              "<<endl<<endl<<endl<<endl;;
    cout<<"           ================================== REGISTER YOUR ACCOUNT =====================================        "<<endl<<endl<<endl<<endl<<endl;
    cout<<"\t\t      ___________________________________________________________________________________\n";
    cout<<"                      |                                                                                 |"<<endl;
    cout<<"                      |                                                                                 |"<<endl;
    cout<<"                      |                                                                                 |"<<endl;
    cout<<"                      |     ++                           1.As a Doctor                                  |"<<endl;
    cout<<"                      |     ++                           2.As a Patient                                 |"<<endl;
    cout<<"                      |     ++                           3.As a Admin                                   |"<<endl;
    cout<<"                      -----------------------------------------------------------------------------------"<<endl<<endl<<endl;


    cout<<"                                   ~~~~~~~~~~       Enter your choice : ";
    cin>>exist1;

    system("cls");
    switch(exist1)
    {
    case 1:
      {
             int exist=1;
             char userA[15],psA[11];
              string doctorA,patientA,AdminA,docA,paA,AdmA,emailA,phonenumberA,addressA,nidA;
                    cout<<"                                                                                                                     "<<endl;
                    cout<<"---------------------------------------------------------------------------------------------------------------------"<<endl;
                    cout<<"|                                                                                                                    |"<<endl;
                    cout<<"|              .........................       DOCTOR'S ACCOUNT     .............................                    |"<<endl<<endl;
                    cout<<"| ************          <<             Doctor's username       :    ";
                    cin>>userA;
                    cout<<"| ************          <<             Doctor's password       :    ";
                    //cin>>psA;

                    passwd1(psA,10);
                    cout<<""<<endl;


                    cout<<"| ************          <<             Doctor's email          :    ";
                    cin>>emailA;
                    cout<<"| ************          <<             Doctor's phonenumber    :    ";
                    cin>>phonenumberA;
                    cout<<"| ************          <<             Doctor's address        :    ";
                    cin>>addressA;
                    cout<<"| ************          <<             Doctor's NID card number :    ";
                    cin>>nidA;
                    system("cls");




    ofstream reg("database.txt",ios::app);
    reg<<reguser<<' ' <<regpass<<endl;
    system("cls");
    cout<<"                                                                                                                 "<<endl<<endl<<endl<<endl;
    cout<<"                                                     Registration is successful !!!!!!!!!!                            \n";
   // main();


   ofstream dData;
   dData.open("doctor.txt", ios::app);
   dData<<doctorData.userA<<endl;
   dData<<doctorData.psA<<endl;
   dData<<doctorData.emailA<<endl;
   dData<<doctorData.phonenumberA<<endl;
   dData<<doctorData.addressA<<endl;
   dData<<doctorData.nidA<<endl;
   dData.close();

    cout<<"\n\n\t\t\t\t\t\t\t\t\tUPDATE INFORMATION SUCCESSFUL \n\n";

  system("pause");
  system("cls");
   login();
 }


   case 2:
        {
            int exist=1;
            char userB[15],psB[11];
            string doctorB,patientB,AdminB,docB,paB,AdmB,emailB,phonenumberB,addressB,nidB;
                    cout<<"                                                                                                           "<<endl;
                    cout<<"-----------------------------------------------------------------------------------------------------------"<<endl;
                    cout<<"|                                                                                                         |"<<endl<<endl;
                    cout<<"|              ^^^^^^^^^^^^^^^^^^^^     PATIENT'S ACCOUNT    ^^^^^^^^^^^^^^^^^^^^^^^^^^                   |"<<endl;
                    cout<<"| ^*^*^*^*^*^*            **             PATIENT's username         :    ";
                    cin>>userB;
                    cout<<"| ^*^*^*^*^*^*            **             PATIENT's password         :    ";
                    //cin>>passB;
                     passwd1(psB,10);
                    cout<<""<<endl;


                    cout<<"| ^*^*^*^*^*^*            **             PATIENT's email            :    ";
                    cin>>emailB;
                    cout<<"| ^*^*^*^*^*^*            **             PATIENT's phonenumber      :    ";
                    cin>>phonenumberB;
                    cout<<"| ^*^*^*^*^*^*            **             PATIENT's address          :    ";
                    cin>>addressB;
                    cout<<"| ^*^*^*^*^*^*            **             PATIENT's NID card number  :    ";
                    cin>>nidB;
                    system("cls");
                     ofstream reg("database.txt",ios::app);
    reg<<reguser<<' ' <<regpass<<endl;
    system("cls");
    cout<<"                                                                                                  "<<endl;
    cout<<"\n\n\n\n                        Registration is successful \n";
   // main();

  system("pause");
  system("cls");
   login();
}
 case 3:
        {
            int exist=1;
            char userC[15],psC[11];
            string doctorC,patientC,AdminC,docC,paC,AdmC,emailC,phonenumberC,addressC,nidC;
                    cout<<"                                                                                                      "<<endl;
                    cout<<"------------------------------------------------------------------------------------------------------"<<endl;
                    cout<<"|                                                                                                    |"<<endl;
                    cout<<"|              @@@@@@@@@@@@@@@@@@@@@@     ADMIN'S ACCOUNT  @@@@@@@@@@@@@@@@@@@@@@@                   |"<<endl;
                    cout<<"| !!!!!!!!!!!!           <<              ADMIN's username         :    ";
                    cin>>userC;
                    cout<<"| !!!!!!!!!!!!           <<              ADMIN's password         :    ";
                    //cin>>passC;
                     passwd1(psC,10);
                    cout<<""<<endl;



                    cout<<"| !!!!!!!!!!!!           <<              ADMIN's email            :    ";
                    cin>>emailC;
                    cout<<"| !!!!!!!!!!!!           <<              ADMIN's phonenumber      :    ";
                    cin>>phonenumberC;
                    cout<<"| !!!!!!!!!!!!           <<              ADMIN's address          :    ";
                    cin>>addressC;
                    cout<<"| !!!!!!!!!!!!           <<              ADMIN's NID card number  :    ";
                    cin>>nidC;
                    system("cls");


    ofstream reg("database.txt",ios::app);
    reg<<reguser<<' ' <<regpass<<endl;
    system("cls");
    cout<<"                                                                                                         ";
    cout<<" \n\n\n\n                                    Registration is successful \n";
   // main();

  system("pause");
  system("cls");
   login();
}

}
}
void login()
{
    int exist;
     string loguser,logpass;
    system("cls");
    cout<<"                                                                                                        "<<endl<<endl<<endl<<endl;
    cout<<"                                                     LOG IN YOUR ACCOUNT                                                ";
    cout<<"\n\n\t                     ==================================================================\t \n\n";
    cout<<"\t\t     ___________________________________________________________________________________\n";
    cout<<"                      |                                                                                 |"<<endl;
    cout<<"                      |                                                                                 |"<<endl;
    cout<<"                      |                                                                                 |"<<endl;
    cout<<"                      |     ++                           1.As a Patient                                 |"<<endl;
    cout<<"                      |     ++                           2.As a Doctor                                  |"<<endl;
    cout<<"                      |     ++                           3.As a Admin                                   |"<<endl;
    cout<<"                      |     ++                           4.Main Menu                                    |"<<endl;
    cout<<"                      |     ++                           5.Exit                                         |"<<endl;
    cout<<"                      |_________________________________________________________________________________|"<<endl<<endl<<endl;


    cout<<"                                   ~~~~~~~~~~       Enter your choice : ";
    cin>>exist;
    system("cls");
    switch(exist)
    {
    case 1:
        {
            int exist=1;
            char user1[15],ps1[11];
            string suser1,sps1;
           string patient1,pa1;
            system("cls");

                    cout<<"                                                                                                                    "<<endl<<endl<<endl<<endl;
                    cout<<"              .........................       PATIENT'S ACCOUNT     .............................                    "<<endl<<endl<<endl<<endl;
                    cout<<" ************          <<               PATIENT's username         :    ";
                    cin>>user1;
                    cout<<" ************          <<               PATIENT's password         :    ";

            passwd(ps1,10);


            ifstream input("database.txt");
            while(input>>pa1>>user1>>ps1)
            {
                if(pa1==patient1 && user1==suser1 && ps1==sps1)
                {
                    exist=1;
                    break;
                }
            }
            input.close();
            if(exist==1)
            {
            {
                system("cls");
         u1:
    cout<<"                                                                                  \n\n"<<endl;
    cout<<"                !!!!!!!!!!!!!!!!!!                      Please check               !!!!!!!!!!!!!!!!!!!!!   "<<endl<<endl<<endl;
    cout<<"                         -------------------------------------------------------------------"<<endl;
    cout<<"                         |                  1.    Check if you are effected                |"<<endl;
    cout<<"                         |                  2.    Inquiry                                  |"<<endl;
    cout<<"                         |                  3.    Helplines                                |"<<endl;
    cout<<"                         -------------------------------------------------------------------"<<endl;
    cout<<"                                          Choose any option....";
    cin>>option;

    Question q1;
    Question q2;
    Question q3;
    Question q4;
    Question q5;
    Question q6;

    if (option==1)
    {
        system("cls");

    string Name;

    cout<<"                               \n\n\n"<<endl;
    cout << "                >>     What's your name: ";

    cin >> Name;



    string Age;

    cout << "                >>     What's your age: ";

    cin >> Age;

    cout<<endl<<endl;

    string name;

    string age;



    q1.setValues("           1.     Do you have Fever?",

            " 1. Yes",

            " 2. No",

            1,

            6);


    q2.setValues("           2.     Do you face Trouble breathing?",

            " 1. Yes",

            " 2. No",

            1,

            6);

    q3.setValues("           3.      Do you have Cough?",

            " 1. Yes",

            " 2. No",

            1,

            6);


     q4.setValues("          4.      Do you have Persistent pain or pressure in the chest?",

            " 1. Yes",

            " 2. No",

            1,

            6);

     q5.setValues("          5.      Do you have New confusion or inability to arouse?",

            " 1. Yes",

            " 2. No",

            1,

            6);

     q6.setValues("          6.      Do you have Bluish lips or face?",

            " 1. Yes",

            " 2. No",

            1,

            6);


     q1.askQuestion();
     q2.askQuestion();
     q3.askQuestion();
     q4.askQuestion();
     q5.askQuestion();
     q6.askQuestion();



    cout <<endl<<endl;
    cout<< "       *********        If your symptoms are more then 2 then please go to a Doctor.    **********     "<<endl<<endl<<endl<<endl<<endl<<endl;
         system("pause");
         system("cls");
        goto u1;
        system("pause");

    }




    if (option==2)
    {
        system("cls");

        char ch;
	  int num;
	do
	{
	system("CLS");
	    h1:
	    cout<<"\n\t\t\t\t |============================================|\n";
	    cout<<"\n\t\t\t\t |                 PATIENT MENU               |";
	    cout<<"\n\t\t\t\t |============================================|";
		cout<<"\n\t\t\t\t |       1. NEW PATIENT                       |";
		cout<<"\n\t\t\t\t |       2. MODIFY A PATIENT ID               |";
		cout<<"\n\t\t\t\t |       3. DONATION                          |";
		cout<<"\n\t\t\t\t |       4. DOCTOR LIST                       |";
		cout<<"\n\t\t\t\t |       5. CURRENT EFFECTED PEOPLES          |";
		cout<<"\n\t\t\t\t |       6. EXIT                              |";
		cout<<"\n\t\t\t\t ==============================================";
		cout<<"\n\n\t\t\t\tSelect Your Option (1-6): ";
		cin>>ch;

		switch(ch)
		{
		case '1':
			write_account();
			break;
		case '2':
		 	system("CLS");
			cout<<"\n\n\t\t\tEnter The account No. : "; cin>>num;
			modify_account(num);
			break;
        case '3':
            system("cls");

             cout<<"                                   "<<endl;
            cout<<"               ___________________________________";
            cout<<"\n\n\t\t|  Name      |         Bkash       |";
            cout<<"\n\n\t\t-----------------------------------";
            cout<<"\n\n\t\t| umama      |    01769904789      |";
            cout<<"\n\n\t\t| mirza      |    01689046799      |";
            cout<<"\n\n\t\t| saif       |    01568900656      |";
            cout<<"\n\n\t\t| akash      |    01587904579      |";
            cout<<"\n\n\t\t+++++++++++++++++++++++++++++++++++|"<<endl<<endl;
              system("pause");

              system("cls");
            goto h1;
               break;
               goto h1;
               system("cls");
               //goto h1;

        case '4':
            system("CLS");
             cout<<"                                          "<<endl;
            cout<<"                                          "<<endl;
            cout<<"\n\n\t\t                DOCTOR LIST                   ";
            cout<<"\n\n\t\t================================================================="<<endl;
            cout<<"\n\n\t\t    DOCTOR NAME                   |           CONTRACT NUMBER        "<<endl;
            cout<<"=================================================================================";
            cout<<"\n\n\t\t   1. Dr.Kamul hasan              |           01666884791                ";
            cout<<"\n\n\t\t   2. Dr.Hafijul Rahman           |           01780579008                ";
            cout<<"\n\n\t\t   3. Dr.Begum chondona           |           01778906578                ";
            cout<<"\n\n\t\t   4. Dr.Jesmin                   |           01790069086                "<<endl<<endl;
            system("pause");
            system("cls");
            goto h1;
            break;
        case '5':
            system("CLS");
            cout<<"                                                                                                                   "<<endl;
            cout<<"\n\n\t\t___________________________________________________________________________________________________________________";
            cout<<"\n\n\t\t| DATE      |    TOTAL  NUMBER OF EFFECTED         |   TOTAL  DEATH   |     NEW EFFECTED        |      NEW DEATH   |";
            cout<<"\n\n\t\t===================================================================================================================";
            cout<<"\n\n\t\t| 14th May  |     18,000                           |     189          |      1110               |       10         | ";
            cout<<"\n\n\t\t| 15th May  |     18,567                           |     298          |      1202               |       15         |  ";

           //system("cls");
         // goto h1;
            break;
           // goto h1;
        case '6':
		 	system("CLS");
			cout<<"\n\n\t\t\tThank You";
			main();
			break;
			goto h1;


		 default :cout<<"\a";
		}
		cin.ignore();
		cin.get();
    }while(ch!='3');
	//return 0;





        system("pause");

    }





    if (option==3)
    {
        system("cls");
        cout<<"                                                                                                      "<<endl<<endl;
        cout<<"                  IEDCR: 01550064901, 01550064902, 01550064903, 01550064904, 01550064905, 01401184555, "<<endl;
        cout<<"                         01401184563, 01401184568, 01927711784, 01927711785, 01937000011, 01401184551,"<<endl;
        cout<<"                         01401184556, 01401184559, 01401184560, 01401184554, 01937110011"<<endl<<endl;
        cout<<"                  a2i: 333"<<endl<<endl;
        cout<<"                  DGHS: 16263"<<endl<<endl;
        cout<<"                  Hunting number: 01944333222"<<endl<<endl;
        cout<<"                  On Facebook Messenger: Iedcr, COVID-19 Control Room (Facebook IDs)"<<endl<<endl;
        system("pause");
        main();

    }

    else
    {
        cout<<"          Please Try Again         "<<endl;
        system("pause");

    }

















}
            }
            else
            {
                cout<<"            sorry this is not your account            ";
                    cin.get();
                    cin.get();
                    main();

            }
            break;
        }
        case 2:
        {
            int exist=1;
            char user2[15],ps2[11];
            string sps2,suser2;
            string doctor2,doc2;
            system("cls");
            cout<<"                                          \n\n\n"<<endl;
            cout<<"               Please enter the following details             "<<endl;

                    cout<<"                                                                                                                    "<<endl<<endl<<endl<<endl;
                    cout<<"              .........................       DOCTOR'S ACCOUNT     .............................                    "<<endl<<endl<<endl<<endl;
                    cout<<" ************          <<               Doctor's username         :    ";
                    cin>>user2;
                   // cin>>u;
                    cout<<" ************          <<               Doctor's password         :    ";


                    passwd(ps2,10);

            ifstream input("database.txt");
            while(input>>doc2>>user2>>ps2)
            {
                if(doc2==doctor2 && user2==suser2 && ps2==sps2)
                {
                    exist=1;
                    break;
                }
            }
            input.close();
            if(exist==1)
            {
                 system("cls");
              {
                              {
        char fname[20];
        time_t rawtime;
        //struct tm * timeinfo;

        //time ( &rawtime );
        //timeinfo = localtime ( &rawtime );

          int choice1;
//giving option to the user for their choice
  //int i1;
 // b1:
 a1:
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t \n\n";
cout<<"\n\n\t\t\t\t\t\tPlease,  Choose from the following Options: \n\n";
cout<<"\t\t\t\t\t\t _________________________________________________________________ \n";
cout<<"\t\t\t\t\t\t|                                                               |\n";
cout<<"\t\t\t\t\t\t|             1  >> Add a new patient Record                    |\n";
cout<<"\t\t\t\t\t\t|             2  >> Search patient Record                       |\n";
cout<<"\t\t\t\t\t\t|             3  >> See all patient information                 |\n";
cout<<"\t\t\t\t\t\t|             4  >> Check if you are affected                   |\n";
cout<<"\t\t\t\t\t\t|             5  >> Exit program                                |\n";
cout<<"\t\t\t\t\t\t|_______________________________________________________________|\n\n";
//b1
//a1:
    cout<<"\t\t\t\t\t\tEnter your choice: ";//cin>>i1;
cin>>choice1;
//if(i1>5||i1<1){cout<<"\n\n\t\t\t\t\t\tInvalid Choice\n";cout<<"\t\t\t\t\t\tTry again...........\n\n";//goto b1;} //if inputed choice is other than given choice



system("cls");
//displaying the information about the hospital........option 4
//if(i==4)
switch(choice1)
{
case 1:
 {
time_t rawtime;
  struct tm * timeinfo;

//  time ( &rawtime );
//  timeinfo = localtime ( &rawtime );
//  cout<<"\n\n\t\t\t\t\t\t\t\t"<< asctime (timeinfo);
  ofstream patient9_file;
  char fname[20];
  cout<<"\n\n\n\nEnter the patient's file name : ";
  cin.ignore();
  gets(fname);
  patient9_file.open(fname);
  if(!fname)
{
cout<<"\nError while opening the file\n";//goto b;
}
else
{
                        struct patient9_info
                        {
                            char name1[20];
                            char address1[100];
                            char contact1[10];
                            char age1[5];
                            char sex1[8];
                            char blood_gp1[5];
                            char symtom1[50];

                        };

            patient9_info ak;
            cout<<"\n********************************************************************\n";patient9_file<<"\n********************************************************************\n\n";//fn1353 st
            cout<<"\n   1. Name : ";patient9_file<<"Name1 : ";gets(ak.name1);patient9_file<<ak.name1<<"\n";
            cout<<"\n   2. Address : ";patient9_file<<"Address1: ";gets(ak.address1);patient9_file<<ak.address1<<"\n";
            cout<<"\n   3. Contact Number : ";patient9_file<<"Contact Number1 : ";gets(ak.contact1);patient9_file<<ak.contact1<<"\n";
            cout<<"\n   4. Age : ";patient9_file<<"Age1 : ";gets(ak.age1);patient9_file<<ak.age1<<"\n";
            cout<<"\n   5. Sex : ";patient9_file<<"Sex1 : ";gets(ak.sex1);patient9_file<<ak.sex1<<"\n";
            cout<<"\n   6. Blood Group : ";patient9_file<<"Blood Group1 : ";gets(ak.blood_gp1);patient9_file<<ak.blood_gp1<<"\n";
            cout<<"\n   7. Symtom :";patient9_file<<"Symtom1 :";gets(ak.symtom1);patient9_file<<ak.symtom1<<"\n";

            cout<<"\n********************************************************************\n";patient9_file<<"\n********************************************************************\n\n";
            cout<<"\nInformation Saved Successfully\n";
            }
         // int choice1;  //int main();
  system("pause");
  int main();
  system("cls");
  int choice1;
   //login();
  //goto b1;
  goto a1;
     //}
    //int main();
  //void  patient inf();
   break;
  //break;
  }
    case 2:
    {




        fstream pat_file;
    cout<<"\n\nEnter the patient's file name to be opened : ";
    cin.ignore();
    gets(fname);
    system("cls");
pat_file.open(fname, ios::in);
if(!pat_file)
{
cout<<"\nError while opening the file\n";//goto b;
}
else
{
   cout<<"\n\n\n\n\t\t\t\t........................................ Full Medical History of "<<fname<<" ........................................\n\n\n\n";
   string info;
while(pat_file.good())
{
getline(pat_file,info);
cout<<info<<"\n";
}
cout<<"\n";
        }
        system("pause");
        system("cls");
       // int b1;
      // login();
      goto a1;
}

 break;

  case 3:
	{

			display_all1();
			break;
 }
  case 4:
      {
          int optionA;
          system("cls");

    cout<<"                                                                                  \n\n"<<endl;
    cout<<"                !!!!!!!!!!!!!!!!!!                      Please check               !!!!!!!!!!!!!!!!!!!!!   "<<endl<<endl<<endl;
    cout<<"                         -------------------------------------------------------------------"<<endl;
    cout<<"                         |                  1.    Check if you are effected                |"<<endl;
    //cout<<"                         |                  2.    Inquiry                                  |"<<endl;
    //cout<<"                         |                  3.    Helplines                                |"<<endl;
    cout<<"                         -------------------------------------------------------------------"<<endl;
    cout<<"                                          Choose any option....";
    cin>>optionA;
    QuestionA q1A;
    QuestionA q2A;
    QuestionA q3A;
    QuestionA q4A;
    QuestionA q5A;
    QuestionA q6A;

    if (optionA==1)
    {
        system("cls");

    string NameA;

    cout<<"                               \n\n\n"<<endl;
    cout << "                >>     What's your name: ";

    cin >> NameA;



    string AgeA;

    cout << "                >>     What's your age: ";

    cin >> AgeA;

    cout<<endl<<endl;

    string nameA;

    string ageA;



    q1A.setValues("           1.     Do you have Fever?",

            " 1. Yes",

            " 2. No",

            1,

            6);


    q2A.setValues("           2.     Do you face Trouble breathing?",

            " 1. Yes",

            " 2. No",

            1,

            6);

    q3A.setValues("           3.      Do you have Cough?",

            " 1. Yes",

            " 2. No",

            1,

            6);


     q4A.setValues("          4.      Do you have Persistent pain or pressure in the chest?",

            " 1. Yes",

            " 2. No",

            1,

            6);

     q5A.setValues("          5.      Do you have New confusion or inability to arouse?",

            " 1. Yes",

            " 2. No",

            1,

            6);

     q6A.setValues("          6.      Do you have Bluish lips or face?",

            " 1. Yes",

            " 2. No",

            1,

            6);


     q1A.askQuestion();
     q2A.askQuestion();
     q3A.askQuestion();
     q4A.askQuestion();
     q5A.askQuestion();
     q6A.askQuestion();




    cout <<endl<<endl;
    cout<< "       *********        If your symptoms are more then 2 then please go to a Doctor.    **********     "<<endl<<endl<<endl<<endl<<endl<<endl;
         system("pause");
        system("cls");

       goto a1;
      system("pause");

    }
    break;

      }

case 5:

    {
          system("cls");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
cout<<"\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                               THANK YOU FOR USING                                     |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                     OUR PROJECT                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
cout<<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
break;

  }
  default :
         {
                main();
                break;
         }

         }

         }




            }
    }
            else
            {
                cout<<"                 sorry this is not your account           ";
                    cin.get();
                    cin.get();
                    main();

            }
            break;
        }
        case 3:
        {
            int exist=1;
            char user3[15],ps3[11];
            string sps3,suser3;
            string Admin3,Adm3;
            system("cls");

                    cout<<"                                                                                                                    "<<endl<<endl<<endl<<endl;
                    cout<<"              .........................       ADMIN'S ACCOUNT     .............................                    "<<endl<<endl<<endl<<endl;
                    cout<<" ************          <<               ADMIN's username         :    ";
                    cin>>user3;
                    cout<<" ************          <<               ADMIN's password         :    ";

                     passwd(ps3,10);

            ifstream input("database.txt");
            while(input>>Adm3>>user3>>ps3)
            {
                if( Adm3==Admin3 && user3==suser3 && ps3==sps3)
                {
                    exist=1;
                    break;
                }
            }
            input.close();
            if(exist==1)
            {
              char ch1;
	int num1;
	do
	{
	system("CLS");
	    cout<<"\n\t\t\t\t=======================================\n";
	    cout<<"\n\t\t\t\t                PATIENT MENU";
	    cout<<"\n\t\t\t\t========================================";

		cout<<"\n\t\t\t\t  |    1. NEW PATIENT                  |";
		cout<<"\n\t\t\t\t  |    2. ALL PATIENT LIST             |";
		cout<<"\n\t\t\t\t  |    3. CLOSE A PATIENT ID           |";
		cout<<"\n\t\t\t\t  |    4. MODIFY A PATIENT ID          |";
		cout<<"\n\t\t\t\t  |    5. EXIT                         |";
		cout<<"\n\t\t\t\t  --------------------------------------";
		cout<<"\n\n\t\t\t\tSelect Your Option (1-5): ";
		cin>>ch1;

		switch(ch1)
		{
		case '1':
			write_account1();
			break;
		case '2':
			display_all1();
			break;
		case '3':
			system("CLS");
			cout<<"                                                          "<<endl;
			cout<<"\n\n\t\t\tEnter The account No. : "; cin>>num1;
			delete_account1(num1);
			break;
		case '4':
		 	system("CLS");
		 	cout<<"                                                            "<<endl;
			cout<<"\n\n\t\t\tEnter The account No. : "; cin>>num1;
			modify_account1(num1);
			break;
		case '5':
		 	system("CLS");
			cout<<"\n\n\t\t\tBrought To You By DEAF HAVEN.org";
			break;

		 default :cout<<"\a";
		}
		cin.ignore();
		cin.get();
    }while(ch1!='8');
	//return 0;

            }
            else
            {
                cout<<"              sorry this is not your account             ";
                    cin.get();
                    cin.get();
                    main();

            }
            break;
        }
        case 4:
            {
                main();
                break;
            }
        default :
            {
                cout<<"               you have given a wrong choice.press a key to try again.           ";
                cin.get();
                cin.get();
                forgot();

            }



    }
}



    void forgot()

{
        int ch;
        system("cls");
        cout<<"                                                                                                   "<<endl<<endl;
        cout<<"                                                 Forgotten ? We're here for help\n";
        cout<<"                                                 1. Search your id by username"<<endl;
        cout<<"                                                 2. Search your id by password"<<endl;
        cout<<"                                                 3. Main menu"<<endl;
        cout<<"                                            Enter your choice :";
        cin>>ch;
        switch(ch)
        {
                case 1:
                {
                        int count=0;
                        string searchuser,su,sp;
                        cout<<"                                                                 ";
                        cout<<"                        \nEnter your remembered username :";
                        cin>>searchuser;

                        ifstream searchu("database.txt");
                        while(searchu>>su>>sp)
                        {
                                if(su==searchuser)
                                {
                                        count=1;
                                }
                        }
                        searchu.close();
                        if(count==1)
                        {
                                cout<<"                                                                     ";
                                cout<<"                              \n\nHurray, account found\n";
                                cout<<"                              \nYour password is "<<sp;
                                cin.get();
                                cin.get();
                                system("cls");
                                main();
                        }
                        else
                        {
                                cout<<"                                                                                ";
                                cout<<"                             \nSorry, Your userID is not found in our database\n";
                                cout<<"                             \nPlease kindly contact your system administrator for more details \n";
                                cin.get();
                                cin.get();
                                main();
                        }
                        break;
                }
                case 2:
                {
                        int count=0;
                        string searchpass,su2,sp2;
                        cout<<"                                                                   "<<endl;
                        cout<<"                              \nEnter the remembered password :";
                        cin>>searchpass;

                        ifstream searchp("database.txt");
                        while(searchp>>su2>>sp2)
                        {
                                if(sp2==searchpass)
                                {
                                        count=1;
                                }
                        }
                        searchp.close();
                        if(count==1)
                        {
                                cout<<"                                                                        ";
                                cout<<"                          \nYour password is found in the database \n";
                                cout<<"                          \nYour Id is : "<<su2;
                                cin.get();
                                cin.get();
                                system("cls");
                                main();
                        }
                        else
                        {
                                cout<<"                                                                                     ";
                                cout<<"                             Sorry, We cannot found your password in our database \n";
                                cout<<"                             \nkindly contact your administrator for more information\n";
                                cin.get();
                                cin.get();
                                main();
                        }

                        break;
                }

                case 3:
                {
                        cin.get();
                        main();
                }
                default:
                        cout<<"                                                                                          "<<endl;
                        cout<<                                      "Sorry, You entered wrong choice. Kindly try again"<<endl;
                        forgot();
        }
}


