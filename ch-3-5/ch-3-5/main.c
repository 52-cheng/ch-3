#include <stdio.h>
void hanoi(int n, char from_rod, char to_rod, char aux_rod) {
    if (n == 1) {
        printf("Move disc 1 from %c to %c\n", from_rod, to_rod);
        return;
    }
    hanoi(n - 1, from_rod, aux_rod, to_rod); 
    printf("Move the disc %d from %c to %c\n", n, from_rod, to_rod); 
    hanoi(n - 1, aux_rod, to_rod, from_rod); 
}
int main() {
    int n;
    printf("Please enter the number of discs:");
    scanf_s("%d", &n);
    hanoi(n, 'A', 'C', 'B'); 
    return 0;
}