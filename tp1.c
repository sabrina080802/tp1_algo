#include <stdio.h>
#include <math.h>

void estBissexile (int annee){
    if ((annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0)){
        printf(" Ce mois comporte %d\n jours", 28 );
    }else{  printf(" Ce mois comporte %d\n jours", 29 );}
}

void jourDansUnMois(int annee, int mois){

    if(mois ==4|| mois == 6|| mois == 9 || mois ==11 ){
        printf(" Ce mois comporte %d\n jours ", 30 );
    }
    else { printf(" Ce mois comporte %d\n jours ", 31 );}
}
int main() {
    int entier;         
    float reel;      
    float largeur,diagonale,surface,perimetre;  
    int annee, mois; 
    int heure, minutes,seconde;
    int heure2, minutes2,seconde2;
    int mois1, jour1,annee1;


    printf("Pouvez me donnez une date JJ/MM/AAAA ");
    scanf("%d %d %d", &jour1, &mois1, &annee1);

    if(annee1== 4 || annee1==04)
    {
        estBissexile(annee1);
    }
    else{
        jourDansUnMois(annee1,mois1);
    }

    printf("Pouvez me donnez l'heure, minute et seconde du premier temps ? ");
    scanf("%d %d %d", &heure, &minutes, &seconde);
    printf("Pouvez me donnez l'heure, minute et seconde du deuxieme temps ? ");
    scanf("%d %d %d", &heure2, &minutes2, &seconde2);

   if (heure < 0 || heure >= 24 || heure2 < 0 || heure2 >= 24 ||
        minutes < 0 || minutes >= 60 || minutes2 < 0 || minutes2 >= 60 ||
        seconde < 0 || seconde >= 60 || seconde2 < 0 || seconde2 >= 60) {
        
        printf("Les heures doivent être entre 0 et 23, les minutes et les secondes doivent être entre 0 et 59. Merci de ressaisir des données valides !\n");
    } else {
        printf("Les temps saisis sont valides.\n");
        printf("Premier temps: %d heures, %d minutes, %d secondes\n", heure, minutes, seconde);
        printf("Deuxième temps: %d heures, %d minutes, %d secondes\n", heure2, minutes2, seconde2);


        int diffHeure = heure - heure2;
        int diffMinutes= minutes - minutes2;
        int diffSecondes = seconde - seconde2;
        int jours;

        if(diffHeure>24)
        {
            jours= 1;
        }
        else{
             jours=0;
        }

        printf("La différence est de %d jours %d heures %d minutes et %d secondes .\n", jours,diffHeure,diffMinutes,diffSecondes);


    }
    
    printf("Entrez un entier : ");
    scanf("%d", &entier); 

    printf("Entrez un nombre réel : ");
    scanf("%f", &reel);   

    printf("Entrez cote : ");
    scanf("%f", &largeur); 
    
    printf("Entrez un mois : ");
    scanf("%d", &mois); 
    printf("Entrez une annee : ");
    scanf("%d", &annee); 

    printf("Vous avez saisi l'entier : %d\n", entier);
    printf("Vous avez saisi le nombre réel : %.2f\n", reel);

    //afficher le périmètre, la surface, la diagonale

    // Calcul du périmètre
    perimetre = 4 * largeur;

    // Calcul de la surface
    surface = largeur * largeur;

    // Calcul de la diagonale avec le théorème de Pythagore
    diagonale = sqrt(2) * largeur;

    printf("Votre perimetre est  %.2f , la surface est  %.2f , la diagonale est : %.2f\n", perimetre,surface,diagonale);

    if( mois ==4 )
    {
        estBissexile(annee);

    }
    jourDansUnMois(annee,mois);

    return 0;
}

