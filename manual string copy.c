#include <stdio.h>

int main(void)
{
	char original[100];
	char copied[100];
	int i = 0;

	printf("Enter a string: ");
	if (fgets(original, sizeof(original), stdin) == NULL) {
		return 1;
	}

	while (original[i] != '\0' && original[i] != '\n') {
		copied[i] = original[i];
		i++;
	}
	copied[i] = '\0';

	printf("Original string: %s\n", original);
	printf("Copied string: %s\n", copied);

	return 0;
}
   