title: Mastermind
task_id: 03_mastermind
points: 1

**Tavoite:** Lisää harjoitusta taulukkojen käsittelystä.

Toteuta funktio `void mastermind(const int *solution, const int
*guess, char *result, unsigned int len)` joka vertaa
kokonaislukutaulukkoa _guess_ taulukkoon _solution_. Molemmat taulukot
sisältävät _len_ kokonaislukua välillä 0 ja 9. Funktio tuottaa
merkkitaulukon _result_, jossa on niin ikään _len_ merkkiä
seuraavaasti:

- Jos taulukoissa _solution_ ja _guess_ on sama numero N:nnessä
  taulukon paikassa, kyseinen paikka _result_ - taulukossa merkataan
  '+' - merkillä.

- Jos taulukossa _guess_ on sellainen numero N:nnessä paikassa, joka
  sijaitsee jossain toisessa kohdassa _solution_ - taulukossa,
  kyseinen paikka _result_ - taulukossa asetetaan merkiksi '\*'.

- Jos N:s paikka taulukossa _guess_ sisältää numeron, jota ei
  esiinny lainkaan taulukossa _solution_, kyseinen paikka _result_ -
  taulukossa merkataan merkillä '-'.

Huomaa että taulukkoja _solution_ ja _guess_ ei kuulu muokata
funktiossa, kun taas taulukko _result_ on sellainen jonka funktio
kirjoittaa.

Esimerkiksi kun _len_ on 6, _solution_ on { 2, 6, 6, 3, 5, 3} ja
_guess_ on {4, 5, 6, 1, 8, 9}, funktio asettaa _result_ taulun
sisältämään arvot {'-', '\*', '+', '-', '-', '-'}.

_main_-funktio tiedostossa main.c toteuttaa yksinkertaisen
[Mastermind]-pelin, jolla voi testata toteutustasi.

[Mastermind]: http://en.wikipedia.org/wiki/Mastermind_(board_game)
