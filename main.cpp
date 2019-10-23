#include "odev.h"


 int main(int argc, char** argv )
 {
 	
 	
 	odev nesne;
 	
 	
 	
 	
 	
  	while(1)
    {
 	cout << "Yatay boyutu  giriniz:";  
 	cin>>nesne.yatay;
 	nesne.donenSonuc=nesne.sayiMi(nesne.yatay);
 	if(nesne.donenSonuc)
 	{
    while(1) 
	{
			 		
 	cout << "Dikey boyutu  giriniz:";  
 	cin>>nesne.dikey;
 	nesne.donenSonuc=nesne.sayiMi(nesne.dikey);
 	if(nesne.donenSonuc)
 		break;
	} 
	 break;
	}
    cout<<"Lutfen sadece 0 harici pozitif tam sayi giriniz..." <<endl;
    
    
    }
    
    
    nesne.i=nesne.str_to_int(nesne.yatay);
    nesne.j=nesne.str_to_int(nesne.dikey);
    
    nesne.sekilA(&nesne.i,&nesne.j);
    
 	
 	return 0;
 	
 	
 	
 }
