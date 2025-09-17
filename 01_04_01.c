#include <stdio.h>

int main() {

	int alter = 0; //-	Alter des Nutzers (in Jahren)
	printf("Bitte geben Sie dein Alter ein (1-100) Jahren\n");
	scanf("%i", &alter);
	
	if (alter > 17) {
		printf("In Deutschland gelten Sie als volljährig\n");
	} else {
		printf("In Deutschland gelten Sie noch nicht als volljährig\n");
	}
    return 0;

}