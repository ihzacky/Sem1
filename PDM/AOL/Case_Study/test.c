#include <stdio.h>

struct data
{
    char name[100];
    double temp[100];
} temp_dat[100];


int main(){

    FILE *fp = fopen("Todaysvisitors.dat", "r");
    
    int counter = 0;
    while(!feof){

        fscanf(fp, "%s %lf\n", temp_dat[counter].name, temp_dat[counter].temp);
        counter++;
    }

    int flag = 0;
    for (int i = 0; i < counter; i++){
        
        float temp = temp_dat[i].temp;

        if (temp >= 37.1){
            
            flag++;    
        }
                
    }

    printf("Normal body temperature = %d\n", (counter - flag));
    printf("Body temperature suspected for covid = %d\n", flag);
    printf("Total visitor = %d\n", counter);

    return 0;
}