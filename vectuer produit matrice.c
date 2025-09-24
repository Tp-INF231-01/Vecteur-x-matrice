#include<stdio.h>
int main() {
    int mat[100][100],vec[100],rep[100];
    int ligne,colonne,n;
    printf("Nombre coordonnees du vecteur  :  ");
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        printf("X%d : ",i+1);
        scanf("%d",& vec[i]);
    }

    printf("ELEMENT MATRICE \n");
    printf("Nombre de ligne : ");
    scanf("%d",&ligne);
    printf("Nombre de Colonne : ");
    scanf("%d",&colonne);
    if(n!=ligne) {
        do {
            printf("Erreur (nbre colonne vecteur = lig matrice )\n");
            scanf("%d",&ligne);
        } while(n!=ligne);
    }
    for(int i=0; i<ligne; i++) {
        for(int j=0; j<colonne; j++) {
            printf("Valeur [%d][%d] :",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Le VECTEUR EST :\n");
    printf("(x,y,z)=(");
    for(int i=0; i<n; i++) {
        printf("%d, ",vec[i]);
    }
    printf(")");
    printf("\n La MATRICE EST \n");
    for(int i=0; i<ligne; i++) {
        for(int j=0; j<colonne; j++) {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    printf("le produit V x M est \n");
    for (int i=0; i<colonne; i++) {
        for (int j=0; j<ligne; j++) {
            rep[j]+=vec[i]*mat[i][j];
        }
    }
    printf("R = [ ");
    for (int i=0; i<ligne; i++) {
        printf("%d, ",rep[i]);
    }
    printf("]");

    return 0;
}
