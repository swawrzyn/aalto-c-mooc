title: Numeroiden vaihto
task_id: 02_basics_1
points: 1

**Tavoite**: Ensikosketus osoittimien käyttöön.

Toteuta funktio `number_swap(int *a, int *b)` joka saa kaksi
_int_-osoitinta parametrikseen. Funktion tulee vaihtaa osoittimien
päässä olevat arvot keskenään. Esimerkiksi seuraavassa koodissa
_val1_:n sisällöksi pitäisi tulla 5 ja _val2_:n sisällöksi 4.

    :::c
    int val1 = 4; int val2 = 5;
    number_swap(&val1, &val2);
    if (val1 == 5 && val2 == 4) {
        printf("Great, it worked!\n");
    }
