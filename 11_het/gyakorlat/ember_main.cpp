#include "lista_ember.h"

int main() {
    cout << "Lancolt lista letrehozasa veletlenszeruen\n";
    srand(time(NULL));
    lista* horgony = create_lista();
    out_lista(horgony);
    cout << "A 2000 utan szuletettek torleset kovetoen:\n";
    horgony = delete_items(horgony);
    out_lista(horgony);
    delete_lista(horgony);
    return 0;
}