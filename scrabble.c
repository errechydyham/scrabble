#include <stdio.h>

int main(void)
{
    //get input one 
    char inp_one[1024];
    printf("Player 1 : "); 
    scanf("%s", inp_one); 

    //get input two 
    char inp_two[1024];
    printf("Player 2 : "); 
    scanf("%s", inp_two); 

    //set counter 
    int count_one = 0;
    int count_two = 0;  

    //calculate input one 
    for(int x = 0; x<1024; x++)
    {
        char cc = inp_one[x]; 
       // A - a
       if(cc == 65 || cc == 65 + 32){ count_one += 1;}

       // B - b
       if(cc == 66 || cc == 66 + 32){ count_one += 3;}

       // C - c
       if(cc == 67 || cc == 67 + 32){ count_one += 3;}

       // D - d
       if(cc == 68 || cc == 68 + 32){ count_one += 2;}

       // E - e
       if(cc == 69 || cc == 69 + 32){ count_one += 1;}

       // F - f
       if(cc == 70 || cc == 70 + 32){ count_one += 4;}

       // G - g
       if(cc == 71 || cc == 71 + 32){ count_one += 2;}

       // H - h
       if(cc == 72 || cc == 72 + 32){ count_one += 4;}

       // I - i
       if(cc == 73 || cc == 73 + 32){ count_one += 1;}

       // J - j
       if(cc == 74 || cc == 74 + 32){ count_one += 8;}

       // K - k
       if(cc == 75 || cc == 75 + 32){ count_one += 5;}

       // L - l 
       if(cc == 76 || cc == 76 + 32){ count_one += 1;}

       // M - m 
       if(cc == 77 || cc == 77 + 32){ count_one += 3;}

       // N - n 
       if(cc == 78 || cc == 78 + 32){ count_one += 1;}

       // O - o 
       if(cc == 79 || cc == 79 + 32){ count_one += 1;}

       // P - p 
       if(cc == 80 || cc == 80 + 32){ count_one += 3;}

       // Q - q 
       if(cc == 81 || cc == 81 + 32){ count_one += 10;}

       // R - r 
       if(cc == 82 || cc == 82 + 32){ count_one += 1;}

       // S - s 
       if(cc == 83 || cc == 83 + 32){ count_one += 1;}

       // T - t  
       if(cc == 84 || cc == 84 + 32){ count_one += 1;}

       // U - u 
       if(cc == 85 || cc == 85 + 32){ count_one += 1;}

       // V - v
       if(cc == 86 || cc == 86 + 32){ count_one += 4;}

       // W - w 
       if(cc == 87 || cc == 87 + 32){ count_one += 4;}

       // X - x
       if(cc == 88 || cc == 88 + 32){ count_one += 8;}

       // Y - y 
       if(cc == 89 || cc == 89 + 32){ count_one += 4;}

       // Z - z 
       if(cc == 90 || cc == 90 + 32){ count_one += 10;}

        if(inp_one[x] == NULL){
            break; 
        } 
    }

    //calculate input two 
    for(int m = 0; m<1024; m++)
    {
        char cc = inp_two[m]; 
       // A - a
       if(cc == 65 || cc == 65 + 32){ count_two += 1;}

       // B - b
       if(cc == 66 || cc == 66 + 32){ count_two += 3;}

       // C - c
       if(cc == 67 || cc == 67 + 32){ count_two += 3;}

       // D - d
       if(cc == 68 || cc == 68 + 32){ count_two += 2;}

       // E - e
       if(cc == 69 || cc == 69 + 32){ count_two += 1;}

       // F - f
       if(cc == 70 || cc == 70 + 32){ count_two += 4;}

       // G - g
       if(cc == 71 || cc == 71 + 32){ count_two += 2;}

       // H - h
       if(cc == 72 || cc == 72 + 32){ count_two += 4;}

       // I - i
       if(cc == 73 || cc == 73 + 32){ count_two += 1;}

       // J - j
       if(cc == 74 || cc == 74 + 32){ count_two += 8;}

       // K - k
       if(cc == 75 || cc == 75 + 32){ count_two += 5;}

       // L - l 
       if(cc == 76 || cc == 76 + 32){ count_two += 1;}

       // M - m 
       if(cc == 77 || cc == 77 + 32){ count_two += 3;}

       // N - n 
       if(cc == 78 || cc == 78 + 32){ count_two += 1;}

       // O - o 
       if(cc == 79 || cc == 79 + 32){ count_two += 1;}

       // P - p 
       if(cc == 80 || cc == 80 + 32){ count_two += 3;}

       // Q - q 
       if(cc == 81 || cc == 81 + 32){ count_two += 10;}

       // R - r 
       if(cc == 82 || cc == 82 + 32){ count_two += 1;}

       // S - s 
       if(cc == 83 || cc == 83 + 32){ count_two += 1;}

       // T - t  
       if(cc == 84 || cc == 84 + 32){ count_two += 1;}

       // U - u 
       if(cc == 85 || cc == 85 + 32){ count_two += 1;}

       // V - v
       if(cc == 86 || cc == 86 + 32){ count_two += 4;}

       // W - w 
       if(cc == 87 || cc == 87 + 32){ count_two += 4;}

       // X - x
       if(cc == 88 || cc == 88 + 32){ count_two += 8;}

       // Y - y 
       if(cc == 89 || cc == 89 + 32){ count_two += 4;}

       // Z - z 
       if(cc == 90 || cc == 90 + 32){ count_two += 10;}

        if(inp_two[m] == NULL){
            break; 
        } 
    }

    //print the result 
    if(count_one > count_two){
        printf("Player one Wins!\n"); 
    }else if(count_one < count_two){
        printf("Player two wins!!!\n"); 
    }else{
        printf("It's draw\n"); 
    }
}