#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void general();
void all();

void fut()
{
    printf("                               ____   ___  __  __ ____     _      ____   _  _____ ____ _   _ \n");
    printf("                              | __ ) / _  |      | __ )   /     |  _   /  |_   _/ ___| | | |\n");
    printf("                              |  _  | | | | | |  |  _    / _    | |_) / _   | || |   | |_| |\n"); 
    printf("                              | |_) | |_| | |  | | |_)  / ___   |  __/ ___  | || |___|  _  | CUP by: Edmundo neto (emalon)\n");
    printf("                              |____/  ___/|_|  |_|____/_/    _  |_| /_/    _ _|  ____|_| |_| \n");
    printf("\n                                                100 Percent Updated, hu3hu3                \n");
}

int rules()
{
    char h ='x';
	do{
	fut();
	printf("                                                    rules:           \n\n");
 	printf("The aim of football is to score more goals then your opponent in a 90 minute playing time frame. The match is split up into two halves of 45 minutes. After the first 45 minutes players will take a 15 minute rest period called half time.\nThe second 45 minutes will resume and any time deemed fit to be added on by the referee (injury time) will be accordingly.\n");
	printf("\n\n                                              Press R to return menu \n");
	printf("                                                        ");
	scanf(" %c", &h);
	//system("cls"); // for windows - disabled
	system("clear");
    } while(h != 'r' );
	general();
}

int aboutfut()
{
    char h ='x';
	do{
	fut();
	printf("                                                    about:           \n\n");
 	printf("Modern football originated in Britain in the 19th century. Though “folk football” had been played since medieval times with varying rules, the game began to be standardized when it was taken up as a winter game at public schools.\n");
	printf("\n\n                                              Press R to return menu \n");
	printf("                                                        ");
	scanf(" %c", &h);
	//system("cls"); // for windows - disabled
	system("clear");
    } while(h != 'r' );
	general();
}

void credd()
{
    char h ='x';
	do{
	fut();
	printf("                                                    Credits:           \n\n");
    //ascii Credits
    printf("Ascii credits: https://www.asciiart.eu/sports-and-outdoors/soccer\n");
    //Rules and about credits
    printf("Rules credits: https://www.rulesofsport.com/sports/football.html\n");
    printf("About credits: https://www.britannica.com/sports/football-soccer\n");
    printf("\n\n                                              Press R to return menu \n");
	printf("                                                        ");
	scanf(" %c", &h);
	//system("cls"); // for windows - disabled
	system("clear");
    } while(h != 'r' );
	general();
}

void general()
{
    int x;
    
	fut();
	printf(" \n     Select one option:       \n     1- New Match \n     2- Rules \n     3- Font and Credits \n     4- About golf \n     5- Exit \n");
	scanf("%d", &x);
	
switch(x)
{
	case 1:  
	all();
	break;
	
	case 2:
	rules();
	break;
	
    case 3: 
    credd();
    break;
    
    case 4:
    aboutfut();
    break;
    
    case 5:
    exit(0);
    break;
    
    default :
    printf ("Operation invalid. Try again");
    break;
    }
}

int init()
{
    char h ='x';
	do{
    fut();
	printf("\n\n                                                      Press F to continue \n");
	printf("                                                        ");
	scanf(" %c", &h);
	//system("cls"); // for windows - disabled
	system("clear");
    } while(h != 'f' );
}


void all()
{
    char teams[16][50];
    char groups[4][4][50];
    int victorys[16] = {0};
    int goals[16] = {0};
    int goals_s[16] = {0}; 
    int winners[4];
    int goalsTeamsA, goalsTeamsB, goalsTeamsC, pnsTeamB, pnsTeamC, bestTeamA, bestTeamB, goalsTeamA, goalsTeamB, victorysTeam1, victorysTeam2;
    srand(time(0));
    
    fut();

    for (int a = 0; a < 16; a++){
    printf("\nEnter the team name %d ", a + 1);
    scanf("%s", teams[a]);
    }
    
    
    for (int a = 0; a < 4; a++){
    for (int b = 0; b < 4; b++){
    strcpy(groups[a][b], teams[a * 4 + b]);
    }
    }
    
    
    for (int a = 0; a < 4; a++){
    printf("\n\nGroup %d:\n", a + 1);
    for (int b = 0; b < 4; b++){
    for (int c = b + 1; c < 4; c++){
    printf("How many goals he sade - %s ", groups[a][b]);
    scanf("%d", &goalsTeamsB);
    printf("How many goals he sade - %s ", groups[a][c]);
    scanf("%d", &goalsTeamsC);

    goals[a * 4 + b] += goalsTeamsB;
    goals_s[a * 4 + b] += goalsTeamsC;
    goals[a * 4 + c] += goalsTeamsC;
    goals_s[a * 4 + c] += goalsTeamsB;  

    printf("\n%s %d x %d %s\n", groups[a][b], goalsTeamsB, goalsTeamsC, groups[a][c]);
    printf("%s %d x %d %s\n", groups[a][c], goalsTeamsC, goalsTeamsB, groups[a][b]);

    if (goalsTeamsB > goalsTeamsC){
    printf("\nWinner:\n%s\n", groups[a][b]);
    victorys[a * 4 + b]++;
    }else if (goalsTeamsC > goalsTeamsB){
    printf("\nWinner:\n%s\n", groups[a][c]);
    victorys[a * 4 + c]++;
    }else{
    printf("\nTie s between %s and %s\n", groups[a][b], groups[a][c]);
    printf("\nExtension:\n%s vs %s\n", groups[a][b], groups[a][c]);
    printf("How many goals %s scored in extra time? ", groups[a][b]);
    scanf("%d", &pnsTeamB);
    printf("How many goals %s scored in extra time? ", groups[a][c]);
    scanf("%d", &pnsTeamC);


    while (pnsTeamB == pnsTeamC){
    printf("\nTie s in extra time. Re-enter the goals.\n");
    printf("How many goals %s scored in extra time?", groups[a][b]);
    scanf("%d", &pnsTeamB);
    printf("How many goals %s scored in extra time?", groups[a][c]);
    scanf("%d", &pnsTeamC);
    }


    if (pnsTeamB > pnsTeamC){
    printf("\n%s The winner in extra time\n", groups[a][b]);
    victorys[a * 4 + b]++;
    }else{
    printf("\n%s The winner in extra time\n", groups[a][c]);
    victorys[a * 4 + c]++;
    }
    }
    }
    }
    
    
    printf("Results of Group %d\n", a + 1);
    for (int b = 0; b < 4; b++){
    printf("\n%s: \nGoals - %d\nGoals Suffered - %d\nVictorys - %d\n", groups[a][b], goals[a * 4 + b], goals_s[a * 4 + b], victorys[a * 4 + b]);
    }
    }
    
    
    printf("\nGoals Made by Team:\n\n");
    for (int a = 0; a < 16; a++){
    printf("%s - Gols: %d\n\n", teams[a], goals[a]);
    }
    
    
    printf("\nGoals Conceded by Teams:\n\n");
    for (int a = 0; a < 16; a++) {
    printf("%s\nGoals Suffered: %d\n\n", teams[a], goals_s[a]);
    }
    
    
    printf("\nTeam victorys:\n\n");
    for (int a = 0; a < 16; a++){
    printf("%s\nVictorys: %d\n\n", teams[a], victorys[a]);
    }
    
    
    for (int a = 0; a < 4; a++){
    bestTeamA = a * 4;
    bestTeamB = a * 4 + 1;
    for (int b = a * 4 + 2; b < (a + 1) * 4; b++){
    if (victorys[b] > victorys[bestTeamA]){
    bestTeamB = bestTeamA;
    bestTeamA = b;
    }else if (victorys[b] > victorys[bestTeamB]){
    bestTeamB = b;
    }
    }


    if (victorys[bestTeamA] == victorys[bestTeamB]){
    printf("\nTie s in Group %d between %s and %s. Rematch \n", a + 1, teams[bestTeamA], teams[bestTeamB]);
    printf("\nRematch - %s\n", teams[bestTeamA]);
    printf("How many goals did he score?");
    scanf("%d", &goalsTeamA);
    printf("\nRematch - %s\n", teams[bestTeamB]);
    printf("How many goals did he score?");
    scanf("%d", &goalsTeamB);


    while (goalsTeamA == goalsTeamB){
    printf("\nTie s in Rematch, Re-enter the goals.\n");
    printf("\nRematch - %s\n", teams[bestTeamA]);
    printf("How many goals did he score?");
    scanf("%d", &goalsTeamA);
    printf("\nRematch - %s\n", teams[bestTeamB]);
    printf("How many goals did he score?");
    scanf("%d", &goalsTeamB);
    }


    if (goalsTeamA > goalsTeamB){
    printf("\nWinner:\n%s\n", teams[bestTeamA]);
    victorys[bestTeamA]++;
    }else{
    printf("\nWinner:\n%s\n", teams[bestTeamB]);
    victorys[bestTeamB]++;
    }
    }
    winners[a * 2] = bestTeamA;
    winners[a * 2 + 1] = bestTeamB;
    printf("The best two in the Group %d is %s and %s.\n", a + 1, teams[bestTeamA], teams[bestTeamB]);
    }


    for (int alt = 1; alt <= 3; alt++){
        
switch (alt)
{
    case 1:
    printf("\nQuarterfinals\n");
    for (int a = 0; a < 8; a += 2){
    printf("How many goals did he score? %s", teams[winners[a]]);
    scanf("%d", &victorysTeam1);
    printf("How many goals did he score? %s", teams[winners[a + 1]]);
    scanf("%d", &victorysTeam2);


    while (victorysTeam1 == victorysTeam2){
    printf("\nTie s in quarterfinals. Re-enter the goals.\n");
    printf("How many goals did he score? %s", teams[winners[a]]);
    scanf("%d", &victorysTeam1);
    printf("How many goals did he score? %s", teams[winners[a + 1]]);
    scanf("%d", &victorysTeam2);
    }


    if (victorysTeam1 > victorysTeam2){
    printf("\nWinner:\n%s\n", teams[winners[a]]);
    winners[a / 2] = winners[a];
    }else{
    printf("\nWinner:\n%s\n", teams[winners[a + 1]]);
    winners[a / 2] = winners[a + 1];
    }
    }
    break;

    case 2:
    printf("\nSemifinal\n");
    for (int a = 0; a < 4; a += 2){
    printf("How many goals did he score? %s", teams[winners[a]]);
    scanf("%d", &victorysTeam1);
    printf("How many goals did he score? %s", teams[winners[a + 1]]);
    scanf("%d", &victorysTeam2);


    while (victorysTeam1 == victorysTeam2){
    printf("\nTie s in semifinals. Re-enter the goals.\n");
    printf("How many goals did he score? %s", teams[winners[a]]);
    scanf("%d", &victorysTeam1);
    printf("How many goals did he score?%s", teams[winners[a + 1]]);
    scanf("%d", &victorysTeam2);
    }
    
    
    if (victorysTeam1 > victorysTeam2){
    printf("\nWinner:\n%s\n", teams[winners[a]]);
    winners[a / 2] = winners[a];
    }else{
    printf("\nWinner:\n%s\n", teams[winners[a + 1]]);
    winners[a / 2] = winners[a + 1];
    }
    }
    break;

    case 3:
    printf("\nFinal\n");
    printf("How many goals did he score? %s", teams[winners[0]]);
    scanf("%d", &victorysTeam1);
    printf("How many goals did he score? %s", teams[winners[1]]);
    scanf("%d", &victorysTeam2);
    
    
    while (victorysTeam1 == victorysTeam2){
    printf("\nTie s in final. Re-enter the goals.\n");
    printf("How many goals did he score? %s", teams[winners[0]]);
    scanf("%d", &victorysTeam1);
    printf("How many goals did he score? %s", teams[winners[1]]);
    scanf("%d", &victorysTeam2);
    }


    if (victorysTeam1 > victorysTeam2){
    printf("\n\n%s this is winner\n", teams[winners[0]]);
    }else{
    printf("\n\n%s this is winner\n", teams[winners[1]]);
    }
    break;
    }
    }
    
    
    char h ='x';
	do{
    printf("\n\n                                              Press R to return menu \n");
	printf("                                                        ");
	scanf(" %c", &h);
	//system("cls"); // for windows - disabled
	system("clear");
    } while(h != 'r' );
	general();
}

int main(int argc, char *argv[])
{
    init();
    general();
}