
#include "odev.h"
#include<sstream>


int odev::str_to_int(const string &deger) {
   stringstream ss(deger);
   int sayi;
   ss >> sayi;
   return sayi;
}
 


bool odev::sayiMi(string girilenDeger)   

{
	int uzunluk,i;
	uzunluk =girilenDeger.length();
	if(uzunluk==1 && girilenDeger[i]=='0')
	return false;
	else{
	
	 for(i = 0;i<uzunluk;i++)
   {
    if(!isdigit(girilenDeger[i]) )
    {
      return false;
      
    }
    
    
  }
  return true;
}
} 


void odev::sekilA(int*yatayDeger,int*dikeyDeger)
 {
 
 	 for(;*dikeyDeger>0;*dikeyDeger=*dikeyDeger-1)
    {
    		string ilker(*yatayDeger, 'A');
            cout << ilker << endl;
	    
	
	}
 }
