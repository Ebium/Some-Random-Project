#include <stdio.h>


//Trove program
//Calculs the amount of trade you need to reach a wanted amount of flux with tow



int main()
{
    int nb_tow = 0;
    int start = 0;
    int nb_jour = 1;
    int voulu = 0;
    int price = 0;
    int flux_depart = 0;
    int reste = 0;

    do {
    printf("Choose start currency :\ntow : 0\nflux : 1\n ----- Choice : ");
    scanf("%d",&start);
    printf("\n");
    } while(start !=0 && start != 1);
    
    if(start){ //1 flux
        printf("How much flux ?\n ----- Choice : ");
        scanf("%d",&flux_depart);
        nb_tow = flux_depart/9999;
        reste = flux_depart%9999;
        price = (nb_tow * 10100) + reste;
    }
    else{ //0 tow
        printf("How many TOW ?\n ----- Choice : ");
        scanf("%d",&nb_tow);
        price = (nb_tow * 10100);
    }
    
    printf("\nHow much you want at the end (flux) ?\n ----- Choice : ");
    scanf("%d",&voulu);
    
    while(price < voulu){
        nb_tow = price/9999;
        reste = price%9999;
        price = (nb_tow * 10100) + reste;
        nb_jour++;
    }
    
    printf("\nTrades needed : %d\n",nb_jour);
    
    printf("Final flux : %d\n",price);
    
    return 0;
}
