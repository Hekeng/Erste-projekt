// 04_04_01

// // Initialisierung
// dublette = 0

// // Äußerer Zyklus: Sammle 5 Wörter (i läuft von 0 bis 4)
// FÜR (i = 0; i < 5; i++)
//     Eingabe: wort[i] // Lese das i-te Wort

//     // Innerer Zyklus: Suche Dublette unter den vorherigen Wörtern
//     // (j läuft von 0 bis i-1)
//     FÜR (j = 0; j < i UND dublette == 0; j++)
//         WENN (wort[j] == wort[i])
//             DANN (ja)
//                 dublette = 1
//                 break // Springt aus dem inneren FÜR-Zyklus
//             SONST (nein)
//                 (tue nichts)

// // Nach dem Sammeln aller 5 Wörter: Ausgabe
// WENN (dublette == 1)
//     DANN (ja)
//         Ausgabe: "Mensch, Sie können nicht einmal 5 unterschiedliche Wörter eingeben!?"
//     SONST (nein)
//         Ausgabe: "Alles O.K."

// 🇷🇺 Перевод Задания на Русский
// Erläuterung (Пояснение)
// В задании выше требуется запросить (и сохранить) 5 слов. 
// Также необходимо исследовать, есть ли среди них хотя бы один дубликат. 
// Соответственно, если дубликат уже был найден, нет необходимости искать другие дубликаты.


#include <stdio.h>
#include <windows.h> 
#pragma execution_character_set("utf-8")
#include <string.h> 

void eingabe_strings(int x, char *ziel_adresse);

int main() {
    system("chcp 65001"); 
    system("cls"); 

    char worten [5][21];
    int dublette = 0; 

    for (int i = 0; i < 5; i++) {

        eingabe_strings(i + 1, worten[i]);

        if (dublette == 0) { 

            for (int j = 0; j < i; j++) {

                if (strcmp(worten[i], worten[j]) == 0) {
                    dublette = 1;
                    break; 
                }
            }
        }
        printf("Das eingegebene Wort: %s \n", worten[i]); 
    }

    printf("\n--- Ergebnis der Dublettenprüfung ---\n");
    if (dublette == 1) {
        printf("Mensch, Sie können nicht einmal 5 unterschiedliche Wörter eingeben!?\n");
    } else {
        printf("Alles O.K.\n");
    }

    return 0;
} 


void eingabe_strings(int x, char *ziel_adresse) {
    printf("Schreiben Sie bitte Wort #%d : ", x);
    scanf(" %s", ziel_adresse); 
    int c;
    while ((c = getchar()) != '\n' && c != EOF); // Улучшенная очистка буфера
}
