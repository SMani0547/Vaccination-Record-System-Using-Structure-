//Name: Shiva Mani Goundar Id: S11208749
//Name: Prashant Reddy     Id: S11213580

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

//structure decelaration: citizen 
struct citizen
{
	string c_id;
	string fname;
	string lname;
	char gender;
	int age;
	int phone;
	string address;
};

//structure decelaration: vaccination 
struct vaccination
{
	string c_id;
	int	num_vac;
	int	V1_code;
	string	V1_date;
	int	V2_code;	
	string	V2_date;
	int	B_code;	
	string	B_date;
};

//structure decelaration: vaccine 
struct vaccine
{
	int vaccine_code;
	string vaccine_name;
	int vaccine_minspace;	
};

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//function for Print The Citizen (option 2)
void print_citizen(citizen citizens[], int size_1)
{
	cout << "------------------------------------------------------------------------------------------" << endl;
	cout << "\t\t\t\tCitizen Details" << endl;
	cout << "------------------------------------------------------------------------------------------" << endl;
	cout << " Citizen ID\tFirst Name\tLast Name\tGender\tAge\tPhone\t\tAddress" << endl;
	cout << "------------------------------------------------------------------------------------------" << endl;
	
	for (int i = 0; i < size_1; i++) 
	{
		cout << " " << citizens[i].c_id << "\t\t" << citizens[i].fname << "\t\t" << citizens[i].lname << "\t\t" << citizens[i].gender << "\t" << citizens[i].age << "\t" << citizens[i].phone << "\t\t" << citizens[i].address << endl;
	}  
	
	cout << "\n TOTAL: " << size_1 << endl;
	cout << "------------------------------------------------------------------------------------------" << endl;
}

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//function for To Print Vaccines (option 3)
void print_vaccine(vaccine vaccines[], int size_3)
{
	cout << "-------------------------------------------------" << endl;
	cout << "\t\tVaccine Details" << endl;
	cout << "-------------------------------------------------" << endl;
	cout << " Vaccine Code\tVaccine Name\tVaccine Minspace" << endl; 
	cout << "-------------------------------------------------" << endl;
	
	for (int i = 0; i < size_3; i++)
	{
		cout << " " << vaccines[i].vaccine_code << "\t\t" << vaccines[i].vaccine_name << "\t" << vaccines[i].vaccine_minspace << endl;
	}	
	
	cout << "\n TOTAL: " << size_3 << endl;
	cout << "-------------------------------------------------" << endl;
}

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//function for Printing Vaccination data (option 4)
void Print_vaccination_data(vaccination vaccinations[],citizen citizens[], int size_2, int size_1, string V1_name, string V2_name, string b_name, string V1_date, string V2_date, string b_date, int size_V1, int size_V2 , int size_B)
{
	cout << "----------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "\t\t\t\t\t\tVaccination Data" << endl;
	cout << "-----------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << " ID\tFull Name\tVac No.\tVac 1 Name\tVac 1 Date\tVac 2 Name\tVac 2 Date\tBooster Name\tBooster Date" << endl;
	cout << "-----------------------------------------------------------------------------------------------------------------------------" << endl;
	
	for(int i = 0; i < size_2; i++)
	{	
		//condition applied if Vaccination 1 Name Pfizer_2.0
		if(vaccinations[i].V1_code == 5001)
		{
			V1_name = "Pfizer_2.0";
		}
		
		//condition applied if Vaccination 1 Name Moderna1.0
 		if(vaccinations[i].V1_code == 5002)
		{
			V1_name = "Moderna1.0";
		}
		
		//condition applied if Vaccination 1 Name AstraZenca
		if(vaccinations[i].V1_code == 5003) 
		{	
			V1_name = "AstraZenca";
		}
		
		//condition applied if no Vaccination 1 recived
		if(vaccinations[i].V1_code == 0000) 
		{	
			V1_name = " ";
		}	
		
		//condition applied if Vaccination 2 Name Pfizer_2.0		
		if(vaccinations[i].V2_code == 5001) 
		{
			V2_name = "Pfizer_2.0";
		}
		
		//condition applied if Vaccination 2 Name Moderna1.0
 		if(vaccinations[i].V2_code == 5002) 
		{
			V2_name= "Moderna1.0";
		}
		
		//condition applied if Vaccination 2 Name AstraZenca
		if(vaccinations[i].V2_code == 5003) 
		{	
			V2_name = "AstraZenca";
		}
		
		//condition applied if no Vaccination 2 recived
		if(vaccinations[i].V2_code == 0000) 
		{	
			V2_name = " ";
		}	
	
		//condition applied if booster name Pfizer_2.0
		if(vaccinations[i].B_code == 5001)  
		{
			b_name = "Pfizer_2.0";
		}
		
		//condition applied if booster name Moderna1.0
 		if(vaccinations[i].B_code == 5002) 
		{
			b_name= "Moderna1.0";
		}
		
		//condition applied if booster name AstraZenca
		if(vaccinations[i].B_code == 5003) 
		{	
			b_name = "AstraZenca";
		}
		
		//condition applied if no booster recived
		if(vaccinations[i].B_code == 0000) 
		{	
			b_name = " ";
		}
		
		//condition applied if date for vaccination 1 is > 00000000	
		if(vaccinations[i].V1_date > "00000000") 
		{
			V1_date = vaccinations[i].V1_date;
		}	
		
		//condition applied if date for vaccination 1 is <= 00000000
		if(vaccinations[i].V1_date <= "00000000") 
		{
			V1_date = " " ;
		}
		
		//condition applied if date for vaccination 2 > 00000000	
		if(vaccinations[i].V2_date > "00000000") 
		{
			V2_date = vaccinations[i].V2_date;
		}
		
		//condition applied if date for vaccination 2 is 00000000
		if(vaccinations[i].V2_date == "00000000") 
		{
			V2_date = " " ;
		}
		
		//condition applied if date for booster is > 00000000
		if(vaccinations[i].B_date > "00000000")  
		{
			b_date = vaccinations[i].B_date;
		}
		
		//condition applied if date for booster 00000000
		if(vaccinations[i].B_date == "00000000") 
		{
			b_date = " " ;
		}	
		
		//condition for totaling Partially Vaccinated
		if(vaccinations[i].num_vac == 1)  
		{
			size_V1++;
		}
		
		//condition for totaling Fully Vaccinated
		if(vaccinations[i].num_vac == 2)  
		{
			size_V2++;
		}
		
		//condition for totaling Fully Vaccinated with Booster
		if(vaccinations[i].num_vac == 3 ) 
		{
			size_B++;
		}			
		
		cout << " " << citizens[i].c_id << "\t" << citizens[i].fname << " " << citizens[i].lname << "\t"<< vaccinations[i].num_vac << "\t" << V1_name <<  "\t" << V1_date << "\t" << V2_name << "\t" <<  V2_date << "\t" << b_name << "\t" << b_date << endl;
	}
	
	//declaration
	double total_vccinated = size_2;
	double total_citizen = size_1;
	double partial_vcc = size_V1;
	double fully_vcc = size_V2;	
	double fully_Booster_vcc = size_B;
	double num_100 = 100;
	
	//Total Vaccintated calculation 
	double percentage_total = ((total_vccinated/total_citizen)*num_100);	
	
	//Partially Vaccinated calculation
	double percentage_partial = ((partial_vcc/total_vccinated)*num_100);
	
	//Fully Vaccinated calculation
	double percentage_fully = ((fully_vcc/total_vccinated)*num_100);
	
	//Fully Vaccinated with Booster calculation
	double percentage_fully_Booster = ((fully_Booster_vcc/total_vccinated)*num_100);
	
	cout << "-----------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "\t\t\t\t\t\tTotal Vaccination Details" << endl;
	cout << "-----------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "Total Vaccintated '" << total_vccinated << "' out of '" << total_citizen << "' Citizen" <<  "\tTotal Percentage: "<< percentage_total << setprecision(4) << "%" << endl << endl;
	cout << "Partially Vaccinated: " << percentage_partial << "%" << setprecision(4)<< endl << endl;
	cout << "Fully Vaccinated: " << percentage_fully << "%" << setprecision(4) << endl << endl;
	cout << "Fully Vaccinated with Booster: " << percentage_fully_Booster << "%" << setprecision(4)<< endl;
	cout << "-----------------------------------------------------------------------------------------------------------------------------" << endl;
}

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//function for printing option 5 (Search Citizen)
void citizen_search(vaccination vaccinations[],citizen citizens[], int size_1, int size_2, string V1_name, string V2_name, string b_name, string V1_date, string V2_date, string b_date, string vac_status)
{	
	bool c_ID = false;
	bool vac_ID = false;
	string id;
	cout << " Enter citizen ID: ";
	cin >> id;
	cout << endl;
		
	for(int i = 0; i < size_1; i++)
	{	
		// condition if id matches, then proceed with citizen search
		if(citizens[i].c_id  == id) 
		{
			c_ID = true;
			
			cout << "--------------------------------------------------------------" << endl;
			cout << "                  Citizen Details" << endl;
			cout << "--------------------------------------------------------------" << endl;
			cout << "citizen ID: " << citizens[i].c_id << endl << endl;
			cout << "Name: " << citizens[i].fname << " " << citizens[i].lname << endl << endl;
			cout << "Gender: " << citizens[i].gender << endl << endl;
			cout << "Age: " << citizens[i].age << endl << endl;
			cout << "Phone: " << citizens[i].phone << endl << endl;
			cout << "Address: " << citizens[i].address << endl << endl;
		}
	}
	
	//if id does not match
	if(c_ID == false )
	{
		cout << "--------------------------------------------------------------" << endl;
		cout << "\t\t  Citizen ID: " << id << " Not Found" << endl;
		cout << "--------------------------------------------------------------" << endl;
	}
	
	for(int i = 0; i < size_2; i++)
	{	
		//condition if id matches, then proceed with vaccination search
		if(vaccinations[i].c_id  == id)
		{
			vac_ID = true;
			
			//condition for Vaccination 1 Name Pfizer_2.0
			if(vaccinations[i].V1_code == 5001) 
			{
				V1_name = "Pfizer_2.0";
			}
			
			//condition for Vaccination 1 Name Moderna1.0
	 		if(vaccinations[i].V1_code == 5002) 
			{
				V1_name = "Moderna1.0" ;
			}
			
			//condition for Vaccination 1 Name AstraZenca
			if(vaccinations[i].V1_code == 5003) 
			{	
				V1_name = "AstraZenca";
			}
			
			//condition  if  Vaccination 1 is not recived
			if(vaccinations[i].V1_code == 0000) 
			{	
				V1_name = "-";
			}	
			
			//condition for Vaccination 2 Name Pfizer_2.0		
			if(vaccinations[i].V2_code == 5001) 
			{
				V2_name = "Pfizer_2.0";
			}
			
			//condition for Vaccination 2 Name Moderna1.0
	 		if(vaccinations[i].V2_code == 5002)  
			{
				V2_name= "Moderna1.0" ;
			}
			
			//condition for Vaccination 2 Name AstraZenca
			if(vaccinations[i].V2_code == 5003) 
			{	
				V2_name = "AstraZenca";
			}
			
			//condition if Vaccination 2 is not recived
			if(vaccinations[i].V2_code == 0000) 
			{	
				V2_name = "-";
			}
			
			//condition for booster name Pfizer_2.0
			if(vaccinations[i].B_code == 5001)  
			{
				b_name = "Pfizer_2.0";
			}
			
			//condition for booster name Moderna1.0
	 		if(vaccinations[i].B_code == 5002) 
			{
				b_name= "Moderna1.0";
			}
			
			//condition for booster name AstraZenca
			if(vaccinations[i].B_code == 5003) 
			{	
				b_name = "AstraZenca";
			}
			
			//condition if booster not recived
			if(vaccinations[i].B_code == 0000) 
			{
				b_name = "-";
			}
			
			//condition if date for vaccination 1 is > 00000000	
			if(vaccinations[i].V1_date > "00000000") 
			{
				V1_date = vaccinations[i].V1_date;
			}	
		
			//condition if date for vaccination 1 is <= 00000000
			if(vaccinations[i].V1_date <= "00000000") 
			{
				V1_date = "-";
			}
			
			//condition if date for vaccination 2 is > 00000000	
			if(vaccinations[i].V2_date > "00000000") 
			{
				V2_date = vaccinations[i].V2_date;
			}	
			
			//condition if date for vaccination 2 is <= 00000000
			if(vaccinations[i].V2_date <= "00000000") 
			{
				V2_date = "-";
			}
			
			//condition if date for booster is > 00000000
			if(vaccinations[i].B_date > "00000000")
			{
				b_date = vaccinations[i].B_date;
			}
				
			//condition if date for booster is <= 00000000
			if(vaccinations[i].B_date <= "00000000")
			{
				b_date = "-";
			}	
			
			//condition for  Partially Vaccinated
			if(vaccinations[i].num_vac == 1) 
			{
				vac_status = "Partially Vaccinated";
			}
			
			//condition for fully Vaccinated
			if(vaccinations[i].num_vac == 2) 
			{
				vac_status = "Fully Vaccinated";
			}
			
			//condition for  Fully Vaccinated with booster
			if(vaccinations[i].num_vac == 3)
			{
				vac_status = "Fully Vaccinated with Booster";
			}
		
			cout << "--------------------------------------------------------------" << endl;
			cout << "                  Vccination Details" << endl;
			cout << "--------------------------------------------------------------" << endl;
			cout << "Number of vaccines: " << vaccinations[i].num_vac << endl << endl;
			cout << "Vaccination 1: " << V1_name << "\tVaccination Date: " << V1_date << endl << endl;
			cout << "Vaccination 2: " << V2_name << "\tVaccination Date: " << V2_date << endl << endl;
			cout << "Booster: " << b_name << "\t\tBooster Date: " << b_date << endl << endl;
			cout << "Vaccination Status: "  << vac_status << endl << endl;
			cout << "--------------------------------------------------------------" << endl;
		}
	}
	
	//if no vaccination is given
	if(vac_ID == false && c_ID == true)
	{
		cout << "--------------------------------------------------------------" << endl;
		cout << "\t\tCitizen Is Not Yet Vccinated" << endl;
		cout << "--------------------------------------------------------------" << endl;
	}			
}

int main()
{
	//declaration 
	int const SIZE = 1000;
	int size_1 = 0;
	int size_2 = 0;
	int size_3 = 0;
	int size_V1 = 0;
	int size_V2 = 0;
	int size_B = 0;
	int choice;
	int num_1 = 1;
	int num_2 = 2;
	int num_3 = 3;
	int num_4 = 4;
	int num_5 = 5;
	int num_6 = 6;
	string V1_name;
	string V2_name;
	string b_name;
	string V1_date;
	string V2_date;
	string b_date;
	string vac_date;
	string vac_status;
	citizen citizens[SIZE];
	vaccination vaccinations[SIZE];
	vaccine vaccines[SIZE];
	
	//opening citizens.txt file
	ifstream in_1_file("citizens.txt");      
	
	//opening vaccination.txt file
	ifstream in_2_file("vaccination.txt");  
	
	//opening vaccines.txt file
	ifstream in_3_file("vaccines.txt");	   
	
	//if file is found
	if (in_1_file.is_open() && in_2_file.is_open() && in_3_file.is_open())
	{
		cout << "----------------------------------------------------------" << endl;
		cout << "\tWelcome To Vaccination Reports And Analysis" << endl;
		cout << "----------------------------------------------------------" << endl;
		cout << "\tEnter 1 To Exit The Programme" << endl;
		cout << "\tEnter 2 To Print The Citizens" << endl;
		cout << "\tEnter 3 To Print Vaccines" << endl;
		cout << "\tEnter 4 To Print Vaccination data" << endl;
		cout << "\tEnter 5 To Search Citizen Using Their Citizen ID" << endl;	
		cout << "----------------------------------------------------------" << endl;
		
		//discard first line from citizens file
	    string temp_1;
		getline(in_1_file,temp_1);
	  
	    //discard first line from vaccinations file
	  	string temp_2;
		getline(in_2_file,temp_2);
	
		//discard first line from vaccines file
		string temp_3;		
		getline(in_3_file,temp_3);
		
		//sort citizens file in array
	    while (in_1_file >> citizens[size_1].c_id >> citizens[size_1].fname >> citizens[size_1].lname >> citizens[size_1].gender >> citizens[size_1].age >> citizens[size_1].phone >> citizens[size_1].address)
	    {
	      size_1++;
	   	}
	   	
	   	//sort vaccinations file in array
	   	while (in_2_file >> vaccinations[size_2].c_id >> vaccinations[size_2].num_vac >> vaccinations[size_2].V1_code >> vaccinations[size_2].V1_date >> vaccinations[size_2].V2_code >> vaccinations[size_2].V2_date >> vaccinations[size_2].B_code >> vaccinations[size_2].B_date)
	    { 
	      size_2++;
	   	}
	   	
	   	//sort vaccines file in array 
	   	while (in_3_file >> vaccines[size_3].vaccine_code >> vaccines[size_3].vaccine_name >> vaccines[size_3].vaccine_minspace)
	    {
	      size_3++;
	   	}
		
		while (choice != num_1)
		{
			cout << "\n\n Enter Your Choice: ";
			cin >> choice;
			cout << endl;
			
			//condition if anything apart from number is entered
			if (cin.fail())
			{
				cin.clear();
				string dummy;
				cin >> dummy;
				cout << "----------------------------------------------------------" << endl;
				cout << "Invalid Input: '" << dummy << "' Please Enter your numbers between 1 to 5" << endl;
				cout << "----------------------------------------------------------" << endl;
			}
			
			else if (choice == num_2)
			{
				//function call for print citizen
				print_citizen(citizens, size_1);
			}
			
			else if (choice == num_3)
			{
				//function call for print vaccine
				print_vaccine(vaccines, size_3);
			}
			
			else if (choice == num_4)
			{
				//function call for Print vaccination data
				Print_vaccination_data(vaccinations, citizens, size_2, size_1, V1_name, V2_name, b_name, V1_date, V2_date, b_date, size_V1, size_V2, size_B);
			}
			
			else if (choice == num_5)
			{
				//function call for citizen search
				citizen_search(vaccinations, citizens, size_1, size_2, V1_name, V2_name, b_name, V1_date, V2_date, b_date, vac_status);
			}
			
			//if numbers beyond 1 and 5 is entered
			else if(choice < num_1 || choice > num_5)
			{
				cout << "----------------------------------------------------------" << endl;
				cout << "Invalid Input: '" << choice << "' Please Enter your numbers between 1 to 5" << endl;
				cout << "----------------------------------------------------------" << endl;
			}
		}
	}
	
	//if files are not found 
	else
	{
		// declaration
		string file_not_found_1;
		string file_not_found_2;
		string file_not_found_3;
	
		cout << "-------------------------------------" << endl;
		cout << "\t\tERROR" << endl;
		cout << "-------------------------------------" << endl << endl;
		
		// condition if citizens.txt is not found
		if(!in_1_file.is_open())
		{
			file_not_found_1 = "citizens.txt";
			cout << file_not_found_1 << " file is not found" << endl << endl;
		}
		
		// condition if vaccination.txt is not found
		if(!in_2_file.is_open())
		{
			file_not_found_2 = "vaccination.txt";
			cout << file_not_found_2 << " file is not found" << endl << endl;
		}
		
		// condition if vaccines.txt is not found
		if(!in_3_file.is_open())
		{
			file_not_found_3 = "vaccines.txt"; 
			cout << file_not_found_3 << " file is not found" << endl << endl;
		}
	}
		
	//closing citizens.txt file
	in_1_file.close();  
	
	//closing vaccination.txt file
	in_2_file.close();
	
	//closing vaccines.txt file	
	in_3_file.close();
	
	return 0;
}
