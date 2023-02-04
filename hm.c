#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void display();
void create_menucard();
struct node
{
    char *name;
    int price,quantity;
    struct node *next;

};
int amount=0;
struct node *head;
struct node *orderlist;
struct node *newitem;
struct node *chowmein;
struct node *soup;
struct node *salad;
struct node *ricebowl;
struct node *friedrice;
struct node *curry;
struct node *coffee;
struct node *juice;
struct node *drinks;
struct node *beverage;
struct node *emp;

void create_menucard()
{
    chowmein=(struct node*)malloc(sizeof(struct node));
    soup=(struct node*)malloc(sizeof(struct node));
    salad=(struct node*)malloc(sizeof(struct node));
    ricebowl=(struct node*)malloc(sizeof(struct node));
    friedrice=(struct node*)malloc(sizeof(struct node));
    curry=(struct node*)malloc(sizeof(struct node));
    coffee=(struct node*)malloc(sizeof(struct node));
    juice=(struct node*)malloc(sizeof(struct node));
    drinks=(struct node*)malloc(sizeof(struct node));
    beverage=(struct node*)malloc(sizeof(struct node));
    struct node *item1=(struct node*)malloc(sizeof(struct node));
    struct node *item3=(struct node*)malloc(sizeof(struct node));
    struct node *item4=(struct node*)malloc(sizeof(struct node));
    struct node *item5=(struct node*)malloc(sizeof(struct node));
    struct node *item6=(struct node*)malloc(sizeof(struct node));
    struct node *item7=(struct node*)malloc(sizeof(struct node));
    struct node *item8=(struct node*)malloc(sizeof(struct node));
    struct node *item9=(struct node*)malloc(sizeof(struct node));
    struct node *item10=(struct node*)malloc(sizeof(struct node));
    struct node *item11=(struct node*)malloc(sizeof(struct node));
    struct node *item12=(struct node*)malloc(sizeof(struct node));
    struct node *item13=(struct node*)malloc(sizeof(struct node));
    struct node *item14=(struct node*)malloc(sizeof(struct node));
    struct node *item15=(struct node*)malloc(sizeof(struct node));
    struct node *item16=(struct node*)malloc(sizeof(struct node));
    struct node *item17=(struct node*)malloc(sizeof(struct node));
    struct node *item18=(struct node*)malloc(sizeof(struct node));
    struct node *item19=(struct node*)malloc(sizeof(struct node));
    struct node *item20=(struct node*)malloc(sizeof(struct node));
    struct node *item21=(struct node*)malloc(sizeof(struct node));
    struct node *item22=(struct node*)malloc(sizeof(struct node));
    struct node *item23=(struct node*)malloc(sizeof(struct node));
    struct node *item24=(struct node*)malloc(sizeof(struct node));
    struct node *item25=(struct node*)malloc(sizeof(struct node));
    struct node *temp=(struct node*)malloc(sizeof(struct node));


    chowmein->name="Vegetable Chowmein";
    chowmein->price=99;
    chowmein->next=item1;
    item1->name="Chicken Chowmein";
    item1->price=129;
    item1->next=item3;
    item3->name="Beef Chowmein";
    item3->price=149;
    item3->next=NULL;


    soup->name="Chicken Corn Soup";
    soup->price=99;
    soup->next=item4;
    item4->name="Thai Soup";
    item4->price=129;
    item4->next=item5;
    item5->name="Sweet&Sour Soup";
    item5->price=129;
    item5->next=NULL;


    salad->name="Chicken Salad";
    salad->price=219;
    salad->next=item6;
    item6->name="Mushroom Grilled Salad";
    item6->price=249;
    item6->next=NULL;

    ricebowl->name="Prawn Rice Bowl";
    ricebowl->price=179;
    ricebowl->next=item7;
    item7->name="Crispy Rice Bowl";
    item7->price=129;


    friedrice->name="Egg Fried Rice 1:3";
    friedrice->price=179;
    friedrice->next=item8;
    item8->name="Chicken Fried Rice 1:3";
    item8->price=229;
    item8->next=item9;
    item9->name="Mixed Fried Rice 1:3";
    item9->price=259;
    item9->next=NULL;


    curry->name="Chicken Sizzling 1:3";
    curry->price=249;
    curry->next=item10;
    item10->name="Beef Sizzling 1:3";
    item10->price=279;
    item10->next=item11;
    item11->name="Beef Masala 1:3";
    item11->price=249;
    item11->next=NULL;



    coffee->name="Hot Coffee";
    coffee->price=69;
    coffee->next=item12;
    item12->name="Cold Coffee";
    item12->price=79;
    item12->next=item13;
    item13->name="Chocolate Cold Coffee";
    item13->price=99;
    item13->next=NULL;


    juice->name="Apple Juice";
    juice->price=120;
    juice->next=item14;
    item14->name="Mango Juice";
    item14->price=120;
    item14->next=item15;
    item15->name="Malta Juice";
    item15->price=120;
    item15->next=item16;
    item16->name="Virgen Mojito";
    item16->price=120;
    item16->next=item17;
    item17->name="Pappi Frappe";
    item17->price=179;
    item17->next=NULL;


    drinks->name="Lassi Sweet";
    drinks->price=89;
    drinks->next=item18;
    item18->name="Lassi Salt";
    item18->price=79;
    item18->next=item19;
    item19->name="Chocolate Milkshake";
    item19->price=120;
    item19->next=item20;
    item20->name="Vanilla Milkshake";
    item20->price=120;
    item20->next=item21;
    item21->name="Strawberry Milkshake";
    item21->price=120;
    item21->next=item22;
    item22->name="Oreo Milkshake";
    item22->price=120;
    item22->next=NULL;


    beverage->name="Coca-Cola";
    beverage->price=25;
    beverage->next=item23;
    item23->name="Sprite";
    item23->price=25;
    item23->next=item24;
    item24->name="Fanta";
    item24->price=25;
    item24->next=item25;
    item25->name="Water";
    item25->price=15;
    item25->next=NULL;

}
void insert(struct node *insertion)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
   temp=insertion;

    newitem=(struct node*)malloc(sizeof(struct node));
    struct node *new=(struct node*)malloc(sizeof(struct node));
    struct node *name=(struct node*)malloc(sizeof(struct node));
    int price;
    printf("Item Name: ");
    scanf("%s",name);
    fflush(stdin);
    printf("Item Price: ");
    scanf("%d",&price);
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    newitem=(struct node*)malloc(sizeof(struct node));
    newitem->name=name;
    newitem->price=price;
    temp->next=newitem;
    newitem->next=NULL;

}


void delete_item(struct node *Node,int x)
{

    struct node *temp=(struct node*)malloc(sizeof(struct node));
    struct node *temp2=(struct node*)malloc(sizeof(struct node));
    head=(struct node*)malloc(sizeof(struct node));
    struct node *temp1=(struct node*)malloc(sizeof(struct node));

        temp=Node;
        temp2=Node;
        head=Node;

        display(temp);

    printf("\t\t\t\tWhich item you want to delete(enter serial): ");

    int l,count=0;
    scanf("%d",&l);
    l=l-1;

    if(l==0)
    {

        temp1=head;
          if(x==2){
            amount=amount-(temp1->price*temp1->quantity);
        }
        free(temp1);

        head=head->next;


    }
    else
    {

        while(temp!=NULL)
        {
            //count++;

            if(l==count)
            {
                if(temp==temp2)
                {
                    head = head->next;
                      if(x==2){
                     amount=amount-(temp->price*temp->quantity);
        }
                    free(temp);
                    break;

                }
                else
                {
                    temp2->next = temp->next;
                                    if(x==2){
                     amount=amount-(temp->price*temp->quantity);
        }
                    free(temp);
                    break;
                }

            }

            temp2 = temp;
            temp = temp->next;
            count++;

        }
    }



}
itemhead()
{

    printf("\t\t\t\t _____________________\n");
    printf("\t\t\t\t| 1.Chowmein          |\n");
    printf("\t\t\t\t| 2.Soup              |\n");
    printf("\t\t\t\t| 3.Salad             |\n");
    printf("\t\t\t\t| 4.Ricebowl          |\n");
    printf("\t\t\t\t| 5.Fried Rice        |\n");
    printf("\t\t\t\t| 6.Curry             |\n");
    printf("\t\t\t\t| 7.Coffee            |\n");
    printf("\t\t\t\t| 8.Juice             |\n");
    printf("\t\t\t\t| 9.Drinks            |\n");
    printf("\t\t\t\t| 10.Beverages        |\n");
    printf("\t\t\t\t| PRESS 0 FOR NO ITEM |\n");
    printf("\t\t\t\t|_____________________|\n");


}


void admin()
{
    int choose;
    int x;
    while(1)
    {
    printf("\n\n\t\t\t\t<><><><><><><><><><><><>\n");
        printf("\t\t\t\t<>    ADMIN PANEL     <>\n");
        printf("\t\t\t\t<><><><><><><><><><><><>\n");
        printf("\n\n\t\t\t\t ___________________\n");
        printf("\t\t\t\t| 1.Add new item    |\n");
        printf("\t\t\t\t| 2.Delete item     |\n");
        printf("\t\t\t\t| 3.Main menu       |\n");
        printf("\t\t\t\t|___________________|\n");
        printf("\t\t\t\tPress the key: ");
        scanf("%d",&x);
        if(x==1)
        {
    printf("\n\n\t\t\t\t\t   <><><><><><><><><><><><><>\n");
        printf("\t\t\t\t\t   <>     ADD NEW ITEM     <>\n");
        printf("\t\t\t\t\t   <><><><><><><><><><><><><>\n");


            printf("\t\t\t\tWhich item you want to add:  \n");
            itemhead();


            while(1)
            {
                 printf("\t\t\t\tPress the key: ");
                scanf("%d",&choose);
                if(choose==1)
                {
                    insert(chowmein);

                }
                if(choose==2)
                {
                    insert(soup);
                }

                if(choose==3)
                {
                    insert(salad);
                }
                if(choose==4)
                {
                    insert(ricebowl);
                }
                if(choose==5)
                {
                    insert(friedrice);
                }
                if(choose==6)
                {
                    insert(curry);
                }
                if(choose==7)
                {
                    insert(coffee);
                }
                if(choose==8)
                {
                    insert(juice);
                }
                if(choose==9)
                {
                    insert(drinks);
                }
                if(choose==10)
                {
                    insert(beverage);
                }
                if(choose==0)
                {
                    break;
                }
                printf("\t\t\t\tPress 0 for back\n");

            }

        }
        else if(x==2)
        {



    printf("\n\n\t\t\t\t\t   <><><><><><><><><><><><>\n");
        printf("\t\t\t\t\t   <>    DELETE ITEM     <>\n");
        printf("\t\t\t\t\t   <><><><><><><><><><><><>\n");
            printf("\t\t\t\tWhich item you want to delete:  \n");


            itemhead();


            while(1)
            {
                printf("\t\t\t\tPress the key: ");
                scanf("%d",&choose);
                if(choose==1)
                {
                    delete_item(chowmein,1);

                }
                if(choose==2)
                {
                   delete_item(soup,1);
                }

                if(choose==3)
                {
                    delete_item(salad,1);
                }
                if(choose==4)
                {
                    delete_item(ricebowl,1);
                }
                if(choose==5)
                {
                    delete_item(friedrice,1);
                }
                if(choose==6)
                {
                    delete_item(curry,1);
                }
                if(choose==7)
                {
                    delete_item(coffee,1);
                }
                if(choose==8)
                {
                    delete_item(juice,1);
                }
                if(choose==9)
                {
                    delete_item(drinks,1);
                }
                if(choose==10)
                {
                    delete_item(beverage,1);
                }
                if(choose==0)
                {
                    break;
                }
                printf("\t\t\t\tPress 0 for back\n");

            }


        }

        else if(x==3)
        {
            break;
        }
    }
}

struct noode *newnode(char *item,int price,int quantity){
struct node *new=(struct node*)malloc(sizeof(struct node));
new->name=item;
new->price=price;
new->quantity=quantity;
new->next=NULL;
amount=amount+price*quantity;
return new;

};
void orderitem(struct node *order)
{
    struct node *current=order;
    display(current);
    int choice,quantity;
    printf("\n\n\t\t\t\tPlease enter the serial number: ");
    scanf("%d",&choice);
    printf("\n\t\t\t\tQuantity of this item: ");
    scanf("%d",&quantity);
    int count=0;
    while(order!=NULL){
            count++;

        if(choice==count){
                if(orderlist==NULL){
                    order->quantity=quantity;
                   orderlist=newnode(order->name,order->price,order->quantity);

                   list(orderlist);
                }
                else{
                        struct node *temp3=orderlist;

                    while(temp3->next!=NULL){
                        temp3=temp3->next;
                    }
                    temp3->next=newnode(order->name,order->price,quantity);

                     list(orderlist);
                }



        }
    order=order->next;
    }




}
void order()
{
    orderlist==NULL;
    printf("\t\t\t\tWhich Item You want to order: \n");
    itemhead();
    int choose;
    amount=0;
    while(1)
    {
        printf("\t\t\t\tPress the key: ");
        scanf("%d",&choose);
        if(choose==1)
        {

            orderitem(chowmein);

        }
        if(choose==2)
        {
            orderitem(soup);
        }

        if(choose==3)
        {
            orderitem(salad);
        }
        if(choose==4)
        {
            orderitem(ricebowl);
        }
        if(choose==5)
        {
            orderitem(friedrice);
        }
        if(choose==6)
        {
            orderitem(curry);
        }
        if(choose==7)
        {
            orderitem(coffee);
        }
        if(choose==8)
        {
            orderitem(juice);
        }
        if(choose==9)
        {
            orderitem(drinks);
        }
        if(choose==10)
        {
            orderitem(beverage);
        }
        if(choose==0)
        {
            break;
        }
        printf("\t\t\t\tPress 0 for back\n");


    }

}
void cancel_order(){
    if(orderlist==NULL){

        printf("\t\t\t\tThere Is No Order!!!\n");
    }
    else{

    delete_item(orderlist,2);
    }

}
void payment()
{
if(orderlist==NULL){
    printf("\t\t\t\tThere Is No Order!!!\n");
}
else{

list(orderlist);
int bill=0;
struct node *temp5=orderlist;

printf("\t\t\t\t _______________________________\n");
printf("\t\t\t\t| <-> Please Pay %d tk    <-> |\n",amount);
printf("\t\t\t\t|_______________________________\n");

}

}
void item()
{
    printf("\n\n\n\t\t\t\t\t\t<->CHOWMEIN<->\n");
    display(chowmein);
    printf("\n\n\n\t\t\t\t\t\t<->SOUP<->\n");
    display(soup);
    printf("\n\n\n\t\t\t\t\t\t<->SALAD<->\n");
    display(salad);
    printf("\n\n\n\t\t\t\t\t\t<->RICEBOWL<->\n");
    display(ricebowl);
    printf("\n\n\n\t\t\t\t\t\t<->FRIEDRICE<->\n");
    display(friedrice);
    printf("\n\n\n\t\t\t\t\t\t<->CURRY<->\n");
    display(curry);
    printf("\n\n\n\t\t\t\t\t\t<->COFFEE<->\n");
    display(coffee);
    printf("\n\n\n\t\t\t\t\t\t<->JUICE<->\n");
    display(juice);
    printf("\n\n\n\t\t\t\t\t\t<->DRINKS<->\n");
    display(drinks);
    printf("\n\n\n\t\t\t\t\t\t<->BEVERAGES<->\n");
    display(beverage);
}
void customer()
{
    int choice;
    while(1){
    printf("\n\n\t\t\t\t<><><><><><><><><><><><><><>\n");
        printf("\t\t\t\t<>      FOR CUSTOMER      <>\n");
        printf("\t\t\t\t<><><><><><><><><><><><><><>\n");

    printf("\t\t\t\t ____________________________\n");
    printf("\t\t\t\t| 1.MenuCard                 |\n");
    printf("\t\t\t\t| 2.Order                    |\n");
    printf("\t\t\t\t| 3.Your Orderlist           |\n");
    printf("\t\t\t\t| 4.Cancel Order             |\n");
    printf("\t\t\t\t| 5.Payment                  |\n");
    printf("\t\t\t\t| Press 0 for Back           |\n");
    printf("\t\t\t\t|____________________________|\n");
    printf("\t\t\t\tPress the key: ");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("\n\n\t\t\t\t\t   <><><><><><><><><><>\n");
        printf("\t\t\t\t\t   <>    MENUCARD    <>\n");
        printf("\t\t\t\t\t   <><><><><><><><><><>\n");
        item();
    }
    else if(choice==2){
    printf("\n\n\t\t\t\t\t   <><><><><><><><><><><>\n");
        printf("\t\t\t\t\t   <>    ORDER ITEM    <>\n");
        printf("\t\t\t\t\t   <><><><><><><><><><><>\n");
        order();
    }
    else if(choice==3){
    printf("\n\n\t\t\t\t\t   <><><><><><><><><><><>\n");
        printf("\t\t\t\t\t   <>    ORDER LIST    <>\n");
        printf("\t\t\t\t\t   <><><><><><><><><><><>\n");
        if(orderlist==NULL){
            printf("\t\t\t\tThere Is No Order!!!!\n");
        }
        else{

        list(orderlist);
        }
    }
    else if(choice==4){
    printf("\n\n\t\t\t\t\t   <><><><><><><><><><><><>\n");
        printf("\t\t\t\t\t   <>    CACEL ORDER     <>\n");
        printf("\t\t\t\t\t   <><><><><><><><><><><><>\n");
        cancel_order();
    }
    else if(choice==5){
    printf("\n\n\t\t\t\t\t   <><><><><><><><><><>\n");
        printf("\t\t\t\t\t   <>    PAY BILL    <>\n");
        printf("\t\t\t\t\t   <><><><><><><><><><>\n");
        payment();
    }
    else if(choice==0){
        break;
    }
    }

}
void list(struct node *temp)
{
    int i=1;
        printf("\t\t\t ____________________________________________________________________\n");
    while(temp!=NULL)
    {
        printf("\t\t\t| %d. %d pcs %s ........................ %d /-\n",i++,temp->quantity,temp->name,temp->price);
        temp=temp->next;
    }
        printf("\t\t\t|____________________________________________________________________\n");
}

void display(struct node *temp)
{
    int i=1;
    printf("\t\t\t _________________________________________________________________\n");
    while(temp!=NULL)
    {
        printf("\t\t\t| %d.%s ........................ %d /-\n",i++,temp->name,temp->price);
        temp=temp->next;
    }
    printf("\t\t\t|_________________________________________________________________\n");
}
int main()
{
    int choice;
    printf("\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t        **************************\n");
    printf("\t\t\t\t\t\t\t       ****************************\n");
    printf("\t\t\t\t\t\t\t      ******************************\n");
    printf("\t\t\t\t\t\t\t     ********************************\n");
    printf("\t\t\t\t\t\t\t    **********************************\n");
    printf("\t\t\t\t\t\t\t   ************************************\n");
    printf("\t\t\t\t\t\t\t  **************************************\n");
    printf("\t\t\t\t\t\t\t ****************************************\n");
    printf("\t\t\t\t\t\t\t******************************************\n");
    printf("\t\t\t\t\t\t\t**\tRestaurant                      **\n");
    printf("\t\t\t\t\t\t\t**\t   Management                   **\n");
    printf("\t\t\t\t\t\t\t**\t         System                 **\n");
    printf("\t\t\t\t\t\t\t**\t                ===========     **\n");
    printf("\t\t\t\t\t\t\t**\t                =    |    =     **\n");
    printf("\t\t\t\t\t\t\t**\t                =    |    =     **\n");
    printf("\t\t\t\t\t\t\t**\t                =----|----=     **\n");
    printf("\t\t\t\t\t\t\t**\t                =    |    =     **\n");
    printf("\t\t\t\t\t\t\t**\t                =    |    =     **\n");
    printf("\t\t\t\t\t\t\t**\t                ===========     **\n");
    printf("\t\t\t\t\t\t\t**\t                                **\n");
    printf("\t\t\t\t\t\t\t**\t                                **\n");
    printf("\t\t\t\t\t\t\t**\t                                **\n");
    printf("\t\t\t\t\t\t\t******************************************\n");
    printf("\t\t\t\t\t\t\t******************************************\n");




    printf("\n\n\t\t\t\t====================================================================================\n");
    printf("\t\t\t\t||  Submitted To:                         ||   Created BY:                        ||\n");
    printf("\t\t\t\t||  Name: Tania khatun                    ||   Name:Shahriar Sultan Ramit         ||\n");
    printf("\t\t\t\t||  Senior Lectuter Dept. of CSE          ||   Department: CSE                    ||\n");
    printf("\t\t\t\t||  Daffodil International University     ||   Section: PC-A                      ||\n");
    printf("\t\t\t\t||                                        ||   ID: 213-15-4248                    ||\n");
    printf("\t\t\t\t||                                        ||                                      ||\n");
    printf("\t\t\t\t====================================================================================\n");
    create_menucard();

    struct node *temp=(struct node*)malloc(sizeof(struct node));
    while(1)
    {
    printf("\n\n\t\t\t\t<><><><><><><><><><><>\n");
        printf("\t\t\t\t<>    MAIN MENU     <>\n");
        printf("\t\t\t\t<><><><><><><><><><><>\n");
    printf("\n\n\t\t\t\t _________________\n");
        printf("\t\t\t\t| 1.Admin Pannel  |\n");
        printf("\t\t\t\t| 2.For Customer  |\n");
        printf("\t\t\t\t| Press 0 for end |\n");
        printf("\t\t\t\t|_________________|\n");
        printf("\t\t\t\tPress the key: ");
        scanf("%d",&choice);
        if(choice==0)break;

        else if(choice==1)
        {
            int password,i;
            printf("\t\t\t\tPlease enter the password(digit only): ");
            while(i<=3)
            {
                scanf("%d",&password);

                if(password==1234)
                {
                    admin();
                    break;
                }
                else
                {
                    printf("\t\t\t\t _____________________\n");
                    printf("\t\t\t\t|  Wrong Password     |\n");
                    printf("\t\t\t\t|_____________________|\n");
                    if(i<3)
                    printf("\t\t\t\t  Please enter the correct password: ");

                }
                i++;
                if(i==4)
                {   printf("\n");
                    printf("\t\t\t\t ________________________________\n");
                    printf("\t\t\t\t|  Try again later..........     |\n");
                    printf("\t\t\t\t|________________________________|\n");
                }
            }


        }
        else if(choice==2)
        {
            customer();

        }
        else if(choice==0)
        {
            break;
        }
    }
    return 0;
}
