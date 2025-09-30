#include <stdio.h>

int main() {
    int lateDays, fine;

    printf("Enter the number of days late: ");
    
    scanf("%d", &lateDays);

    if (lateDays <= 5) {
        fine = lateDays * 2;
        printf("Fine Rupees: %d\n", fine);
    } else if (lateDays <= 10) {
        fine = (5 * 2) + (lateDays - 5) * 4;
        printf("Fine Rupees: %d\n", fine);
    } else if (lateDays <= 30) {
        fine = (5 * 2) + (5 * 4) + (lateDays - 10) * 6;
        printf("Fine Rupees: %d\n", fine);
    } else {
        printf("Membership Cancelled\n");
    }

    return 0;
}