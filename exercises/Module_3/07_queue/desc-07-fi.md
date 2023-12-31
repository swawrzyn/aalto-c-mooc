title: Harjoitusjono
task_id: 07_queue
points: 3

**Tavoite:** Harjoittele tietorakenteiden ja osoittimien pyörittelyä
linkitetyn listan avulla.

Tässä tehtävässä toteutetaan yksikertainen jonotusjärjestelmä
opiskelijoita varten. Kukin jonon alkio sisältää opiskelijanumeron
sekä opiskelijan nimen. Jono toteutetaan abstraktina tietotyyppinä
**Queue**, ja sen käsittelyyn tarvittavat funktiot toteutetaan
tiedostossa _queue.c_. _queue.h_ määrittelee julkisen rajapinnan jonon
käsittelyyn ja _queuepriv.h_ sisältää määrittelyt jotka ovat
jonototeutuksen sisäisiä, ja jota toisten ohjelmamodulien ei tarvitse
tuntea. Jono toteutetaan linkitettynä listana.

Tässä linkitetyn listan variaatiossa ylläpidetään osoitinta sekä
ensimmäiseen listan alkioon että viimeiseen listan alkioon, sen
lisäksi että listan alkiot yhdistetään toisiinsa _next_ - osoittimien
avulla. Listan viimeisen alkion _next_ osoitin on aina _NULL_.

Alkutilanteessa osoittimet _first_ ja _last_ ovat
_NULL_-osoittimia. Kun listaan lisätään ensimmäinen (ja ainut) alkio, molemmat
osoittimet siiretään osoittamaan siihen. Tämän jälkeen uudet lisäykset
listaan aiheuttavat _last_ - osoittimen siirtymisen, mutta _first_ -
osoitin jää jonon ensimmäisen alkion kohdalle.

Listaa käydään läpi seuraamalla _next_ - osoittimia alkio
kerrallaan. Kun lisäät alkion listan loppuun, sinun tulee siis
päivittää edellisen alkion _next_ - osoitinta (joka sitä ennen oli
NULL), sekä lisäksi _last_ - osoitinta.

Listan jokainen alkio varataan erikseen dynaamisesti muistista.

Jotkut funktiot _Queue_ - tyypin käsittelyksi on jo valmiiksi
toteutettu, mutta tärkeimmät funktiot sinun tulee toteuttaa. Nämä ovat
seuraavat:

## (a) Lisää opiskelija jonoon

Toteuta funktio '**Queue_enqueue**' joka lisää uuden opiskelijan jonon
perään. Funktio saa parametrikseen osoittimen tämän hetkiseen jonoon
(_q_), sekä lisättävän opiskelijan opiskelijanumeron (_id_), sekä
nimen (_name_). Funktio palauttaa arvon 1, mikäli lisäys onnistui tai
0, mikäli se epäonnistui. Mikäli opiskelijanumero on virheellinen
(enemmän kuin 6 merkkiä), funktion ei tule lisätä mitään, vaan
palauttaa 0. Koska opiskelijan nimen pituus ei ole tiedossa, eikä sitä
voida varata osana jonotietorakennetta, se pitää varata erikseen
dynaamisesti, kuten uuden jonoelementin vaatima tilakin.

Sinun ei tarvitse tarkistaa löytyykö opiskelija jo ennestään jonosta.

Testaamisen ja debugaamisen helpottamiseksi kannattaa hyödyntää
_main.c_ - tiedostoa ja sillä tuotettavaa _src/main_ - ohjelmaa
ennenkuin tehtävä lähetetään TMC:n tarkistettavaksi.

## (b) Ota jonon ensimmäinen

Toteuta funktio '**Queue_dequeue**' joka poistaa jonon ensimmäisen
alkion ja vapauttaa sille varatun muistin. Funktio palauttaa arvon 1,
mikäli jotain otettiin jonon kärjestä pois, tai 0 mikäli mitään ei
poistettu (esimerkiksi jos jono oli jo ennestään tyhjä).

Tämä rajapinta mahdollistaa sen, että koko jonon saa kerralla tyhjäksi
lauseella `while (Queue_dequeue(queue));`.

## (c) Tiputa annettu alkio

Toteuta funktio '**Queue_drop**' joka poistaa annetun
opiskelijanumeron jonosta, ja vapauttaa sen tarvitseman
muistin. Kyseinen alkio voi sijaita missä jonon kohdassa tahansa, ja
poiston jälkeen jonon pitää säilyä edelleen eheänä ja
toimintakuntoisena, eli kaikki osoittimet pitää päivittää asiaan
kuuluvasti.

Funktio palauttaa arvon 1, mikäli annettua opiskelijanumeroa vastaava
opiskelija löytyi ja se poistettiin, tai 0, mikäli kyseistä
opiskelijaa ei löytynyt, eikä mitään poistettu. Kukin funktiokutsu
poistaa vain yhden alkion: jos opiskelija sattuu olemaan jonossa
useamman kerran, vain ensimmäinen täsmäävä alkio poistetaan.
