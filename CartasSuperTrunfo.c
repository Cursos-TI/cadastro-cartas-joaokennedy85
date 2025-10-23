#include <stdio.h>

int main(){
    int nhabitantes1 ,npontos_turisticos1 , nhabitantes2 ,npontos_turisticos2 ;
    int carta1 , carta2 ;
    float area1,area2 , pib1,pib2 ;
    char estado1[20],estado2[20] , cidade1[20],cidade2[20] ,codigo_carta1[50],codigo_carta2[50] ;

    printf("Digite a primeira carta  : ");
    scanf(" %d", &carta1); //armazenar o valor da carta

    printf("Digite o estado: ");
    scanf(" %s" , estado1);//armazenar o valor da estado

    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade1);//armazenar o valor da cidade

    printf("Digite o numero de habitantes: ");
    scanf(" %d",&nhabitantes1);//armazenar o valor do numero de habitantes

    printf("Digite a área: " );
    scanf(" %f",&area1 );//armazenar o valor da area

    printf("Digite o PIB: ");
    scanf(" %f",&pib1); //armazenar o valor do Pib

    printf("Qual o numero de pontos turisticos: ");
    scanf(" %d",&npontos_turisticos1);//armazenar o valor dos pontos turisticos 

    printf("carta 1 cadastrada com sucesso !!!\n");

    printf("Digite a segunda carta : ");
    scanf(" %d", &carta2); //armazenar o valor da carta

    printf("Digite o segundo estado: ");
    scanf(" %s" , estado2);//armazenar o valor da estado

    printf("Digite o nome da cidade : ");
    scanf(" %s", cidade2);//armazenar o valor da cidade

    printf("Digite o numero de habitantes: ");
    scanf(" %d",&nhabitantes2);//armazenar o valor do numero de habitantes

    printf("Digite a área: " );
    scanf(" %f",&area2 );//armazenar o valor da area

    printf("Digite o PIB: ");
    scanf(" %f",&pib2); //armazenar o valor do Pib

    printf("Qual o numero de pontos turisticos: ");
    scanf(" %d",&npontos_turisticos2);//armazenar o valor dos pontos turisticos

    printf("carta 2 cadastrada com sucesso !!!\n \n");

    printf("Carta : %d\n" , carta1);
    printf("Estado : %s\n" , estado1);
    printf("Código: %s%d\n" , estado1, carta1); 
    printf("Nome da cidade: %s\n" , cidade1);
    printf("Populaçao: %d\n" , nhabitantes1);
    printf("Área : %.2f km²\n", area1);
    printf("Pib:%.2f milhões de reais\n",pib1 );
    printf("Pontos Turisticos: %d\n \n \n",npontos_turisticos1);
    

    printf("Carta : %d\n" , carta2);
    printf("Estado : %s\n" , estado2);
    printf("Código: %s%d\n" , estado2, carta2); 
    printf("Nome da cidade: %s\n" , cidade2);
    printf("Populaçao: %d\n" , nhabitantes2);
    printf("Área : %.2f km²\n", area2);
    printf("Pib:%.2f milhões de reais\n",pib2 );
    printf("Pontos Turisticos: %d\n",npontos_turisticos2);



return 0;




}
