#include <stdio.h>
int main() {
	
	//CARTA 1
	int pontos_turisticos1;
	unsigned long int populacao1;
	char estado1, codigo1[4], cidade1[50];
	float pib1, area1;
	float densidade1, pib_per_capita1, superPoder1;
	
	//CARTA 2
	int pontos_turisticos2;
	unsigned long int populacao2;
	char estado2, codigo2[4], cidade2[50];
	float pib2, area2;
	float densidade2, pib_per_capita2, superPoder2;
	
	int retorno;
	
	//Entrada de dados da CARTA 1
	printf("Carta 1:\n");
	printf("Estado (uma letra de A a H): ");
	retorno = scanf(" %c", &estado1);
	
	printf("Digite o codigo da carta 1 (ex A01, B02): ");
	retorno = scanf("%s", codigo1);
	
	printf("Digite o nome da cidade: ");
	retorno = scanf(" %[^\n]", cidade1);
	
	printf("Populacao: ");
	retorno = scanf("%lu", &populacao1);
	
	printf("Area: ");
	retorno = scanf("%f", &area1);
	
	printf("PIB: ");
	retorno = scanf("%f", &pib1);
	
	printf("Quantidade de pontos turisticos: ");
	retorno = scanf("%d", &pontos_turisticos1);
	
	// ---Cálculos para a Carta 1 ---
	//Calcula a densidade populacional: População dividida pela Área
	densidade1 = (float)populacao1 / area1;

	//Calcula o PIB per Capita: (PIB em bilhões * 1 bilhão) dividido pela População
	// Multiplicamos por 1,000,000,000.0 para converter o PIB de bilhões para reais
	pib_per_capita1 = (pib1 * 1000000000.0) / populacao1;
	
	//Calculo do super poder
	superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + 
                   pib_per_capita1 + (1.0f / densidade1);
	
	//Entrada de dados da CARTA 2
	printf("\nCarta 2:\n");
	
	printf("Estado (uma letra de A a H): ");
	retorno = scanf(" %c", &estado2);
	
	printf("Digite o codigo da carta 2 (ex A01, B02): ");
	retorno = scanf("%s", codigo2);
	
	printf("Digite o nome da cidade: ");
	retorno = scanf(" %[^\n]", cidade2);
	
	printf("Populacao: ");
	retorno = scanf("%lu", &populacao2);
	
	printf("Area: ");
	retorno = scanf("%f", &area2);
	
	printf("PIB: ");
	retorno = scanf("%f", &pib2);
	
	printf("Quantidade de pontos turisticos: ");
	retorno = scanf("%d", &pontos_turisticos2);
	
	// --- Cálculos para a Carta 2 --- 
	//Calcula a densidade populacional: População dividida pela Área
	densidade2 = (float)populacao2 / area2;
	
	//Calcula o PIB per Capita: (PIB em bilhões * 1 bilhão) dividido pela População
	// Multiplicamos por 1,000,000,000.0 para converter o PIB de bilhões para reais
	pib_per_capita2 = (pib2 * 1000000000.0) / populacao2;
	
	//Calculo do super poder
	superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + 
                   pib_per_capita2 + (1.0f / densidade2);
		
	//EXIBIÇÃO DOS DADOS DA CARTA 1
	printf("\nCARTA 1:");
	
	printf("\nEstado: %c\n", estado1);
	printf("Codigo da carta: %s\n", codigo1);
	printf("Nome da cidade: %s\n", cidade1);
	printf("Populacao: %lu\n", populacao1);
	printf("Area: %.2f km²\n", area1);
	printf("PIB: %.2f bilhoes de reais\n", pib1);
	printf("Numero de pontos turisticos: %d\n", pontos_turisticos1);
	printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
	printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
	printf("Super Poder:%.2f\n", superPoder1);
	
	//ExIBIÇÃO DOS DADOS DA CARTA 2
	printf("\nCARTA 2:");
	
	printf("\nEstado: %c\n", estado2);
	printf("Codigo da carta: %s\n", codigo2);
	printf("Nome da cidade: %s\n", cidade2);
	printf("Populacao: %lu\n", populacao2);
	printf("Area: %.2f km²\n", area2);
	printf("PIB: %.2f bilhoes de reais\n", pib2);
	printf("Numero de pontos turisticos: %d\n", pontos_turisticos2);
	printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
	printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
	printf("Super Poder:%.2f\n", superPoder2);
	
	//Comparação dos atributos
	printf("\nComparacao de Cartas:\n");
    printf("Populacaoo: Carta %d venceu (%d)\n", populacao1 > populacao2 ? 1 : 2, populacao1 > populacao2);
    printf("area: Carta %d venceu (%d)\n", area1 > area2 ? 1 : 2, area1 > area2);
    printf("PIB: Carta %d venceu (%d)\n", pib1 > pib2 ? 1 : 2, pib1 > pib2);
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", pontos_turisticos1 > pontos_turisticos2 ? 1 : 2, pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", densidade1 < densidade2 ? 1 : 2, densidade1 < densidade2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", pib_per_capita1 > pib_per_capita2 ? 1 : 2, pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: Carta %d venceu (%d)\n", superPoder1 > superPoder2 ? 1 : 2, superPoder1 > superPoder2);
	
	
	return 0;
}