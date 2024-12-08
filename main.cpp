#include "struct.h"

int main() {
    Escultor e(50, 50, 50);

    // corpo da maça
    e.setColor(1.0, 0.0, 0.0, 1.0); // vermelho
    e.putSphere(25, 25, 25, 10);

    // Folha da maçã
    e.setColor(0.0, 1.0, 0.0, 1.0); // Verde
    e.putBox(20, 22, 35, 37, 25, 26);

    // Haste da maçã
    e.setColor(0.6, 0.3, 0.0, 1.0); // marrom
    e.putBox(24, 26, 30, 40, 24, 26);

    // Salva OFF
    e.writeOFF("maca.off");

    return 0;
}
