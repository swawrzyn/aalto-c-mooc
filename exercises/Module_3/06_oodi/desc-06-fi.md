title: Oodi
task_id: 06_oodi
points: 3

**Tavoite:** Harjoittele dynaamisesti varattujen ja kokoaan muuttavien
taulukoiden käyttöä tietorakenteista koostetuista alkioista.

Tässä tehtävässä toteutat yksinkertaisen tietokannan kurssiarvosanojen
tallentamiseen. Tietokannan jokainen tietue noudattaa `struct oodi`
rakennetta, ja tietokanta muodostuu dynaamisesti varatusta taulukosta,
jossa siis on useita _struct oodi_ - instansseja peräkkäin. Aina kun
uusi alkio lisätään taulukkoon, pitää varmistua että taulukolle on
varattu riittävästi muistia uuden alkion tallentamiseen.

_struct oodi_ - määrittely ja sen kenttien kuvaukset löytyvät
tiedostosta _oodi.h_. Kannattaa perehtyä tietorakenteen määrittelyyn
ja selvittää itselleen mitkä kentät saavat tarvitsemansa tilan osana
tietorakennetta, ja mille kentille tarvittava tila pitää varata
erikseen. Esimerkiksi kenttä _course_ on merkkijono, jolle pitää
dynaamisesti varata tarvittu tila erikseen.

Harjoituksessa on kolme kohtaa, joista kustakin saa yhden
pisteen. Kannattaa toteuttaa tehtäväkohdat annetussa järjestyksessä,
koska myöhemmät tehtäväkohdat saattavat riippua aiemmin toteutetuista
funktioista. Kannattaa myös testata ohjelmaasi jokaisen tehtäväkohdan
välissä, ja mikäli se näyttää toimivan, lähettää pisteytystä varten
palvelimelle. Vaikka koko tehtävä ei olisikaan valmis, yksittäisistä
tehtäväkohdista voi silti saada pisteitä.

## (a) Alusta opiskelijatietue

Toteuta funktio '**init_record**' joka alustaa annetun _oodi_ -
rakenteen osoittimen _or_ osoittamassa paikassa saamiensa parametrien
(_p_student, p_course,_ jne...) pohjalta. Sinun ei tarvitse varata
muistia tässä tehtäväkohdassa, vaan voit olettaa että _or_ - osoitin
viittaa muistialueeseen jossa on riittävästi tilaa varattuna. Sinun
tulee kuitenkin varata muistia niille rakenteen kentille, joiden
vaatima tila ei sisälly _oodi_ - rakenteeseen. Kannattaa esimerkiksi
kiinnittää huomiota merkkijonoihin.

Funktio palauttaa arvon 1, jos alustus onnistui, tai 0 jos se
epäonnistui jostain syystä. Funktio epäonnistuu esimerkiksi silloin,
jos sille annetaan virheellinen opiskelijanumero, jossa on enemmän
kuin 6 merkkiä. Voit olettaa että mikä tahansa 6 merkkiä pitkä (tai
lyhyempi) merkkijono on hyväksyttävä opiskelijanumero.

## (b) Lisää uusi tietue

Toteuta funktio '**add_record**' joka lisää uuden _oodi_ -
tietorakenteen dynaamisesti varatun taulukon loppuun, ja tarvittaessa
varaa taulukolle lisää tilaa. Osoitin taulukon alkuu tulee
funktioparametrissa _array_, ja taulukon nykyinen pituus parametrissa
_length_. Lisättävä tieto annetaan parametrissa _newrec_. On syytä
huomioida että _newrec_:n sisältö tulee kopioida taulukkoon oikealle
paikalle, ja jälleen kannattaa kiinnittää huomiota osoittimien
käsittelyyn.

Funktio palauttaa osoittimen taulukkoon lisäyksen jälkeen. Tämähän
saattaa olla eri osoite kuin se, joka _array_ - parametrissa annettiin
sisään.

## (c) Päivitä arvosanaa

Toteuta funktio _change_grade_, joka päivittää arvosanaa (_newgrade_)
ja suorituspäivää (_newdate_) taulukossa olevaan alkioon. Muutettava
taulukon alkio tunnistetaan opiskelijanumerolla (_p_student_) ja
kurssikoodilla (_p_course_). Molempien pitää täsmätä, jotta muutos
voidaan tehdä. Mikäli vastaavaa alkiota ei löydy, funktio ei muuta
mitään. Funktio palauttaa arvon 1, mikäli jotain alkiota muutettiin,
tai 0, mikäli vastaavaa taulukon alkiota ei löytynyt, eikä muutosta
näin ollen tehty. Voit olettaa että kukin
opiskelijanumero/kurssikoodi - yhdistelmä esiintyy taulukossa
korkeintaan kerran.
