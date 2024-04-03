#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
#define num_of_vaccine 200
using namespace std;

class vaccinemanagementsystem
{
private:
   
public:
     int login();
};
int vaccinemanagementsystem::login()
{
    char cname[30],pass[20];
    int ch, i=0,cap=0,capt=0;
    cout<<"\n\n\n\n\n\t\t\t\t\tUSER NAME:  ";

    fflush(stdin);
    gets(cname);
    cout<<"\n\t\t\t\t\tPASSWORD:    ";
    while((ch=getch()) != 13)
    {
        cout<<"*";
        pass[i]=ch;
        i++;
    }
    pass[i] = '\0';
    srand(time(0));
    cap=rand();
    cout<<"\n\t\t\t\t\t CAPTURE:->  "<<cap<<endl;
    cout<<" Please enter the valid capture :-   ";
    cin>>capt;
    if( (strcmp(cname,"oop")==0) && (strcmp(pass,"project")==0) && cap==capt)
        return 1;
    else
        return 0;
}

int k=7,r=0,flag=0;                                                 
COORD coord = {0, 0};

void gotoxy(int x, int y)
    {
        COORD coord;
        coord.X = x;
        coord.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    }

struct date
    {
        int mm,dd,yy;
    };

ofstream fout;
ifstream fin;

class medicine
    {
            int medicine_no;
            char name[25];
            date d;
        public:
            void add()
                {
                    cout<<"\n\n\tSr No: ";
                    cin>>medicine_no;
                    cout<<"\n\n\tName of the Medicine: ";
                    cin>>name;
                    cout<<"\n\n\tExpiry Date(dd-mm-yy): ";
                    cin>>d.mm>>d.dd>>d.yy;
                }

            void show()
                {
                    cout<<"\n\tSr No: ";
                    cout<<medicine_no;
                    cout<<"\n\n\tName of the Medicine: ";
                    cout<<name;
                    cout<<"\n\n\tDate : ";
                    cout<<d.mm<<"-"<<d.dd<<"-"<<d.yy;
                }

            void report()
                {
                    gotoxy(3,k);
                    cout<<medicine_no;
                    gotoxy(13,k);
                    puts(name);
                }

            int retno()
                {
                    return(medicine_no);
                }
    };

class amount: public medicine
    {
            float price,qty,gst,gross,dis,netamt;
        public:
            void add();
            void show();
            void report();
            void calculate();
            void pay();

            float retnetamt()
                {
                    return(netamt);
                }
    }amt;

void amount::add()
    {
        medicine::add();
        cout<<"\n\n\tPrice: ";
        cin>>price;
        cout<<"\n\n\tQuantity: ";
        cin>>qty;
        cout<<"\n\n\tGST Percent: ";
        cin>>gst;
        cout<<"\n\n\tDiscount Percent: ";
        cin>>dis;
        calculate();
        fout.write((char *)&amt,sizeof(amt));
        fout.close();
    }

void amount::calculate()
    {
        gross=price+(price*(gst/100));
        netamt=qty*(gross-(gross*(dis/100)));
    }

void amount::show()
    {
        fin.open("medicinestore.txt",ios::binary);
        fin.read((char*)&amt,sizeof(amt));
        medicine::show();
        cout<<"\n\n\tNet Amount: ";
        cout<<netamt;
        fin.close();
    }

void amount::report()
    {
        medicine::report();
        gotoxy(23,k);
        cout<<price;
        gotoxy(33,k);
        cout<<qty;
        gotoxy(44,k);
        cout<<gst;
        gotoxy(52,k);
        cout<<dis;
        gotoxy(64,k);
        cout<<netamt;
        k=k+1;
            
        if(k==50)
            {
                gotoxy(25,50);
                cout<<"PRESS ANY KEY TO CONTINUE...";
                getch();
                k=7;
                system("cls");
                gotoxy(30,3);
                cout<<" MEDICINE DETAILS ";
                gotoxy(3,5);
                cout<<"NUMBER";
                gotoxy(13,5);
                cout<<"NAME";
                gotoxy(23,5);
                cout<<"PRICE";
                gotoxy(33,5);
                cout<<"QUANTITY";
                gotoxy(44,5);
                cout<<"GST";
                gotoxy(52,5);
                cout<<"DEDUCTION";
                gotoxy(64,5);
                cout<<"NET AMOUNT";
            }
    }

void amount::pay()
    {
        show();
        cout<<"\n\n\n\t\t***";
        cout<<"\n\t\t                 DETAILS                  ";
        cout<<"\n\t\t***";
        cout<<"\n\n\t\tPRICE                     :"<<price;
        cout<<"\n\n\t\tQUANTITY                  :"<<qty;
        cout<<"\n\t\tGST PERCENTAGE             :"<<gst;
        cout<<"\n\t\tDISCOUNT PERCENTAGE        :"<<dis;
        cout<<"\n\n\n\t\tNET AMOUNT                :Rs."<<netamt;
        cout<<"\n\t\t***";
    }

    class med_billing
{
private:
   
public:
    void medbilling();
};

void med_billing::medbilling()
{
    cout.setf(ios::fixed);
            cout.setf(ios::showpoint);
            cout<<setprecision(2);
            fstream tmp("temp.txt",ios::binary|ios::out);
        menu:
            system("cls");
            gotoxy(25,2);
            cout<<" Medication store ";
            gotoxy(25,3);
            cout<<"===========================\n\n";
            cout<<"\n\t\t1.Display Bill\n\n";
            cout<<"\t\t2.Add Medicine\n\n";
            cout<<"\t\t3.Show Medicine Details\n\n";
            cout<<"\t\t4.Exit\n\n";
            cout<<"\t\tPlease Enter Required Option: ";

            int ch,ff;
            float gtotal;
            cin>>ch;

            switch(ch)
                {
                    case 1:
                ss:
                        system("cls");
                        gotoxy(25,2);
                        cout<<"Bill Details";
                        gotoxy(25,3);
                        cout<<"================\n\n";
                        cout<<"\n\t\t1.All Medicine\n\n";
                        cout<<"\t\t2.Back to Main menu\n\n";
                        cout<<"\t\tPlease Enter Required Option: ";

                        int cho;
                        cin>>cho;

                        if(cho==1)
                            {
                                system("cls");
                                gotoxy(30,3);
                                cout<<" BILL DETAILS ";
                                gotoxy(3,5);
                                cout<<"SR NO";
                                gotoxy(13,5);
                                cout<<"NAME";
                                gotoxy(23,5);
                                cout<<"PRICE";
                                gotoxy(33,5);
                                cout<<"QUANTITY";
                                gotoxy(44,5);
                                cout<<"GST %";
                                gotoxy(52,5);
                                cout<<"DISCOUNT %";
                                gotoxy(64,5);
                                cout<<"NET AMOUNT";
                                fin.open("medicinestore.txt",ios::binary);
                                
                                if(!fin)
                                    {
                                        cout<<"\n\nFile Not Found...";
                                        goto menu;
                                    }

                                fin.seekg(0);
                                gtotal=0;

                                while(!fin.eof())
                                    {
                                        fin.read((char*)&amt,sizeof(amt));

                                        if(!fin.eof())
                                            {
                                                amt.report();
                                                gtotal+=amt.retnetamt();
                                                ff=0;
                                            }

                                        if(ff!=0) 
                                            {
                                                gtotal=0;
                                            }
                                    }

                                gotoxy(17,k);
                                cout<<"\n\n\n\t\t\tGrand Total=Rs."<<gtotal;
                                getch();
                                fin.close();
                            }

                        if(cho==2)
                            {
                                goto menu;
                            }
                        goto ss;

                    case 2:
                db:
                        system("cls");
                        gotoxy(25,2);
                        cout<<"Add Medicines to cart";
                        gotoxy(25,3);
                        cout<<"=================\n\n";
                        cout<<"\n\t\t1.Add Medicine Details\n\n";
                       // cout<<"\t\t2.Edit Medicine Details\n\n";
                       // cout<<"\t\t3.Delete Medicine Details\n\n";
                        cout<<"\t\t2.Back to Main Menu ";

                        int apc;
                        cin>>apc;
                        
                        switch(apc)
                        {
                            case 1:
                                fout.open("medicinestore.txt",ios::binary|ios::app);
                                amt.add();
                                cout<<"\n\t\tMedicine Added Successfully!";
                                getch();
                                goto db;

                            /*case 2:
                                int ino;
                                flag=0;
                                cout<<"\n\n\tEnter Sr Number to be Edited :";
                                cin>>ino;
                                fin.open("medicinestore.txt",ios::binary);
                                fout.open("medicinestore.txt",ios::binary|ios::app);
                                
                                if(!fin)
                                    {
                                        cout<<"\n\nFile Not Found...";
                                        goto menu;
                                    }

                                fin.seekg(0);
                                r=0;

                                while(!fin.eof())
                                    {
                                        fin.read((char*)&amt,sizeof(amt));
                                        
                                        if(!fin.eof())
                                            {
                                                int x=amt.medicine::retno();

                                                if(x==ino)
                                                    {
                                                        flag=1;
                                                        fout.seekp(r*sizeof(amt));
                                                        system("cls");
                                                        cout<<"\n\t\tCurrent Details are\n";
                                                        amt.show();
                                                        cout<<"\n\n\t\tEnter New Details\n";
                                                        amt.add();
                                                        cout<<"\n\t\tMedicine Details editted";
                                                    }
                                            }r++;
                                    }

                                if(flag==0)
                                    {
                                        cout<<"\n\t\tSr No does not exist...Please Retry!";
                                        getch();
                                        goto db;
                                    }
                                fin.close();
                                getch();
                                goto db;

                            case 3:
                                flag=0;
                                cout<<"\n\n\tEnter Sr Number to be deleted :";
                                cin>>ino;
                                fin.open("medicinestore.txt",ios::binary);
                                
                                if(!fin)
                                    {
                                        cout<<"\n\nFile Not Found...";
                                        goto menu;
                                    }

                                fin.seekg(0);
                                
                                while(fin.read((char*)&amt, sizeof(amt)))
                                    {
                                        int x=amt.medicine::retno();
                                        if(x!=ino)
                                            {
                                                tmp.write((char*)&amt,sizeof(amt));
                                            }
                                        else
                                            {
                                                flag=1;
                                            }
                                    }
                                fin.close();
                                tmp.close();
                                fout.open("medicinestore.txt",ios::trunc|ios::binary);
                                fout.seekp(0);
                                tmp.open("temp.txt",ios::binary|ios::in);
                                
                                if(!tmp)
                                    {
                                        cout<<"Error in File";
                                        goto db;
                                    }

                                while(tmp.read((char*)&amt,sizeof(amt)))
                                    {
                                        fout.write((char*)&amt,sizeof(amt));
                                    }

                                tmp.close();
                                fout.close();
                                
                                if(flag==1)
                                    {
                                        cout<<"\n\t\tMedicine Succesfully Deleted";
                                    }

                                else if (flag==0)
                                    {
                                        cout<<"\n\t\tMedicine does not Exist! Please Retry";
                                    }

                                getch();
                                goto db;*/

                            case 2:
                                    goto menu;
                                default:
                                    cout<<"\n\n\t\tWrong Choice!!! Retry";
                                    getch();
                                    goto db;
                            }
                    
                    case 3:
                        system("cls");
                        flag=0;

                        int ino;

                        cout<<"\n\n\t\tEnter Sr Number :";
                        cin>>ino;
                        fin.open("medicinestore.txt",ios::binary);
                        
                        if(!fin)
                            {
                                cout<<"\n\nFile Not Found...\nProgram Terminated!";
                                goto menu;
                            }

                        fin.seekg(0);
                        
                        while(fin.read((char*)&amt,sizeof(amt)))
                            {
                                int x=amt.medicine::retno();
                                
                                if(x==ino)
                                    {
                                        amt.pay();
                                        flag=1;
                                        break;
                                    }
                            }

                        if(flag==0)
                            {
                                cout<<"\n\t\tMedicine does not exist....Please Retry!";
                            }

                        getch();
                        fin.close();
                        goto menu;

                    case 4:
                        system("cls");
                        gotoxy(20,20);
                        cout<<"ARE YOU SURE, YOU WANT TO EXIT (Y/N)?";
                        
                        char yn;

                        cin>>yn;
                        
                        if((yn=='Y')||(yn=='y'))
                            {
                                gotoxy(12,20);
                                system("cls");
                                cout<<"* THANKS ***";
                                getch();
                                exit(0);
                            }

                        else if((yn=='N')||(yn=='n'))
                            {
                                goto menu;
                            }

                        else
                            {
                                goto menu;
                            }

                    default:
                        cout<<"\n\n\t\tWrong Choice....Please Retry!";
                        getch();
                        goto menu;
                }
}
class add_new: public med_billing
{
private:
    int age;
    int temperature;
    int blood_pressure;
    int dose;
    string date;
    string gender;
    string name;
    string aadhar;
    string vaccinename;
    string profession;
    string address;
    string mobile_number;
    string ans;
public:
    void addnew();
    void setdata();
    void show_list();
    void show();
    int getage(){ return age;}
    int getdose(){return dose;}
    string getname(){return name;}
    string getdate(){return date;}
    string getvaccine(){return vaccinename;}
    string getprofession(){return profession;}
    string getaadhar(){return aadhar;}
};

void add_new::addnew()
{
    fstream outin;
    outin.open("vaccinetrial.txt",ios::app|ios::in);
    setdata();
    outin.write((char*)this,sizeof(add_new));
    cout<<"YOUR DATA HAS BEEN SUCCESSFULLY INSERTED "<<endl;
    getch();
    outin.close();
}

void add_new::setdata()
{
    cout<<"\n\n\t\t\xB3\xB2=\xB2=\xB2-\xB3 VACCINE MANAGEMENT SYSTEM  \xB3\xB2=\xB2=\xB2-\xB3\n\n"<<endl;
    cout<<"\n\t\t\t**************************\n";
    cout<<"\t\t\t\tREGISTRATION    ";
    cout<<"\n\t\t\t**************************\n\n";
    fflush(stdin);
        cout<<"\n\t\t Enter your name :-  ";
        getline(cin,name);
        cout<<"\n\t\t Enter your age:- ";
        cin>>age;
        fflush(stdin);
        cout<<"\n\t\t Enter date  :-  ";
        getline(cin,date);
        cout<<"\n\t\t Enter vaccine name(covishield or covaccine) :-";
        getline(cin,vaccinename);
        cout<<"\n\t\t Enter Dose number(1 or 2) :-";
        cin>>dose;
        fflush(stdin);
        cout<<"\n\t\t Enter your aadhar :-  ";
        getline(cin,aadhar);
        cout<<"\n\t\t Enter your Mobile number :- ";
        getline(cin,mobile_number);
        cout<<"\n\t\t Enter your permanent address :-  ";
        getline(cin,address); 
        cout<<"\n\t\t Enter your gender (M|F) :-  ";
        getline(cin,gender);
        cout<<"\n\t\t Enter your profession :-  ";
        getline(cin,profession);
        cout<<"\n\t\t Enter your B.P. :-  ";
        cin>>blood_pressure;
        fflush(stdin);
        cout<<"\n\t\t Enter your Body temperature:-  ";
        cin>>temperature;
        cout<<"\n\t\t Covid positive ?:-";
        cin>>ans;
        fflush(stdin);
        if(ans=="yes")
        {
            medbilling();
        }
        
}
void add_new::show()
{
    cout<<setw(20)<<setiosflags(ios::left)<<"Name ";
    cout<<setw(20)<<"Aadhar No.";
    cout<<setw(10)<<"Date";
    cout<<setw(20)<<"vaccine_name";
    cout<<setw(4)<<"Dose_no";
    cout<<setw(5)<<"Age";
    cout<<setw(18)<<"Profession";
    cout<<setw(8)<<"B.P.";
    cout<<setw(15)<<"Temperature";
    cout<<setw(7)<<"gender";
    cout<<setw(15)<<"Mobile No.";
    cout<<"Address"<<endl;

}
void add_new::show_list()
{
    cout<<"\n";
    cout<<setw(20)<<setiosflags(ios::left)<<name;
    cout<<setw(20)<<aadhar;
    cout<<setw(10)<<date;
    cout<<setw(20)<<vaccinename;
    cout<<setw(4)<<dose;
    cout<<setw(5)<<age;
    cout<<setw(18)<<profession;
    cout<<setw(8)<<blood_pressure;
    cout<<setw(15)<<temperature;
    cout<<setw(7)<<gender;
    cout<<setw(15)<<mobile_number;
    cout<<address<<endl;
}

class view_vaccinedata:public add_new
{
private:
public:
   void viewvaccinedata_menu();
   void aboutvaccine();
   void covaccineRecords();
   void covisheildRecords();
};

void view_vaccinedata::viewvaccinedata_menu()
{
     cout<<"\n\n\t\t\xB3\xB2=\xB2=\xB2-\xB3 VACCINE MANAGEMENT SYSTEM  \xB3\xB2=\xB2=\xB2-\xB3\n\n"<<endl;
      cout<<"\n\t\t\t*******************************************\n";
    cout<<"\t\t\tWELCOME TO THE VIEW VACCINE DATA PAGE";
    cout<<"\n\t\t\t********************************************\n\n";
    cout<<"\n\t\t 1. About Vaccine \t\t\t 2.Covaccine records\t\t\t3.Covisheild records "<<endl;
    cout<<"\n\n\t\tEnter your choice ...............";
    int ch;
    cin>>ch;
    switch(ch)
    {
    case 1:
        system("cls");
        aboutvaccine();
        getch();
        break;
    case 2:
        system("cls");
        covaccineRecords();
        getch();
        break;
    case 3:
        system("cls");
        covisheildRecords();
        getch();
        break;
    default:
        system("cls");
        cout<<"ENTER VALID OPTION"<<endl;
        
    }
}

void view_vaccinedata::covaccineRecords()
{
    ifstream in("vaccinetrial.txt");
    int flag=0,p=0;
    cout<<"\n\n\t\t\xB3\xB2=\xB2=\xB2-\xB3 VACCINE MANAGEMENT SYSTEM  \xB3\xB2=\xB2=\xB2-\xB3\n\n"<<endl;
    show();
    in.read((char*)this,sizeof(add_new));
    while(!in.eof())
    {
        if("covaccine"==getvaccine())
        {
          show_list();
          flag=1;
          p++;
        }
        in.read((char*)this,sizeof(add_new));
    }
    if(flag==0)
    {
       cout<<"no records found"<<endl;
    }
       cout<<"\n\n\n\nNumber of records "<<p;
    in.close();
}

void view_vaccinedata::covisheildRecords()
{
    ifstream in("vaccinetrial.txt");
    int flag=0,p=0;
    cout<<"\n\n\t\t\xB3\xB2=\xB2=\xB2-\xB3 VACCINE MANAGEMENT SYSTEM  \xB3\xB2=\xB2=\xB2-\xB3\n\n"<<endl;
    show();
    in.read((char*)this,sizeof(add_new));
    while(!in.eof())
    {
        if("covishield"==getvaccine())
        {
          show_list();
          flag=1;
          p++;
        }
        in.read((char*)this,sizeof(add_new));
    }
    if(flag==0)
    {
       cout<<"no records found"<<endl;
    }
       cout<<"\n\n\n\nNumber of records "<<p;
    in.close();
}

void view_vaccinedata::aboutvaccine()
{
   cout<<"\n\t\t\t*****************************\n";
    cout<<"\t\t\t\tCOVAXIN \n";
    cout<<"\n\t\t\t*****************************\n\n";
   cout<<"\nCOVAXIN- India's indigenous COVID-19 vaccine by Bharat Biotech is  developed in collaboration    with the Indian Council of Medical Research (ICMR)"<<"\n";
   cout<<"\n\n1) It is a 2-dose vaccination regimen given 28 days apart."<<endl;
   cout<<"2) It is a vaccine with no sub-zero storage, no reconstitution requirement, and ready to use liquid presentation in multi-dose vials, stable at 2-8oC."<<endl;
   cout<<"3) Pre-clinical studies: Demonstrated strong immunogenicity and protective efficacy in animal challenge studies conducted in hamsters & non-human primates. "<<endl;
   cout<<"4) The vaccine received DCGI approval for Phase I & II Human Clinical Trials in July, 2020."<<endl;
   cout<<"5) A total of 375 subjects have been enrolled in the Phase 1 study and generated excellent safety data without any reactogenicity."<<endl;
   cout<<"6)Vaccine-induced neutralizing antibody titers were observed with two divergent SARS-CoV-2 strains. Percentage of all the side-effects combined was only 15% in vaccine recipients. "<<endl;
   cout<<"7) In Phase 2 study, 380 participants of 12-65 years were enrolled. COVAXIN® led to tolerable safety outcomes and enhanced humoral and cell-mediated immune responses."<<endl;
   cout<<"\n\t\t\t*******************************\n";
    cout<<"\t\t\t\tCOVISHIELD \n";
    cout<<"\n\t\t\t******************************\n\n";
   cout<<"\n1) Covishield has been developed by the Oxford-AstraZeneca and is being manufactured by the Serum Institute of India (SII)."<<endl;
   cout<<"2) The Covishield vaccination course consists of two separate doses of 0.5 ml each. The second dose should be administered between four to six weeks after the first dose."<<endl;
   cout<<"3) However, there is data available for administration of the second dose up to 12 weeks after the first dose from the overseas studies,"<<endl;
   cout<<"4) COVID-19 disease is caused by a coronavirus called SARS-CoV-2.This type of coronavirus has not been seen before."<<endl;
   cout<<"5) You can get COVID-19 through contact with another person who has the virus.  It is predominantly a respiratory illness that can affect other organs."<<endl;
   cout<<"6) People with COVID-19 have had a wide range of symptoms reported, ranging from mild symptoms to severe illness. "<<endl;
   cout<<"7) Symptoms may appear 2 to 14 days after exposure to the virus. Symptoms may include: fever or chills; cough; shortness of breath; fatigue; muscle or body aches;"<<endl;
   cout<<"headache; new loss of taste or smell; sore throat; congestion or runny nose; nausea or vomiting; diarrhoea."<<endl;
}




class search_records:public add_new
{
private:
   
public:
    void search_data();
    void search_by_name();
    void search_by_age();
    void search_by_date();
    void search_by_aadhar();
    void search_by_profession();
    void search_by_dose();
};

void search_records::search_data()
{   
 cout<<"\n\n\t\t\xB3\xB2=\xB2=\xB2-\xB3 VACCINE MANAGEMENT SYSTEM  \xB3\xB2=\xB2=\xB2-\xB3\n\n"<<endl;
 cout<<"\n\t\t\t******************************************\n";
    cout<<"\t\t\t\tWELCOME TO THE SEARCHING PAGE";
    cout<<"\n\t\t\t******************************************\n\n";
    cout<<"CHOSE THE OPTION BY WHICH U WANT TO SEARCH ! "<<endl;
    cout<<"\n\t\t 1. By Name \t\t\t 2. By Age "<<endl;
    cout<<"\n\t\t 3. By Date \t\t\t 4. By Dose \t\t\t 5.Go Back"<<endl;
    cout<<"\n\n\t\tEnter your choice ...............";
  
    int ch;
    cin>>ch;
    switch(ch)
    {
    case 1:
        system("cls");
        search_by_name();
        getch();
        break;
    case 2:
        system("cls");
        search_by_age();
        getch();
        break;
    case 3:
        system("cls");
        search_by_date();
        getch();
        break;
   /* case 4:
        system("cls");
        search_by_aadhar();
        getch();
        break;
    case 5:
        system("cls");
        search_by_profession();
        getch();
        break;*/
    case 4:
        system("cls");
        search_by_dose();
        getch();
        break;
    default:
        system("cls");
        cout<<"ENTER VALID OPTION"<<endl;
        
    }
}
void search_records::search_by_name()
{
    ifstream in("vaccinetrial.txt");
    int flag=0,p=0;
    string a;
 cout<<"\n\n\t\t\xB3\xB2=\xB2=\xB2-\xB3 VACCINE MANAGEMENT SYSTEM  \xB3\xB2=\xB2=\xB2-\xB3\n\n"<<endl;
  cout<<"\n\t\t\t*******************************\n";
    cout<<"\t\t\t\t SEARCH BY NAME ";
    cout<<"\n\t\t\t*******************************\n\n";
    cout<<"Enter Name by which you want to search "<<endl;
    
    
    cin>>a;
    show();
    in.read((char*)this,sizeof(add_new));
    while(!in.eof())
    {
        if(a==getname())
        {
          show_list();
          flag=1;
          p++;
        }
        in.read((char*)this,sizeof(add_new));
    }
    if(flag==0)
    {
       cout<<"Name you entered is not found"<<endl;
    }
       cout<<"\n\n\n\nNumber of people vaccinated  by this name: "<<p;
    in.close();
    
}
void search_records::search_by_age()
{  
   ifstream in("vaccinetrial.txt");
    int flag =0;
    int a,p=0;
     cout<<"\n\n\t\t\xB3\xB2=\xB2=\xB2-\xB3 VACCINE MANAGEMENT SYSTEM  \xB3\xB2=\xB2=\xB2-\xB3\n\n"<<endl;
     cout<<"\n\t\t\t******************************\n";
    cout<<"\t\t\t\t SEARCH BY AGE ";
    cout<<"\n\t\t\t******************************\n\n";
    cout<<"enter Age by which you want to search "<<endl;
    
    cin>>a;
    show();
    in.read((char*)this,sizeof(add_new));
    while(!in.eof())
    {
        if(a==getage())
        {
            show_list();
            flag=1;
            p++;
        }
    in.read((char*)this,sizeof(add_new));
    }
    if(flag==0)
    {
    cout<<"Age you entered is not found"<<endl;
    }
    cout<<"\n\n\n\nNumber of people vaccinated  by this age: "<<p;
    in.close();

}

void search_records::search_by_date()
{
    ifstream in("vaccinetrial.txt");
    int flag=0,p=0;
    string a;
     cout<<"\n\n\t\t\xB3\xB2=\xB2=\xB2-\xB3 VACCINE MANAGEMENT SYSTEM  \xB3\xB2=\xB2=\xB2-\xB3\n\n"<<endl;
     cout<<"\n\t\t\t*******************************\n";
    cout<<"\t\t\t\t  SEARCH BY DATE";
     cout<<"\n\t\t\t******************************\n\n";
    cout<<"Enter Date by which you want to search "<<endl;
   
    cin>>a;
    show();
    in.read((char*)this,sizeof(add_new));
    while(!in.eof())
    {
        if(a==getdate())
        {
          show_list();
          flag=1;
          p++;
        }
     in.read((char*)this,sizeof(add_new));
    }
    if(flag==0)
    {
       cout<<"Date you entered is not found"<<endl;
    }
       cout<<"\n\n\n\nNumber of people vaccinated on this date is: "<<p;
    in.close();
    
}

/*void search_records::search_by_aadhar()
{
    ifstream in("vaccinetrial.txt");
    int flag=0,p=0;
    string a;
    cout<<"\n\n\t\t\xB3\xB2=\xB2=\xB2-\xB3 VACCINE MANAGEMENT SYSTEM  \xB3\xB2=\xB2=\xB2-\xB3\n\n"<<endl;
    cout<<"\n\t\t\t********\n";
    cout<<"\t\t\t\t SEARCH BY AADHAR ";
    cout<<"\n\t\t\t********\n\n";
    cout<<"Enter Aadhar by which you want to search "<<endl;
    cin>>a;
    show();
    in.read((char*)this,sizeof(add_new));
    while(!in.eof())
    {
        if(a==getaadhar())
        {
          show_list();
          flag=1;
          p++;
        }
        in.read((char*)this,sizeof(add_new));
    }
    if(flag==0)
    {
       cout<<"aadhar you entered is not found"<<endl;
    }
       cout<<"\n\n\n\nNumber of people vaccinated  by this aadhar: "<<p;
    in.close();
    
}*/

/*void search_records::search_by_profession()
{
    ifstream in("vaccinetrial.txt");
    int flag=0,p=0;
    string a;
    cout<<"\n\n\t\t\xB3\xB2=\xB2=\xB2-\xB3 VACCINE MANAGEMENT SYSTEM  \xB3\xB2=\xB2=\xB2-\xB3\n\n"<<endl;
    cout<<"\n\t\t\t********\n";
    cout<<"\t\t\t\t SEARCH BY PROFESSION ";
    cout<<"\n\t\t\t*********\n\n";
    cout<<"Enter Name by which you want to search "<<endl;
    cin>>a;
    show();
    in.read((char*)this,sizeof(add_new));
    while(!in.eof())
    {
        if(a==getprofession())
        {
          show_list();
          flag=1;
          p++;
        }
        in.read((char*)this,sizeof(add_new));
    }
    if(flag==0)
    {
       cout<<"Name you entered is not found"<<endl;
    }
       cout<<"\n\n\n\nNumber of people vaccinated  by this name: "<<p;
    in.close();
    
}*/

void search_records::search_by_dose()
{  
   ifstream in("vaccinetrial.txt");
    int flag =0;
    int a,p=0;
     cout<<"\n\n\t\t\xB3\xB2=\xB2=\xB2-\xB3 VACCINE MANAGEMENT SYSTEM  \xB3\xB2=\xB2=\xB2-\xB3\n\n"<<endl;
    cout<<"\n\t\t\t**************************\n";
    cout<<"\t\t\t SEARCH BY Dose ";
    cout<<"\n\t\t\t**************************\n\n";
    cout<<"enter dose by which you want to search "<<endl;
    cin>>a;
    show();
    in.read((char*)this,sizeof(add_new));
    while(!in.eof())
    {
        if(a==getdose())
        {
            show_list();
            flag=1;
            p++;
        }
    in.read((char*)this,sizeof(add_new));
    }
    if(flag==0)
    {
    cout<<"Dose you entered is not found"<<endl;
    }
    cout<<"\n\n\n\nNumber of people vaccinated  by this Dose number is : "<<p;
    in.close();

}

class menu:public search_records,public view_vaccinedata
{
private:
     
public:
    menu();
};

menu::menu()
{     
     int ch;
     search_records s;
     view_vaccinedata v;
     med_billing m;
      do{
            system("cls");
            // system("Color E4");
        
              cout<<"\n\n\t\t\t\xB3\xB2=\xB2=\xB2-\xB3 VACCINE MANAGEMENT SYSTEM  \xB3\xB2=\xB2=\xB2-\xB3\n\n"<<endl;
            cout<<"\n\t\t\t\t******************"<<endl;
            cout<<"\n\t\t\t\t\tMENU\n"<<endl;
            cout<<"\t\t\t\t******************\n"<<endl;
            cout<<"\n\t\t1: Registration Portal\t\t\t 2: View Vaccine status"<<endl;
            cout<<"\n\t\t3: Search Records   \t\t\t   4: Exit"<<endl;
            cout<<"\n\t\n\tSelect an option : ";
          
            cin>>ch;
      switch(ch)
       {
         case 1: system("cls");
                 s.addnew();
                 break;
         case 2: system("cls");
                 v.viewvaccinedata_menu();
                 break;
         case 3:system("cls");
                s.search_data();
                 break;
        case 4: system("cls");
                 m.medbilling();
                 break;
         case 5:  system("cls");
                    exit(0);
         default: system("cls");
                  cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\tTHANK YOU!!";
                  cout<<"\n\n\t\t\t\t\t*HAVE A NICE DAY";
                  Sleep(3000);
                  exit(0);
       }
      }while(ch!=0);
}

int main(int argc, char const *argv[])
{  
     system("Color 80");
     vaccinemanagementsystem vms;
     int k=3;
    cout<<"\n\n\t\t\xB3\xB2=\xB2=\xB2-\xB3 VACCINE MANAGEMENT SYSTEM  \xB3\xB2=\xB2=\xB2-\xB3\n\n"<<endl;
    cout<<"\t\n\n Press any key to continue.............  "<<endl;
    // getch();
    fflush(stdin);
    getchar();
    B:
    system("cls");
    cout<<"\n\t\t\t\t*****************************"<<endl;
    cout<<"\n\t\t\t\tEnter User name and Password\n"<<endl;;
    cout<<"\t\t\t\t*****************************\n"<<endl;
    
   
    while(k>=1)
    {

    int c = vms.login();
    if(c==1)
        break;
    else
        cout<<"\n\n\t\t Wrong Password Or User Name \n\n\t\t You Can try Only "<<k-1<<" times more";
        
    k--;
    if(k<1)
        {
            for(int i=59; i>=0; i--)
            {
              system("cls");
              cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\tYOU ARE BLOCKED FOR 1 MINUTE!!";
              cout<<"\n\n\n\n\n\n\t\t\t\t\tTRY AFTER "<<i<<" SECONDS.....";
              Sleep(1000);
            }
              k=3;
              goto B;
        }
    }
    menu m;
    return 0;
}