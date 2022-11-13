#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct accessed_account{
    char no[5];
    int balance[1000];
    char nama[1000];
} rekening;

int menu_selector;

void list();
void transfer();

void add();
void modify();
void del();

int main(){

    // system("cls");
    while (menu_selector != 3){

        printf("[-------------------]\n");
        printf("  1. Account list\n");
        printf("  2. Transfer funds\n");
        printf("  3. Exit\n");
        printf("\n>> ");
        scanf("%d", &menu_selector);
        getchar();

        switch (menu_selector)
        {
        case 1:
            system("cls");
            list();

            break;
        case 2:
            system("cls");
            transfer();

            break;
        case 3:

            system("cls");
            return 0;
            break;
        
        default:
            system("cls");
            printf("Invalid command!\n");
            break;
        }

    }

    return 0;
}

void list(){

    FILE *fptr;
    if ((fptr = fopen("list_rekening.txt", "r")) == NULL){
        
        fptr = fopen("list_rekening.txt", "w");
        fclose(fptr);
    }
    
    int check = getc(fptr);
    if (check == EOF){
        
        add();
    }

    fptr = fopen("list_rekening.txt", "r");
    int ch, lcount = 0;
    while((ch = fgetc(fptr)) != EOF){

		if(ch == '\n'){

			lcount++;
        }    
	}
    fclose(fptr);

    fptr = fopen("list_rekening.txt", "r");
    printf(">> ACCOUNT LIST\n");
    for (int i = 0; i < lcount; i++){

        printf("%d.", i+1);
        fscanf(fptr, "%[^_]_%[^_]_%d\n", rekening.no, rekening.nama, rekening.balance);
        printf("\tAccount Number\t: %s\n", rekening.no);
        printf("\tAccount Name\t: %s\n\n", rekening.nama);

    }
    fclose(fptr);

    printf("[-----------------------------]\n");
    printf("  1. Add new account\n");
    printf("  2. Modify exsisting account\n");
    printf("  3. Delete exsisting account\n");
    printf("  4. Back to main menu\n");
    printf("\n>> ");
    scanf("%d", &menu_selector); 
    getchar();

    while (menu_selector != 4){
    
        switch (menu_selector)
        {
        case 1:
            
            system("cls");
            add();
            break;
        case 2:

            system("cls");
            // modify();    
            break;
        case 3:

            system("cls");
            // del();
            break;
        case 4:

            system("cls");
            return;
            break;
        
        default:

            system("cls");
            printf("Invalid command!\n");
            break;
        }

    }
    
}

void transfer(){



}

void add(){

    FILE *fptr = fopen("list_rekening.txt", "a");
    
    int c = fgetc(fptr);
    if (c == EOF) {

        printf("No data!\nPlease add account destination\n");
    } else {

        ungetc(c, fptr);
    }

    // int check = getc(fptr);
    // if (check == EOF){
        
    //     printf("No data!\nPlease add account destination\n");
    // }
    
    x:
    printf("Account Number [Max: 5 number]: ");
    scanf("%s", rekening.no);
    getchar();
    for (int p = 0; p < strlen(rekening.no); p++){

        if (strlen(rekening.no) > 5){

            goto x;
        }
        if (!(rekening.no[p] >= '0' && rekening.no[p]<= '9')){

            goto x; 
        }

    }

    printf("Account Name: ");
    scanf("%[^\n]", rekening.nama); 
    getchar();

    printf("%s", rekening.no);
    fprintf(fptr, "%s_%s_0\n", rekening.no, rekening.nama);

    fclose(fptr);
    system("cls");

    return list();
}