#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void rejouer();
int joueria(){
	srand(time(NULL));
	int b=rand()%3 +1;
	if(b==1){
		printf("l'ia choisit pierre\n");
	}
	if(b==2){
		printf("l'ia choisit feuille\n");
	}
	if(b==3){
		printf("l'ia choisit ciseau\n");
	}
	return b;
}
int joueruser(int c){
		if(c==1){
		 printf("pierre\n");}
		if(c==2){
		printf("feuille\n");
		}
		if(c==3){
			printf("ciseau\n");
		}
	return c;	
	
}

void jeu(){
	int c;
		printf("\nChoissisez entre pierre=1 feuille=2 et ciseau=3\n");
	scanf("%d",&c);


	printf("tu as donc choisi\n");

	int a=joueruser(c);
	int b=joueria();
	if(a==b){
		printf("Match Nul\n");
	
	}
	if(a==1&&b==2){
		printf("L'ia gagne le point");
					
					
	}
	if(a==1&&b==3){
		printf("Tu gagnes le point");


	}
	if(a==2&&b==1){
		printf("Tu gagnes le point");
			
		
		
	}
	if(a==2&&b==3){
		printf("L'ia gagne le point");
	
	
	
	}
	if(a==3&&b==1){
		printf("L'ia gagne le point");
	
	
			
		
	}
	if(a==3&&b==2){
		printf("tu gagnes le point ");
	
	
	}
rejouer();

}

void rejouer(){
	int i;
printf("\nVOULEZ VOUS REJOUER? 1=OUI 0=NON\n");
scanf("%d",&i);
if(i==1){
	jeu();
}
else printf("\nAu revoir");
}

int main(){
jeu();
return 0;

}
