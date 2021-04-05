#include <iostream>
#include <string>

using namespace std;
int main(int argc, char const *argv[])
{
	int choice;
	string value;
	cout<<"Welcome to Encrypte/Decrypter\n";
	do
	{
		cout<<"1)Encrypt 2)Decrypt 3)Exit\n";
		cin>>choice;
		switch(choice)
		{
			case 1:{	
				cout<<"Enter your message\n";
				cin.ignore();
					getline(cin,value);
					for(int i=0;i<value.length();i++)
					{
						value.at(i)+=12;
					}
					cout<<"Encrypted message is "<<value<<endl;
					break;
					}
			case 2:{
					cout<<"Enter your encrypted message\n";
					cin.ignore();
					getline(cin,value);
					for(int i=0;i<value.length();i++)
					{
						value.at(i)-=12;
					}
					cout<<"decrypted message is "<<value<<endl;
					break;
					}

		}
	}while(choice!=3);

	return 0;
}