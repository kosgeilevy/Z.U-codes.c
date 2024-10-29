//prompt
#include <stdio.h>

int main() {
    int bookID, daysOverdue, fineRate, fineAmount;
    char dueDate[11], returnDate[11];

    // Input bookID, dueDate, and returnDate
    printf("Enter book ID: ");
    scanf("%d", &bookID);

    printf("Enter due date (DD/MM/YYYY): ");
    scanf("%s", dueDate);

    printf("Enter return date (DD/MM/YYYY): ");
    scanf("%s", returnDate);

    // Calculate days overdue
    daysOverdue = returnDate[8] - dueDate[8] + (returnDate[7] - dueDate[7]) * 10 + (returnDate[6] - dueDate[6]) * 100;

    // Determine the fine rate based on days overdue
    if (daysOverdue <= 7) {
        fineRate = 20;
    } else if (daysOverdue <= 14) {
        fineRate = 50;
    } else {
        fineRate = 100;
    }

    // Calculate the fine amount
    fineAmount = daysOverdue * fineRate;

    // Print the results
    printf("\nBook ID: %d\n", bookID);
    printf("Due Date: %s\n", dueDate);
    printf("Return Date: %s\n", returnDate);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Fine Rate: Ksh. %d\n", fineRate);
    printf("Fine Amount: Ksh. %d\n", fineAmount);

    return 0;
}
