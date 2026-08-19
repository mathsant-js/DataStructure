#include <stdio.h>

void mostrarDobros(int n) {
    for (int i = 1; i < n; i *= 2) { // O(1), O(1), O(log n)
        printf("%d\n", i); // O(1)
    }
} // O(2 + log n)

int main(){
    mostrarDobros(32); // O(2 + log n) + O(1)
    return 0; // O(1)
}

// O(2 + log n) + O(1) + O(1)
// G(n) = (4 + log n)
// O(log n)
