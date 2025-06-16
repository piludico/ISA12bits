int fatorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

void main() {
    int numero = 3;
    int resultado;
    int a = 5;
    int b = 2;
    int c;

    c = a * b;
    c = c / b;
    c = c << 1;
    c = a & b;
    c = a | b;
    c = a ^ b;
    
    if (a < b) {
        c = 0;
    } else {
        c = 1;
    }

    resultado = fatorial(numero);
}
