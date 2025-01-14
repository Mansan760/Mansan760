#include<iostream>
#include<cstdio>
#include<cstring>
#include<fstream>
#include<iomanip>
#include<windows.h>
#include<cstdlib>
#include<conio.h>

 using namespace std;
 class Booking;
 class Cabs;
 class Travel;

 class Travel {
    char name[20];
    char gender[6];
    int age;
    int k;
    char destination[20];
    char date[20];
    long int b;
    long int c;
    int id;


    public:
    	int amount;
    	char type[60];
		char place[30];
	//	char date[20];
		char ch;
        int count;
    public:
    	 void menu();  //function for continuing two function details and receipt
          void heading(); //function for presenting main heading wherever necessary
          void details(); //functon for taking necessary details of traveller's
           void nepal();   //function for viewing list of tour package available in Nepal
            void receipt(); //function for displaying receipt of the traveller's selected package
             void pokhara();  //function for displaying necessary information of pokhara
           void kathmandu(); //function for displaying necessary infotmation of kathmandu
              void solukhumbu(); //function for displaying necessary information of solukhumbu
            void mustang(); //function for displaying necessary information of mustang
          void chitwan(); //function for displaying necessary information of chitwan
         void lumbini(); //function for displaying necessary information of lumbini
         void placeinfo();//function for displaying all the places necessary information to make traveller's make best choice
         void aboutus(); //function for displaying all the related information of our company
         void terms(); //function for displaying all the terms and condition which is really very necessary to be followed

         void viewreceipt();    //function for searching traveller's details
        void mainmenu();     //function for viewing main menu where all the important functions are listed

};

 class Cabs : public Travel
{
public:
	friend class Travel;
    int cabChoice;
    int kilometers;
    float cabCost;
    static float lastCabCost;
    string cuname;
    
    void cdetails()
    {
    	cout<<"Enter your Name : ";
    	cin>>cuname;
	}
    void creceipt()
    {
    	system("cls");
    	cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t ******* YOUR RECEIPT *******"<<endl;
                cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Name = "<<cuname;
                cout<<" \n\t\t\t\t\t\t\t\t\t\t\t\t Your total cost for booking hotel is : "<<lastCabCost<<endl;
	}

    void cabDetails()
    {
    	system("cls");
    	heading();
    	Travel jantu;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\tWe collaborated with fastest, safest, and smartest cab service arround the country" << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t-----------ABC Cabs-----------\n" << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t1. Rent a Standard Cab - Rs.500 for 1 hour" << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t2. Rent a Luxury Cab - Rs.800 per 1 hour" << endl;

        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\tEnter another key to back or," << endl;

        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\tTo calculate the cost for your journey.." << endl;
        cout << "Enter which kind of cab you need: ";
        cin >> cabChoice;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\tEnter total rent time in hour: ";
        cin >> kilometers;

        int hireCab;

        if(cabChoice == 1){
            cabCost = kilometers * 500;
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\tYour tour will cost " << cabCost << " rupees for a standard cab" << endl;
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\tPress 1 to hire this cab: or "<<endl;
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\tPress 2 to select another cab: ";
            cin >> hireCab;
            system("CLS");
            if (hireCab == 1){
                lastCabCost = cabCost;
                cout << "\n\t\t\t\t\t\t\t\t\t\t\t\tYou have successfully hired standard cab" << endl;
                cdetails();
                creceipt();
            }
            else if(hireCab == 2){
                cabDetails();
            }
            else{
                cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
                Sleep(1100);
                system("CLS");
                cabDetails();
            }
        }
        else if(cabChoice == 2){
            cabCost = kilometers * 800;
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\tYour tour will cost " << cabCost << " rupees for a luxury cab" << endl;
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\tPress 1 to hire this cab: or "<<endl;
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\tPress 2 to select another cab: ";
            cin >> hireCab;
            system("CLS");
            if (hireCab == 1){
                lastCabCost = cabCost;
                cout << "\n\t\t\t\t\t\t\t\t\t\t\t\tYou have successfully hired luxury cab" << endl;
                 cdetails();
                creceipt();
                
            }
            else if(hireCab == 2){
                cabDetails();
            }
            else{
                cout << "\n\t\t\t\t\t\t\t\t\t\t\t\tInvalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
                Sleep(1100);
                system("CLS");
                cabDetails();
            }
        }
        else{
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\tInvalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
            Sleep(1100);
            system("CLS");
            jantu.mainmenu();
        }

        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\tPress 1 to Redirect Main Menu: ";
        cin >> hireCab;
        system("CLS");
        if(hireCab == 1){
            jantu.mainmenu();
        }
        else{
            jantu.mainmenu();
        }
    }
};

class Booking:public Travel
{
public:
	friend class Travel;
    int choiceHotel;
    int packChoice1;
    int gotoMenu;
    static float hotelCost;
    string cus_name;
    
    void hdetails()
    {
    	cout<<"\nPlease enter your name :";
                cin>>cus_name;
	}
    void hreceipt()
    {
    	system("cls");
    	 cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t ******* YOUR RECEIPT *******"<<endl;
                cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Name = "<<cus_name;
                cout<<" \n\t\t\t\t\t\t\t\t\t\t\t\t Your total cost for booking hotel is : "<<hotelCost<<endl;
	}
    void hotels()
    {
    	system("cls");
    	heading();
    	Travel o;
        string hotelNo[] = {"\n\t\t\t\t\t\t\t\t\t\t\t\tYeti", "Marriot", "Annapurna"};
        for(int a = 0; a < 3; a++)
        {
            cout << (a+1) <<". Hotel " << hotelNo[a] << endl;
        }
        
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\tPress any key to back or\nEnter Number of the hotel you want to book or see details: ";
        cin >> choiceHotel;

        system("CLS");

        if(choiceHotel == 1){
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t-------WELCOME TO Yeti Hotel-------\n" << endl;

            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\tThe Garden, food and beverage. Enjoy all you can drink, Stay cool and get chilled in the summer sun." << endl;

            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\tPackages offered by Avendra:\n" << endl;

            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t1. Standard Pack" << endl;
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\tAll basic facilities you need just for: Rs.5000.00" << endl;
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t2. Premium Pack" << endl;
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\tEnjoy Premium: Rs.10000.00" << endl;
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t3. Luxury Pack" << endl;
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\tLive a Luxury at Avendra: Rs.15000.00" << endl;


            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\tPress another key to back or\nEnter Package number you want to book: ";
            cin >> packChoice1;

            if (packChoice1 == 1){
                hotelCost = 5000.00;
            
                cout << "\n\t\t\t\t\t\t\t\t\t\t\t\tYou have successfully booked Standard Pack at Avendra" << endl;
                hdetails();
                system("pause");
                system("cls");
                hreceipt();
                
            }
            else if (packChoice1 == 2){
                hotelCost = 10000.00;
                cout << "\n\t\t\t\t\t\t\t\t\t\t\t\tYou have successfully booked Premium Pack at Avendra" << endl;
                 hdetails();
                system("pause");
               
                system("cls");
                
                hreceipt();
            }
            else if (packChoice1 == 3){
                hotelCost = 15000.00;
                cout << "\n\t\t\t\t\t\t\t\t\t\t\t\tYou have successfully booked Luxury Pack at Avendra" << endl;
                hdetails();
                system("pause");
                system("cls");
                hreceipt();
            }
            else{
                cout << "\n\t\t\t\t\t\t\t\t\t\t\t\tInvalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
                Sleep(1100);
                system("CLS");
                hotels();
                }
           
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\tPress 1 to Redirect Main Menu: ";
            cin >> gotoMenu;
            system("CLS");
            if(gotoMenu == 1){
                o.mainmenu();
            }
            else{
                o.mainmenu();
            }
        }
        else if(choiceHotel == 2){
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t-------Marriot-------\n" << endl;

            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\tSwimming Pool | Free WiFi | Family Rooms \n Fitness Center | Restaurant & Bar" << endl;

            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\tPackages Offered by ChoiceYou:\n" << endl;

            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t1. Family Pack" << endl;
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t Rs.15000.00 for a day" << endl;
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t2. Couple Pack" << endl;
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t Rs.10000.00 for a day" << endl;
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t3. Single Pack" << endl;
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t 5000.00 for a day" << endl;

            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\tPress another key to back or\nEnter Package number you want to book: ";
            cin >> packChoice1;

            if (packChoice1 == 1){
                hotelCost = 15000.00;
                cout << "\n\t\t\t\t\t\t\t\t\t\t\t\tYou have successfully booked Family Pack at ChoiceYou" << endl;
                hdetails();
                system("\n\t\t\t\t\t\t\t\t\t\t\t\tpause");
                //cout<<"\n calculating receipt .......";
                system("cls");
                
                hreceipt();
            }
            else if (packChoice1 == 2){
                hotelCost = 10000.00;
                cout << "\n\t\t\t\t\t\t\t\t\t\t\t\tYou have successfully booked Couple Pack at ChoiceYou" << endl;
               hdetails();
                system("pause");
                //cout<<"\n calculating receipt .......";
                system("cls");
                
                hreceipt();
            }
            else if (packChoice1 == 3){
                hotelCost = 5000.00;
                cout << "\n\t\t\t\t\t\t\t\t\t\t\t\tYou have successfully booked Single Pack at ChoiceYou" << endl;
                hdetails();
                system("pause");
                //cout<<"\n calculating receipt .......";
                system("cls");
                
                hreceipt();
            }
            else{
                cout << "\n\t\t\t\t\t\t\t\t\t\t\t\tInvalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
                Sleep(1100);
                system("CLS");
                hotels();
            }
          Travel ob;
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\tPress 1 to Redirect Main Menu: ";
            cin >> gotoMenu;
            system("CLS");
            if(gotoMenu == 1){
                ob.mainmenu();
            }
            else{
                //menu();
            }
        }
        else if(choiceHotel == 3){
            cout << "\t\t\t\t\t\t\t\t\t\t\t\t-------Hotel Annapurna-------" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\t\t\tSet in tropical gardens on the banks of the Maha Oya river While Seeing Elephants" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\t\t\tAmazing offer in this summer: Rs.5000.00 for a one day!!!" << endl;

            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\tPress another key to back or\nPress 1 to book this special package: ";
            cin >> packChoice1;

            if (packChoice1 == 1){
                hotelCost = 5000.00;
                cout << "\n\t\t\t\t\t\t\t\t\t\t\t\tYou have successfully booked ElephantBay Special Pack" << endl;
               hdetails();
                system("pause");
                //cout<<"\n calculating receipt .......";
                system("cls");
                
                hreceipt();
            }
            else{
                cout << "\n\t\t\t\t\t\t\t\t\t\t\t\tInvalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
                Sleep(1100);
                system("CLS");
                hotels();
            }
            Travel obe;
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\tPress 1 to Redirect Main Menu: ";
            cin >> gotoMenu;
            system("CLS");
            if(gotoMenu == 1){
                obe.mainmenu();
            }
            else{
               // menu();
            }
        }
        else{
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\tInvalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
            Sleep(1100);
            system("CLS");
            //menu();
        }
    }
};

float Booking::hotelCost;


float Cabs::lastCabCost;

class Login:public Travel{
	public:
		int tot;
		int amounts;
	void adminlogin();
void regstr();
void login();
void logfunc();
                          };
void Login:: regstr()
{
	int t=0;
		string usr,pas,u,p;
		system("cls");
		cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t------------REGISTER PAGE----------";
		cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t__________________________________________________________________________";
		cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t**************************************************************************";
		cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\tEnter username:";
		cin>>usr;
		ofstream write("username.txt",ios::app); 
		ifstream read("username.txt");
		while(read>>u>>p)
		{
			if(u==usr)
			{
				t=1;
				break;
			}
		}
		if(t==1)
		{
			cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\tUsername is already taken."<<endl;
		}
		else
		{
			cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\ttEnter password:";
			cin>>pas;
			

			write<<usr<<" "<<pas<<endl;
			system("cls");
			cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\tRegistration is successfull."<<endl;
			
			cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\tplease login now!!\n\n";
			login();
		}
		write.close();

}

void Login::login()
{
		int i=0;
		int t=0;
		string usr,u,p;
		char pas[32];
		Travel object;
		system("cls");
		cout<<"\t\t\t\t\t\t\t\t\t\t\t\t------------LOGIN PAGE----------";
		cout<<"\n\__________________________________________________________________________________________________________________________________________________________________________________________________________________";
		cout<<"\n\*******************************************************************************************************************************************************************************************************************";
		cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\tEnter your credentials:\n";
		cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\tEnter the username: ";
		cin>>usr;
		cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\tEnter the password: ";
		fflush(stdin);
  	  	char a;//a Temp char
  	 	 for(i=0;;)//infinite loop
  	 	 {
  			a=getch();//stores char typed in a
     	   if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9'))
     	       //check if a is numeric or alphabet
     	   {
     	       pas[i]=a;//stores a in pass
     	       ++i;
     	       cout<<"*";
     	   }
	        if(a=='\b'&&i>=1)//if user typed backspace
 	           //i should be greater than 1.
	        {
  	          cout<<"\b \b";//rub the character behind the cursor.
 	           --i;
 	       	}
        	if(a=='\r')//if enter is pressed
        	{
       		     pas[i]='\0';//null means end of string.
        	    break;//break the loop
        	}
    	}

	//    pas[i] = '\0';
	
	//	cin>>pas;
		ifstream read("username.txt"); //ifstream uses here for reading the file
		while(read>>u>>p) // while loop uses here for reading the file till end and in each iteration registered username and password store in u and p respectively
		{
			if(u==usr && p==pas)
			{
				t=1;
				break;
			}
		}
		read.close();
		if(t==1)
		{
			cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\tLogin successfull"<<endl;
			object.mainmenu();
		}
		else
		{
			cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\tLogin error."<<endl;
		
		}
}

void Travel::menu()
{
	system("cls");
	
	int a;
    system("cls"); //clear the screen
     heading();

    strcpy(type, "Nepal Tour Package");
    printf("\t\t\t\t\t\t\t\t\t\t\t\tNEPAL TOUR PACKAGE\n\n");

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t1) Pokhara Tour Packages");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t2) Mustang Tour Packages");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t3) Lumbini Tour Packages");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t4) Chitwan Tour Packages");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t5) Kathmandu Tour Packages");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t6) Solukhumbu Tour Packages");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t7) Return Back to Main Menu");
    	cout<<"\n\__________________________________________________________________________________________________________________________________________________________________________________________________________________";
		cout<<"\n\*******************************************************************************************************************************************************************************************************************";
    flag:
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tEnter Choice: ");
    scanf("%d", &a);

    if (a == 1) {
	strcpy(place, "Pokhara Tour");
	system("CLS");
	pokhara();
		 }
    else if (a == 2) {
	strcpy(place, "Mustang Tour");
	system("cls");
	mustang();
		     }
    else if (a == 3) {	strcpy(place, "Lumbini Tour");
	system("cls");
	lumbini();
		    }
    else if (a == 4) {
	strcpy(place, "Chitwan Tour");
	system("cls");
	chitwan();
		     }

    else if (a == 5) {
	strcpy(place, "Kathmandu Tour");
	system("cls");
	kathmandu();
		    }

    else if (a == 6) {
	strcpy(place, "Solukhumbu Tour");
	system("cls");
	solukhumbu();
		    }
    else if (a==7)
    {
      mainmenu();
    }

    else
    {
	printf("Enter Correct Choice...");
	goto flag;
    }
}

void Travel::pokhara()
{
	getchar();
	heading();
	ifstream iins;
	int sum;
	Booking obb;
	Cabs obe;
	int nuu;
	iins.open("mind.txt",ios::in);
	while(!iins.eof())
	{
		iins>>sum;
		amount=sum;
	}
	
//	amount=5000;
iins.close();
	details();
	getchar();
	
        receipt();
     
	getchar();
	mainmenu();

}
void Travel::mustang()
{
	getchar();
	heading();
	int som;
	ifstream iins;
	iins.open("mind2.txt",ios::in);
	while(!iins.eof())
	{
		iins>>som;
		amount=som;
	}
	//amount=6000;
	details();
	getchar();
	receipt();
	
	getchar();
	mainmenu();
}
void Travel::lumbini()
{
	getchar();
	heading();
	ifstream iins;
	int sume;
	iins.open("mind3.txt",ios::in);
	while(!iins.eof())
	{
		iins>>sume;
		amount=sume;
	}
	//amount=7000;
	details();
	getchar();
	receipt();
	
	getchar();
	mainmenu();
}
void Travel::kathmandu()
{
	getchar();
	heading();
	ifstream iins;
	int jodh;
	iins.open("mind4.txt",ios::in);
	while(!iins.eof())
	{
		iins>>jodh;
		amount=jodh;
	}
	//amount=8000;
	details();
	getchar();
	receipt();
	
	getchar();
	mainmenu();
}
void Travel::solukhumbu()
{
	getchar();
	heading();
	ifstream iins;
	int add;
	iins.open("mind5.txt",ios::in);
	while(!iins.eof())
	{
		iins>>add;
		amount=add;
	}
	//amount=9000;
	details();
	getchar();
	receipt();
	
	getchar();
	mainmenu();
}
void Travel::chitwan()
{
	getchar();
	heading();
	int jola;
	ifstream iins;
	iins.open("mind6.txt",ios::in);
	while(!iins.eof())
	{
		iins>>jola;
		amount=jola;
	}
	//amount=10000;
	details();
	getchar();
	receipt();
	
	getchar();
	mainmenu();
}
void Travel::placeinfo()
{
	getchar();
	heading();
   printf("\n1) POKHARA:\n");
  printf("\tSet at the base of the foothills and surrounded by some of the highest\n\tmountains in the world - Dhaulagiri, Manaslu, and Annapurna I,\n\tPokhara is one of Nepal's most scenic cities.");

  printf("\n2) Mustang:\n");
  printf("\tThe district is a part of Gandaki Province in northern Nepal,\n\tstraddlesthe Himalayas and extends northward onto the Tibetan Plateau. ");

  printf("\n3) Lumbini:\n");
  printf("\tSiddhartha Gautama,the Lord Buddha, was born in 623 B.C.\n\tin the famous gardens of Lumbini, which soon became a place of\n\tpilgrimage. ");

  printf("\n4) Chitwan:\n");
  printf("\tAt the foot of the Himalayas, Chitwan is one of the few remaining\n\tundisturbed vestiges of the 'Terai' region, which formerly extended\n\tover the foothills of India and Nepal. ");

  printf("\n5) Kathmandu:\n");
  printf("\tKathmandu is the largest city and capital of Nepal and the namesake of\n\tthe Kathmandu Valley.");

  printf("\n6) Solukhumbu:\n");
  printf("\tSolukhumbu is one of the Eastern-most areas of Nepal and features high\n\taltitutes mountains.");
  printf("\nPress Enter to get back to main menu");
  getchar();	
}
void Travel::viewreceipt()
{
    getchar();
	Travel op;
	int ids;
	int total1;
	ifstream fin;
	fin.open("travelling.txt");
	getchar();
	heading();
	cout<<"enter your id to search"<<endl;
	cin>>ids;
	getchar();
//	fin.read((char *)&op,sizeof(op));
	while(!fin.eof())
 		{
 		//	cout<<"hshshs";
 			fin.read((char *)&op,sizeof(op));

 			if(ids==op.id)
	{
		getchar();
			cout<<"\n\__________________________________________________________________________________________________________________________________________________________________________________________________________________";
		cout<<"\n\*******************************************************************************************************************************************************************************************************************";
		
		cout<<"\t\t\t\t\t\t\t\t\t\t\t\tName = "<<op.name<<endl;
		cout<<"\t\t\t\t\t\t\t\t\t\t\t\tAge = "<<op.age<<endl;
		cout<<"\t\t\t\t\t\t\t\t\t\t\t\tGender = "<<op.gender<<endl;
		cout<<"\t\t\t\t\t\t\t\t\t\t\t\tDate = "<<op.date<<endl;
		cout<<"\t\t\t\t\t\t\t\t\t\t\t\tDestination = "<<op.destination<<endl;
		break;

	}
}

fin.close();
//getchar();
	
	ifstream ins;
	ins.open("totla.txt",ios::in);
	while(!ins.eof())
	{
         ins>>total1;
         cout<<"Total :"<<total1;
    }
	   
	   ins.close();
	   getchar();
	op.mainmenu();
}
void Travel::terms()
{
}
void Travel::receipt()
{
	getchar();
	Travel det;
	int totla;
	int ids1;

  //system(cls);
   ifstream fin1;
	fin1.open("travelling.txt");
	getchar();
    system("cls");
    heading();
	cout<<"enter your id to search"<<endl;
	cin>>ids1;
	getchar();
	
	while(!fin1.eof())
 		{
 			fin1.read((char *)&det,sizeof(det));
 			if(ids1==det.id)
	    {
		getchar();
		cout<<"\n\__________________________________________________________________________________________________________________________________________________________________________________________________________________";
	    cout<<"\n\*******************************************************************************************************************************************************************************************************************";
		cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\tName = "<<det.name<<endl;
		cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\tAge = "<<det.age<<endl;
		cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\tGender = "<<det.gender<<endl;
		cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\tDate = "<<det.date<<endl;
		cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\tDestination = "<<det.destination<<endl;
		break;
        }
	//fin1.read((char *)&det,sizeof(det));
}
    fin1.close();
    int sum;
    //ifstream iin;
    
    
    
	totla=Booking::hotelCost+Cabs::lastCabCost+(Travel::amount)*det.count;
    cout<<"Total cost is : "<<totla;
    ofstream fout;
   fout.open("totla.txt",ios::out);
   fout<<totla;
    fout.close();

getchar();
    mainmenu();
    getchar();

}
void Travel::aboutus()
{
}
void Travel::details()
{
	   ofstream fout;
        Travel tr;
        int counter;
        char another='y';
		//count++;
		fout.open("travelling.txt",ios::app);
		tr.count=1;
		while(another=='y'||another=='Y')
		{
			system("cls");
			heading();
          tr.count++;
		cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\tEnter name of traveller:";
		cin>>tr.name;
		fflush(stdin);

		  printf("\t\t\t\t\t\t\t\t\t\t\t\tEnter id of traveller:");
		  cin>>tr.id;
		  fflush(stdin);

		  printf("\t\t\t\t\t\t\t\t\t\t\t\tEnter gender of traveller:");
		  cin>>tr.gender;
		  fflush(stdin);

		  printf("\t\t\t\t\t\t\t\t\t\t\t\tEnter age of traveller:");
		  cin>>tr.age;
		  fflush(stdin);

		  printf("\t\t\t\t\t\t\t\t\t\t\t\tEnter checkin date (y/m/d):");
		 cin>>tr.date;
		  fflush(stdin);

		  printf("\t\t\t\t\t\t\t\t\t\t\t\tEnter your Address:");
		  cin>>tr.destination;
		  fflush(stdin);
        
		cout<<"Enter 'y' to add record and 'n' to discard"<<endl;
		cin>>another;
		fout.write((char *)&tr,sizeof(tr));
		
		
     }
     //fout.write((char *)&tr,sizeof(tr));
     //break;
     fout.close();
     int totla;
     totla=Booking::hotelCost+Cabs::lastCabCost+(Travel::amount)*tr.count;
   // cout<<"Total cost is : "<<totla;
    ofstream fouts;
   fouts.open("totla.txt",ios::out);
   fouts<<totla;
    fout.close();
}
void Travel::mainmenu()
{
		int option;
		Booking b1;
		Cabs c1;
		Login l1;
        system("cls");
   heading();
   label:
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t1) Tour Package\n\t\t\t\t\t\t\t\t\t\t\t\t2) Hotel Booking\n\t\t\t\t\t\t\t\t\t\t\t\t3) Cab Booking\n\t\t\t\t\t\t\t\t\t\t\t\t4) Search Traveller's Information\n\t\t\t\t\t\t\t\t\t\t\t\t5) Log Out");
	cout<<"\n\__________________________________________________________________________________________________________________________________________________________________________________________________________________";
	cout<<"\n\*******************************************************************************************************************************************************************************************************************";
    printf("\n\t\t\tEnter Choice(1-5)");
    flag:
    scanf("%d",&option);


	 if(option == 1)
	{
	  system("CLS");
	  menu();
	}
	 else if(option == 2)
	{
	   system("CLS");
	   b1.hotels();
	   
	}
	else if(option== 3)
	{
	   system("CLS");
	   c1.cabDetails();
	}

	else if(option==4)
	{
	    system("cls");
	    viewreceipt();
	}
	else if(option==5)
	{
	    system("cls");
	    l1.logfunc();
	}
	 else
	{
	   printf("\n\n\t\t\tPlease enter the given choice from(1-8)");
	   	//charg.dis();
	   goto flag;
	}
}
void Login::logfunc()
{
   	int ch;
   	Travel oh;
   	oh.heading();
		//cout<<"\n\n\t\t\t\t\t\t---ADMIN PAGE---";
		
		cout<<"\n\t\t\t__________________________________________________________________________";
		cout<<"\n\t\t\t**************************************************************************";
		cout<<"\n\t\t\t\t\t\t1.Register";
		cout<<"\n\t\t\t\t\t\t2.Login";
		cout<<"\n\t\t\t\t\t\t3.Exit";
	
		cin>>ch;
		cout<<"\n\t\t\t__________________________________________________________________________";
		
		switch(ch)
		{
			case 1:
				regstr();
				
				break;
				
			case 2:
				login();
				break;
			
			case 3:
				exit(0);
				break;
			default:
				cout<<"\t\tSorry, wrong choice "<<endl;
			//	goto flag;
		}

}

void Travel::heading()
{
	

   printf("__________________________________________________________________________________________________________________________________________________________________________________________________________________");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t----TRAVEL AND TOUR MANAGEMENT SYSTEM----\n\n");
    printf("\t\t\t\t\t\t\t\t\t  ---VACCINATION CERTIFICATE "
	   "IS NECESSARY FOR TRAVELLING PURPOSE---\n");


    printf("__________________________________________________________________________________________________________________________________________________________________________________________________________________\n");
 



}
int main()
{

	Login obj;
	Travel object;
	int ch;
	//	cout<<"\n\n\t\t\t\t\t\t--- PAGE---";
	object.heading();
		
		//cout<<"\n\________________________________________________________________________________________________________________________";
		//cout<<"\n\***************************************************************************************************************";
		cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t\t1.Register";
		cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t\t2.Login";
		cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t\t3.Forgot credential";
			cout<<"\n\__________________________________________________________________________________________________________________________________________________________________________________________________________________";
		cout<<"\n\*******************************************************************************************************************************************************************************************************************";
			cout<<"\n\n\t\t\t\t\t\t\t\t\t\tEnter your choice:";
		cin>>ch;
	
		
		switch(ch)
		{
			case 1:
				obj.regstr();
				
				break;
				
			case 2:
				obj.login();
				break;
			
			default:
				cout<<"\t\tSorry, wrong choice selected."<<endl;
		}
	Booking b1;
	Cabs c1;
	int option;
    system("cls");
    
    object.heading();
    printf("\n\t\t\t1) Tour Package\n\t\t\t2) Hotel Booking\n\t\t\t3) Cab Booking\n\t\t\t4) Search Traveller's Information\n\t\t\t5) Log Out");

    printf("\n\t\t\tEnter Choice(1-5)");
    label:
    scanf("%d",&option);


	 if(option == 1)
	{
	  system("CLS");
	  object.menu();
	}
	 else if(option == 2)
	{
	   system("CLS");
	   b1.hotels();
	   
	}
	else if(option== 3)
	{
	   system("CLS");
	   c1.cabDetails();
	}

	else if(option==4)
	{
	    system("cls");
	    object.viewreceipt();
	}
	else if(option==5)
	{
	    system("cls");
	    obj.logfunc();
	}
	 else
	{
	   printf("\n\n\t\t\tPlease enter the given choice from(1-8)");
	   	//charg.dis();
	   goto label;
	}


	return 0;
}
