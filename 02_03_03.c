#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // Für system() Befehle (chcp/cls)

// Макрос для симуляции размера массива для Vokabel
#define MAX_VOKABEL_LEN 50

int main() {
    // Настройки консоли (только для Windows)
    system("chcp 65001");
    system("cls");

    char benutzer_aktion;// --- Переменные для симуляции логики ---
    int vokabel_vorhanden = 1; // Симуляция: 1 - слово уже существует, 0 - новое слово.
    int antwort_korrekt = 0; // Симуляция: 0 - ответ неверный, 1 - ответ верный.
    float erfolgsquote = 75.5; // Симуляция статистики (например, 75.5% успеха)

    // --- Главное меню ---
    printf("Willkommen beim Lern-Programm!\n");
    printf("Wählen Sie eine Aktion:\n");
    printf("E - Neue Vokabel eingeben\n");
    printf("T - Vokabeln trainieren\n");
    printf("Ihre Wahl: ");
    
    scanf(" %c", &benutzer_aktion); 
    while (getchar() != '\n'); 

    // --- Логика ветвления (Use Cases) ---

    if (benutzer_aktion == 'E' || benutzer_aktion == 'e') {
        
        printf("\n--- Neue Vokabel eingeben ---\n");
        printf("Bitte geben Sie die Vokabel ein (simuliert).\n");
        if (vokabel_vorhanden == 1) {
            printf("[FEHLER]: Diese Vokabel ist bereits vorhanden!\n");
        } else {
            printf("[ERFOLG]: Neue Vokabel wurde abgespeichert.\n");
        }

    } else if (benutzer_aktion == 'T' || benutzer_aktion == 't') {
        
        printf("\n--- Vokabeln trainieren ---\n");
        printf("Die Vokabel zum Übersetzen: 'Haus'\n"); 
        printf("Ihre Antwort (simuliert): ");
        printf("Eingabe erfolgt.\n");
        printf("Aktuelle Erfolgsquote: %.1f%%\n", erfolgsquote);

        //  Korrekte Antwort nur bei fehlerhafter Eingabe
        if (antwort_korrekt == 0) {
            printf("[INFO]: Ihre Antwort war fehlerhaft.\n");
            printf("[INFO]: Die korrekte Antwort ist 'House'.\n"); // Zeige 
        } else {
            printf("[INFO]: Ihre Antwort war korrekt.\n");
        }
    // Fall: Ungültige Eingabe
    } else {
        printf("\nUngültige Aktion ausgewählt. Das Programm wird beendet.\n");
    }

    return 0;
}