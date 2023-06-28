// Escultura à Laser
#include <stdio.h>

int main(){
    int height, lenght;

    scanf("%d %d", &height, &lenght);
    while(height != 0 && lenght != 0){
        int i, count = 0;
        int heights[lenght];

        for(i = 0; i < lenght; i++){
            scanf("%d", &heights[i]);
        }

        for(i = 0; i < lenght; i++){
            int difference = height - heights[i];
            if (difference > 0)
                count += difference;
            height = heights[i];
        }

        printf("%d\n", count);
        scanf("%d %d", &height, &lenght);
    }

    return 0;
}
