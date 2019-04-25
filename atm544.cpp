#include<iostream>
using namespace std;
int main()
{
	int number;
	cout<<"Please select:\n1. All in one monthly bundle\n2. 7 day Bundle\n";
	cin>>number;
	if(number==1)
	{
		cout<<"Please select:\n1. 1GB @ 500/=\n2. 4GB @ 1000/=\n";
		cin>>number;
		if(number==1)//1gb @ 500
		{
			cout<<"1. Buy once\n2. Autorenewal\n";
		    cin>>number;
		    if(number==1)//buy once 1gb @ 500
		    {
		    	cout<<"Using either:\n1. Airtime\n2. M-Pesa\n";
		    	cin>>number;
		    	if(number==1)//using airtime
		    	{
		    		cout<<"1. Accept\n2. Decline\n";
		    		cin>>number;
		    		if(number==1)//accept buy once using airtime
		    		{
		    			cout<<"Purchase successful";
					}
					else if(number==2)//decline buy once using airtime
					{
						cout<<"Thankyou for choosing Safaricom";
					}
					else
					{
						cout<<"Error";
					}
		        }
		        else if(number==2)//using mpesa
		        {
		    		cout<<"1. Accept\n2. Decline\n";
		    		cin>>number;
		    		if(number==1)//accept buy once using mpesa
		    		{
		    			cout<<"Purchase successful";
					}
					else if(number==2)//decline buy once using mpesa
					{
						cout<<"Thankyou for choosing Safaricom";
					}
					else
					{
						cout<<"Error";
					}
		        }
		        else
		        {
		        	cout<<"Error";
				}
			}
			else if(number==2)/*Autorenewal*/
			{
		    	cout<<"Using either:\n1. Airtime\n2. M-Pesa\n";
		    	cin>>number;
		    	if(number==1)//autorenewal airtime
		    	{
		    		cout<<"1. Accept\n2. Decline\n";
		    		cin>>number;
		    		if(number==1)//accept autorenewal airtime
		    		{
		    			cout<<"Purchase successful";
					}
					else if(number==2)//decline autorenewal airtime
					{
						cout<<"Thankyou for choosing Safaricom";
					}
					else
					{
						cout<<"Error";
					}
		        }
		        else if(number==2)//autorenewal mpesa
		        {
		    		cout<<"1. Accept\n2. Decline\n";
		    		cin>>number;
		    		if(number==1)//accept autorenewal mpesa
		    		{
		    			cout<<"Purchase successful";
					}
					else if(number==2)//decline autorenewal mpesa
					{
						cout<<"Thankyou for choosing Safaricom";
					}
					else
					{
						cout<<"Error";
					}
		        }
			}
			else 
			{
				cout<<"Error";
			}
		}
		else if(number==2)//4gb @ 1000
		{
			cout<<"1. Buy once\n2. Autorenewal\n";
		    cin>>number;
		    if(number==1)//buy once 1gb @ 500
		    {
		    	cout<<"Using either:\n1. Airtime\n2. M-Pesa\n";
		    	cin>>number;
		    	if(number==1)//using airtime
		    	{
		    		cout<<"1. Accept\n2. Decline\n";
		    		cin>>number;
		    		if(number==1)//accept buy once using airtime
		    		{
		    			cout<<"Purchase successful";
					}
					else if(number==2)//decline buy once using airtime
					{
						cout<<"Thankyou for choosing Safaricom";
					}
					else
					{
						cout<<"Error";
					}
		        }
		        else if(number==2)//using mpesa
		        {
		    		cout<<"1. Accept\n2. Decline\n";
		    		cin>>number;
		    		if(number==1)//accept buy once using mpesa
		    		{
		    			cout<<"Purchase successful";
					}
					else if(number==2)//decline buy once using mpesa
					{
						cout<<"Thankyou for choosing Safaricom";
					}
					else
					{
						cout<<"Error";
					}
		        }
		        else
		        {
		        	cout<<"Error";
				}
			}
			else if(number==2)/*Autorenewal*/
			{
		    	cout<<"Using either:\n1. Airtime\n2. M-Pesa\n";
		    	cin>>number;
		    	if(number==1)//autorenewal airtime
		    	{
		    		cout<<"1. Accept\n2. Decline\n";
		    		cin>>number;
		    		if(number==1)//accept autorenewal airtime
		    		{
		    			cout<<"Purchase successful";
					}
					else if(number==2)//decline autorenewal airtime
					{
						cout<<"Thankyou for choosing Safaricom";
					}
					else
					{
						cout<<"Error";
					}
		        }
		        else if(number==2)//autorenewal mpesa
		        {
		    		cout<<"1. Accept\n2. Decline\n";
		    		cin>>number;
		    		if(number==1)//accept autorenewal mpesa
		    		{
		    			cout<<"Purchase successful";
					}
					else if(number==2)//decline autorenewal mpesa
					{
						cout<<"Thankyou for choosing Safaricom";
					}
					else
					{
						cout<<"Error";
					}
		        }
			}
			else 
			{
				cout<<"Error";
			}
		}
		else
		{
			cout<<"Error";
		}
	}
	else if(number==2)//7 day bundle
	{
		cout<<"1. 50mb @ 100/=\n2. 100mb @ 200/=\n3. 250mb @ 500/=\n";
		cin>>number;
		if(number==1)
		{
			cout<<"1. Buy once\n2. Autorenewal\n";
		    cin>>number;
		    if(number==1)//buy once 50mb @ 100
		    {
		    	cout<<"Using either:\n1. Airtime\n2. M-Pesa\n";
		    	cin>>number;
		    	if(number==1)//buy once 50mb@100
		    	{
		    		cout<<"1. Accept\n2. Decline\n";
		    		cin>>number;
		    		if(number==1)//accept buy once using airtime 50mb@100
		    		{
		    			cout<<"Purchase successful";
					}
					else if(number==2)//decline buy once using airtime 50mb@100
					{
						cout<<"Thankyou for choosing Safaricom";
					}
					else
					{
						cout<<"Error";
					}
		        }
		        else if(number==2)//using mpesa 50mb@100
		        {
		    		cout<<"1. Accept\n2. Decline\n";
		    		cin>>number;
		    		if(number==1)//accept buy once using mpesa 50mb@100
		    		{
		    			cout<<"Purchase successful";
					}
					else if(number==2)//decline buy once using mpesa 50mb@100
					{
						cout<<"Thankyou for choosing Safaricom";
					}
					else
					{
						cout<<"Error";
					}
		        }
		        else
		        {
		        	cout<<"Error";
				}
			}
			else if(number==2)/*Autorenewal 50mb@100*/ 
			{
		    	cout<<"Using either:\n1. Airtime\n2. M-Pesa\n";
		    	cin>>number;
		    	if(number==1)//autorenewal using airtime 50mb@100
		    	{
		    		cout<<"1. Accept\n2. Decline\n";
		    		cin>>number;
		    		if(number==1)//accept autorenewal airtime 50mb@100
		    		{
		    			cout<<"Purchase successful";
					}
					else if(number==2)//decline autorenewal airtime 50mb@100
					{
						cout<<"Thankyou for choosing Safaricom";
					}
					else
					{
						cout<<"Error";
					}
		        }
		        else if(number==2)//autorenewal mpesa 50mb@100
		        {
		    		cout<<"1. Accept\n2. Decline\n";
		    		cin>>number;
		    		if(number==1)//accept autorenewal mpesa 50mb@100
		    		{
		    			cout<<"Purchase successful";
					}
					else if(number==2)//decline autorenewal mpesa 50mb@100
					{
						cout<<"Thankyou for choosing Safaricom";
					}
					else
					{
						cout<<"Error";
					}
		        }
			}
			else 
			{
				cout<<"Error";
			}
		}
		else if(number==2)//100mb@200
		{
			cout<<"1. Buy once\n2. Autorenewal\n";
		    cin>>number;
		    if(number==1)//buy once 100mb @ 200
		    {
		    	cout<<"Using either:\n1. Airtime\n2. M-Pesa\n";
		    	cin>>number;
		    	if(number==1)//buy once 100mb@200
		    	{
		    		cout<<"1. Accept\n2. Decline\n";
		    		cin>>number;
		    		if(number==1)//accept buy once using airtime 100mb@200
		    		{
		    			cout<<"Purchase successful";
					}
					else if(number==2)//decline buy once using airtime 100mb@200
					{
						cout<<"Thankyou for choosing Safaricom";
					}
					else
					{
						cout<<"Error";
					}
		        }
		        else if(number==2)//using mpesa 100mb@200
		        {
		    		cout<<"1. Accept\n2. Decline\n";
		    		cin>>number;
		    		if(number==1)//accept buy once using mpesa 100mb@200
		    		{
		    			cout<<"Purchase successful";
					}
					else if(number==2)//decline buy once using mpesa 100mb@200
					{
						cout<<"Thankyou for choosing Safaricom";
					}
					else
					{
						cout<<"Error";
					}
		        }
		        else
		        {
		        	cout<<"Error";
				}
			}
			else if(number==2)/*Autorenewal 100mb@200*/ 
			{
		    	cout<<"Using either:\n1. Airtime\n2. M-Pesa\n";
		    	cin>>number;
		    	if(number==1)//autorenewal using airtime 100mb@200
		    	{
		    		cout<<"1. Accept\n2. Decline\n";
		    		cin>>number;
		    		if(number==1)//accept autorenewal airtime 100mb@200
		    		{
		    			cout<<"Purchase successful";
					}
					else if(number==2)//decline autorenewal airtime 100mb@200
					{
						cout<<"Thankyou for choosing Safaricom";
					}
					else
					{
						cout<<"Error";
					}
		        }
		        else if(number==2)//autorenewal mpesa 100mb@200
		        {
		    		cout<<"1. Accept\n2. Decline\n";
		    		cin>>number;
		    		if(number==1)//accept autorenewal mpesa 100mb@200
		    		{
		    			cout<<"Purchase successful";
					}
					else if(number==2)//decline autorenewal mpesa 100mb@200
					{
						cout<<"Thankyou for choosing Safaricom";
					}
					else
					{
						cout<<"Error";
					}
		        }
			}
			else 
			{
				cout<<"Error";
			}
		}
		else if(number==3)
		{
			cout<<"1. Buy once\n2. Autorenewal\n";
		    cin>>number;
		    if(number==1)//buy once 250mb @ 500
		    {
		    	cout<<"Using either:\n1. Airtime\n2. M-Pesa\n";
		    	cin>>number;
		    	if(number==1)//buy once 250mb@500
		    	{
		    		cout<<"1. Accept\n2. Decline\n";
		    		cin>>number;
		    		if(number==1)//accept buy once using airtime 250mb@500
		    		{
		    			cout<<"Purchase successful";
					}
					else if(number==2)//decline buy once using airtime 250mb@500
					{
						cout<<"Thankyou for choosing Safaricom";
					}
					else
					{
						cout<<"Error";
					}
		        }
		        else if(number==2)//using mpesa 250mb@500
		        {
		    		cout<<"1. Accept\n2. Decline\n";
		    		cin>>number;
		    		if(number==1)//accept buy once using mpesa 250mb@500
		    		{
		    			cout<<"Purchase successful";
					}
					else if(number==2)//decline buy once using mpesa 250mb@500
					{
						cout<<"Thankyou for choosing Safaricom";
					}
					else
					{
						cout<<"Error";
					}
		        }
		        else
		        {
		        	cout<<"Error";
				}
			}
			else if(number==2)/*Autorenewal 250mb@500*/ 
			{
		    	cout<<"Using either:\n1. Airtime\n2. M-Pesa\n";
		    	cin>>number;
		    	if(number==1)//autorenewal using airtime 250mb@500
		    	{
		    		cout<<"1. Accept\n2. Decline\n";
		    		cin>>number;
		    		if(number==1)//accept autorenewal airtime 250mb@500
		    		{
		    			cout<<"Purchase successful";
					}
					else if(number==2)//decline autorenewal airtime 250mb@500
					{
						cout<<"Thankyou for choosing Safaricom";
					}
					else
					{
						cout<<"Error";
					}
		        }
		        else if(number==2)//autorenewal mpesa 250mb@500
		        {
		    		cout<<"1. Accept\n2. Decline\n";
		    		cin>>number;
		    		if(number==1)//accept autorenewal mpesa 250mb@500
		    		{
		    			cout<<"Purchase successful";
					}
					else if(number==2)//decline autorenewal mpesa 250mb@500
					{
						cout<<"Thankyou for choosing Safaricom";
					}
					else
					{
						cout<<"Error";
					}
		        }
			}
			else 
			{
				cout<<"Error";
			}
		}
		else
		{
			cout<<"Error";
		}
	}
	else
	{
		cout<<"Error";
	}
	return 0;
}
