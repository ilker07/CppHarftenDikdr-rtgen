#ifndef ODEV_H
#define ODEV_H


#include <iostream> 
using namespace std;



class odev
{
	public:
		
		int i,j;
 	    bool donenSonuc;
 	    string yatay;
 	    string dikey;
		int str_to_int(const string &);
        bool sayiMi(string);   
        void sekilA(int*,int*);
	
};

#endif

