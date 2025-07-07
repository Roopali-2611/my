#include<stdio.h>
int main(){
    struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
    };
    struct pokemon pikachu;
    printf("enter the attack of pikachu");
    scanf("%d",&pikachu.attack);
    pikachu.hp=50;
    pikachu.speed=100;
    pikachu.tier='A';
    printf("%d",pikachu.attack);
return 0;
}

