title: Taulukkomakroja
task_id: 04_arraytool
points: 3

**Tavoite:** Harjoittele makrojen käyttöä.

Tässä tehtävässä ei ole varsinaista .c - pääteistä tiedostoa
työstettäväksi perinteisen _main.c_:n lisäksi, vaan tehtävä tehdään
_src/arraytool.h_ - otsakkeeseen. Sinne sinun tulee toteuttaa
seuraavat makrot:

**(a): CHECK(cond, msg)** joka tarkistaa loogisen ehdon _cond_, ja
mikäli ehto ei täyty, tulostaa merkkijonon _msg_
standarditulostevirtaan. Tämä siis on hieman kuten C-kirjastossa
määritelty _assert_-makro, mutta ei keskeytä ohjelman
suoritusta. Esimerkki makron käytöstä: `CHECK(5 > 10, "5 > 10
  failed\n");`

**(b): MAKE_ARRAY(type, n)** joka luo dynaamisesti varatun taulukon,
jossa on _n_ alkiota tyypiä _type_. Makro palauttaa osoittimen
varattuun muistiin. Esimerkki makron käytöstä: `void *ptr =
  MAKE_ARRAY(int, 10);`

**(c): ARRAY_IDX(type, array, i)** joka käsittelee taulukkoa _array_
kohdasta _i_. Taulukon alkioiden tyyppi on annettu parametrissa
_type_. Esimerkki makron käytöstä: `ARRAY_IDX(int, ptr,
  i) = i * 2;`

Kun makrot on oikein toteutettu, oletuksena mukana tuleva _src/main.c_
varaa kokonaislukutaulukon 10:lle luvulle, alustaa sen ja tulostaa
taulukon sisällön. Funktio testaa myös CHECK-makroa. Voit toki muuttaa
main-funktiota haluamasi mukaan.
