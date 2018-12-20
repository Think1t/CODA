#include "coda.h"


//main
int main(){
	
	cout << "Una coda e' una struttura nella quale, in senso figurato, i dati entrano da una parte ed escono dalla parte opposta" << endl;
	cout << "Un array di dimensioni fissate fornisce lo spazio di memoria dove vengono messi in sequenza gli elementi della coda." << endl;
	cout << endl;
	cout << "Due variabili intere mantengono il valore della posizione del primo elemento in coda e del posto dove si puo' inserire" << endl;
	cout << "un successivo elemento. L' estrazione dall'inizio della coda prevede che si estragga l'elemento che funge da Testa, " << endl;
	cout << "dopo l'estrazione tale indice viene incrementato di una unita'. Se tale aumento porta oltre il limite dell'array esso" << endl;
	cout << "viene riportato a 0. Cio' si realizza usando l'operatore aritmetico modulo lunghezza dell'array -1. L'inserimento " << endl;
	cout << "avviene inserendo un elemento nel primo indice libero in fondo all'array e aggiornando (con analogo conto modulare) l'indice della fine della coda." << endl;
	system("pause");
	system("CLS");
	
	int scelta;
	SvuotaCoda();
	do{
		do{
			PresentaMenu();
			cout << "Inserisci la tua scelta: ";
			cin >> scelta;
		}while(scelta<1 || scelta>6);
		switch(scelta){
			case 1: 
				SvuotaCoda();
				system("pause");
				system("CLS");
			break;
			
			case 2:
				Pop();
				system("pause");
				system("CLS");
			break;
			
			case 3:
				Push();
				system("pause");
				system("CLS");
			break;
			
			case 4:
				StampaCoda();
				system("pause");
				system("CLS");
			break;
			
			case 5:
				StampaSuFile();
				system("pause");
				system("CLS");
			break;
		}
	}while(scelta != 6);
	
	return 0;
}

