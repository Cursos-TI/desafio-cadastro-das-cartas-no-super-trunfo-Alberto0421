#include <stdio.h>



    int main ()
    {

        // variaveis carta 01
        char  estado[01];
        char  codigo[03];
        char  cidade[15];
        int   populacao;
        float area;
        float pib;
        int   pontos; 
        
        
        // variaveis carta 02

        
        char  estadob[01];
        char  codigob[03];
        char  cidadeb[15];
        int   populacaob;
        float areab;
        float pibb;
        int   pontosb; 


        
 printf (" INICIO DE JOGO:\n");

 printf ("DIGITE OS DADOS DA PRIMEIRA CARTA DO JOGO\n");

          
             printf("Digite A LETRA do seu Estado:ATENÇÃO! LETRA  A  a H:\n");
             scanf("%c" , &estado);
        
             printf("Digite o Código do seu Estado: ATENÇÃO! LETRA  ANTERIOR  1 2 3 OU 4.\n");
             scanf("%s" , &codigo);

             printf("Digite o Nome da sua Cidade: ATENÇÃO! SOMENTE NOME SEM SEPARAÇÃO:\n");
             scanf("%s" , &cidade);
 

        printf("Digite a População da Cidade: ATENÇÃO! DIGITAR NÚMERO INTEIRO:\n");
             scanf("%d", &populacao);


            printf("Digite a Área da Cidade: ATENÇÃO! DIGITAR DECIMAL SEPARADO POR PONTO (.) \n");
            scanf("%f" , &area);

        printf("Digite o PIB da Cidade: ATENÇÃO! DIGITAR DECIMAL SEPARADO POR PONTO (.) \n");
        scanf("%f", &pib);

            printf("Digite a quantidade de pontos Tutísticos da cidade: \n");
            scanf("%d", &pontos);


printf ("CONTINUE O JOGO , INSERINDO DADOS DA SEGUNDA CARTA\n");

            //  INSERSSÃO DADOS SEGUNDA CARTA:

             printf("Digite A LETRA do seu Estado:ATENÇÃO! LETRA  A a H:\n");
             scanf("%c" , &estadob);
                
             printf("Digite o Código do seu Estado:ATENÇÃO! LETRA  ANTERIOR + 1 2 3 OU 4:\n");
             scanf("%s" , &codigob);
             


            printf("Digite o Nome da sua Cidade: ATENÇÃO! SOMENTE NOME SEM SEPARAÇÃO:\n");
            scanf("%s" , &cidadeb);
 

        printf("Digite a População da Cidade: ATENÇÃO! DIGITAR NÚMERO INTEIRO:\n");
             scanf("%d", &populacaob);


            printf("Digite a Área da Cidade: ATENÇÃO! DIGITAR DECIMAL SEPARADO POR PONTO (.)\n");
            scanf("%f" , &areab);

        printf("Digite o PIB da Cidade: ATENÇÃO! DIGITAR DECIMAL SEPARADO POR PONTO (.)\n");
        scanf("%f", &pibb);

            printf("Digite a quantidade de pontos Tutísticos da cidade:\n");
            scanf("%d", &pontosb);



         printf ("CARTA 1:\n");

           //printf ("ESTADO: A\n");

           printf ("ESTADO: %c\n", estado);

            printf ("CÓDIGO: %s\n", codigo);

            printf ("CIDADE: %s\n", cidade);

            printf ("POPULAÇÃO: %d\n", populacao);

            printf ("ÁREA: %f\n", area);

            printf ("PIB: %f\n", pib);

            printf ("PONTOS TURISTICOS: %d\n", pontos);

            
        printf ("CARTA 2:\n");
         
            printf ("Estado: %c\n", estadob);

            printf ("CÓDIGO: %s\n", codigob);

            printf ("CIDADE: %s\n", cidadeb);

            printf ("POPULAÇÃO: %d\n", populacaob);

            printf ("ÁREA: %f\n", areab);

            printf ("PIB: %f\n", pibb);

            printf ("PONTOS TURISTICOS: %d\n", pontosb);

          
                     
                     
            
      
        return 0;
        
    }






// #include <stdio.h>



 //   int main ()    {

  //      char  estado[01];
  //      char  codigo[03];
  //      char  cidade[15];
  //      int   populacao;
  //      float area;
  //      float pib;
  //      int   pontos; 
        float densidade;
        float pippercap;


        
// printf ("INICIO DE JOGO:\n");

// printf ("DIGITE OS DADOS DA PRIMEIRA CARTA DO JOGO\n");

      //       printf("Digite o Códiogo do Estado: sendo aceito somente A,B,C,D,E,F,G,H:\n");
      //       scanf("%c", estado);

       //      printf("Digite o Código do seu Estado:ATENÇÃO! LETRA  ANTERIOR + 1 2 3 OU 4:\n");
      //       scanf("%s" , &codigo);


         //    printf("Digite o Nome da sua Cidade: ATENÇÃO! SOMENTE NOME SEM SEPARAÇÃO:\n");
        //     scanf("%s" , &cidade);
 

         //    printf("Digite a População da Cidade: ATENÇÃO! DIGITAR NÚMERO INTEIRO: \n");
          //   scanf("%d", &populacao);


         //   printf("Digite a Área da Cidade: ATENÇÃO! DIGITAR DECIMAL SEPARADO POR PONTO (.) \n");
        //    scanf("%f" , &area);

       //     printf("Digite o PIB da Cidade: ATENÇÃO! DIGITAR DECIMAL SEPARADO POR PONTO (.) \n");
        //    scanf("%f", &pib);

         //   printf("Digite a quantidade de pontos Tutísticos da cidade: \n");
         //   scanf("%d", &pontos);


       //    densidade = (populacao)/(area);
       //    pippercap = (pib)/(populacao);


             
       //     printf ("ESTADO: %c\n", estado);

       //     printf ("CÓDIGO: %s\n", codigo);

         //   printf ("CIDADE: %s\n", cidade);

          //  printf ("POPULAÇÃO: %d\n", populacao);

         //   printf ("ÁREA: %f\n", area);

        //    printf ("PIB: %f\n", pib);

        //    printf ("PONTOS TURISTICOS: %d\n", pontos);

       //     printf ("A Densidade populacional e: %f \n", densidade);

         //   printf ("PIB per Capita  e: %f \n", pippercap);

        
     //    printf ("CONTINUE O JOGO , INSERINDO DADOS DA SEGUNDA CARTA\n");

         
      
      //  return 0;
        
//    }
//

