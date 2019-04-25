#include<iostream>
using namespace std;

void home(){
	cout<<"SELECT YOUR PREFFERED TRANSACTION\n";
	cout<<"1. ALL IN ONE MONTHLY BUNDLE\n";
	cout<<"2. Daily Bundle\n";
	cout<<"3. 7 day Bunde\n";
	cout<<"4. 30 day Bundle\n";
	cout<<"5. Giga bundle\n";
	cout<<"6. Tunukiwa\n";
	cout<<"7. Okoa data\n";
	cout<<"8. Balance\n";
}
void Allinonemonthlybundle()
{
	cout<<"How much do you wish to spend?\n";
	cout<<"1000\n";
	cout<<"2000\n";
	cout<<"3000\n";
	cout<<"5000\n";
	cout<<"10000\n";
	cout<<"Less than 1000\n\n";
	cout<<"00 home\n";
}
void onethousand()
{
	cout<<"All bundles com with whatsapp\n1. 5GB\n2. 4GB + 200mins\n3. 2GB + 400mins\n\n0 back  00 home\n";
}
void autorenewbuyonce()
{
	cout<<"1. Autorenew\n2. Buy Once\n\n0 back   00 home\n";
}
void buyusing()
{
	cout<<"Using either:\n1. M-Pesa\n2. Airtime\n\n0 back   00 home\n";
}

int main()
{
	int operation;
	home();
	cin>>operation;
	
	if(operation == 1)
	{
		Allinonemonthlybundle();
		cin>>operation;
		if(operation==1)
		{
			onethousand();
			cin>>operation;
			if(operation==1)
			{
				autorenewbuyonce();
				cin>>operation;
				if(operation==1)
				{
					buyusing();
				}
			}
		}
	}
	else if(operation == 2)
	{
		home();	
    }else if(operation == 3){
    	
	} else if(operation == 4){
		
	}else if(operation == 5){
		
	} else if(operation == )
    else{
		cout<<"ERROR";
	}
	return 0;
	
	
}
