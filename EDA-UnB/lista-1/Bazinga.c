#include <stdio.h>
#include <string.h>


#define pedra 'a'
#define papel 'l'
#define spock 'k'
#define tesoura 'a'
#define lagarto 'o'

int main(){
  char sheldon[10], raj[10];
  scanf(" %s %s", sheldon, raj);
  if(strcmp(sheldon,raj) == 0) printf("De novo!\n");
  int sheldonLen = strlen(sheldon);    
  int rajLen = strlen(raj);    
  if(rajLen == sheldonLen && rajLen == 5){
    if(sheldon[4] == pedra && raj[4] == papel ) printf("Raj trapaceou!\n");
    if(sheldon[4] == pedra && raj[4] == spock ) printf("Raj trapaceou!\n");
    if(sheldon[4] == papel && raj[4] == pedra ) printf("Bazinga!\n");
    if(sheldon[4] == papel && raj[4] == spock  ) printf("Bazinga!\n");
    if(sheldon[4] == spock && raj[4] == papel ) printf("Raj trapaceou!\n");
    if(sheldon[4] == spock && raj[4] == pedra ) printf("Bazinga!\n");
  }

  if(rajLen == sheldonLen && rajLen == 7){
    if(sheldon[6] == tesoura && raj[6] == lagarto) printf("Bazinga!\n");
    if(sheldon[6] == lagarto && raj[6] == tesoura) printf("Raj trapaceou!\n");
  }

  if(sheldonLen == 5 && rajLen == 7){
    if(sheldon[4] == pedra && raj[6] == lagarto) printf("Bazinga!\n");
    if(sheldon[4] == pedra && raj[6] == tesoura) printf("Bazinga!\n");

    if(sheldon[4] == papel && raj[6] == lagarto) printf("Raj trapaceou!\n");
    if(sheldon[4] == papel && raj[6] == tesoura) printf("Raj trapaceou!\n");

    if(sheldon[4] == spock && raj[6] == lagarto) printf("Raj trapaceou!\n");
    if(sheldon[4] == spock && raj[6] == tesoura) printf("Bazinga!\n");
  }
  if(sheldonLen == 7 && rajLen == 5){
    if(sheldon[6] == lagarto && raj[4] == pedra) printf("Raj trapaceou!\n");
    if(sheldon[6] == lagarto && raj[4] == papel) printf("Bazinga!\n");
    if(sheldon[6] == lagarto && raj[4] == spock) printf("Bazinga!\n");

    if(sheldon[6] == tesoura && raj[4] == pedra) printf("Raj trapaceou!\n");
    if(sheldon[6] == tesoura && raj[4] == papel) printf("Bazinga!\n");
    if(sheldon[6] == tesoura && raj[4] == spock) printf("Raj trapaceou!\n");
  }
}
  

