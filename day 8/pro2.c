#include<stdio.h>
main()
{
    int ch,eng,hin,guj;

    printf("\n Prees 1 for English");
    printf("\n Press 2 for Hindi");
    printf("\n Press 3 for Gujarati");

    printf("\n Enter your choice:");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:

        printf("\n\n Press 1 for Internet Recharge");
        printf("\n Press 2 for Top-up Recharge");
        printf("\n Press 3 for Special Recharge");

        printf("\n Enter your choice:");
        scanf("%d",&eng);

        switch(eng)
        {
            case 1:
                printf("\n You have successfully done a Internet Recharge.");
            break;
            
            case 2:
                printf("\n You have successfully done a Top-up Recharge.");
            break;
            
            case 3:
                printf("\n You have successfully done a Special Recharge.");
            break;

            default:
                printf("\n Somthing wrong");
        }


        break;

        case 2:

        printf("\n Internet Recharge ke liye 1 dabaiye");
        printf("\n Top-up Recharge ke liye 2 dabaiye");
        printf("\n Special Recharge ke liye 3 dabaiye");

        printf("\n Enter your choice:");
        scanf("%d",&hin);

        switch(hin)
        {
            case 1:
                printf("\n Aapne safaltapurvak Internet Recharge kar liya he.");
            break;
            
            case 2:
                printf("\n Aapne safaltapurvak Top-up Recharge kar liya he.");
            break;
            
            case 3:
                printf("\n Aapne safaltapurvak Special Recharge kar liya he.");
            break;

            default:
                printf("\n Somthing wrong");
        }


        break;

        case 3:

        printf("\n Internet Recharge mate 1 dabavo");
        printf("\n Top-up mate 1 dabavo");
        printf("\n Special Recharge mate 1 dabavo");

        printf("\n Enter your choice:");
        scanf("%d",&guj);

        switch(guj)
        {
            case 1:
                printf("\n Tame safaltapurvak Internet Recharge karyu chhe.");
            break;
            
            case 2:
                printf("\n Tame safaltapurvak Top-up Recharge karyu chhe.");
            break;
            
            case 3:
                printf("\n Tame safaltapurvak Special Recharge karyu chhe.");
            break;

            default:
                printf("\n Somthing wrong");
        }

        break;

        default:
        printf("\n No Recharge");
    }

}