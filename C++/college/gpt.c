#include <stdio.h>
#define SIZE 10   // maximum number of nodes (1..SIZE)

int INFO[SIZE+1];
int LINK[SIZE+1];
int START = 0;   // 0 means NULL / empty
int AVAIL = 1;   // first free cell is 1

void initialize() {
    for (int i = 1; i <= SIZE - 1; i++){ LINK[i] = i + 1;
    }
    LINK[SIZE] = 0;   // last free node points to 0 (NULL)
    START = 0;
    AVAIL = 1;
}

void insertFront(int ITEM) {
    if (AVAIL == 0) {
        printf("Overflow! No free nodes.\n");
        return;
    }
    int NEW = AVAIL;
    AVAIL = LINK[AVAIL];
    INFO[NEW] = ITEM;
    LINK[NEW] = START;
    START = NEW;
}

void insertAfter(int ITEM, int NEWVAL) {
    if (START == 0) {
        printf("List empty. Cannot insert after %d.\n", ITEM);
        return;
    }
    int LOC = START;
    while (LOC != 0 && INFO[LOC] != ITEM) LOC = LINK[LOC];
    if (LOC == 0) {
        printf("Item %d not found.\n", ITEM);
        return;
    }
    if (AVAIL == 0) {
        printf("Overflow! No free nodes.\n");
        return;
    }
    int NEW = AVAIL;
    AVAIL = LINK[AVAIL];
    INFO[NEW] = NEWVAL;
    LINK[NEW] = LINK[LOC];
    LINK[LOC] = NEW;
} 
void deleteFront() {
    if (START == 0) {
        printf("Underflow! List empty.\n");
        return;
    }
    int LOC = START;
    START = LINK[START];
    printf("Deleted: %d\n", INFO[LOC]);
    LINK[LOC] = AVAIL;
    AVAIL = LOC;
}

void deleteValue(int ITEM) {
    if (START == 0) {
        printf("List empty.\n");
        return;
    }
    int LOC = START, PREV = 0;
    while (LOC != 0 && INFO[LOC] != ITEM) {
        PREV = LOC;
        LOC = LINK[LOC];
    }
    if (LOC == 0) {
        printf("Item %d not found.\n", ITEM);
        return;
    }
    if (PREV == 0) START = LINK[LOC];
    else LINK[PREV] = LINK[LOC];

    printf("Deleted: %d\n", INFO[LOC]);
    LINK[LOC] = AVAIL;
    AVAIL = LOC;
}

void display() {
    if (START == 0) {
        printf("List is empty.\n");
        return;
    }
    int PTR = START;
    printf("List: ");
    while (PTR != 0) {
        printf("%d -> ", INFO[PTR]);
        PTR = LINK[PTR];
    }
    printf("NULL\n");
}


int main() {
    initialize();
    int choice, val, after;
    while (1) {
        printf("\n--- MENU ---\n");
        printf("1. Insert at Front\n");
        printf("2. Insert After a Node (by value)\n");
        printf("3. Delete at Front\n");
        printf("4. Delete by Value\n");
        printf("5. Display\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        if (scanf("%d", &choice) != 1) return 0;
        switch (choice) {
            case 1:
                printf("Enter value: "); scanf("%d", &val);
                insertFront(val);
                break;
            case 2:
                printf("Enter node value after which to insert: "); scanf("%d", &after);
                printf("Enter new value: "); scanf("%d", &val);
                insertAfter(after, val);
                break;
            case 3:
                deleteFront();
                break;
            case 4:
                printf("Enter value to delete: "); scanf("%d", &val);
                deleteValue(val);
                break;
            case 5:
                display();
                break;
            case 6:
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }
    return 0;
}

