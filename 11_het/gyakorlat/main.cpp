#include "lista.h"

int main() {
    cout << "Lancolt lista letrehozasa tomb elemeibol\n"
            "Kiiras forditott sorrendben\n";
    int sz[] = {1,2,3,4,5,-1};
    lista* horgony = create_lista(sz);
    cout << "Eredeti lista tartalma:\n";
    out_lista(horgony);
    horgony = add_front(horgony, 42);
    cout << "A lista elejere torteno beszuras utan:\n";
    out_lista(horgony);
    horgony = add_end(horgony, 666);
    cout << "A lista vegere torteno beszuras utan:\n";
    out_lista(horgony);
    delete_lista(horgony);

    horgony = NULL;
    horgony = add_front(horgony, 42);
    cout << "Uj lista egyetlen elembol amit elore szurunk be:\n";
    out_lista(horgony);
    delete_lista(horgony);
    
    horgony = NULL;
    horgony = add_front(horgony, 666);
    cout << "Uj lista egyetlen elembol amit a vegere szurunk be:\n";
    out_lista(horgony);
    delete_lista(horgony);
    return 0;
}