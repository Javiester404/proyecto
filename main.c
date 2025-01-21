/*PROYECTO 7: CALCULADORA DE TARIFAS EN UN ESTACIONAMIENTO TEMPORAL 
Descripción: 
Este programa maneja tarifas según el tiempo de estancia en un estacionamiento: 
1.	Solicita el tiempo que el vehículo estuvo estacionado (en horas o fracciones). 
2.	Calcula la tarifa con base en una tabla de precios (por hora completa y fracción). 
3.	Solicita el pago del cliente y calcula el cambio. 
4.	Muestra el desglose del cambio en billetes y monedas. 
Requerimientos técnicos: 
•	Uso de estructuras condicionales para validar el inicio de sesión y las operaciones.
•	Bucles para implementar el menú y permitir múltiples operaciones hasta que el usuario decida salir
•	Tarifa basada en tiempo dinámico. 
•	Optimización de la entrega del cambio. 
*/
#include <stdio.h>

void calcularCambio(float cambio);

int main() {
    float tiempo, tarifa, pago, cambio;
    int billetes20, billetes10, billetes5, monedas1, monedas050, monedas025, monedas010, monedas005;
    int opc;
    do {
        printf("\nPROYECTO 7: CALCULADORA DE TARIFAS EN UN ESTACIONAMIENTO TEMPORAL\n");
        printf("1. Ingresar tiempo de estacionamiento\n");
        printf("2. Calculo de cambio y desglose de cambio\n");
        printf("3. Salir\n");
        printf(">>Seleccione una opcion: ");
        scanf("%d", &opc);

        switch(opc) {
            case 1:
                printf("Por favor ingrese su tiempo en el estacionamiento (en horas o fracciones):\n");
                scanf("%f", &tiempo);
                tarifa = tiempo * 2.5;
                printf("La tarifa es: $%.2f\n", tarifa);
                break;
            case 2:
                printf("Ingrese el pago del cliente: ");
                scanf("%f", &pago);
                cambio = pago - tarifa;
                printf("El cambio es: $%.2f\n", cambio);
                billetes20 = cambio / 20;
                cambio = cambio - billetes20 * 20;
                billetes10 = cambio / 10;
                cambio = cambio - billetes10 * 10;
                billetes5 = cambio / 5;
                cambio = cambio - billetes5 * 5;
                monedas1 = cambio / 1;
                cambio = cambio - monedas1 * 1;
                monedas050 = cambio / 0.50;
                cambio = cambio - monedas050 * 0.50;
                monedas025 = cambio / 0.25;
                cambio = cambio - monedas025 * 0.25;
                monedas010 = cambio / 0.10;
                cambio = cambio - monedas010 * 0.10;
                monedas005 = cambio / 0.05;
                cambio = cambio - monedas005 * 0.05;
                printf("Desglose del cambio:\n");
                printf("Billetes de $20: %d\n", billetes20);
                printf("Billetes de $10: %d\n", billetes10);
                printf("Billetes de $5: %d\n", billetes5);
                printf("Monedas de $1: %d\n", monedas1);
                printf("Monedas de $0.50: %d\n", monedas050);
                printf("Monedas de $0.25: %d\n", monedas025);    
                printf("Monedas de $0.10: %d\n", monedas010);
                printf("Monedas de $0.05: %d\n", monedas005);
                break;
            case 3:
                printf("Gracias por usar el programa\n");
                break;
            default:
                printf("Opcion no valida. Intente de nuevo\n");
        }
    } while(opc != 3);
    return 0;
}