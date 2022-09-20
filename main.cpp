#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>
#include <sstream>
using namespace std;

struct Cars
{
	string but[3] = { "Delete","Edit","Back"};

	string path[4] = { "Admin", "New User", "Login", "Exit"};
};

//Declaring struct
Cars car;

int main()
{
	int ask();
	ask();

	return 0;
}

int ask()
{
	string pass = "";
	char ch;
	int login();
	int admin();
	int newUser();
	cout << "\t\t\t----------------------------------------------\n";
	cout << "\t\t\t\tWelcome To CAR RENTAL SYSTEM \n";
	cout << "\t\t\t     Just On Click To Start Your Journey " << endl;
	cout << "\t\t\t----------------------------------------------\n";

	int num = 1;
	for (int i = 0; i < 4; ++i)
	{
		cout << "\t\t\t";
		cout << "Enter " << num << "\t- To Select  " << car.path[i] << endl;
		num++;
	}
		cout << "\t\t\t";

	ch = _getch();
	while (ch != 13)
	{
		pass.push_back(ch);
		cout << ch;
		ch = _getch();
	}

	if (pass == "1")
	{
		system("CLS");
		admin();
		system("PAUSE");

	}
	else if (pass == "3")
	{
		system("CLS");
		login();
		system("PAUSE");
	}
	else if (pass == "2")
	{
		system("CLS");
		newUser();
		system("PAUSE");
	}
		else if (pass == "4")
	{
		exit(2);
	}
}

int admin()
{
	int edit();
	string pass = "";
	char pa;
	cout << "\t\t\t----------------------------------------------\n";
	cout << "\t\t\t\tWelcome To Admin Panel \n";
	cout << "\t\t\t     Just On Click To Start Your Journey " << endl;
	cout << "\t\t\t----------------------------------------------\n";

	cout << "\n\n\n\n\t\t\t\tEnter Admin Password: ";
	pa = _getch();
	while (pa != 13)
	{
		pass.push_back(pa);
		cout << pa;
		pa = _getch();
	}

	if (pass == "1234")
	{
		system("CLS");
		edit();
		system("PAUSE");
	}
	else
	{
		system("CLS");
		system("PAUSE");
		admin();
	}
}

int login()
{
	string name = "";
	char na;

	string pass = "";
	char pa;
	int carsDetails();

	cout << "\t\t\t----------------------------------------------\n";
	cout << "\t\t\t\tWelcome To Login Panel \n";
	cout << "\t\t\t     Just On Click To Start Your Journey " << endl;
	cout << "\t\t\t----------------------------------------------\n";

	cout << "\n\n\n\n\t\t\t\tEnter Your Name: ";
	na = _getch();

	while (na != 13)
	{
		name.push_back(na);
		cout << na;
		na = _getch();
	}

	cout << "\n\n\n\n\t\t\t\tEnter Your Password: ";
	pa = _getch();
	while (pa != 13)
	{
		pass.push_back(pa);
		cout << pa;
		pa = _getch();
	}

	string named;
	int f = 0;
	ifstream MyRead("file.txt");

	while (getline(MyRead, named))
	{
		if (f == 1)
		{
			if (named == pass)
			{
				f++;
				system("CLS");
				carsDetails();
				system("PAUSE");
			}
			else
			{
				f++;
				cout << "\n\n\n\n\t\t\t\t\tPassword Incorrect!!\n";
				system("PAUSE");
				system("CLS");
				login();
			}
		}

		if (named == name)
		{
			f++;
		}
	}
}
int a=0;
int carsDetails()
{
	int carcolor();
	int b=0;
	string carmodel = "";
	cout << "\t\t\t----------------------------------------------\n";
	cout << "\t\t\t\tWelcome To Car Rental System \n";
	cout << "\t\t\t     Just On Click To Start Your Journey " << endl;
	cout << "\t\t\t----------------------------------------------\n";


		       string name1;
        int num1=0;
     ifstream MyRead("car.txt");

      while(getline(MyRead,name1)){
      num1++;
		cout << "\t\t\t";
		cout << "Enter " << num1 << "\t- To Select  " << name1 << endl;
     }
		cout << "\t\t\t";
		cout << "Enter 99 - To Go Back"<< endl;
MyRead.close();

	cin >> a;
	system("CLS");


	if(a==99){
	system("CLS");
	ask();
	}

	cout << "\t\t\t----------------------------------------------\n";
	cout << "\t\t\t\tWelcome To Car Rental System \n";
	cout << "\t\t\t     Just On Click To Start Your Journey " << endl;
	cout << "\t\t\t----------------------------------------------\n";

	cout << "\n\n\n\t\t\t-----------------------------\n";
	       string name5;
     ifstream MyRead5("car.txt");
     int p5=0;
      while(getline(MyRead5,name5)){
      ++p5;
      if(p5==a){
	cout << "\t\t\tYou Have Selected - " << name5 << endl;
      }
      }
    MyRead5.close();
	cout << "\t\t\t-----------------------------\n";
	       string name6;
     ifstream MyRead6("color.txt");
     int p6=0;
      while(getline(MyRead6,name6)){
      ++p6;
      if(p6==a){
	cout << "\t\t\tColor - " << name6 << endl;
      }
      }
    MyRead6.close();
	cout << "\t\t\t-----------------------------\n";
	       string name7;
     ifstream MyRead7("meter.txt");
     int p7=0;
      while(getline(MyRead7,name7)){
      ++p7;
      if(p7==a){
	cout << "\t\t\tCar's Average - " << name7<<"KM\H" << endl;
      }
      }
    MyRead7.close();
	cout << "\t\t\t-----------------------------\n";
	       string name9;
     ifstream MyRead9("price.txt");
     int p9=0;
      while(getline(MyRead9,name9)){
      ++p9;
      if(p9==a){
	cout << "\t\t\tPrice - " << name9 <<"Per/Day"<< endl;
      }
      }
    MyRead9.close();
	cout << "\t\t\t-----------------------------\n\n\n";

    char ya;
    string yes;
	cout << "\t\t\tDo You Want To Rent The Car? Y/N : "<< endl;
		ya = _getch();
	while (ya != 13)
	{
		yes.push_back(ya);
		cout << ya;
		ya = _getch();
	}
int bill();
	if(yes=="Y"){
	system("CLS");
	bill();
	}
	else{
	system("CLS");
	carsDetails();
	}
	system("PAUSE");
}

int bill(){
	cout << "\t\t\t----------------------------------------------\n";
	cout << "\t\t\t\tWelcome To Car Rental System \n";
	cout << "\t\t\t     Just On Click To Start Your Journey " << endl;
	cout << "\t\t\t----------------------------------------------\n";
	int days;

		cout << "\t\t\tEnter Your Days? - ";
		cin>>days;
            /*if(days <= 0 || days > 31)
                cout << "\nYou must Enter an Positve Integer \n"
                    <<"Re-enter number:\n ";*/
		if (cin.fail())
        {
            cout<<endl<<"You must Enter an Integer \n";
            return 1;
        }

    char ya;
    string yes;

    	       string name11;
	       int tot31;
     ifstream MyRead11("price.txt");
     int p11=0;
      while(getline(MyRead11,name11)){
      stringstream numbs(name11);
      ++p11;
      if(p11==a){
      numbs>>tot31;
      if(days <= 0 || days > 31)
                cout << "\nYou must Enter an Positve Integer \n"
                    <<"Re-enter number:\n ";
	cout << "\t\t\tYour Rent Will Be Rs. " << tot31*days << endl;
      }
      }
    MyRead11.close();


		cout << "\t\t\tEnter Y/N to Proceed?  - ";
		ya = _getch();
	while (ya != 13)
	{
		yes.push_back(ya);
		cout << ya;
		ya = _getch();
	}
			if(yes=="Y"){
	system("CLS");
	cout << "\t\t\t----------------------------------------------\n";
	cout << "\t\t\t\tWelcome To Car Rental System \n";
	cout << "\t\t\t     Just On Click To Start Your Journey " << endl;
	cout << "\t\t\t----------------------------------------------\n";
	char na;
	string name="";
	char nu;
	string num="";
		cout << "\t\t\tEnter Your Name : ";
				na = _getch();
	while (na != 13)
	{
		name.push_back(na);
		cout << na;
		na = _getch();
	}

		cout << "\n\t\t\tEnter Your Number : ";
				nu = _getch();
	while (nu != 13)
	{
		num.push_back(nu);
		cout << nu;
		nu = _getch();
	}
	system("CLS");
	cout << "\t\t\t----------------------------------------------\n";
	cout << "\t\t\t\tWelcome To Car Rental System \n";
	cout << "\t\t\t     Just On Click To Start Your Journey " << endl;
	cout << "\t\t\t----------------------------------------------\n";


	cout << "\n\n\n\t\t\t-----------------------------\n";
	       string name5;
     ifstream MyRead5("car.txt");
     int p5=0;
      while(getline(MyRead5,name5)){
      ++p5;
      if(p5==a){
	cout << "\t\t\tYou Have Selected - " << name5 << endl;
      }
      }
    MyRead5.close();
	cout << "\t\t\t-----------------------------\n";
	       string name6;
     ifstream MyRead6("color.txt");
     int p6=0;
      while(getline(MyRead6,name6)){
      ++p6;
      if(p6==a){
	cout << "\t\t\tColor - " << name6 << endl;
      }
      }
    MyRead6.close();
	cout << "\t\t\t-----------------------------\n";
	       string name7;
     ifstream MyRead7("meter.txt");
     int p7=0;
      while(getline(MyRead7,name7)){
      ++p7;
      if(p7==a){
	cout << "\t\t\tCar's Average - " << name7 << endl;
      }
      }
    MyRead7.close();
	cout << "\t\t\t-----------------------------\n";
	       string name9;
     ifstream MyRead9("price.txt");
     int p9=0;
      while(getline(MyRead9,name9)){
      ++p9;
      if(p9==a){
	cout << "\t\t\tPrice - " << name9 <<"Per/Day"<< endl;
      }
      }
    MyRead9.close();
	cout << "\t\t\t-----------------------------\n";
	cout << "\t\t\tYour Name - " << name << endl;
	cout << "\t\t\t-----------------------------\n";
	cout << "\t\t\tYour Mobile Number - " << num << endl;
	cout << "\t\t\t-----------------------------\n";
	       string name10;
	       int tot;
     ifstream MyRead10("price.txt");
     int p10=0;
      while(getline(MyRead10,name10)){
      stringstream numb(name10);
      ++p10;
      if(p10==a){
      numb>>tot;
	cout << "\t\t\tYour Total Bill - " << tot*days << endl;
      }

      }
    MyRead10.close();
	cout << "\t\t\t-----------------------------\n\n\n";


	 ofstream MyFilet("Bill.txt");
 	MyFilet << "\t\t\t-----------------------------\n";
	MyFilet << "\t\t\tName - "<< name <<endl;
	MyFilet << "\t\t\t-----------------------------\n";
	MyFilet << "\t\t\tMobile Number - "<< num << endl;
	MyFilet << "\t\t\t-----------------------------\n";
	MyFilet << "\t\t\tCar Name - "<< name5 << endl;
	MyFilet << "\t\t\t-----------------------------\n";
	MyFilet << "\t\t\tCar Color - "<<name6<< endl;
	MyFilet << "\t\t\t-----------------------------\n";
	MyFilet << "\t\t\tCar's Average - "<<name7<<"KM\H"<< endl;
	MyFilet << "\t\t\t-----------------------------\n";
	MyFilet << "\t\t\tRent For - "<<days<<"Days"<< endl;
	MyFilet << "\t\t\t-----------------------------\n";
	MyFilet << "\t\t\tRent Price - Rs."<<name9<<"Per Day"<< endl;
	MyFilet << "\t\t\t-----------------------------\n\n\n";
	MyFilet << "\t\t\t-----------------------------\n";
	MyFilet << "\t\t\tTotal - Rs."<<  tot*days<< endl;
	MyFilet << "\t\t\t-----------------------------\n";

 MyFilet.close();


		system("PAUSE");
	}
	else{
	system("CLS");
	carsDetails();
	}

}
int edit()
{
	int carcolor();
	int a,b;
	string carmodel = "";
	cout << "\t\t\t----------------------------------------------\n";
	cout << "\t\t\t\tWelcome To Car Rental System \n";
	cout << "\t\t\t     Just On Click To Start Your Journey " << endl;
	cout << "\t\t\t----------------------------------------------\n";

	       string name;
        int num=0;
     ifstream MyRead("car.txt");

      while(getline(MyRead,name)){
      num++;
		cout << "\t\t\t";
		cout << "Enter " << num << "\t- To Select  " << name << endl;

     }
		cout << "\t\t\t";
		cout << "Enter 100 - To Add New Car"<< endl;
		cout << "\t\t\t";
		cout << "Enter 99 - Go Back"<< endl;
	cin >> a;

	if(a==99){
	system("CLS");
	ask();
	}
	if(a==100){
	char ca,co,me,pr;
	string cars="";
	string color="";
	string meter="";
	string price="";

	system("CLS");
	cout << "\t\t\t----------------------------------------------\n";
	cout << "\t\t\t\tWelcome To Car Rental System \n";
	cout << "\t\t\t     Just On Click To Start Your Journey " << endl;
	cout << "\t\t\t----------------------------------------------\n";


	cout << "\n\n\n\n\t\t\t\tEnter A New Car: ";
		ca = _getch();
	while (ca != 13)
	{
		cars.push_back(ca);
		cout << ca;
		ca = _getch();
	}

		cout << "\n\n\n\n\t\t\t\tEnter Car Color: ";
		co = _getch();
	while (co != 13)
	{
		color.push_back(co);
		cout << co;
		co = _getch();
	}

		cout << "\n\n\n\n\t\t\t\tEnter Car Average: ";
		me = _getch();
	while (me != 13)
	{
		meter.push_back(me);
		cout << me;
		me = _getch();
	}

			cout << "\n\n\n\n\t\t\t\tEnter Car Per Day Price: ";
		pr = _getch();
	while (pr != 13)
	{
		price.push_back(pr);
		cout << pr;
		pr = _getch();
	}

	string data="";
string name;
 ifstream MyRead("car.txt");
  while(getline(MyRead,name)){
  data += name+"\n";
 }
MyRead.close();
	 ofstream MyFile("car.txt");
 MyFile<<data;
 MyFile<<cars;
 MyFile.close();

 	string data1="";
string name1;
 ifstream MyRead1("color.txt");
  while(getline(MyRead1,name1)){
  data1 += name1+"\n";
 }
MyRead1.close();
	 ofstream MyFile1("color.txt");
 MyFile1<<data1;
 MyFile1<<color;
 MyFile1.close();

 	string data2="";
string name2;
 ifstream MyRead2("meter.txt");
  while(getline(MyRead2,name2)){
  data2 += name2+"\n";
 }
MyRead2.close();
	 ofstream MyFile2("meter.txt");
 MyFile2<<data2;
 MyFile2<<meter;
 MyFile2.close();

	string data3="";
string name3;
 ifstream MyRead3("price.txt");
  while(getline(MyRead3,name3)){
  data3 += name3+"\n";
 }
MyRead3.close();
	 ofstream MyFile3("price.txt");
 MyFile3<<data3;
 MyFile3<<price;
 MyFile3.close();


	system("CLS");
	edit();
	system("PAUSE");
	}

	if(a){
	system("CLS");
	cout << "\t\t\t----------------------------------------------\n";
	cout << "\t\t\t\tWelcome To Car Rental System \n";
	cout << "\t\t\t     Just On Click To Start Your Journey " << endl;
	cout << "\t\t\t----------------------------------------------\n";

	int num = 1;
	for (int i = 0; i < 3; ++i)
	{
		cout << "\t\t\t";
		cout << "Enter " << num << "\t- To Select  " << car.but[i] << endl;
		num++;
	}
	cin>>b;


	if(b==1){

string dataa="";
        string namey;
     ifstream MyReady("car.txt");
     int p=0;
      while(getline(MyReady,namey)){
      ++p;
      if(p==a){
      }
      else{
      dataa += namey+"\n";
      }
      }
    MyReady.close();
     ofstream MyFile("car.txt");
 MyFile<<dataa;
 MyFile.close();


string dataay1="";
         string namey1;
     ifstream MyReady1("color.txt");
     int py1=0;
      while(getline(MyReady1,namey1)){
      ++py1;
      if(py1==a){
      cout<<"Done";
      }
      else{
      dataay1 += namey1+"\n";
      }
      }
    MyReady1.close();
cout<<dataay1;
     ofstream MyFiley1("color.txt");
 MyFiley1<<dataay1;
 MyFiley1.close();


string dataay2="";
         string namey2;
     ifstream MyReady2("meter.txt");
     int py2=0;
      while(getline(MyReady2,namey2)){
      ++py2;
      if(py2==a){
      cout<<"Done";
      }
      else{
      dataay2 += namey2+"\n";
      }
      }
    MyReady2.close();
cout<<dataay2;
     ofstream MyFiley2("meter.txt");
 MyFiley2<<dataay2;
 MyFiley2.close();




string dataay3="";
         string namey3;
     ifstream MyReady3("price.txt");
     int py3=0;
      while(getline(MyReady3,namey3)){
      ++py3;
      if(py3==a){
      cout<<"Done";
      }
      else{
      dataay3 += namey3+"\n";
      }
      }
    MyReady3.close();
cout<<dataay3;
     ofstream MyFiley3("price.txt");
 MyFiley3<<dataay3;
 MyFiley3.close();


	system("PAUSE");
	}

	}

		if(b==2){

			      string namey11;

     ifstream MyReady11("car.txt");
     int p11=0;
      while(getline(MyReady11,namey11)){
      ++p11;
      if(p11==a){
				cout << "\t\t\t";
      cout<<"Car Name : "<<namey11<<endl;
      }
      }
    MyReady11.close();

			      string namey12;

     ifstream MyReady12("color.txt");
     int p12=0;
      while(getline(MyReady12,namey12)){
      ++p12;
      if(p12==a){
				cout << "\t\t\t";
      cout<<"Car Color : "<<namey12<<endl;
      }
      }
    MyReady12.close();

			      string namey13;

     ifstream MyReady13("meter.txt");
     int p13=0;
      while(getline(MyReady13,namey13)){
      ++p13;
      if(p13==a){
				cout << "\t\t\t";
      cout<<"Car's Average : "<<namey13<<endl;
      }
      }
    MyReady13.close();

			      string namey14;

     ifstream MyReady14("price.txt");
     int p14=0;
      while(getline(MyReady14,namey14)){
      ++p14;
      if(p14==a){
				cout << "\t\t\t";
      cout<<"Car Per Day Price : "<<namey14<<endl;
      }
      }
    MyReady14.close();


		char caa;
		string caarr="";
		char coo;
		string coolor="";
		char mee;
		string meeter="";
		char prr;
		string prrice="";
				cout << "\t\t\t";
		cout << "Change Car Name: ";
	caa = _getch();
	while (caa != 13)
	{
		caarr.push_back(caa);
		cout << caa;
		caa = _getch();
	}

				cout << "\t\t\t";
		cout << "Change Car Color: ";
	coo = _getch();
	while (coo != 13)
	{
		coolor.push_back(coo);
		cout << coo;
		coo = _getch();
	}


				cout << "\t\t\t";
		cout << "Change Car's Average: ";
	mee = _getch();
	while (mee != 13)
	{
		meeter.push_back(mee);
		cout << mee;
		mee = _getch();
	}


				cout << "\t\t\t";
		cout << "Change Car Per Day Price: ";
	prr = _getch();
	while (prr != 13)
	{
		prrice.push_back(prr);
		cout << prr;
		prr = _getch();
	}

		string data="";
        string name;
     ifstream MyRead("car.txt");
     int p=0;
      while(getline(MyRead,name)){
      ++p;
      if(p==a){
      data += caarr+"\n";
      }
      else{
      data += name+"\n";
      }
      }
    MyRead.close();
cout<<data;
     ofstream MyFile("car.txt");
 MyFile<<data;
 MyFile.close();


		string datao="";
        string nameo;
     ifstream MyReado("color.txt");
     int po=0;
      while(getline(MyReado,nameo)){
      ++po;
      if(po==a){
      datao += coolor+"\n";
      }
      else{
      datao += nameo+"\n";
      }
      }
    MyReado.close();
     ofstream MyFileo("color.txt");
 MyFileo<<datao;
 MyFileo.close();


		string datam="";
        string namem;
     ifstream MyReadm("meter.txt");
     int pm=0;
      while(getline(MyReadm,namem)){
      ++pm;
      if(pm==a){
      datam += meeter+"\n";
      }
      else{
      datam += namem+"\n";
      }
      }
    MyReadm.close();
     ofstream MyFilem("meter.txt");
 MyFilem<<datam;
 MyFilem.close();


		string datap="";
        string namep;
     ifstream MyReadp("price.txt");
     int pp=0;
      while(getline(MyReadp,namep)){
      ++pp;
      if(pp==a){
      datap += prrice+"\n";
      }
      else{
      datap += namep+"\n";
      }
      }
    MyReadp.close();
     ofstream MyFilep("price.txt");
 MyFilep<<datap;
 MyFilep.close();


	system("PAUSE");
	}
	if(b==3){
	system("CLS");
	edit();
	}
	system("CLS");
	edit();
	system("PAUSE");
}


int newUser()
{
	string name = "";
	char na;
	string pass = "";
	char pa;

	string data = "";
	string names;

	cout << "\t\t\t----------------------------------------------\n";
	cout << "\t\t\t\tWelcome To User SignUp Panel \n";
	cout << "\t\t\t     Just On Click To Start Your Journey " << endl;
	cout << "\t\t\t----------------------------------------------\n";

	cout << "\n\n\n\n\n\n\n\t\t\t\tCar Rental System";
	cout << "\n\n\n\n\t\t\t\tEnter Your Name: ";
	na = _getch();
	while (na != 13)
	{
		name.push_back(na);
		cout << na;
		na = _getch();
	}

	cout << "\n\n\n\n\t\t\t\tSet A Password: ";
	pa = _getch();
	while (pa != 13)
	{
		pass.push_back(pa);
		cout << '*';
		pa = _getch();
	}

	ifstream MyRead("file.txt");

	while (getline(MyRead, names))
	{
		data += names + "\n";
	}

	MyRead.close();

	ofstream MyFile("file.txt");
	MyFile << data;
	MyFile << name << "\n";
	MyFile << pass << "\n";

	MyFile.close();

	system("CLS");
	login();
	system("PAUSE");
}
