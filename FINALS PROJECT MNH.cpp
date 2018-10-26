#include <iostream>
#include <string>
#include <stdlib.h>
 
 
using namespace std;
 
int main()
{
	for (;;)
	{
 
		/*these are the variables for use later*/
		int Buhay = 100, Damage = 100;
 
 
		//intro 
 
		
		cout << " Magandang buhay, ano ang iyong pangalan? " << endl;
		string YourName;
		cin >> YourName;
 
 
		cout << " Ikaw ba talaga yan: " << endl;
		cout << YourName << "? " << " Oo o Hindi" << endl;
		string NameTrue;
		cin >> NameTrue;
 
		if (NameTrue == "Hindi")
			continue;
 
		cout << " Kung gayon " << YourName << " Simulan na natin ang paglalakbay! " << endl;
 
		cin.get();
		cin.get();
 
		cout << " Ikaw ay naligaw, " << YourName << " at ikaw ay isang Pilipino na nakatira sa bansang Pilipinas" << endl;
 
                cin.get();
		
 
 
		cout << "Isang araw, sa iyong paggising ay napunta ka parte ng Pilipinas na hindi mo alam" << endl;
 
		cout << "Upang ikaw ay makabalik, kailangan mo masagot ang mga tanong na ihahain sayo" << endl;
 
 
		cout << "Isang buhay lamang ang mayroon ka at sa isang mali, hindi ka na makakabalik pa sa iyong pinanggalingan." << endl;
		cout << " Sumaiyo ang tadhana " << YourName << endl;
 
		cout << "Ngayon, " << YourName << " Narito ang mga katanungan: " << endl;
	    
		//questions and functions
		
		string Answer = "Espanya";
		string Response;
		cout << "1. Anong bansa ang sumakop sa Pilipinas sa loob ng 300 na taon " << endl;
		cin >> Response;
		if (Response == "Espanya" ){
		
			cout << " WAO! WAO! WAO! GALENG! " << endl;}
			
		
		else
		{
			cout << " TAPH! TAPH! TAPH! PAANO MO NASABI?!" << endl;
			cout << " Buhay(100) " << " - " << " Damage(100) " << " = " << Buhay - Damage << endl;
			string Die = "oo";
			string DieAnswer;
			cout << " Nais mo pa bang umulit? " << endl;
			cin >> DieAnswer;
			if (DieAnswer == Die){
			
				continue;}
		
			else
			{
				cout << " Ikaw ay hindi na makakauwi. WALA NA, FINISH NA." << endl;
				break;
			}
			
			
		}
		
		
 
		
		string Answer1 = "Tarsier";
		string Response1;
		cout << "2. Tanyag na hayop na matatagpuan sa Bohol " << endl;
		cin >> Response1;
		if (Response1 == Answer1){
		
			cout << " WAO! WAO! WAO! GALENG! " << endl;}
		
		else
		{
			cout << "TAPH! TAPH! TAPH! PAANO MO NASABI?!" << endl;
			cout << " Buhay(100) " << " - " << " Damage(100) " << " = " << Buhay - Damage << endl;
			string Die = "oo";
			string DieAnswer;
			cout << "Nais mo pa bang umulit? " << endl;
			cin >> DieAnswer;
			if (DieAnswer == Die){
			
				continue;
}
			else
			{
				cout << "Ikaw ay hindi na makakauwi. WALA NA, FINISH NA." << endl;
				break;
			}
 
 
		}
 
		
		
		string Answer2 = "Lapu-Lapu";
		string Response2;
		cout << "3. Kauna-unahang bayani na nanguna sa pakikipaglaban kay Magellan " << endl;
		cin >> Response2;
		if (Response2 == Answer2){
		
			cout << "WAO! WAO! WAO! GALENG! " << endl;
	}
		else
		{
			cout << "TAPH! TAPH! TAPH! PAANO MO NASABI?!" << endl;
			cout << " Buhay(100) " << " - " << " Damage(100) " << " = " << Buhay - Damage << endl;
			string Die = "oo";
			string DieAnswer;
			cout << " Nais mo pa bang umulit? " << endl;
			cin >> DieAnswer;
			if (DieAnswer == Die){
			
				continue;
}
			else
			{
				cout << "Ikaw ay hindi na makakauwi. WALA NA, FINISH NA." << endl;
				break;
			}
 
		}	    
		      
      string Answer3 = "Bagumbayan";
			string Response3;
			cout << "4. Ano ang orihinal na pangalan ng Luneta Park " << endl;
			cin >> Response3;
			if (Response3 == Answer3){
			
				cout << "WAO! WAO! WAO! GALENG! " << endl;
		}
			
			else
			{
				cout << "TAPH! TAPH! TAPH! PAANO MO NASABI?! " << endl;
				cout << " Buhay(100) " << " - " << " Damage(100) " << " = " << Buhay - Damage << endl;
				string Die = "oo";
				string DieAnswer;
				cout << " Nais mo pa bang umulit? " << endl;
				cin >> DieAnswer;
				if (DieAnswer == Die){
				
					continue;
}
				else
				{
					cout << " Ikaw ay hindi na makakauwi. WALA NA, FINISH NA." << endl;
					break;
				}
            
    } 
            
      string Answer4 = "6";
			string Response4;
			cout << "5. Gaano katagal ang termino ng isang pangulo sa Pilipinas " << endl;
			cin >> Response4;
			if (Response4 == Answer4)
			{
			
				cout << "WAO! WAO! WAO! GALENG! " << endl;
				cout << "Maligayang bati! " << YourName << " ,ikaw ay nagtagumpay! Nakauwi ka na sa iyong ponanggalingan" << endl;
   				break;
       
          
			}
			
			else
			{
				cout << "TAPH! TAPH! TAPH! PAANO MO NASABI?! " << endl;
				cout << " Buhay(100) " << " - " << " Damage(100) " << " = " << Buhay - Damage << endl;
				string Die = "oo";
				string DieAnswer;
				cout << " Nais mo pa bang umulit? " << endl;
				cin >> DieAnswer;
				if (DieAnswer == Die){
				
					 continue;
        }
            
 			else
				{
					cout << " Ikaw ay hindi na makakauwi. WALA NA, FINISH NA." << endl;
				}
	
					
                   
			}}
			return 0;
			}