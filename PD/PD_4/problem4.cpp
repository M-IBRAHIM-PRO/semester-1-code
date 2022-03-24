#include<iostream>
using namespace std;
main(){
/*
ZodiacSign         Dates of Birth           Symbol
Aries                   The Ram
Taurus                     The Bull
Gemini                      The Twins
Cancer            The Crab
Leo                    The Lion
Virgo              The Virgin
Libra             The Scales
Scorpio             The Scorpion
Sagittarius        The Archer
Capricorn           The Goat
Aquarius           The Water Bearer
Pisces                The Fishes
*/
  int day;
  string month, sign;
  cout<<"Enter the date : ";
  cin>>day;
  cout<<"Enter the month : ";
  cin>>month;

    if(month=="march" && day>=21){// Match 21 - April 19
        sign="Aries ";
    }
    else if(month=="april" && day<=19){// Match 21 - April 19
        sign="Aries ";
    }

    else if(month=="april" && day>=20){//April 20 - May 20
        sign="Taurus";
    }
    else if(month=="may" && day<=20){
        sign="Taurus";
    }

    else if(month=="may" && day>=21){//May 21 - June 20
        sign="Gemini";
    }
    else if(month=="june" && day<=20){
        sign="Gemini";
    }

    else if(month=="june" && day>=21){//June 21 - July 22
        sign="Cancer";
    }
    else if(month=="july" && day<=22){//June 21 - July 22
        sign="Cancer";
    }

    else if(month=="july" && day>=23){// July 23 - August 22 
        sign="Leo ";
    }
    else if(month=="august" && day<=22){// July 23 - August 22 
        sign="Leo ";
    }

    else if(month=="august" && day>=23){// August 23 - September 22
        sign="Virgo";
    }
    else if(month=="september" && day<=22){// August 23 - September 22
        sign="Virgo";
    }

    else if(month=="september" && day>=23){//September 23 - October 22 
        sign="Libra";
    }
    else if(month=="october" && day<=22){//September 23 - October 22 
        sign="Libra";
    }

    else if(month=="october" && day>=23){//October 23 - November 21
        sign="Scorpio";
    }
    else if(month=="november" && day<=22){//October 23 - November 21
        sign="Scorpio";
    }

    else if(month=="november" && day>=22){//November 22 - December 21
        sign="Sagittarius";
    }
    else if(month=="december" && day<=21){//November 22 - December 21
        sign="Sagittarius";
    }

    else if(month=="december" && day>=22){//December 22 - January 19
        sign="Capricorn";
    }
    else if(month=="january" && day<=21){//December 22 - January 19
        sign="Capricorn";
    }
    
    else if(month=="january" && day>=20){//January 20 - February 18 
        sign="Aquarius";
    }
    else if(month=="february" && day<=18){//
        sign="Aquarius";
    }

    else if(month=="february" && day>=19){//February 19 - Match 20 
        sign="Pisces";
    }
    else if(month=="march" && day<=20){//
        sign="Pisces";
    }
 cout<<"your sign : "<<sign;
}