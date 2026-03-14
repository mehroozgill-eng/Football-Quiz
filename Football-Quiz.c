#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void clearScreen()
{
    system("cls");
}

void loading()
{
    printf("\nLoading Game");
    for(int i=0;i<5;i++)
    {
        printf(".");
        Sleep(500);
    }
}

void correct()
{
    system("color 0A");
    printf("Correct Answer!\n");
    printf("\a");
    Sleep(1000);
    system("color 07");
}

void wrong(char answer[])
{
    system("color 0C");
    printf("Wrong Answer! Correct answer is %s\n", answer);
    Sleep(1500);
    system("color 07");
}

int main()
{
    int level, choice, score, correctCount, playagain;
    do
    {
        score = 0;
        correctCount = 0;

        clearScreen();

        system("color 0B");

        printf("=====================================\n");
        printf("          FOOTBALL QUIZ GAME\n");
        printf("=====================================\n");

        loading();

        printf("\n\nPress Enter to Start...");
        getchar();
        getchar();

        clearScreen();

        printf("Choose Difficulty Level\n");
        printf("1 = Easy\n");
        printf("2 = Hard\n");
        scanf("%d",&level);

        clearScreen();

        if(level == 1)
        {

            printf("Q1. Which country does Ronaldo play for?\n");
            printf("1 Portugal\n2 Argentina\n3 Spain\n");
            scanf("%d",&choice);

            if(choice == 1)
            {
                correct();
                score += 10;
                correctCount++;
            }
            else
                wrong("Portugal");

            clearScreen();

            printf("Q2. Which team won Champions League 2023?\n");
            printf("1 Real Madrid\n2 Manchester City\n3 Arsenal\n");
            scanf("%d",&choice);

            if(choice == 2)
            {
                correct();
                score += 10;
                correctCount++;
            }
            else
                wrong("Manchester City");

            clearScreen();

            printf("Q3. Which team does Ronaldo currently play for?\n");
            printf("1 Real Madrid\n2 Manchester United\n3 Al Nassr\n");
            scanf("%d",&choice);

            if(choice == 3)
            {
                correct();
                score += 10;
                correctCount++;
            }
            else
                wrong("Al Nassr");

            clearScreen();

            printf("Q4. Which club has most Champions League titles?\n");
            printf("1 Real Madrid\n2 Bayern Munich\n3 Barcelona\n");
            scanf("%d",&choice);

            if(choice == 1)
            {
                correct();
                score += 10;
                correctCount++;
            }
            else
                wrong("Real Madrid");

            clearScreen();

            printf("Q5. Which team never won Champions League?\n");
            printf("1 Manchester United\n2 Arsenal\n3 Porto\n");
            scanf("%d",&choice);

            if(choice == 2)
            {
                correct();
                score += 10;
                correctCount++;
            }
            else
                wrong("Arsenal");

        }

        else
        {

            printf("Q1. Who managed Porto when they won Champions League?\n");
            printf("1 Zidane\n2 Pep Guardiola\n3 Jose Mourinho\n");
            scanf("%d",&choice);

            if(choice == 3)
            {
                correct();
                score += 20;
                correctCount++;
            }
            else
                wrong("Jose Mourinho");

            clearScreen();

            printf("Q2. Which club won most Premier League titles?\n");
            printf("1 Liverpool\n2 Manchester United\n3 Benfica\n");
            scanf("%d",&choice);

            if(choice == 2)
            {
                correct();
                score += 20;
                correctCount++;
            }
            else
                wrong("Manchester United");

            clearScreen();

            printf("Q3. Which player played for both Barcelona and Real Madrid?\n");
            printf("1 Ronaldo Nazario (R9)\n2 Raul\n3 Pepe\n");
            scanf("%d",&choice);

            if(choice == 1)
            {
                correct();
                score += 20;
                correctCount++;
            }
            else
                wrong("R9");

            clearScreen();

            printf("Q4. Who scored hat-trick vs Spain in 2018 World Cup?\n");
            printf("1 Cristiano Ronaldo\n2 Messi\n3 Lewandowski\n");
            scanf("%d",&choice);

            if(choice == 1)
            {
                correct();
                score += 20;
                correctCount++;
            }
            else
                wrong("Cristiano Ronaldo");

            clearScreen();

            printf("Q5. Who scored most goals in a single Premier League season?\n");
            printf("1 Didier Drogba\n2 Thierry Henry\n3 Alex Ferguson\n");
            scanf("%d",&choice);

            if(choice == 2)
            {
                correct();
                score += 20;
                correctCount++;
            }
            else
                wrong("Thierry Henry");

        }

        clearScreen();

        system("color 0E");

        printf("=====================================\n");
        printf("              GAME OVER\n");
        printf("=====================================\n");

        printf("\nFinal Score : %d\n",score);
        printf("Correct Answers : %d\n",correctCount);

        if(score >= 80)
            printf("Excellent Player!\n");
        else if(score >= 50)
            printf("Good Game!\n");
        else
            printf("Better Luck Next Time!\n");

        printf("\nPlay Again?\n1 Yes\n0 No\n");
        scanf("%d",&playagain);

    }while(playagain == 1);

    clearScreen();

    printf("Thanks for playing the Quiz Game!\n");

    return 0;
}