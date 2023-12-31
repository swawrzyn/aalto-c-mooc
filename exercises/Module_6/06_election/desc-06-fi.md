title: Vaalijärjestelmä
points: 2
task_id: 06_election

**Tavoite:** Palautellaan mieliin tiedoston käsittelyä, dynaamisia
taulukoita ja tietorakenteita, sekä järjestelyalgoritmien käyttöä.

Toteuta vaalijärjestelmä, joka laskee äänet tiedostosta jossa kukin
ääni on listattu omalla rivillään. Järjestelmään toteutetaan kaksi
funktiota seuraavasti:

**(a)** funktio _read_votes_ joka lukee äänet annetusta
tekstitiedostosta. Kukin ääni on annettu tiedostossa omalla
rivillään, ja siinä on enintää 39 merkkiä. Tiedostossa
_src/votes.txt_ on lyhyt esimerkki. Tiedoston perusteella tulee
rakentaa dynaaminen taulukko, jonka kukin elementti on _votes_ -
tietorakenne. Kukin erilainen tiedoston sisältämä nimi tulee
sisältyä vain kerran taulukkoon, ja tietorakenteen tulee ilmaista
kuinka monta kertaa kyseinen nimi esiintyi tiedostossa. Toisin
sanoen taulukossa on niin monta alkiota, kuin tiedostossa on
erilaisia nimiä. Taulukon loppu ilmaistaan alkiolla, jonka nimi on
tyhjä merkkijono. Annettu esimerkkitiedosto tuottaa siten
esimerkiksi taulukon jossa on neljä alkiota, sekä
loppualkio. Osoitin tuotettuun taulukkoon palautetaan funktion
paluuarvona.

Kannattaa lisäksi huomioida, että taulukon sisältämien nimien **ei
tule sisältää rivinvaihtomerkkiä**, jollainen tiedostosta löytyy
jokaisen nimen perässä.

**(b)** funktio _results_, joka tulostaa äänestyksen tuloksen
edellisen tehtäväkohdan tuottaman taulukon perusteella seuraavassa
formaatissa:

`name: votes`

Lisäksi tulokset tulee listata äänimäärän mukaisessa järjestyksessä
siten että eniten ääniä saanut nimi tulostetaan ensin. Tapauksissa
joissa äänimäärä on sama, nimet tulostetaan
aakkosjärjestyksessä. Kannattaa muistaa, että C:n
stadndardikirjastossa on hyödyllisiä apufunktioita järjestämisen
toteuttamiseksi (toki saa sen toteuttaa itsekin).

Esimerkiksi kun ajetaan _main.c_ - funktion sisältämä ohjelma
tiedostolle _src/votes.txt_, seuraavaa pitäisi tulostua:

<pre>
Trump: 4
Clinton: 2
Sanders: 2
Cruz: 1</pre>

(Esimerkki on täysin fiktiivinen.)

Kannattaa luoda omia testitiedostoja toteuttamiesi funktioiden
testaamiseksi. Toteuta funktiot tiedostoon _election.c_ sen pohjalta,
mitä määrittelyt tiedostossa _election.h_ sisältävät.
