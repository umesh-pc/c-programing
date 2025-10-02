#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[100];  // safer fixed size
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\nThe elements you entered are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    int ch, tmp, pos;
    while (1) {
        printf("\n*********** MENU ************\n");
        printf("1. Insertion\n2. Deletion\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1: // Insertion
                printf("Enter element to insert and its position: ");
                scanf("%d %d", &tmp, &pos);

                if (pos >= 1 && pos <= n + 1) {
                    for (i = n; i >= pos; i--) {
                        a[i] = a[i - 1];   // shift
                    }
                    a[pos - 1] = tmp;
                    n++;
                    printf("Element inserted.\n");
                } else {
                    printf("Invalid position!\n");
                }
                break;

            case 2: // Deletion
                printf("Enter position to delete: ");
                scanf("%d", &pos);

                if (pos >= 1 && pos <= n) {
                    for (i = pos - 1; i < n - 1; i++) {
                        a[i] = a[i + 1];   // shift left
                    }
                    n--;
                    printf("Element deleted.\n");
                } else {
                    printf("Invalid position!\n");
                }
                break;

            case 3: // Display
                printf("Array elements: ");
                for (i = 0; i < n; i++) {
                    printf("%d ", a[i]);
                }
                printf("\n");
                break;

            case 4: // Exit
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
}

	
	
	