title: Komentoriviparseri
points: 2
task_id: 02_parser

**Tavoite:** Perehdytään komentoriviargumentteihin, ja palautellaan
mieliin linkitetyn listan toimintaa.

Komentoriviargumentteja käytetään ohjaamaan komentoriviltä käynnistettävän
ohjelman toimintaa. Lyhyt yhteenveto komentoriviargumenteista ja
komentorivioptioiden tyypillisestä toiminnasta annettiin
[modulissa 4]. Tässä tehtävässä toteutetaan funktiot annettujen
komentorivioptioiden käsittelemiseksi.

[modulissa 4]: ../Module_4/index.html#03_cmdline

Ohjelmasi tulee komentorivioptiot normaalin mallisesta
merkkijonotaulukosta (_argv_), ja sijoittaa havaitut komentorivioptiot
linkitettyyn listaan, joka koostuu _option_ -
tietorakenteista. _argv_ - taulukko sisältää siis ohjelmalle annetut
komentoriviargumentit, ja taulukossa on _argc_ alkiota.

Komentorivioption tunnistaa siitä, että se alkaa viivamerkillä
(`-`). Viivamerkkiä seuraa yksi kirjainmerkki, jolla option
tunnistaa. Tällainen optio lisätään linkitettyyn listaan uudeksi
alkioksi, ja vastaava kirjainmerkki sijoitetaan _options_ -
tietorakenteen _optchar_ - kenttään. Mikäli optiota seuraa merkkijono,
joka ei ala viivalla, kyseessä on parametri kyseiselle optiolle, joka
tulee tallentaa samaan tietorakenteeseen. Tehtäväpohjassa tuleva
tietorakenne ei vielä sisällä kenttää tälle, joten **sinun tulee
määritellä itse tarvittava lisäkenttä (tai kentät)
tietorakenteeseen**. Jos optiota seuraa suoraan toinen optio,
kyseisellä optiolla ei ole määriteltyä parametria, ja optio tulkitaan
vain annetuksi (se voi olla esimerkiksi on/off - vipu, jolla säädetään
ohjelman toimintaa jotenkin).

Mikäli komentorivillä on merkkijono, joka ei ole edellä annetun option
parametri, se tulee vain sivuuttaa.

Linkitettyjen listojen toimintaa voi kerrata [modulista 3].

[modulista 3]: ../Module_3/index.html#06_linkedlist

## a) Parsi optiot

Toteuta funktio _get_options_, joka käsittelee komentoriviä vastaavan
merkkijonotaulukon ja rakentaa sen perusteella edellä kuvatun
kaltaisen linkitetyn listan, varaten tarvittavan muistin
dynaamisesti. Jokaista optiota tulee siis vastata yksi alkio
linkitetyssä listassa.

Lisäksi sinun tulee toteuttaa funktio _free_options_, joka vapauttaa
edellä mainitun funktion varaaman muistin.

## b) Tiedustele optioita

Toteuta funktio _is_option_ joka palauttaa nollasta poikkeavan arvon,
mikäli paramterissa _optc_ annettu optio löytyy linkitetystä listasta
_opt_. Mikäli optiota ei löydy, palautetaan 0.

Toteuta lisäksi funktio _get_optarg_, joka palauttaa optiota _optc_
vastaavan optioparametrin. Mikäli optioparametria ei oltu määritelty,
tai mikäli optio ei ylipäätään löydy linkitetystä listasta,
palautetaan NULL.

_src/main.c_ esittää kuinka funktioita käytetään. Voit testata
ohjelmaa komentoriviltä käynnistämällä ja antaa erilaisia
optioita. Käännetty ohjelma löytyy _src_-hakemistosta nimellä
"main". Mikäli et halua käyttää komentoriviä, voit myös muokata
main-funktiota esimerkiksi kysymään "komentoriviargumentteja"
_scanf_-funktiota käyttäen.
