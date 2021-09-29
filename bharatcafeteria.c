
#include <stdio.h>
#include <string.h>
#include <conio.h>


struct order{
    char name[50];
    int order_id;
    int quantity;
    int price;
}o[10000];
int order_count = 0, served_count = 0, waiting_now = 0;
int main ()
{
    printf ("\t\t  Welcome To Bharat Cafeteria\n");
    printf(" What would you like to do?\n");
    printf("\n");
    while (1){
        printf ("1. Order\n2. Serve\n3. Display \n4. Exit the program\n");

        int in;
        scanf ("%d", &in);
        getchar ();

        switch (in){
            case 1 : {
                order ();
                break;
            }
            case 2 : {
                serve();
                break;
            }
            case 3 : {
                display();
                break;
            }
            case 4 : {

                printf ("Thank you, Good bye!\n\n");
                printf ("End of demonstration \n\n");
                printf ("               Thank you     \n\n");
                printf ("           Prof. Pragnesh Shah        \n");
                printf ("\n DEVELOPED BY C032,C042,C048\n\n");
                return 0;
            }
        }

    }
}
int order ()
{
    int n, in, quan;
    printf ("please enter your name: ");
    gets (o[order_count].name);
    o[order_count].order_id = 100+order_count;
    menu();
    o[order_count].quantity = n;
    o[order_count].price = 0;
    o[order_count].quantity = 0;

    bds:
    printf ("How many items will you be ordering today? ");
    scanf ("%d", &n);

    getchar ();
    while (n--){
        printf ("\nEnter desired item code\n");
        scanf ("%d", &in);
        getchar();
        switch(in){
    case 1 : {
        printf ("Enter half plate:1 or Full plate:2\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &quan);
        getchar();

        o[order_count].quantity +=quan;

        if (i==1) o[order_count].price += (15*quan);

        else o[order_count].price += (30*quan);
        break;
    }
    case 2 :{

        printf ("Enter the size of  Pizza: 1. small  2. medium  3. large\n");
        int i;
        scanf ("%d", &i);
        getchar();


        printf ("Please enter the quantity: ");
        scanf ("%d", &quan);
        getchar();

        o[order_count].quantity +=quan;

        if (i==1) o[order_count].price += (250*quan);

        else if (i==2) o[order_count].price += (350*quan);

        else  o[order_count].price += (500*quan);

        break;
    }
    case 3 :{
        printf ("Enter quantity of manchurian: 1. 4 pieces  2. 8 pieces  3. 16 pieces\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &quan);
        getchar();

        o[order_count].quantity +=quan;

        if (i==1) o[order_count].price += (85*quan);

        else if (i==2) o[order_count].price += (120*quan);

        else  o[order_count].price += (190*quan);

        break;
    }
    case 4 :{
        printf ("Enter the size of momo plate: 1. quarter(3 pieces)  2. half(6 pieces)  3. full(12 pieces)\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &quan);
        getchar();
        printf("Which sauce would you like: 1.Spicy 2.Mayo ");
        int a;
        scanf("%d",&a);

        o[order_count].quantity +=quan;

        if (i==1) o[order_count].price += (70*quan);

        else if (i==2) o[order_count].price += (140*quan);

        else  o[order_count].price += (250*quan);

        break;
    }
    case 5 :{
        printf ("Enter the size of plate of Maggi: 1. half  2. full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &quan);
        getchar();

        o[order_count].quantity +=quan;

        if (i==1) o[order_count].price += (30*quan);

        else o[order_count].price += (50*quan);

        break;
    }
    case 6 :{
        printf ("Enter the size of pasta: 1. half  2. full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &quan);
        getchar();

        o[order_count].quantity +=quan;

        if (i==1) o[order_count].price += (120*quan);

        else o[order_count].price += (240*quan);

        break;
    }

     case 7:{
         printf("Please enter the quantity: \n");
         scanf("%d",&quan);
         getchar();
         o[order_count].quantity +=quan;
         o[order_count].price +=(20*quan);
         break;
     }
     case 8:{
         printf ("Enter size of chinese bhel:1. half 2.full\n");
         int i;
         scanf("%d",&i);
         getchar();
          printf("please enter the quantity: ");
          scanf ("%d",&quan);
          getchar();
           o[order_count].quantity +=quan;

        if (i==1) o[order_count].price += (30*quan);

        else o[order_count].price += (60*quan);

        break;
    }
    case 9 : {
        printf ("Iced Tea 250ml");

        printf ("Please enter the quantity: ");
        scanf ("%d", &quan);
        getchar();

        o[order_count].quantity +=quan;
        o[order_count].price += (50*quan);
        break;
    }
    case 10 : {
        printf ("250 ml of Cold Coffee\n");

        printf ("Please enter the quantity: ");
        scanf ("%d", &quan);
        getchar();

        o[order_count].quantity +=quan;
        o[order_count].price += (45*quan);
        break;
    }
    case 11 : {
        printf ("250 ml of Chai\n");

        printf ("Please enter the quantity: ");
        scanf ("%d", &quan);
        getchar();

        o[order_count].quantity +=quan;
        o[order_count].price += (50*quan);
        break;
    }
    case 12 :{

        printf("Do you want coke or sprite?Please enter 1 for coke and 2 for sprite");
        int a;
        scanf("%d", &a);
        getchar();
        if (a==1)
        {
            printf ("Enter the size of Coke: 1. 300ml 2. 500ml\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &quan);
        getchar();

        o[order_count].quantity +=quan;

        if (i==1) o[order_count].price += (20*quan);

        else o[order_count].price += (30*quan);
        break;
        }
        else {
            printf ("Enter the size of Sprite: 1. 300ml 2. 500ml\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &quan);
        getchar();

        o[order_count].quantity +=quan;

        if (i==1) o[order_count].price += (20*quan);

        else o[order_count].price += (30*quan);
        break;
        }


    }
    default : {
        printf ("Please select something from our menu!\n");
        n++;
    }
        }
    }
    char temp;
    printf ("Do you want to order anything else?(y/n)\n ");
    scanf("%c", &temp);
    if (temp == 'y' || temp == 'Y')
        goto bds;
    printf ("\nNumber of food orders placed %d\n", o[order_count].quantity);
    printf ("\nThank you %s for placing  your order with Bharat Cafeteria.\n Your bill is %drs.\nYour order no. is %d.\nPlease take a seat or wait here while we prepare your delcious food.\n\n", o[order_count].name, o[order_count].price,o[order_count].order_id);
    order_count ++;
}
int serve ()
{
    if (order_count==0){
        printf ("Please order first\n");
        return;
    }

    else if (served_count == order_count) {
        printf ("All order served\n");
        return;
    }

    printf ("Order no. %d by %s is ready\n", o[served_count].order_id, o[served_count].name);
    printf ("Enjoy your meal\n\n");
    served_count++;
}
int display ()
{
    printf ("Total order taken: %d\n", (order_count));
    printf ("Total number of orders served Today %d\n", served_count);
    printf ("Number of orders currently waiting to be served: %d\n", (order_count-served_count));
    printf ("Currently preparing food for order no. %d\n\n", o[served_count].order_id);
}
void menu ()
{
    printf("                                   ");printf("MENU                              \n");

    printf("Item Code#   Description                   Size                    Price(in rs)\n");

    printf("[1]          Samosa                      half/full                     15/30\n");
    printf("[2]          cheese Pizza            small/medium/large               250/350/500\n");
    printf("[3]          Veg manchurian             4/8/16 pcs                     85/120/190\n");
    printf("[4]          Veg momos                 quarter/half/full               20/40/80\n");
    printf("[5]          maggi                     Half/Full                       130/250\n");
    printf("[6]          Pasta                    Half/Full                       120/240\n");
    printf("[7]          Vada Pav                   NA                             20\n");
    printf("[8]          chinese bhel                half/full                     30/60\n");
    printf("[9]          Iced Tea                     250ml                        50\n");
    printf("[10]         Cold Coffee                  250ml                        45\n");
    printf("[11]         Chai/tea                    250ml                          50\n");
    printf("[12]         Coke/Sprite               300ml/500ml                      20/30 \n\n");
}






