#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls")
#pragma execution_character_set("utf-8")

int main() {

    system("chcp 65001"); // Setzt die Codepage auf 65001 (UTF-8) für die korrekte Anzeige von Umlauten
	system("cls"); // Löscht die Konsole

    // VARIABLEN-DEKLARATIONEN (Объявление переменных)
    int wahl = -1; // Eine Variable für die Benutzerauswahl.
    // Preise der Produkte (Цены на продукты)
    float preis_cheeseburger = 3.50;
    float preis_big_mac = 5.00;
    float preis_veggie_burger = 4.00;
    float preis_cola = 1.00;
    float preis_shake = 2.00;
    // Zähler für die Anzahl jedes Produkts (Счетчики для количества каждого продукта)
    int anzahl_cheeseburger = 0;
    int anzahl_big_mac = 0;
    int anzahl_veggie_burger = 0;
    int anzahl_cola = 0;
    int anzahl_shake = 0;

    float gesamtsumme = 0;// Variable für die Gesamtsumme (Переменная для общей суммы)

    // INPUT //
    // Äußere Schleife: wiederholt die Menüauswahl, bis 0 eingegeben wird.
    // (Внешний цикл: повторяет выбор меню, пока не будет введен 0)
        do {
            // Innere Schleife: stellt sicher, dass der Benutzer eine gültige Zahl eingibt.
            // (Внутренний цикл: убеждается, что пользователь вводит корректное число)
            do {
                // MENÜ-ANZEIGE (Отображение меню)    
                printf("\n--- Menu ---\n");
                printf("1 - Cheeseburger (%.2f €)\n", preis_cheeseburger);
                printf("2 - Big Mac (%.2f €)\n", preis_big_mac);
                printf("3 - Veggie Burger (%.2f €)\n", preis_veggie_burger);
                printf("4 - Cola (%.2f €)\n", preis_cola);
                printf("5 - Shake (%.2f €)\n", preis_shake);
                printf("0 - Bestellung beenden\n");

                
                //Ändert die Meldung, falls die erste Eingabe nicht korrekt ist. (Изменяет сообщение, если первый ввод некорректен)
                    if (wahl == -1) {
                        printf("Ungueltige Eingabe! Nur Zahlen (0, 1, 2, 3, 4, 5) erlaubt.\n");
                        printf("Bitte treffen Sie Ihre Wahl: \n");
                    } else {
                        if (wahl == 0 || wahl == 1 || wahl == 2 || wahl == 3 || wahl == 4 || wahl == 5){ //(wahl < 0 || wahl > 5) funktioniert nicht
                        printf("Ihre Bestellung ist angenommen. Möchten Sie noch etwas bestellen?\n");
                        printf("Bitte treffen Sie Ihre Wahl: \n");
                        printf("Nur Zahlen (0, 1, 2, 3, 4, 5) erlaubt!\n");
                    } else {
                        printf("Ungueltige Eingabe! Nur Zahlen (0, 1, 2, 3, 4, 5) erlaubt.\n");
                        printf("Bitte treffen Sie Ihre Wahl: \n");
                    }
                    }
            
                scanf("%d", &wahl); // Einlesen der Wahl des Benutzers (Считывание выбора пользователя)
                // Leert den Eingabepuffer, um Endlosschleifen zu vermeiden
                // (Очищает буфер ввода, чтобы избежать бесконечных циклов)
                while (getchar() != '\n');

            } while (!(wahl == 0 || wahl == 1 || wahl == 2 || wahl == 3 || wahl == 4 || wahl == 5));//(wahl < 0 || wahl > 5) funktioniert nicht


        // Zähler und Summe basierend auf der Wahl aktualisieren
        // (Обновляем счетчики и сумму на основе выбора)
        if (wahl == 1) {
            gesamtsumme += preis_cheeseburger;
            anzahl_cheeseburger++;
        } else if (wahl == 2) {
            gesamtsumme += preis_big_mac;
            anzahl_big_mac++;
        } else if (wahl == 3) {
            gesamtsumme += preis_veggie_burger;
            anzahl_veggie_burger++;
        } else if (wahl == 4) {
            gesamtsumme += preis_cola;
            anzahl_cola++;
        } else if (wahl == 5) {
            gesamtsumme += preis_shake;
            anzahl_shake++;
        } else if (wahl != 0) {
            printf("Bestellung beenden\n");
        }

    } while (wahl != 0);

    // OUTPUT //

    printf("\nBestellte Produkte:\n");
    //Wir überprüfen jeden Zähler und zeigen, welche Speisen bestellt wurden
    if (anzahl_cheeseburger > 0) {
        printf("- %d x Cheeseburger (%.2f €)\n", anzahl_cheeseburger, anzahl_cheeseburger * preis_cheeseburger);
    }
    if (anzahl_big_mac > 0) {
        printf("- %d x Big Mac (%.2f €)\n", anzahl_big_mac, anzahl_big_mac * preis_big_mac);
    }
    if (anzahl_veggie_burger > 0) {
        printf("- %d x Veggie Burger (%.2f €)\n", anzahl_veggie_burger, anzahl_veggie_burger * preis_veggie_burger);
    }
    if (anzahl_cola > 0) {
        printf("- %d x Cola (%.2f €)\n", anzahl_cola, anzahl_cola * preis_cola);
    }
    if (anzahl_shake > 0) {
        printf("- %d x Shake (%.2f €)\n", anzahl_shake, anzahl_shake * preis_shake);
    }

    printf("\nGesamtsumme: %.2f €\n", gesamtsumme);
    printf("Bestellung beendet.\n");
    return 0;
}