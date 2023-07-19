title: Laiva
task_id: 04_vessel
points: 1
last_modified: 2016-03-11 (Lisätty pari sanaa osoittimista ja mallocista)

**Tavoite:** Harjoitellaan rakenteisten tietotyyppien määrittelyä ja
peruskäyttöä.

Tässä harjoituksessa sinun tulee toteuttaa kolme asiaa: 1) määrittele
rakenteinen tietotyyppi **vessel**, joka kuvaa kuvitteellista
valtamerialusta; 2) toteuta funktio **create_vessel** joka luo uuden
instanssin määrittelemästäsi _vessel_ - tietotyypistä; 3) toteuta
funktio **print_vessel** joka tulostaa _vessel_ - rakenteen sisällön.

_vessel_ - tietorakenteessa tulee olla seuraavat kentät. On tärkeää
että kenttien nimet ovat kuten alla annettu, koska muuten
_src/main.c_ tai tehtävän testikoodit eivät käänny.

- _name_: laivan nimi merkkijonona. Merkkijono tulee kopioida
  **create_vessel** - funktion parametrista _p_name_. Et voi
  sijoittaa sitä suoralla sijoitusoperaattorilla. Nimeä tulee voida
  muokata jälkeenpäin, ja siinä on oltava tilaa 30 merkille (plus
  lopetusmerkki). Tila on varattava pinosta (stack) eikä keosta
  (heap), eli älä käytä dynaamista muistia tähän. Jos funktion
  parametrina annettu nimi on pidempi kuin 30 merkkiä, se tulee
  katkaista 30 merkkiin.

- _length_: laivan pituus double-tyyppisenä liukulukuna. Voit
  olettaa että pituus ilmaistaan metreinä (tosin asialla ei suurta
  käytännön merkitystä tässä tehtävässä).

- _depth_: laivan syväys double-tyyppisenä liukulukuna. Tämänkin
  osalta voi olettaa että syväys ilmaistaan metreinä.

- _crg_: laivan lasti. Tämän tulisi vastata yhtä _cargo_ -
  tietorakennetta, joka on annettu _source.h_ - otsakkeessa.

Sinun tulee määritellä _vessel_ - rakenne _source.h_ -
otsaketiedostossa, jotta muut lähdetiedostot näkevät sen.

_create_vessel_ saa vastaavat parametrit kuin mitä määriteltävässä
_vessel_-tietorakenteessa on. Sinun tulee sijoittaa nämä arvot
luomaasi _vessel_ - tyyppiseen muuttujaan. Kannattaa kiinnittää
erityishuomiota siihen miten käsittele merkkijonoparametria
_name_. Merkkijonosta tulee luoda kopio.

**HUOM:** _create_vessel_ palauttaa paluuarvonaan kopion luomastasi
vessel-tietorakenteesta, paluuarvo ei siis ole osoitin. Funktion
ulkopuolella oleva koodi ei osaa vapauttaa mitään varaamaasi
muistia, joten _malloc_:in käyttö aiheuttaa muistivuodon (ellet
vapauta muistia saman tien, missä ei olisi hirveästi
järkeä). Kannattaa miettiä tarvitsetko osoittimia lainkaan tässä
tehtävässä.

_print_vessel_ tulostaa annetun _vessel_ - rakenteen sisällön siten
että jokainen tietorakenteen kenttä tulostuu omalle rivilleen,
mukaanlukien _cargo_-rakenteeseen kuuluvat kentät. Liukuluvut tulee
tulostaa siten että niistä näytetään yksi desimaali. Esimerkiksi, kun
edellä mainitut funktiot on toteutettu oikein, _src/main.c_:n
esimerkkiohjelman tulisi tulostaa seuraavaa:

<pre>
Apinalaiva
180.0
8.5
Bananas
10000
1500.0</pre>
