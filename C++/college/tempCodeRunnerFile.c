ebugState() {
    printf("START = %d, AVAIL = %d\n", START, AVAIL);
    printf("Index: ");
    for (int i = 1; i <= SIZE; i++) printf("%4d", i);
    printf("\nINFO : ");
    for (int i = 1; i <= SIZE; i++) printf("%4d", INFO[i]);
    printf("\nLINK : ");
    for (int i = 1; i <= SIZE; i++) printf("%4d", LINK[i]);
    printf("\n");
}