#include<iostream>
#include<string>
#include<cctype>
#include<algorithm>

using namespace std;

#define MAX 12
#define MARS_MOONS 2        
#define JUPITER_MOONS 95    // according to NASA, only 57 of them are named
#define SATURN_MOONS 146    // according to NASA, only 63 of them are named 
#define URANUS_MOONS 28     // according to Wikipedia, 27 of them are named
#define NEPTUNE_MOONS 16    // according to Wikipedia, 14 of them are named
#define PLUTO_MOONS 5       // according to Wikipedia

void display_moon(string planet)
{
    if(planet == "EARTH")
    {
        cout << "\nEarth has 1 moon" << endl;
        cout << "Moon" << endl;
    }

    else if(planet == "MERCURY")
        cout << "\nNo moon for you, Mercury!" << endl;

    else if(planet == "VENUS")
        cout << "\nNo moon for you, Venus!" << endl;

    else if(planet == "MARS")
    {
        cout << "\nMars has " << MARS_MOONS << " moons:" << endl;
        cout << "Phobos" << endl;
        cout << "Deimos" << endl; 
    }

    else if(planet == "JUPITER")
    {
        cout << "\nJupiter has " << JUPITER_MOONS << " moons." << endl;
        cout << "The 57 named moons are listed below:" << endl;
        cout << "Io" << endl;
        cout << "Europa" << endl;
        cout << "Ganymede" << endl;
        cout << "Callisto" << endl;
        cout << "Amalthea" << endl;
        cout << "Himalia" << endl;
        cout << "Elara" << endl;
        cout << "Pasiphae" << endl;
        cout << "Sinope" << endl;
        cout << "Lysithea" << endl;
        cout << "Carme" << endl;
        cout << "Ananke" << endl;
        cout << "Leda" << endl;
        cout << "Thebe" << endl;
        cout << "Adrastea" << endl;
        cout << "Metis" << endl;
        cout << "Callirrhoe" << endl;
        cout << "Themisto" << endl;
        cout << "Megaclite" << endl;
        cout << "Taygete" << endl;
        cout << "Chaldene" << endl;
        cout << "Harpalyke" << endl;
        cout << "Kalyke" << endl;
        cout << "Iocaste" << endl;
        cout << "Erinome" << endl;
        cout << "Isonoe" << endl;
        cout << "Praxidike" << endl;
        cout << "Autonoe" << endl;
        cout << "Thyone" << endl;
        cout << "Hermippe" << endl;
        cout << "Aitne" << endl;
        cout << "Eurydome" << endl;
        cout << "Euanthe" << endl;
        cout << "Euporie" << endl;
        cout << "Orthosie" << endl;
        cout << "Sponde" << endl;
        cout << "Kale" << endl;
        cout << "Pasithee" << endl;
        cout << "Hegemone" << endl;
        cout << "Mneme" << endl;
        cout << "Aoede" << endl;
        cout << "Thelxinoe" << endl;
        cout << "Arche" << endl;
        cout << "Kallichore" << endl;
        cout << "Helike" << endl;
        cout << "Carpo" << endl;
        cout << "Eukelade" << endl;
        cout << "Cyllene" << endl;
        cout << "Kore" << endl;
        cout << "Herse" << endl;
        cout << "Dia" << endl;
        cout << "Eirene" << endl;
        cout << "Philophrosyne" << endl;
        cout << "Eupheme" << endl;
        cout << "Valetudo" << endl;
        cout << "Pandia" << endl;
        cout << "Ersa" << endl;
    }

    else if(planet == "SATURN")
    {
        cout << "\nSaturn has " << SATURN_MOONS << " moons." << endl;
        cout << "The 63 named moons are listed below:" << endl;
        cout << "Mimas" << endl;
        cout << "Enceladus" << endl;
        cout << "Tethys" << endl;
        cout << "Dione" << endl;
        cout << "Rhea" << endl;
        cout << "Titan" << endl;
        cout << "Hyperion" << endl;
        cout << "Lapetus" << endl;
        cout << "Phoebe" << endl;
        cout << "Janus" << endl;
        cout << "Epimetheus" << endl;
        cout << "Helene" << endl;
        cout << "Telesto" << endl;
        cout << "Calypso" << endl;
        cout << "Atlas" << endl;
        cout << "Prometheus" << endl;
        cout << "Pandora" << endl;
        cout << "Pan" << endl;
        cout << "Ymir" << endl;
        cout << "Paaliaq" << endl;
        cout << "Tarvos" << endl;
        cout << "Ijiraq" << endl;
        cout << "Suttungr" << endl;
        cout << "Kiviuq" << endl;
        cout << "Mundilfari" << endl;
        cout << "Albiorix" << endl;
        cout << "Skathi" << endl;
        cout << "Erriapus" << endl;
        cout << "Siarnaq" << endl;
        cout << "Thrymr" << endl;
        cout << "Narvi" << endl;
        cout << "Methone" << endl;
        cout << "Pallene" << endl;
        cout << "Polydeuces" << endl;
        cout << "Daphnis" << endl;
        cout << "Aegir" << endl;
        cout << "Bebhionn" << endl;
        cout << "Bergelmir" << endl;
        cout << "Bestla" << endl;
        cout << "Farbauti" << endl;
        cout << "Fenrir" << endl;
        cout << "Fornjot" << endl;
        cout << "Hati" << endl;
        cout << "Hyrrokkin" << endl;
        cout << "kari" << endl;
        cout << "Loge" << endl;
        cout << "Skoll" << endl;
        cout << "Surtur" << endl;
        cout << "Anthe" << endl;
        cout << "Jarnsaxa" << endl;
        cout << "Greip" << endl;
        cout << "Tarqeq" << endl;
        cout << "Aegaeon" << endl;
        cout << "Gridr" << endl;
        cout << "Angrboda" << endl;
        cout << "Skrymir" << endl;
        cout << "Gerd" << endl;
        cout << "Eggther" << endl;
        cout << "Beli" << endl;
        cout << "Gunnlod" << endl;
        cout << "Thiazzi" << endl;
        cout << "Alvaldi" << endl;
        cout << "Geirrod" << endl;       
    }

    else if(planet == "URANUS")
    {
        cout << "\nUranus has " << URANUS_MOONS << " moons." << endl;
        cout << "The 27 named moons are listed below:" << endl;
        cout << "Cordelia" << endl;
        cout << "Ophelia" << endl;
        cout << "Bianca" << endl;
        cout << "Cressida" << endl;
        cout << "Desdemona" << endl;
        cout << "Juliet" << endl;
        cout << "Portia" << endl;
        cout << "Rosalind" << endl;
        cout << "Cupid" << endl;
        cout << "Belinda" << endl;
        cout << "Perdita" << endl;
        cout << "Puck" << endl;
        cout << "Mab" << endl;
        cout << "Miranda" << endl;
        cout << "Ariel" << endl;
        cout << "Umbriel" << endl;
        cout << "Titania" << endl;
        cout << "Oberon" << endl;
        cout << "Francisco" << endl;
        cout << "Caliban" << endl;
        cout << "Stephano" << endl;
        cout << "Trinculo" << endl;
        cout << "Sycorax" << endl;
        cout << "Margaret" << endl;
        cout << "Prospero" << endl;
        cout << "Setebos" << endl;
        cout << "Ferdinand" << endl;       
    }

    else if(planet == "NEPTUNE")
    {
        cout << "\nNeptune has " << NEPTUNE_MOONS << " moons." << endl;
        cout << "The 27 named moons are listed below:" << endl;
        cout << "Triton" << endl;
        cout << "Halimede" << endl;
        cout << "Psamathe" << endl;
        cout << "Neso" << endl;
        cout << "Naiad" << endl;
        cout << "Thalassa" << endl;
        cout << "Despina" << endl;
        cout << "Galatea" << endl;
        cout << "Larissa" << endl;
        cout << "Hippocamp" << endl;
        cout << "Proteus" << endl;
        cout << "Nereid" << endl;
        cout << "Sao" << endl;
        cout << "Laomedeia" << endl;
    }

    else if(planet == "PLUTO")
    {
        cout << "\nPluto has " << PLUTO_MOONS << " moons." << endl;
        cout << "The 5 named moons are listed below:" << endl;        
        cout << "Charon" << endl;
        cout << "Styx" << endl;
        cout << "Nix" << endl;
        cout << "Kerberos" << endl;
        cout << "Hydra" << endl;        
    }

    else
        cout << "Please enter a planet within our solar system!";
}

int main()
{
    cout << "Welcome to the MOON EXHIBITION!" << endl;

    string planet {};
    cout << "Enter a Planet in our Solar System: ";
    cin >> planet;

    // using transform with toupper to convert planet to uppercase
    transform(planet.begin(), planet.end(), planet.begin(),::toupper); 
    
    display_moon(planet);

    return 0;
}