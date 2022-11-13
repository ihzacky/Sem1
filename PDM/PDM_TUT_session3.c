#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct accessed_account{
    char no[5];
    int balance[1000];
    char nama[1000];
} rekening;

int menu_selector;

void list_menu();
void list();

void add();
void modify();
void del();

void transfer();


int main(){

    
    // system("cls");
    menu_selector = 0;
    while (menu_selector != '3'){

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
            list_menu();

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

void list_menu(){

    menu_selector = 0;
    while (menu_selector != '4'){

    list();
    
    printf("[-----------------------------]\n");
    printf("  1. Add new account\n");
    printf("  2. Modify exsisting account\n");
    printf("  3. Delete exsisting account\n");
    printf("  4. Back to main menu\n");
    printf("\n>> ");
    scanf("%d", &menu_selector); 
    getchar();

    
        switch (menu_selector)
        {
        case 1:
            
            system("cls");
            add();
            break;
        case 2:

            system("cls");
            modify();    
            break;
        case 3:

            system("cls");
            del();
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

void list(){

    FILE *fp;
    if ((fp = fopen("list_rekening.txt", "r")) == NULL){
        
        fp = fopen("list_rekening.txt", "w");
        fclose(fp);
    }
    
    int check = getc(fp);
    if (check == EOF){
        
        add();
    }

    fp = fopen("list_rekening.txt", "r");
    int ch, lcount = 0;
    while((ch = fgetc(fp)) != EOF){

		if(ch == '\n'){

			lcount++;
        }    
	}

    rewind(fp);

    printf(">> ACCOUNT LIST\n");
    for (int i = 0; i < lcount; i++){

        printf("%d.", i+1);
        fscanf(fp, "%[^_]_%[^_]_%d\n", rekening.no, rekening.nama, rekening.balance);
        printf("\tAccount Number\t: %s\n", rekening.no);
        printf("\tAccount Name\t: %s\n\n", rekening.nama);

    }
    fclose(fp);

}


void transfer(){



}

void add(){

    FILE *fp = fopen("list_rekening.txt", "a");
    FILE *fp_read = fopen("list_rekening.txt", "r");

    int check = getc(fp_read);
    if (check == EOF){
        
        printf("No data!\nPlease add account destination\n");
    }
    fclose(fp_read);
    
    x:
    printf("Account Number [5 number]: ");
    scanf("%s", rekening.no);
    getchar();
    for (int p = 0; p < strlen(rekening.no); p++){

        if (strlen(rekening.no) != 5){

            goto x;
        }
        if (!(rekening.no[p] >= '0' && rekening.no[p]<= '9')){

            goto x; 
        }

    }

    printf("Account Name: ");
    scanf("%[^\n]", rekening.nama); 
    getchar();

    fprintf(fp, "%s_%s_0\n", rekening.no, rekening.nama);

    fclose(fp);
    system("cls");

    return list_menu();
}


void modify(){

    FILE *fp = fopen("list_rekening.txt", "r");

    int selector = 0;
    char tempNo [5];
    char tempNo___ [5];
    char tempNama [1000];
    char tempNama___ [1000];
    list();

    printf("Which number do you want to modify?\n");
    printf(">> ");
    scanf("%d", &selector);
    getchar();
    
    x:
    printf("Account Number [5 number][Type N/n to cancel]: ");
    scanf("%s", tempNo___);
    getchar();

    if (!(tempNo[0] == 78 || tempNo[0] == 110)){

        for (int p = 0; p < strlen(tempNo); p++){

            if (strlen(tempNo) != 5){

                goto x;
            }
            if (!(tempNo[p] >= '0' && tempNo[p]<= '9')){

                goto x; 
            }

        }

        strcpy(tempNo, tempNo___);
    }
    
    printf("Account Name [Type N/n to cancel]: ");
    scanf("%[^\n]]", tempNama___);
    getchar();

    if (tempNama___[0] == 78 || tempNama___[0] == 110){

        return;
    }
    
    strcpy(tempNama, tempNama___);

    int ch, lcount = 0;
    while((ch = fgetc(fp)) != EOF){

		if(ch == '\n'){

			lcount++;
        }    
        if (lcount == selector)
        {
            // modify the string <
        }
        
	}


}


void del(){

    FILE *fp = fopen("list_rekening.txt", "r");

    int selector = 0;
    list();

    printf("Which number do you want to delete?\n");
    printf(">> ");
    scanf("%d", &selector);

    int ch, lcount = 0;
    while((ch = fgetc(fp)) != EOF){

		if(ch == '\n'){

			lcount++;
        }    
        if (lcount == selector)
        {
            // delete the string <
        }
        
	}

}