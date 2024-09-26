#include <stdio.h>

// Función que genera los primeros 'n' números de la serie de Fibonacci
void fibonacci(int n) {
    int a = 0, b = 1, siguiente;
    
    printf("Los primeros %d números de la serie de Fibonacci son:\n", n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        siguiente = a + b;
        a = b;
        b = siguiente;
    }
    printf("\n");
}

// Función para pedir un número entre 1 y 20
int pedir_numero() {
    int x;
    do {
        printf("Ingresa un número entre 1 y 20: ");
        scanf("%d", &x);
        
        if (x < 1 || x > 20) {
            printf("Por favor, ingresa un número válido entre 1 y 20.\n");
        }
    } while (x < 1 || x > 20);
    
    return x;
}

int main() {
    int x = pedir_numero();
    fibonacci(x);

    // Espera una tecla para salir
    printf("Presiona cualquier tecla para salir...\n");
    getchar();  // Captura el enter que quedó después de scanf
    getchar();  // Espera la entrada de otra tecla
    return 0;
}
