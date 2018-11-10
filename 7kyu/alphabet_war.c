#include <string.h>

char *alphabet_war(const char *fight)
{
    int sumA = 0;
    int sumB = 0;
    int length = strlen(fight);
    char a;
    int i = 0;
    
    while(i <= length){
      a = fight[i];
      switch(a){
        case 'w':
          sumA+=4;
          break;
        case 'p':
          sumA+=3;
          break;
        case 'b':
          sumA+=2;
          break;
        case 's':
          sumA+=1;
          break;
        case 'm':
          sumB+=4;
          break;
        case 'q':
          sumB+=3;
          break;
        case 'd':
          sumB+=2;
          break;
        case 'z':
          sumB+=1;
          break;
        default:break;
      }
      i++;
    }
    // printf("sumA = %d sumB = %d",sumA,sumB);
    if (sumA>sumB) return "Left side wins!";
    else if (sumB>sumA) return "Right side wins!";
    else return "Let's fight again!";
}

/*
char *alphabet_war(const char *fight)
{
    int score = 0;
    while (*fight) {
        switch (*fight++) {
            case 'w': score -= 4; break;
            case 'p': score -= 3; break;
            case 'b': score -= 2; break;
            case 's': --score; break;
            case 'z': ++score; break;
            case 'd': score += 2; break;
            case 'q': score += 3; break;
            case 'm': score += 4; break;
        }
    }
    return !score ? "Let's fight again!" : score > 0 ? "Right side wins!" : "Left side wins!";
}
*/

/*
char *alphabet_war(const char *fight)
{
  int i, j, l=0, r=0;
  char left[]="wpbs";
  char right[]="mqdz";
  int vals[4]={4, 3, 2, 1};
  for(i=0; i<strlen(fight); i++){
    for(j=0; j<4; j++){
      if(fight[i]==left[j])
        l += vals[j];
      else if(fight[i]==right[j])
        r += vals[j];
    }
  }
  if(r>l)
    return "Right side wins!";
  else if(r<l)
    return "Left side wins!";
  else
    return "Let's fight again!";
}
*/


