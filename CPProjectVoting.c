#include<stdio.h>

#define cand_1 "Samarth Singh Bhadauria"

#define cand_2 "Mrunal Badole"

#define cand_3 "Nikhil Singh"

#define cand_4 "Adarsh Gupta"

int count_votes_one=0;
int count_votes_two=0;
int count_votes_three=0;
int count_votes_four=0;
int votes_spoiled=0;

void casting_of_vote(){
    int option;    

    printf("\n\n\t  Cast your vote \n\n");
    printf("\n\t 1. %s", cand_1);
    printf("\n\t 2. %s", cand_2);
    printf("\n\t 3. %s", cand_3);
    printf("\n\t 4. %s", cand_4);
    printf("\n\t 5. %s", "I don't like any of these!");
    printf("\n\n\t Input your option (1 - 4) : ");
    scanf("%d",&option);


    switch(option)
    {
        case 1: count_votes_one++; 
        break;
        case 2: count_votes_two++; 
        break;
        case 3: count_votes_three++;
        break;
        case 4: count_votes_four++;
        break;
        case 5: votes_spoiled++;
        break;
        default: printf("\n\tERROR: Wrong option");
                
        getchar();
    }
    printf("\n\tThanks for the vote! ");
}

void count_the_votes()
{
    printf("\n\n\t The D Day! Stats are: ");
    printf("\n\t %s : %d ", cand_1, count_votes_one);
    printf("\n\t %s : %d ", cand_2, count_votes_two);
    printf("\n\t %s : %d ", cand_3, count_votes_three);
    printf("\n\t %s : %d ", cand_4, count_votes_four);
    printf("\n\t %s : %d ", "Spoiled Votes", votes_spoiled); 
}

void get_the_leading_candidate()
{
    printf("\n\n\t  Our winner is: \n\n");
    if(count_votes_one>count_votes_two && count_votes_one>count_votes_three && count_votes_one >count_votes_four)
    printf("\t[%s]",cand_1);
    else if (count_votes_two>count_votes_three && count_votes_two>count_votes_four && count_votes_two >count_votes_one)
    printf("\t[%s]",cand_2);
    else if(count_votes_three>count_votes_four && count_votes_three>count_votes_two && count_votes_three >count_votes_one)
    printf("\t[%s]",cand_3);
    else if(count_votes_four>count_votes_one && count_votes_four>count_votes_two && count_votes_four >count_votes_three)
    printf("\t[%s]",cand_4);
    else
    printf("\tNo one was elected. Woops!");        
}

int main()
{
    int i;
    int option;

    do{
        printf("\n\n\tClass Election/Voting 2021 ");
        printf("\n\n\t 1. Cast your Vote");
        printf("\n\t 2. Get the Vote Count");
        printf("\n\t 3. Leading candidate ");
        printf("\n\t 4. Quit");
        printf("\n\n\t Please enter your option : ");
        scanf("%d", &option);


        switch(option)
        {
            case 1: casting_of_vote();break;
            case 2: count_the_votes();break;
            case 3: get_the_leading_candidate();break;
            case 4: break;
            default: printf("\n\tError: Invalid option");
        }
    }
    while(option!=4);

    printf("\n \n\t Bazinggaaaaaa! We had you guys, didn't we? \n\n\t The EVM was faulty. Our Winner is: \n\n ");

    printf("\tSamarth Singh Bhadauria!!!! \n\n");
    getchar();

    return 0;
}