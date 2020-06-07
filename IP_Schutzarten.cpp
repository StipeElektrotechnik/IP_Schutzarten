//
//  main.cpp
//  IP_Schutzarten
//
//  Created by Stipe  Dujmovic on 07.06.20.
//  Copyright © 2020 Stipe Dujmovic. All rights reserved.
//
//the following are UBUNTU/LINUX, and MacOS ONLY terminal color codes.
//the following are UBUNTU/LINUX, and MacOS ONLY terminal color codes.
#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */
#include <iostream>
using namespace std;
int main (){
    
    int Fremdkörper_Schtz = 0;
    int Wasserschutz = 0;
    int Korrektur_Fremdkörper_Schtz;
    int Korrektur_Wasserschutz;
    do {
        cout << "\n";
    cout << "Fremdkörper Schutz [0-6]"<< endl;
    cout << "Wasserschutz [0-9]" << endl;
    cout << "bitte geben Sie eine zahl für Fremdkörper Schutz und für Wasserschutz an."<< endl;
    
    cout << "Fremdkörperschutz :  "<< endl;
    
    
    do {cin >> Fremdkörper_Schtz ;
        if (Fremdkörper_Schtz >= 6)
        {cerr << RED << "BERICH UNGÜLTIG NUR 0-6 " << RESET<< endl;}}
    while (Fremdkörper_Schtz >= 6);
    
    
    cout << "Wasserschutz : "<< endl;
    
    
    do {cin >> Wasserschutz ;
           if (Wasserschutz >= 6)
           {cerr << RED << "BERICH UNGÜLTIG NUR 0-9 " << RESET<< endl;}}
       while (Wasserschutz >= 9);
    
    
    switch (Fremdkörper_Schtz) {
        case 0:
            cout <<"Fremdkörper Schutz " <<  Fremdkörper_Schtz<< "=" << (" kein_Schutz") << endl;
            break;
            
        case 1:
            cout <<"Fremdkörper Schutz " <<  Fremdkörper_Schtz<< "=" <<(" Schutz gegen feste Fremdkörprt <50mm Durchmesser")<< endl ;
            break;
            
        case 2:
            cout <<"Fremdkörper Schutz " <<  Fremdkörper_Schtz<< "=" <<(" Schutz gegen feste Fremdkörprt <12,5mm Durchmesser")<< endl ;
            break;
            
        case 3:
            cout <<"Fremdkörper Schutz " <<  Fremdkörper_Schtz<< "=" <<(" Schutz gegen feste Fremdkörprt <12,5mm Durchmesser") << endl;
            break;
            
        case 4:
            cout <<"Fremdkörper Schutz " <<  Fremdkörper_Schtz<< "=" <<(" Schutz gegen feste Fremdkörprt <1mm Durchmesser") << endl;
            break;
            
        case 5:
            cout <<"Fremdkörper Schutz " <<  Fremdkörper_Schtz<< "=" <<(" Staubgeschutzt") << endl;
            break;
            
        case 6:
            cout <<"Fremdkörper Schutz " <<  Fremdkörper_Schtz<< "=" <<(" Schaubdicht")<< endl ;
            break;
            
        default: cout << "Fremdkörper Schutz " <<  Fremdkörper_Schtz<< "=" << (" KEINE GÜLTIGE ZAHL EINGEGEBEN")<< endl;
            break;
    }
    
    switch (Wasserschutz) {
        case 0:
            cout <<"Wasserschutz " <<  Wasserschutz<< "=" <<(" kein_Schutz")<< endl;
            break;
            
        case 1:
        cout << "Wasserschutz " <<  Wasserschutz<< "=" <<(" Schutz gegen senkrecht tropfendens Wasser")<< endl;
            break;
            
        case 2:
        cout << "Wasserschutz " <<  Wasserschutz<< "=" <<(" Schutz gegen schräg (15°) tropfendens Wasser")<< endl;
            break;
            
        case 3:
        cout << "Wasserschutz " <<  Wasserschutz<< "=" <<(" Schutz gegen schräg (60°) tropfendens Wasser")<< endl;
            break;
        
        case 4:
        cout << "Wasserschutz " <<  Wasserschutz<< "=" <<(" Schutz gegen Spritzwasser aus allen Richtungen")<< endl;
            break;
            
        case 5:
        cout << "Wasserschutz " <<  Wasserschutz<< "=" <<(" Schutz gegen Strahlwasser")<< endl;
            break;
                
        case 6:
        cout << "Wasserschutz " <<  Wasserschutz<< "=" <<(" Schutz gegen starkes Strahlwasser")<< endl;
            break;
            
        case 7:
        cout <<"Wasserschutz " <<  Wasserschutz<< "=" << (" Schutz gegen zeitweiligs Untertauchen in Wasser")<< endl;
            break;
            
        case 8:
        cout << "Wasserschutz " <<  Wasserschutz<< "=" <<(" Schutz gegen dauerndes Untertauchen  in Wasser")<< endl;
            break;
            
        case 9:
        cout << "Wasserschutz " <<  Wasserschutz<< "=" << (" Wasser das bei hohem Druck und hohen Temperaturen aus allen Richtungen gegen das Gehäuse gerichtet ist , darf kein eschädlichen Wirkungen haben")<< endl;
            break;
            
        default:
            cout << "Wasserschutz " <<  Wasserschutz<< "=" <<(" KEINE GÜLTIGE ZAHL EINGEGEBEN")<< endl;
            break;
    }
   
     
    }
    while (Fremdkörper_Schtz || Wasserschutz == 999);
}


//MadeByBila
