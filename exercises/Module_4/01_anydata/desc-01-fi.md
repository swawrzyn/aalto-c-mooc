title: Jokudata
task_id: 01_anydata
points: 2

**Tavoite:** Hankkia tuntumaa unioneiden käsittelyyn

Tässä tehtävässä määritellään uusi tietotyyppi _AnyData_, joka voi
pitää sisällään joko tavun (eli _char_), kokonaisluvun (_int_) tai
_double_ - tyyppisen liukuluvun. _AnyData_ - tietotyyppi määritellään
_typedef_ määritelmän avulla, mikä on hyvä huomioida kun tietotyyppiä
käytetään.

_AnyData_ on rakenteinen tietotyyppi joka koostuu kahdesta kentästä:
_type_ on enumeraatio, joka kertoo mikä kolmesta edellä mainitusta
tyypistä rakenteeseen on kulloinkin tallennettu, sekä _value_ on
unionirakenne, johon on tallennettu kyseisen tyyppinen arvo. Näet
otsakkeesta _anydata.h_ kuinka tyyppi on tarkalleen ottaen
määritelty. Lisäksi _type_ - kenttään voi olla tallennettu arvo
_UNDEF_, mikäli rakenteeseen ei ole vielä tallennettu mitää arvoa.
  
Toteuta seuraavat osat:

## a) Aseta arvo

Toteuta funktiot _setByte_, _setInt_ ja _setDouble_ jotka palauttavat
uuden AnyData-tyyppisen objektin paluuarvonaan, perustuen annettuun
tyyppiin ja arvoon, joka kyseisen funktion parametrissa on annettu.

## b) Tulosta arvo

Toteuta funktio _printValue_ joka tulostaa _AnyData_:n tallentaman
arvon. Tulostusformaatti riippuu muuttujaan asetetun arvon
tyypistä. Varsinaiseen tulostukseen sinun täytyy käyttää yhtä
_anydata.c_:ssä valmiiksi annetuista funktioista (_printByte_,
_printInt_ tai _printDouble_), riippuen muuttujaan tallennetun arvon
tyypistä.
