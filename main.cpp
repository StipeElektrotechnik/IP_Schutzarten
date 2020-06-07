//
//  main.cpp
//  IP_Schutzarten
//
//  Created by Stipe  Dujmovic on 07.06.20.
//  Copyright © 2020 Stipe Dujmovic. All rights reserved.
//

#include <iostream>
using namespace std;
int main (){
    
    int Fremdkörper_Schtz = 0;
    int Wasserschutz = 0;
    
    cout << "Fremdkörper Schutz [0-6]"<< endl;
    cout << "Wasserschutz [0-9]" << endl;
    cout << "bitte geben Sie eine zahl für Fremdkörper Schutz und für Wasserschutz an."<< endl;
    cout << "Fremdkörperschutz :  "<< endl;
    cin >> Fremdkörper_Schtz ;
    cout << "Wasserschutz : "<< endl;
    cin >> Wasserschutz;
    
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


//MadeByBila
