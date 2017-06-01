//this here is a program to choose a bond film for Ras to watch!
/* at the time of writing there are 27 known James Bond films
here they are in chronological order with rating, and actor.
1. Climax! (1954) / 5.8/10 / William Lundigan
2. Dr. No (1962) / 7.3/10 / Sean Connery
3. From Russia.. / 7.5/10 / Sean Connery
4. Goldfinger   / 7.8/10 / Sean Connery
5. Thunderball / 7.0/10 / Sean Connery
6. You Only L2x / 6.9/10 / Sean Connery 
7. Casino Royale / 5.2/10 / David Nivan
8. On Her Majes~ / 6.8/10 / George Lazenby
9. DiamondsR4eva / 6.7/10 / Sean Connery
10.Live&letdie  / 6.8/10 / Roger Moore
11.guyWgoldgun  / 6.8/10 / Roger Moore
12.thespywholuv / 7.1/10 / Roger Moore
13.Moonraker    / 6.3/10 / Roger Moore
14.ForyourI'snly/ 6.8/10 / Roger Moore
15.Octopussy / 6.6/10 / Roger Moore
16.nvrsaynvragain / 6.2/10 / Sean Connery
17.Aview2kill / 6.3/10 / Roger Moore
18.tehlivndaylghts / 6.7/10 / Timothy Dalton
19.Licence2kill / 6.6/10 / Timothy Dalton
20.goldeneye / 7.2/10 / pierce vrosnan
21.tmrnvrdies / 6.5/10 / pierce brosnam
22.thisworldnotnuf / 6.4/10 / pierce brosnan
23.Dieanothaday / 6.1/10 / pierce brosnan
24.CasinoRoyale/ 8.0/10 / dan craig 
25.quantsol / 6.6/10 / dan craig
26.skyfall / 7.8/10 / dan craig
27.spectre / 6.8/10 / dan craig */

#include <stdio.h>
#include <stdlib.h>
//stdio is for the printf func && stdlib is for the random function

int main(int argc, char *argv[])
{
  //common i variable used for our later test loop
  int i = 0;
  //initialize our array of bond titles
  char *bonds[] = {
    "Climax!","Dr. No","From Russia with Love","Goldfinger","Thunderball","You Only Live Twice","Casino Royale","On Her Majesty\'s Secret Service","Diamonds Are Forever","Live & Let Die","The Man with the Golden Gun","The Spy Who Loved Me","Moonraker","For Your Eyes Only","Octopussy","Never Say Never Again","A View To Kill","The Living Daylights","Licence to Kill","Goldeneye","Tomorrow Never Dies","This World Is Not Enough","Die Another Day","Casino Royale(DCraig)","Quantum Sol","Skyfall","Spectre"
  };

  /* this was a section I used to debug my array of strings
  int num_bonds = 27;

  for (i = 0; i < num_bonds; i++)
    {
      printf("Bond #%d is called %s\n", i, bonds[i]);
    }
  */
  printf("\n\n\n");
  //randomizing function
  int j,n;
  time_t  t;
  

  //init rngenerator
  srand((unsigned) time(&t));

  n = rand() % 27;
  
  

  printf("Congratulations you have rolled #%d, %s\n\n\n", n, bonds[n]);
  
  return 0;
}
