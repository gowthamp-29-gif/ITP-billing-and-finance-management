#include <stdio.h>
#include <stdlib.h>

struct Bill {
    int id;
    char name[50];
    float roomCharge;
    float medicineCost;
    float doctorFee;
    float total;
};

void addBill() {
    struct Bill b;
    FILE *fp = fopen("bills.txt", "a");

    printf("\nEnter Patient ID: ");
    scanf("%d", &b.id);

     printf("Enter Patient Name: ");
    scanf("%s", b.name);

    printf("Enter Room Charge: ");
    scanf("%f", &b.roomCharge);

    printf("Enter Medicine Cost: ");
    scanf("%f", &b.medicineCost);

    printf("Enter Doctor Fee: ");
    scanf("%f", &b.doctorFee);

    b.total = b.roomCharge + b.medicineCost + b.doctorFee;

    fprintf(fp, "%d %s %.2f %.2f %.2f %.2f\n",
            b.id, b.name, b.roomCharge, b.medicineCost, b.doctorFee, b.total);

    fclose(fp);
    printf("\nBill Added Successfully!\n");
}

void viewBills() {
 struct Bill b;
    FILE *fp = fopen("bills.txt", "r");

    if (fp == NULL) {
        printf("\nNo records found!\n");
        return;
    }

    printf("\n--- All Bills ---\n");

    while (fscanf(fp, "%d %s %f %f %f %f",
                  &b.id, b.name, &b.roomCharge, &b.medicineCost,
                  &b.doctorFee, &b.total) != EOF) {

        printf("\nID: %d\nName: %s\nRoom: %.2f\nMedicine: %.2f\nDoctor: %.2f\nTotal: %.2f\n",
                b.id, b.name, b.roomCharge, b.medicineCost, b.doctorFee, b.total);
         printf("--------------------\n");
    }

    fclose(fp);
}

void searchBill() {
    int id, found = 0;
    struct Bill b;
    FILE *fp = fopen("bills.txt", "r");

    if (fp == NULL) {
        printf("\nNo records found!\n");
        return;
    }

    printf("\nEnter Patient ID to Search: ");
    scanf("%d", &id);
  while (fscanf(fp, "%d %s %f %f %f %f",
                  &b.id, b.name, &b.roomCharge, &b.medicineCost,
                  &b.doctorFee, &b.total) != EOF) {

        if (b.id == id) {
            printf("\n--- Bill Found ---\n");
            printf("ID: %d\nName: %s\nRoom: %.2f\nMedicine: %.2f\nDoctor: %.2f\nTotal: %.2f\n",
                    b.id, b.name, b.roomCharge, b.medicineCost, b.doctorFee, b.total);
            found = 1;
            break;
        }
    }

    fclose(fp);

    if (!found)
        printf("\nBill Not Found!\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n===== Hospital Billing System =====");
        printf("\n1. Add Bill");
        printf("\n2. View All Bills");
        printf("\n3. Search Bill");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addBill(); break;
            case 2: viewBills(); break;
            case 3: searchBill(); break;
            case 4: exit(0);
            default: printf("\nInvalid Choice!\n");
        }
    }
    return 0;
}