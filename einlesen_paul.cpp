#include <iostream>
#include <fstream>

using namespace std;



int main() {
    string dateipfad = "C:/Users/Flix/Desktop/Paul/Rohdaten/Date_Messdaten_TVL_96.dat";
    ifstream input_file(dateipfad); //Objekt namens input_file wird erstellt

    if (!input_file.is_open()) {
        cout << "Konnte die Datei nicht öffnen." << endl;
        return 1;
    }

    const int zeile = 947; //Zeilen müssen noch variabel ausgelesen werden
    const int spalte = 2; //Reihe //wird die variable spalte erhöht, so kommt eine Fehlermeldung
    long data_1[zeile][spalte];
    /* 
    Aufbau: data_1[zeile][spalte]
        00     01     02     0zeile
        10     11     12     1zeile
        20     21     22     2zeile
        reihe0 reihe1 reihe2 reihezeile


    int format [2];
    for (int i = 0; i < 2; i++) {
        if (!(input_file >> data_1[i][j])) { //wird hier im Schleifenkopf nur geprüft, ob das Einlesen möglich ist? Oder wird auch die Zahl gleich mit eingelesen
            cout << "unbekannter Fehler" << endl;
            return 1;
        }
    }
    */

    for (int i = 0; i < zeile; i++) {
        for (int j = 0; j < spalte; j++) {
            if (!(input_file >> data_1[i][j])) { //wird hier im Schleifenkopf nur geprüft, ob das Einlesen möglich ist? Oder wird auch die Zahl gleich mit eingelesen
                cout << "unbekannter Fehler" << endl;
                return 1;
            }
        }
    }
    input_file.close();

    // testweise Ausgabe der ersten beiden Zeilen 0 und 1
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < zeile; j++) {
                cout << "Feld [" <<i<<"] ["<<j<<"] = "<< data_1 [i] [j]<<endl;
        }
    }
    cout << data_1 [0] [0];
    return 0;




}
