title: Taulukkosumma
task_id: 02_basics_2
points: 1

**Tavoite:** Harjoittele taulukon käyttöä

Toteuta funktio `int array_sum(int *array, int count)`, joka laskee
taulukon _array_ alkioiden summan ja palauttaa sen
paluuarvonaan. Taulukossa olevien numeroiden määrä kerrotaan
parametrilla _count_.

Esimerkiksi seuraavan ohjelman tulisi asettaa _ret_ 1110:ksi.

    :::c
    int valarray[] = { 10, 100, 1000 };
    int ret = array_sum(valarray, 3);
