#include <stdio.h>

// Función para calcular el residuo de una división
int calcularResiduo(int dividendo, int divisor) {
    return dividendo % divisor;
}

int main() {
    int numero, division;
    char opcion;
    printf("==============================================\n");
    printf("||                                          ||\n");
    printf("||   ¡Bienvenido al programa de modulo!     ||\n");
    printf("||                                          ||\n");
    printf("==============================================\n");
    printf("\n");
    printf("1. La modularización es una tecnica que consiste en dividir un programa en partes mas pequenas llamadas modulos o funciones\n");
    printf("2. Cada modulo tiene una tarea especifica y se puede reutilizar en diferentes partes del programa.\n");
    printf("3. Ayuda a mejorar la legibilidad, mantenibilidad y organización del codigo, al tiempo que permite un enfoque modular y estructurado en el desarrollo de software.\n");
    printf("\n\n");
    do {
        // Solicitar al usuario un número entero y el divisor
        printf("Ingrese un numero entero: ");
        scanf("%d", &numero);
    
        printf("Ingrese el divisor: ");
        scanf("%d", &division);
    
        // Calcular el residuo utilizando la función modular
        int residuo = calcularResiduo(numero, division);
    
        // Mostrar el resultado en consola
        printf("El residuo de la división es: %d\n", residuo);
    
        // Preguntar al usuario si desea repetir el proceso
        printf("¿Desea repetir el proceso? [y/n]: ");
        scanf(" %c", &opcion);
    } while (opcion == 'y' || opcion == 'Y');
    
    return 0;
}
