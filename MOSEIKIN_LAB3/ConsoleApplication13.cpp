#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

struct owner {
    char name[64];
    char number[256];
    char number_of_passport[256];
    char birthyear[64];
    char adress[64];
    char phone[64];
    char department[128];
};

owner* scandata() {
    owner* arr = (owner*)malloc(sizeof(owner));
    int len = 0;
    char musor[3];

    fgets(musor, 16, stdin);

    printf("\nName: ");
    fgets(arr->name, 64, stdin);
    len = strlen(arr->name);
    arr->name[len - 1] = '\0';

    printf("\nNumber: ");
    fgets(arr->number, 256, stdin);
    len = strlen(arr->number);
    arr->number[len - 1] = '\0';

    printf("\nNumber passport: ");
    fgets(arr->number_of_passport, 256, stdin);
    len = strlen(arr->number_of_passport);
    arr->number_of_passport[len - 1] = '\0';

    printf("\nYear of birth: ");
    fgets(arr->birthyear, 64, stdin);
    len = strlen(arr->birthyear);
    arr->birthyear[len - 1] = '\0';

    printf("\nAdress: ");
    fgets(arr->adress, 64, stdin);
    len = strlen(arr->adress);
    arr->adress[len - 1] = '\0';

    printf("\nPhone: ");
    fgets(arr->phone, 64, stdin);
    len = strlen(arr->phone);
    arr->phone[len - 1] = '\0';

    printf("\nDepartment: ");
    fgets(arr->department, 128, stdin);
    len = strlen(arr->department);
    arr->department[len - 1] = '\0';

    return arr;
}

void add_data(owner** arr, int* owner_cnt) {
    bool flag = true;
    char answer[4];

    while (flag) {
        arr[*owner_cnt] = scandata();
        *owner_cnt += 1;
        printf("Owner was added\nDo you want to add another one?(answer y or n): ");
        fgets(answer, 4, stdin);
        if (answer[0] != 'y') {
            flag = false;
        }
    }
}

void find_by(owner** arr, int* owner_cnt) {
    printf("\nWhich way you want to find owner?\n");
    printf("\n1 - by name\n2 - by number\n3 - by passport number\n4 - by birthyear\n5 - by adress\n6 - by phone\n7 - by department \n");
    int answer = 0;
    scanf("%d", &answer);
    char temp[20];
    switch (answer)
    {
    case(1):
        printf("\nEnter a name of owner: ");
        scanf("%s", temp);
        for (int i = 0; i < *owner_cnt; i++) {
            if (!strcmp(temp, arr[i]->name)) {
                printf("\nFinded:\nName: %s, Number: %s, Passport number: %s, Year of birth: %s, Adress: %s, Phone: %s, Department: %s", arr[i]->name, arr[i]->number, arr[i]->number_of_passport, arr[i]->birthyear, arr[i]->adress, arr[i]->phone, arr[i]->department);
            }
        }
        break;
    case(2):
        printf("\nEnter a number of owner: ");
        scanf("%s", temp);
        for (int i = 0; i < *owner_cnt; i++) {
            if (!strcmp(temp, arr[i]->number)) {
                printf("\nFinded:\nName: %s, Number: %s, Passport number: %s, Year of birth: %s, Adress: %s, Phone: %s, Department: %s", arr[i]->name, arr[i]->number, arr[i]->number_of_passport, arr[i]->birthyear, arr[i]->adress, arr[i]->phone, arr[i]->department);
            }
        }
        break;
    case(3):
        printf("\nEnter a passport number of owner: ");;
        scanf("%s", temp);
        for (int i = 0; i < *owner_cnt; i++) {
            if (!strcmp(temp, arr[i]->number_of_passport)) {
                printf("\nFinded:\nName: %s, Number: %s, Passport number: %s, Year of birth: %s, Adress: %s, Phone: %s, Department: %s", arr[i]->name, arr[i]->number, arr[i]->number_of_passport, arr[i]->birthyear, arr[i]->adress, arr[i]->phone, arr[i]->department);
            }
        }
        break;
    case(4):
        printf("\nEnter a birthyear of owner: ");
        scanf("%s", temp);
        for (int i = 0; i < *owner_cnt; i++) {
            if (!strcmp(temp, arr[i]->birthyear)) {
                printf("\nFinded:\nName: %s, Number: %s, Passport number: %s, Year of birth: %s, Adress: %s, Phone: %s, Department: %s", arr[i]->name, arr[i]->number, arr[i]->number_of_passport, arr[i]->birthyear, arr[i]->adress, arr[i]->phone, arr[i]->department);
            }
        }
        break;
    case(5):
        printf("\nEnter a adress of owner: ");
        scanf("%s", temp);
        for (int i = 0; i < *owner_cnt; i++) {
            if (!strcmp(temp, arr[i]->adress)) {
                printf("\nFinded:\nName: %s, Number: %s, Passport number: %s, Year of birth: %s, Adress: %s, Phone: %s, Department: %s", arr[i]->name, arr[i]->number, arr[i]->number_of_passport, arr[i]->birthyear, arr[i]->adress, arr[i]->phone, arr[i]->department);
            }
        }
        break;
    case(6):
        printf("\nEnter a phone of owner: ");
        scanf("%s", temp);
        for (int i = 0; i < *owner_cnt; i++) {
            if (!strcmp(temp, arr[i]->phone)) {
                printf("\nFinded:\nName: %s, Number: %s, Passport number: %s, Year of birth: %s, Adress: %s, Phone: %s, Department: %s", arr[i]->name, arr[i]->number, arr[i]->number_of_passport, arr[i]->birthyear, arr[i]->adress, arr[i]->phone, arr[i]->department);
            }
        }
        break;
    case(7):
        printf("\nEnter a department of owner: ");
        scanf("%s", temp);
        for (int i = 0; i < *owner_cnt; i++) {
            if (!strcmp(temp, arr[i]->department)) {
                printf("\nFinded:\nName: %s, Number: %s, Passport number: %s, Year of birth: %s, Adress: %s, Phone: %s, Department: %s", arr[i]->name, arr[i]->number, arr[i]->number_of_passport, arr[i]->birthyear, arr[i]->adress, arr[i]->phone, arr[i]->department);
            }
        }
        break;
    
    }
}

void printall(owner** arr, int* owner_cnt) {
    for (int i = 0; i < *owner_cnt; i++) {
        printf("\n-----------------\n");
        printf("Name: %s\n", arr[i]->name);
        printf("Number: %s\n", arr[i]->number);
        printf("Passport Number: %s\n", arr[i]->number_of_passport);
        printf("Year of birth: %s\n", arr[i]->birthyear);
        printf("Adress: %s\n", arr[i]->adress);
        printf("Phone: %s\n", arr[i]->phone);
        printf("Department: %s\n", arr[i]->department);
        printf("\n-----------------\n");
    }
}

void sort_array(owner** arr, int* owner_cnt) {
    printf("\nWhich way you want to sort array?");
    printf("\n1 - by name\n2 - by number\n3 - by birthyear\n4 - by adress\n5 - by phone\n6 - by department\n");
    int answer;
    owner* temp;
    scanf("%d", &answer);
    switch (answer) {
    case 1:
        for (int i = 0; i < *owner_cnt; i++) {
            for (int j = i + 1; j < *owner_cnt; j++) {
                if (strcmp(arr[j]->name, arr[i]->name) == -1) {
                    temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                }
            }
        }
        break;
    case 2:
        for (int i = 0; i < *owner_cnt; i++) {
            for (int j = i + 1; j < *owner_cnt; j++) {
                if (strcmp(arr[j]->number, arr[i]->number) == -1) {
                    temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                }
            }
        }
        break;
    case 3:
        for (int i = 0; i < *owner_cnt; i++) {
            for (int j = i + 1; j < *owner_cnt; j++) {
                if (strcmp(arr[j]->birthyear, arr[i]->birthyear) == -1) {
                    temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                }
            }
        }
        break;
    case 4:
        for (int i = 0; i < *owner_cnt; i++) {
            for (int j = i + 1; j < *owner_cnt; j++) {
                if (strcmp(arr[j]->adress, arr[i]->adress) == -1) {
                    temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                }
            }
        }
        break;
    case 5:
        for (int i = 0; i < *owner_cnt; i++) {
            for (int j = i + 1; j < *owner_cnt; j++) {
                if (strcmp(arr[j]->phone, arr[i]->phone) == -1) {
                    temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                }
            }
        }
        break;
    case 6:
        for (int i = 0; i < *owner_cnt; i++) {
            for (int j = i + 1; j < *owner_cnt; j++) {
                if (strcmp(arr[j]->department, arr[i]->department) == -1) {
                    temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                }
            }
        }
        break;
   
    }

}

void printtofile(owner** arr, int* owner_cnt) {
    FILE* file = fopen("results.txt", "w");
    if (file) {
        for (int i = 0; i < *owner_cnt; i++) {
            fprintf(file, "%d. %s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n", i + 1, arr[i]->name, arr[i]->number, arr[i]->number_of_passport, arr[i]->birthyear, arr[i]->adress, arr[i]->phone, arr[i]->department);
        }
    }
    fclose(file);
}

void pickthefunc(owner** arr, int* owner_cnt) {
    int ans = 0;
    bool flag = true;
    while (true) {
        printf("\nWhat do you want?");
        printf("\n1 - add new owner\n2 - find owner\n3 - print all owners\n4 - sort array of owners\n0 - close the programm\nEnter your answer: ");
        scanf("%d", &ans);
        switch (ans) {
        case 1:
            add_data(arr, owner_cnt);
            break;
        case 2:
            find_by(arr, owner_cnt);
            break;
        case 3:
            printall(arr, owner_cnt);
            break;
        case 4:
            sort_array(arr, owner_cnt);
            break;
        case 0:
            printtofile(arr, owner_cnt);
            flag = false;
            break;
        }
    }
}



int main()
{
    int owner_cnt = 0;

    struct owner* ownerlist[10];
    pickthefunc(ownerlist, &owner_cnt);

}