title: Liitä taulukot
task_id: 03_join
points: 1

**Tavoite:** Harjoittele muistinkäsittelyfunktioita. Lisäksi tällä
kertaa teet oman lähdetiedostosi ja siihen liittyvät otsakemäärittelyt
itse.

Toteuta funktio **join_arrays** joka saa parametrikseen kolme
kokonaislukutaulukkoa, sekä kustakin taulukosta sen alkioiden
lukumäärän. Kaikkiaan funktio saa siis kuusi parametria, jotka on
esiteltävä tässä järjestyksessä:

- ensimmäisen taulukon alkioiden lukumäärä (unsigned integer)
- osoitin ensimmäiseen kokonaislukutaulukkoon (alkiot tyyppiä int)
- toisen taulukon alkioiden lukumäärä (unsigned integer)
- osoitin toiseen kokonaislukutaulukkoon (tyyppiä int)
- kolmannen taulukon alkioiden lukumäärä (unsigned integer)
- osoitin kolmanteen kokonaislukutaulukkoon (tyyppiä int)

Funktion tulee liittää nämä kolme taulukkoa yhdeksi taulukoksi, joka
sisältää kaikki kolmessa taulukossa listatut kokonaisluvut yllä
mainitussa järjestyksessä. Uusi yhdistetty taulukko tulee varata
dynaamisesti ja funktion tulee palauttaa osoitin tähän uuteen
taulukkoon. Et saa muuttaa alkuperäisiä taulukoita mitenkään.

_main.c_ - tiedoston _main_-funktiosta näet esimerkin kuinka yllä
kuvattua funktiota kutsutaan. _source.c_:n lisäksi sinun pitää
muokata _source.h_ - tiedostoa, jotta _main_ - funktio ja tehtävän
testit näkevät toteuttamasi funktion. Muista myös sisällyttää
tarvitsemasi C-kirjaston otsakkeet. Huomaa että alkutilassa ohjelma ei
edes käänny, ennenkuin olet toteuttanut vähintäänkin jonkinlaisen
rungon _join_arrays_ - funktiosta, joka vastaa _main.c_:n olettamaa funktiorajapintaa.
