// 04_05_04

// // Initialisierung
// GANZZAHL zahl[11] // Массив для 11 чисел (от zahl[0] до zahl[10])
// GANZZAHL hashwert

// // 1. Eingabe von 11 Ziffern mit Gültigkeitsprüfung (0-9)
// FÜR (i = 0; i < 11; i++)
//     Wiederhole_Eingabe_bis_Korrekt: zahl[i] (muss 0-9 sein)

// // 2. Berechnung des Hashwerts
// // Hashwert = (z0 - z1 + z2 - z3 + ... + z8 - z9) MOD 10

// // Starte mit zahl[0]
// hashwert = zahl[0]

// // Führe die Subtraktion/Addition für die restlichen 9 Zahlen durch
// // i läuft von 1 bis 9 (entspricht zahl[1] bis zahl[9])
// FÜR (i = 1; i <= 9; i++)

//     // Wenn i ungerade ist (1, 3, 5, 7, 9) -> Subtrahiere
//     WENN (i ist ungerade)
//         hashwert = hashwert - zahl[i]
//     // Wenn i gerade ist (2, 4, 6, 8) -> Addiere
//     SONST
//         hashwert = hashwert + zahl[i]
//     ENDE WENN

// // 3. Wende Modulo 10 an
// hashwert = hashwert MOD 10

// // 4. Prüfe, ob der Hashwert negativ ist (kann in C passieren)
// // FÜHRE (falls hashwert < 0) hashwert = hashwert + 10 AUS

// // 5. Vergleich und Ausgabe (mit zahl[10] als Prüfziffer)
// WENN (hashwert GLEICH zahl[10])
//     Ausgabe: "Alles O.K.!"
// SONST
//     Ausgabe: "leider unzulässig!"
// ENDE WENN

#include <stdio.h>
#include <windows.h> 
#pragma execution_character_set("utf-8")

#define NUM_DIGITS 11 
#define CHECK_DIGIT_INDEX 10 

// Прототипы функций
int lese_ganzzahl_einstellig(void);
int berechne_hashwert(int arr[], int anzahl_werte);

int main() {
    system("chcp 65001"); 
    system("cls"); 

    int zahl[NUM_DIGITS]; 
    int berechneter_hashwert;
    int pruefziffer; // 11-я цифра

    printf("--- Programm Aufgabe_04_05_04: Prüfverfahren ---\n");

    // 1. Ввод 11 цифр (0-9)
    for (int i = 0; i < NUM_DIGITS; i++) {
        printf("Bitte geben Sie die %2d. Ziffer (0-9) ein: ", i + 1);
        zahl[i] = lese_ganzzahl_einstellig();
    }

    berechneter_hashwert = berechne_hashwert(zahl, 10);

    pruefziffer = zahl[CHECK_DIGIT_INDEX];

    printf("\n------------------------------------------------------\n");
    printf("Berechneter Hashwert (Modulo 10): %d\n", berechneter_hashwert);
    printf("Eingegebene Prüfziffer (11. Ziffer): %d\n", pruefziffer);
    printf("------------------------------------------------------\n");

    if (berechneter_hashwert == pruefziffer) {
        printf(">>> Alles O.K.! <<< \n");
    } else {
        printf(">>> leider unzulässig! <<< \n");
    }

    return 0;
} 


int berechne_hashwert(int arr[], int anzahl_werte) {
    int hash = arr[0]; 
    int oflag = -1; 

    for (int i = 1; i < anzahl_werte; i++) {
        
        if (oflag == -1) {
            hash -= arr[i];
            oflag = 1; 
        } else {
            hash += arr[i];
            oflag = -1; 
        }
    }

    int final_hash = hash % 10;
    
    if (final_hash < 0) {
        final_hash += 10;
    }
    
    return final_hash;
}

int lese_ganzzahl_einstellig(void) {
    int zahl;
    int status;
    int fehler;

    do {
        fehler = 0;
        status = scanf("%d", &zahl);

        int c;
        while ((c = getchar()) != '\n' && c != EOF); 
        
        if (status != 1) {
            printf("Fehler: Bitte geben Sie NUR eine ganze Zahl ein.\n");
            fehler = 1;
        } 

        if (fehler == 0 && (zahl < 0 || zahl > 9)) {
            printf("Fehler: Die Zahl muss einstellig sein (0 bis 9).\n");
            fehler = 1;
        }

    } while (fehler == 1); 

    return zahl;
}