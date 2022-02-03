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
//void doctorLogin();
//void patientLogin();
//void adminLogin();

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

int check = 0;
int limit = 99;
struct StudentRec
{
    string Name;
    string ID;
    int Age;
    bool compare(StudentRec valid)
    {
        if(Name == valid.Name && Age == valid.Age)
            return true;
                return false;
    }
};

void read_a_record(StudentRec students[100], int &limit)
{

    StudentRec cow;
    int check = 0;
    string full;
    string lastnm;
    string firstnm;
    string name;
    int age;
    ifstream file;
    file.open("StudentRecords.txt");
    if (!file)
    {
        cout << "Can't open input file " << endl;

    }
    for(int x = 0;x <= check; x++)
    {
        file >> firstnm >> lastnm >> age;
    }
    name = lastnm + ", " +firstnm;

    cow.Name = name;
    cow.Age = age;

    file.close();
    check++;
}

void print_a_record(StudentRec show)
{

    cout
    << left << setw(15) << show.Name
    << setw(11) << show.Age <<endl;

}

int end()
{
    return 0;
}
void addsrecord (StudentRec students[100], int &limit)
{
StudentRec apple;

string full;
string lname;
string fname;
int age;


int location=limit+1;
if(location == 99)
{
    cout << "   !             Error, array has been exceded!!                   !  " << endl;
    return;
}
limit ++;

cout << "   !                 Please enter the patients last name.. :           " << endl;
    cin >> lname;
cout << "   !                 Please enter the patients first name.. :          " << endl;
    cin >> fname;
    full = lname + ", " + fname;
    apple.Name = full;
cout << "   !                 Please enter patients age..                     ! " << endl;
    cin >> age;
    apple.Age = age;

students[location]= apple;

}
void disall (StudentRec students[100], int limit)
{

    int x;


    cout << left << setw(5) << "No." << left << setw(15) << "Name" << setw(11) << "Age" << setw(7)  << endl;
    cout << "--------------------------------------------------------------------\n";
    for(x = 0; x <= limit; x++)
    {
        cout << x+1 << ".   ";
        print_a_record(students[x]);
    }

}
void delsrecord ()
{
}

void findsrecord(StudentRec students[100], int limit)
{
    string input;
    cout << "  !              Enter the name of the patient             " << endl;
    cin >> input;

    int count;
    for (count=0; count <= limit; count++)
    {
        if(students[count].Name == input)
        {
        cout << "             !      Student has been found.        !" << endl;
        cout << "     !      Name: " << students[count].Name << endl << "      !    Age: " << students[count].Age << endl << endl;
        return;
        }
        cout << count << limit << endl;
        if (count==limit)
        {
            cout << "          !     Can't find student!            !-" << endl;
        }
        else
        {
            continue;
        }
    }
}
void save (StudentRec students [], int limit)
{
    ofstream file;
    file.open("StudentRecords.txt");
    string temper;
    for(int p =0; p <=limit; p++)
    {
        file << students[p].Name<< " " << students[p].Age << endl;
    }
    file.close ();
}

void displayMenu(StudentRec students [100])
{

    cout << endl;
    cout <<"                                                                           "<<endl;
    cout << "         *****************    Please Choose:   ********************       " << endl;
    cout << "  ________________________________________________________________"<<endl;
    cout << "  |     (1) Add a patient record                                 |"<< endl;
    cout << "  |     (2) Delete a patient record                              |" << endl;
    cout << "  |     (3) Find a patient's information                         |" << endl;
    cout << "  |     (4) Display all information in the database              |" << endl;
    cout << "  |     (5) Exit Program                                         |" << endl;
    cout << "  ================================================================"<<endl;
    int input;
    cin >> input;


    while (input < 1 || input > 5)
    {
        cout << "         You did not enter a correct choice!!      " << endl;
            cin >> input;
    }

    switch(input)
    {
        case 1: addsrecord(students,limit);
            save(students,limit);
        break;
        case 2: delsrecord;
        break;
        case 3: findsrecord(students,limit);
        break;
        case 4: disall(students, limit);
        break;
        case 5: end ();
        break;
        default: cout << "           You did not enter a correct choice!!      " << endl;
        break;
    }
}



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

        login();
        system("pause");

    }




    if (option==2)
    {
        system("cls");

      char loop;
StudentRec students[100];
read_a_record(students, limit);
do
{
    displayMenu(students);
    cout << "                To continue, Please press Y, otherwise any key to quit         " << endl;
    cin >> loop;
}
while(loop =='Y' || loop =='y');
{

}



        system("pause");

    }





    if (option==3)
    {
        system("cls");
        cout<<"                  IEDCR: 01550064901, 01550064902, 01550064903, 01550064904, 01550064905, 01401184555, "<<endl;
        cout<<"                         01401184563, 01401184568, 01927711784, 01927711785, 01937000011, 01401184551,"<<endl;
        cout<<"                         01401184556, 01401184559, 01401184560, 01401184554, 01937110011"<<endl<<endl;
        cout<<"                  a2i: 333"<<endl<<endl;
        cout<<"                  DGHS: 16263"<<endl<<endl;
        cout<<"                  Hunting number: 01944333222"<<endl<<endl;
        cout<<"                  On Facebook Messenger: Iedcr, COVID-19 Control Room (Facebook IDs)"<<endl<<endl;
        system("pause");

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
              main();
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
                    cout<<"              .........................       PATIENT'S ACCOUNT     .............................                    "<<endl<<endl<<endl<<endl;
                    cout<<" ************          <<               PATIENT's username         :    ";
                    cin>>user3;
                    cout<<" ************          <<               PATIENT's password         :    ";

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
                main();
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
        cout<<"                                            \n\n"<<endl;
        cout<<"                         ----------------------------------------------------------------------"<<endl;
        cout<<"                         |         Forgotten ? We're here for help                             |"<<endl;
        cout<<"                         |         1.      Search your id by username                          |"<<endl;
        cout<<"                         |         2.      Search your id by password                          |"<<endl;
        cout<<"                         |         3.      Main menu                                           |"<<endl;
        cout<<"                         |---------------------------------------------------------------------|"<<endl;
        cout<<"                                 Enter your choice :";
        cin>>ch;
        switch(ch)
        {
                case 1:
                {
                        int count=0;
                        string searchuser,su,sp;
                        cout<<"              **     \nEnter your remembered username : ";
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
                                cout<<"          \n\n   ***   Hurray, account found\n     *** ";
                                cout<<"\n               ***   Your password is "<<sp;
                                cin.get();
                                cin.get();
                                system("cls");
                                main();
                        }
                        else
                        {
                                cout<<"          \n    ***   Sorry, Your userID is not found in our database\n    *** ";
                                cout<<"          \n    ***   Please kindly contact your system administrator for more details \n    *** ";
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
                        cout<<"         \n    ***   Enter the remembered password :";
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
                                cout<<"             \n    ***   Your password is found in the database \n   *** ";
                                cout<<"             \n    ***   Your Id is : "<<su2;
                                cin.get();
                                cin.get();
                                system("cls");
                                main();
                        }
                        else
                        {
                                cout<<"             ***    Sorry, We cannot found your password in our database \n    *** ";
                                cout<<"\n           ***    kindly contact your administrator for more information\n   *** ";
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
                        cout<<"              ***    Sorry, You entered wrong choice. Kindly try again    ***  "<<endl;
                        forgot();
        }

 }
