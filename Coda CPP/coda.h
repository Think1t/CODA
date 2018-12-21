#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

//implementazione della struttura di dati astratta di tipo CODA con l'uso di un array di max 10 elementi
const int MAX = 10;
int Coda[MAX];
int Fine;


int I;


//inizializzazione coda
void SvuotaCoda(){
	Fine = -1;
	cout << "Coda vuota" << endl;
} // SvuotaCoda

//Estrazione di un elemento dalla coda
void Pop(){
	if(Fine == -1){
		cout << "Coda vuota!" << endl;
		cout << "Operazione sulla coda abortita" << endl;
	}
	else{
		cout << "Elemento estratto: " << Coda[0] << endl;
		//La coda avanza di un posto
		for (I = 1; I<=Fine; I++){
			Coda[I-1] = Coda[I];
			Fine --;	//Fine della coda spostata a sinistra
		}
	}
} // Pop

//Inserimento di un elemento nella coda 
void Push(){
	int dato;	//elemento da inserire
	if (Fine == MAX-1){
		cout << "Coda piena!" << endl;
		cout << "Operazione sulla coda abortita" << endl;
	}
	else{
		cout << "Dato da inserire: ";
		cin >> dato;
		Fine++; 	//sposta a destra la fine della coda
		Coda[Fine] = dato;
	}
} // Push

//Visualizzazione della coda
void StampaCoda(){
	cout << "Inizio Coda - ";
	for (I=0; I<=Fine; I++){
		cout << setw(5) << Coda[I];
		cout << "	- Fine" << endl;
	}
} // ScriviCoda

//stampa lista su file
void StampaSuFile(){
	if (Fine == -1){
		cout << "Coda vuota" << endl;
	} 
	else{
		ofstream coda;
		coda.open("coda_cepparulo_giacomo.txt");
		if ( ! coda){
			cout << "Errore durante apertura file" << endl;
		}
		else{
			for (I=0; I<=Fine; I++){
				cout << setw(5) << Coda[I];
				coda << setw(5) << Coda[I]
			}
			cout << "	- Fine" << endl;
			coda << "	- Fine" << endl;
			cout << "La coda e' stata salvata nel file coda_cepparulo_giacomo.txt" << endl;
		}
		coda.close();
	}
}//StampaSuFile

//menu scelta operazioni da eseguire sulla coda
void PresentaMenu(){
	cout << endl;
	cout << "1." << "Svuota Coda" << endl;
	cout << "2." << "Estrai un dato alla coda" << endl;
	cout << "3." << "Aggiungi un dato alla coda" << endl;
	cout << "4." << "Stampa coda" << endl;
	cout << "5." << "Stampa su File (coda_cepparulo_giacomo.txt)" << endl;
	cout << "6." << "Fine" << endl;
} // PresentaMenu


/*
	
	prototipi delle funzioni
	void SvuotaCoda();
	void Pop();
	void Push();
	void ScriviCoda();
	void PresentaMenu();
*/



