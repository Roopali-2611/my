#include<stdio.h>
#define size 10
int info[size+1];
int link[size+1];
int start=0;
int avail=1;
void initial(){
    for(int i=1;i<=size-1;i++){
        link[i]=i+1;
    }
    link[size]=0;
    start=0;
    avail=1;
}
void insfront(int item){
    if(avail==0){
        printf("linked list is empty");
    }
    int new=avail;
    avail=link[avail];
    info[new]=item;
    link[new]=start;
    start=new;
}

int main(){
    initial();
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
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter value: "); scanf("%d", &val);
                insfront(val);
                break;
            // case 2:
            //     printf("Enter node value after which to insert: "); scanf("%d", &after);
            //     printf("Enter new value: "); scanf("%d", &val);
            //     insertAfter(after, val);
            //     break;
            // case 3:
            //     deleteFront();
            //     break;
            // case 4:
            //     printf("Enter value to delete: "); scanf("%d", &val);
            //     deleteValue(val);
            //     break;
            // case 5:
            //     display();
            //     break;
            // case 6:
            //     return 0;
            default:
                printf("Invalid choice.\n");
        }
    }
    return 0;
}