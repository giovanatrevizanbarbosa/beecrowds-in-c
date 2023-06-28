#include <stdio.h>

int faviousJosephus(int peopleInCircle, int jump);

int main(){
    int testCases;
    scanf("%d", &testCases);

    for(int i = 1; i <= testCases; i++){
        int peopleInCircle, jump;
        scanf("%d %d", &peopleInCircle, &jump);

        int result = faviousJosephus(peopleInCircle, jump);
        printf("Case %d: %d\n", i, result);
    }

    return 0;
}

int faviousJosephus(int peopleInCircle, int jump){
    int survivor = 0;
    
    for(int i = 2; i <= peopleInCircle; i++){
        survivor = (survivor + jump) % i;
    }
    
    return survivor + 1;
}