#include <iostream>
#include "postacie.h"
#include <conio.h>
#include <iomanip>
#include <ctime>
#include <fstream>

void postacie::tworzenie_klasy_postaci()
{
		fstream opis_postaci;
		
        int click;
		string arrow,setar[3];
    	system ("cls");
		id_klasy=0;
		arrow=4;
        
		start:
		do 
		{
			system("cls");
			cout<<right<< "KLASY POSTACI";
			cout.width(30);
    		cout<<right<<"STATYSTYKI";
    		cout.width(30);
    		cout<<right<<"OPIS POSTACI"<<endl<<endl;

			setar[0] = " ";
			setar[1] = " ";
			setar[2] = " ";
			switch(id_klasy)
            {
			    case 0: setar[0] = arrow;break;
			    case 1: setar[1] = arrow;break;
			    case 2: setar[2] = arrow;
		    }
				if(id_klasy==0)
			{
				profesja="Wojownik";
				sila=6;
				zrecznosc=2;
				zywotnosc=6;
				energia=2;
				obrona=0;
				zycie_max=zywotnosc*15;
				mana_max=energia*2;

    		
			}
			else if(id_klasy==1)
			{
				profesja="Mag";
				sila=1;
				zrecznosc=1;
				zywotnosc=2;
				energia=8;
				obrona=0;
				zycie_max=zywotnosc*6;
				mana_max=energia*10;
			}
			else
			{
				profesja="Lucznik";
				sila=3;
				zrecznosc=5;
				zywotnosc=2;
				energia=0;
				obrona=0;
				zycie_max=zywotnosc*8;
				mana_max=energia*4;

			}
				cout << setar[0] << " Wojownik";
				cout.width(23);
				cout<<" ";
				cout<<right<<"Sila ";
				cout.width(4);
				cout<<left<<sila;
				cout.width(18);
				cout<<" ";
    			cout<<right<<" Tekst opisuuu....."<<endl;
				cout << setar[1] << " Mag";
				cout.width(28);
				cout<<" ";
				cout<<left<<"Zrecznosc ";
				cout.width(4);
				cout<<left<<zrecznosc;
    			cout.width(14);
    			cout<<" ";
    			cout<<left<<"....dalszy ciag...."<<endl;
			    cout << setar[2] << " Lucznik";
				cout.width(24);
				cout<<" ";
				cout<<left<<"Zywotnosc ";
				cout.width(4);
				cout<<left<<zywotnosc;
    			cout.width(14);
    			cout<<" ";
    			cout<<left<<"....dalszy ciag...."<<endl;
				cout.width(33);
				cout<<" ";
				cout<<right<<"Energia ";
				cout.width(4);
				cout<<left<<energia;
    			cout.width(16);
    			cout<<" ";
    			cout<<left<<"....dalszy ciag...."<<endl;
				cout.width(33);
				cout<<" ";
				cout<<right<<"Obrona ";
				cout.width(4);
				cout<<left<<obrona;
    			cout.width(17);
    			cout<<" ";
    			cout<<left<<"....dalszy ciag...."<<endl;
				cout.width(33);
				cout<<" ";
				cout<<right<<"Zycie ";
				cout.width(4);
				cout<<left<<zycie_max;
    			cout.width(18);
    			cout<<" ";
    			cout<<left<<"....dalszy ciag...."<<endl;
				cout.width(33);
				cout<<" ";
				cout<<right<<"Mana ";
				cout.width(4);
				cout<<left<<mana_max;
    			cout.width(19);
    			cout<<" ";
    			cout<<right<<"....koniec opisu"<<endl;


		

		do
		{
			click = getch();
		}
			while(click!=13 && click!=72 && click!=80);
			switch(click)
			{
				case 72:    // key up
					if(id_klasy>0)id_klasy--; else id_klasy=2;
					break;
				case 80:    // key down
					if(id_klasy<2)id_klasy++; else id_klasy=0;
					break;
			}
		}while(click!=13);
		system("cls");
		cout<<"Jak sie nazywasz towarzyszu ";cin>>imie;
		system("cls");


			
}

void postacie::zapis_postaci()
{
	
}