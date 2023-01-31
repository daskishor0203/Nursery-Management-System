#include <stdio.h>
#include <string.h>
int validatoin(int n)
{
    if (list.cash_in_hand >= n)
        return 1;
    else
        return 0;
}

void buy_flower_plant()
{

    int a, quan;
    printf("name          rate\n");
    printf("%s         %d\n", list.jasmine.name, list.jasmine.buy_rate);
    printf("%s            %d\n", list.rose.name, list.rose.buy_rate);
    printf("%s    %d\n", list.chrysanthemum.name, list.chrysanthemum.buy_rate);
    printf("%s        %d\n", list.hibiscus.name, list.hibiscus.buy_rate);
    printf("%s        %d\n", list.tuberose.name, list.tuberose.buy_rate);
sasken:
    printf("press 1 for jasmine\npress 2 for rose\npress 3 for chrysanthemum\npress 4 for hibiscus\npress 5 for tuberose\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("enter quantity\n");
        scanf("%d", &quan);
        if (validatoin(quan * list.jasmine.buy_rate) == 1)
        {
            list.cash_in_hand = list.cash_in_hand - (quan * list.jasmine.buy_rate);
            list.jasmine.quantity += quan;
            book[tindex].amount = quan * list.jasmine.buy_rate;
            book[tindex].quantity = quan;
            strcpy(book[tindex].item, "jasmine");
            strcpy(book[tindex].purpose, "BUY");
            tindex++;
            printf("successfully purchase amount deduct from your account\n");
        }
        else
            printf("you haven't enough money to buy\n");
        break;
    case 2:
        printf("enter quantity\n");
        scanf("%d", &quan);
        if (validatoin(quan * list.rose.buy_rate) == 1)
        {
            list.cash_in_hand = list.cash_in_hand - (quan * list.rose.buy_rate);
            list.rose.quantity += quan;
            book[tindex].amount = quan * list.rose.buy_rate;
            book[tindex].quantity = quan;
            strcpy(book[tindex].item, "rose");
            strcpy(book[tindex].purpose, "BUY");
            tindex++;
            printf("successfully purchase amount deduct from your account\n");
        }
        else
            printf("you haven't enough money to buy\n");
        break;
    case 3:
        printf("enter quantity\n");
        scanf("%d", &quan);
        if (validatoin(quan * list.chrysanthemum.buy_rate) == 1)
        {
            list.cash_in_hand = list.cash_in_hand - (quan * list.chrysanthemum.buy_rate);
            list.chrysanthemum.quantity += quan;
            book[tindex].amount = quan * list.chrysanthemum.buy_rate;
            book[tindex].quantity = quan;
            strcpy(book[tindex].item, "chrysanthemum");
            strcpy(book[tindex].purpose, "BUY");
            tindex++;
            printf("successfully purchase amount deduct from your account\n");
        }
        else
            printf("you haven't enough money to buy\n");
        break;
    case 4:
        printf("enter quantity\n");
        scanf("%d", &quan);
        if (validatoin(quan * list.hibiscus.buy_rate) == 1)
        {
            list.cash_in_hand = list.cash_in_hand - (quan * list.hibiscus.buy_rate);
            list.hibiscus.quantity += quan;
            book[tindex].amount = quan * list.hibiscus.buy_rate;
            book[tindex].quantity = quan;
            strcpy(book[tindex].item, "hibiscus");
            strcpy(book[tindex].purpose, "BUY");
            tindex++;
            printf("successfully purchase amount deduct from your account\n");
        }
        else
            printf("you haven't enough money to buy\n");
        break;
        break;
    case 5:
        printf("enter quantity\n");
        scanf("%d", &quan);
        if (validatoin(quan * list.tuberose.buy_rate) == 1)
        {
            list.cash_in_hand = list.cash_in_hand - (quan * list.tuberose.buy_rate);
            list.tuberose.quantity += quan;
            book[tindex].amount = quan * list.tuberose.buy_rate;
            book[tindex].quantity = quan;
            strcpy(book[tindex].item, "tuberose");
            strcpy(book[tindex].purpose, "BUY");
            tindex++;
            printf("successfully purchase amount deduct from your account\n");
        }
        else
            printf("you haven't enough money to buy\n");
        // break;
        break;
    default:
        printf("you put wrong choice\n");
        goto sasken;
    }
}
void buy_succulents_plant()
{
    int a, quan;
    printf("name          rate\n");
    printf("%s      %d\n", list.lucky_jade.name, list.lucky_jade.buy_rate);
    printf("%s      %d\n", list.aloe_vera.name, list.aloe_vera.buy_rate);
    printf("%s      %d\n", list.cactus.name, list.cactus.buy_rate);
sasken:
    printf("press 1 for lucky_tube\npress 2 for aloe_vera\npress 3 for cactus\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("enter quantity\n");
        scanf("%d", &quan);
        if (validatoin(quan * list.lucky_jade.buy_rate) == 1)
        {
            list.cash_in_hand = list.cash_in_hand - (quan * list.lucky_jade.buy_rate);
            list.lucky_jade.quantity += quan;
            book[tindex].amount = quan * list.lucky_jade.buy_rate;
            book[tindex].quantity = quan;
            strcpy(book[tindex].item, "lucky_jade");
            strcpy(book[tindex].purpose, "BUY");
            tindex++;
            printf("successfully purchase amount deduct from your account\n");
        }
        else
            printf("you haven't enough money to buy\n");
        break;
    case 2:
        printf("enter quantity\n");
        scanf("%d", &quan);
        if (validatoin(quan * list.aloe_vera.buy_rate) == 1)
        {
            list.cash_in_hand = list.cash_in_hand - (quan * list.aloe_vera.buy_rate);
            list.aloe_vera.quantity += quan;
            book[tindex].amount = quan * list.aloe_vera.buy_rate;
            book[tindex].quantity = quan;
            strcpy(book[tindex].item, "aloe_vera");
            strcpy(book[tindex].purpose, "BUY");
            tindex++;
            printf("successfully purchase amount deduct from your account\n");
        }
        else
            printf("you haven't enough money to buy\n");
        break;
    case 3:
        printf("enter quantity\n");
        scanf("%d", &quan);
        if (validatoin(quan * list.cactus.buy_rate) == 1)
        {
            list.cash_in_hand = list.cash_in_hand - (quan * list.cactus.buy_rate);
            list.cactus.quantity += quan;
            book[tindex].amount = quan * list.cactus.buy_rate;
            book[tindex].quantity = quan;
            strcpy(book[tindex].item, "cactus");
            strcpy(book[tindex].purpose, "BUY");
            tindex++;
            printf("successfully purchase amount deduct from your account\n");
        }
        else
            printf("you haven't enough money to buy\n");
        break;
    default:
        printf("you put wrong choice\n");
        goto sasken;
    }
}
void buy_medicine_plant()
{
    int a, quan;
    printf("name          rate\n");
    printf("%s      %d\n", list.tulsi.name, list.tulsi.buy_rate);
    printf("%s      %d\n", list.turmeric.name, list.turmeric.buy_rate);
    printf("%s      %d\n", list.ginger.name, list.ginger.buy_rate);
    printf("%s      %d\n", list.bigthyme.name, list.bigthyme.buy_rate);
sasken:
    printf("press 1 for tulsi\npress 2 for turmeric\npress 3 for ginger\npress 4 for bigthyme\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("enter quantity\n");
        scanf("%d", &quan);
        if (validatoin(quan * list.tulsi.buy_rate) == 1)
        {
            list.cash_in_hand = list.cash_in_hand - (quan * list.tulsi.buy_rate);
            list.tulsi.quantity += quan;
            book[tindex].amount = quan * list.tulsi.buy_rate;
            book[tindex].quantity = quan;
            strcpy(book[tindex].item, "tulsi");
            strcpy(book[tindex].purpose, "BUY");
            tindex++;
            printf("successfully purchase amount deduct from your account\n");
        }
        else
            printf("you haven't enough money to buy\n");
        break;
    case 2:
        printf("enter quantity\n");
        scanf("%d", &quan);
        if (validatoin(quan * list.turmeric.buy_rate))
        {
            list.cash_in_hand = list.cash_in_hand - (quan * list.turmeric.buy_rate);
            list.turmeric.quantity += quan;
            book[tindex].amount = quan * list.turmeric.buy_rate;
            book[tindex].quantity = quan;
            strcpy(book[tindex].item, "turmeric");
            strcpy(book[tindex].purpose, "BUY");
            tindex++;
            printf("successfully purchase amount deduct from your account\n");
        }
        else
            printf("you haven't enough money to buy");
        break;
    case 3:
        printf("enter quantity\n");
        scanf("%d", &quan);
        if (validatoin(quan * list.ginger.buy_rate) == 1)
        {
            list.cash_in_hand = list.cash_in_hand - (quan * list.ginger.buy_rate);
            list.ginger.quantity += quan;
            book[tindex].amount = quan * list.ginger.buy_rate;
            book[tindex].quantity = quan;
            strcpy(book[tindex].item, "ginger");
            strcpy(book[tindex].purpose, "BUY");
            tindex++;
            printf("successfully purchase amount deduct from your account\n");
        }
        else
            printf("you haven't enough money to buy\n");
        break;
    case 4:
        printf("enter quantity\n");
        scanf("%d", &quan);
        if (validatoin(quan * list.bigthyme.buy_rate) == 1)
        {
            list.cash_in_hand = list.cash_in_hand - (quan * list.bigthyme.buy_rate);
            list.bigthyme.quantity += quan;
            book[tindex].amount = quan * list.bigthyme.buy_rate;
            book[tindex].quantity = quan;
            strcpy(book[tindex].item, "bigthyme");
            strcpy(book[tindex].purpose, "BUY");
            tindex++;
            printf("successfully purchase amount deduct from your account\n");
        }
        else
            printf("you haven't enough money to buy\n");
        break;
    default:
        printf("you put wrong choice\n");
        goto sasken;
    }
}
void buy_indoor_plant()
{
    int a, quan;
    printf("name          rate\n");
    printf("%s      %d\n", list.rubber_plants.name, list.rubber_plants.buy_rate);
    printf("%s      %d\n", list.spider_plants.name, list.spider_plants.buy_rate);
    printf("%s      %d\n", list.syngonium.name, list.syngonium.buy_rate);
sasken:
    printf("press 1 for rubber_plants\npress 2 for spider_plants\npress 3 for syngonium\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("enter quantity\n");
        scanf("%d", &quan);
        if (validatoin(quan * list.rubber_plants.buy_rate) == 1)
        {
            list.cash_in_hand = list.cash_in_hand - (quan * list.rubber_plants.buy_rate);
            list.rubber_plants.quantity += quan;
            book[tindex].amount = quan * list.rubber_plants.buy_rate;
            book[tindex].quantity = quan;
            strcpy(book[tindex].item, "rubber_plants");
            strcpy(book[tindex].purpose, "BUY");
            tindex++;
            printf("successfully purchase amount deduct from your account\n");
        }
        else
            printf("you haven't enough money to buy\n");
        break;
    case 2:
        printf("enter quantity\n");
        scanf("%d", &quan);
        if (validatoin(quan * list.spider_plants.buy_rate) == 1)
        {
            list.cash_in_hand = list.cash_in_hand - (quan * list.spider_plants.buy_rate);
            list.spider_plants.quantity += quan;
            book[tindex].amount = quan * list.spider_plants.buy_rate;
            book[tindex].quantity = quan;
            strcpy(book[tindex].item, "spider_plants");
            strcpy(book[tindex].purpose, "BUY");
            tindex++;
            printf("successfully purchase amount deduct from your account\n");
        }
        else
            printf("you haven't enough money to buy\n");
        break;
    case 3:
        printf("enter quantity\n");
        scanf("%d", &quan);
        if (validatoin(quan * list.syngonium.buy_rate) == 1)
        {
            list.cash_in_hand = list.cash_in_hand - (quan * list.syngonium.buy_rate);
            list.syngonium.quantity += quan;
            book[tindex].amount = quan * list.syngonium.buy_rate;
            book[tindex].quantity = quan;
            strcpy(book[tindex].item, "syngonium");
            strcpy(book[tindex].purpose, "BUY");
            tindex++;
            printf("successfully purchase amount deduct from your account\n");
        }
        else
            printf("you haven't enough money to buy\n");
        break;
    default:
        printf("you put wrong choice\n");
        goto sasken;
    }
}
void buy_water_collection_plant()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin(quan * list.water_plant.buy_rate) == 1)
    {
        list.cash_in_hand -= (quan * list.water_plant.buy_rate);
        list.water_plant.quantity += quan;
        book[tindex].amount = quan * list.water_plant.buy_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "water plant");
        strcpy(book[tindex].purpose, "BUY");
        tindex++;
        printf("successfully purchase amount deduct from your account\n");
    }
    else
        printf("you haven't enough money to buy\n");
}
void buy_secateur()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin(quan * list.secateur1.buy_rate) == 1)
    {
        list.cash_in_hand -= (quan * list.secateur1.buy_rate);
        list.secateur1.quantity += quan;
        book[tindex].amount = quan * list.secateur1.buy_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "secateur1");
        strcpy(book[tindex].purpose, "BUY");
        tindex++;
        printf("successfully purchase amount deduct from your account\n");
    }
    else
        printf("you haven't enough money to buy\n");
}
void buy_pickaxe()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin(quan * list.pickaxe1.buy_rate) == 1)
    {
        list.cash_in_hand -= (quan * list.pickaxe1.buy_rate);
        list.pickaxe1.quantity += quan;
        book[tindex].amount = quan * list.pickaxe1.buy_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "pickaxe1");
        strcpy(book[tindex].purpose, "BUY");
        tindex++;
        printf("successfully purchase amount deduct from your account\n");
    }
    else
        printf("you haven't enough money to buy\n");
}
void buy_shovel()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin(quan * list.shovel1.buy_rate) == 1)
    {
        list.cash_in_hand -= (quan * list.shovel1.buy_rate);
        list.shovel1.quantity += quan;
        book[tindex].amount = quan * list.shovel1.buy_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "shovel1");
        strcpy(book[tindex].purpose, "BUY");
        tindex++;
        printf("successfully purchase amount deduct from your account\n");
    }
    else
        printf("you haven't enough money to buy\n");
}
void buy_gloves()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin(quan * list.gloves1.buy_rate) == 1)
    {
        list.cash_in_hand -= (quan * list.gloves1.buy_rate);
        list.gloves1.quantity += quan;
        book[tindex].amount = quan * list.gloves1.buy_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "gloves1");
        strcpy(book[tindex].purpose, "BUY");
        tindex++;
        printf("successfully purchase amount deduct from your account\n");
    }
    else
        printf("you haven't enough money to buy\n");
}
void buy_potting_mix()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin(quan * list.potting_mix_1kg.buy_rate) == 1)
    {
        list.cash_in_hand -= (quan * list.potting_mix_1kg.buy_rate);
        list.potting_mix_1kg.quantity += quan;
        book[tindex].amount = quan * list.potting_mix_1kg.buy_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "potting_mix_1kg");
        strcpy(book[tindex].purpose, "BUY");
        tindex++;
        printf("successfully purchase amount deduct from your account\n");
    }
    else
        printf("you haven't enough money to buy\n");
}
void buy_coc_peat()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin(quan * list.coc_peat_1kg.buy_rate) == 1)
    {
        list.cash_in_hand -= (quan * list.coc_peat_1kg.buy_rate);
        list.coc_peat_1kg.quantity += quan;
        book[tindex].amount = quan * list.coc_peat_1kg.buy_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "coc_peat_1kg");
        strcpy(book[tindex].purpose, "BUY");
        tindex++;
        printf("successfully purchase amount deduct from your account\n");
    }
    else
        printf("you haven't enough money to buy\n");
}
void buy_vermicompost()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin(quan * list.vermicompost_1kg.buy_rate) == 1)
    {
        list.cash_in_hand -= (quan * list.vermicompost_1kg.buy_rate);
        list.vermicompost_1kg.quantity += quan;
        book[tindex].amount = quan * list.vermicompost_1kg.buy_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "vermicompost_1kg");
        strcpy(book[tindex].purpose, "BUY");
        tindex++;
        printf("successfully purchase amount deduct from your account\n");
    }
    else
        printf("you haven't enough money to buy\n");
}
void buy_manure()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin(quan * list.manure_1kg.buy_rate) == 1)
    {
        list.cash_in_hand -= (quan * list.manure_1kg.buy_rate);
        list.manure_1kg.quantity += quan;
        book[tindex].amount = quan * list.manure_1kg.buy_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "manure_1kg");
        strcpy(book[tindex].purpose, "BUY");
        tindex++;
        printf("successfully purchase amount deduct from your account\n");
    }
    else
        printf("you haven't enough money to buy\n");
}
void buy_pesticide()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin(quan * list.pesticide_1kg.buy_rate) == 1)
    {
        list.cash_in_hand -= (quan * list.pesticide_1kg.buy_rate);
        list.pesticide_1kg.quantity += quan;
        book[tindex].amount = quan * list.pesticide_1kg.buy_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "pesticide_1kg");
        strcpy(book[tindex].purpose, "BUY");
        tindex++;
        printf("successfully purchase amount deduct from your account\n");
    }
    else
        printf("you haven't enough money to buy\n");
}

void buy_potting_mix_500()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin(quan * list.potting_mix_500gm.buy_rate) == 1)
    {
        list.cash_in_hand -= (quan * list.potting_mix_500gm.buy_rate);
        list.potting_mix_500gm.quantity += quan;
        book[tindex].amount = quan * list.potting_mix_500gm.buy_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "potting_mix_500gm");
        strcpy(book[tindex].purpose, "BUY");
        tindex++;
        printf("successfully purchase amount deduct from your account\n");
    }
    else
        printf("you haven't enough money to buy\n");
}
void buy_coc_peat_500()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin(quan * list.coc_peat_500gm.buy_rate) == 1)
    {
        list.cash_in_hand -= (quan * list.coc_peat_500gm.buy_rate);
        list.coc_peat_500gm.quantity += quan;
        book[tindex].amount = quan * list.coc_peat_500gm.buy_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "coc_peat_500gm");
        strcpy(book[tindex].purpose, "BUY");
        tindex++;
        printf("successfully purchase amount deduct from your account\n");
    }
    else
        printf("you haven't enough money to buy\n");
}
void buy_vermicompost_500()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin(quan * list.vermicompost_500gm.buy_rate) == 1)
    {
        list.cash_in_hand -= (quan * list.vermicompost_500gm.buy_rate);
        list.vermicompost_500gm.quantity += quan;
        book[tindex].amount = quan * list.vermicompost_500gm.buy_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "vermicompost_500gm");
        strcpy(book[tindex].purpose, "BUY");
        tindex++;
        printf("successfully purchase amount deduct from your account\n");
    }
    else
        printf("you haven't enough money to buy\n");
}
void buy_manure_500()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin(quan * list.manure_500gm.buy_rate) == 1)
    {
        list.cash_in_hand -= (quan * list.manure_500gm.buy_rate);
        list.manure_500gm.quantity += quan;
        book[tindex].amount = quan * list.manure_500gm.buy_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "manure_500gm");
        strcpy(book[tindex].purpose, "BUY");
        tindex++;
        printf("successfully purchase amount deduct from your account\n");
    }
    else
        printf("you haven't enough money to buy\n");
}
void buy_pesticide_500()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin(quan * list.pesticide_500gm.buy_rate) == 1)
    {
        list.cash_in_hand -= (quan * list.pesticide_500gm.buy_rate);
        list.pesticide_500gm.quantity += quan;
        book[tindex].amount = quan * list.pesticide_500gm.buy_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "pesticide_500gm");
        strcpy(book[tindex].purpose, "BUY");
        tindex++;
        printf("successfully purchase amount deduct from your account\n");
    }
    else
        printf("you haven't enough money to buy\n");
}

void buy_porc_small()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin(quan * list.s_porcelain.buy_rate) == 1)
    {
        list.cash_in_hand -= (quan * list.s_porcelain.buy_rate);
        list.s_porcelain.quantity += quan;
        book[tindex].amount = quan * list.s_porcelain.buy_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "s_porcelain");
        strcpy(book[tindex].purpose, "BUY");
        tindex++;
        printf("successfully purchase amount deduct from your account\n");
    }
    else
        printf("you haven't enough money to buy\n");
}
void buy__porc_medium()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin(quan * list.m_porcelain.buy_rate) == 1)
    {
        list.cash_in_hand -= (quan * list.m_porcelain.buy_rate);
        list.m_porcelain.quantity += quan;
        book[tindex].amount = quan * list.m_porcelain.buy_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "m_porcelain");
        strcpy(book[tindex].purpose, "BUY");
        tindex++;
        printf("successfully purchase amount deduct from your account\n");
    }
    else
        printf("you haven't enough money to buy\n");
}
void buy_opec_big()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin(quan * list.b_porcelain.buy_rate) == 1)
    {
        list.cash_in_hand -= (quan * list.b_porcelain.buy_rate);
        list.b_porcelain.quantity += quan;
        book[tindex].amount = quan * list.b_porcelain.buy_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "b_porcelain");
        strcpy(book[tindex].purpose, "BUY");
        tindex++;
        printf("successfully purchase amount deduct from your account\n");
    }
    else
        printf("you haven't enough money to buy\n");
}
void buy_porc_very_big()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin(quan * list.vb_porcelain.buy_rate) == 1)
    {
        list.cash_in_hand -= (quan * list.vb_porcelain.buy_rate);
        list.vb_porcelain.quantity += quan;
        book[tindex].amount = quan * list.vb_porcelain.buy_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "vb_porcelain");
        strcpy(book[tindex].purpose, "BUY");
        tindex++;
        printf("successfully purchase amount deduct from your account\n");
    }
    else
        printf("you haven't enough money to buy\n");
}
void buy_terr_small()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin(quan * list.s_terracotta.buy_rate) == 1)
    {
        list.cash_in_hand -= (quan * list.s_terracotta.buy_rate);
        list.s_terracotta.quantity += quan;
        book[tindex].amount = quan * list.s_terracotta.buy_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "s_terracotta");
        strcpy(book[tindex].purpose, "BUY");
        tindex++;
        printf("successfully purchase amount deduct from your account\n");
    }
    else
        printf("you haven't enough money to buy\n");
}
void buy_terr_big()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin(quan * list.b_terracotta.buy_rate) == 1)
    {
        list.cash_in_hand -= (quan * list.b_terracotta.buy_rate);
        list.b_terracotta.quantity += quan;
        book[tindex].amount = quan * list.b_terracotta.buy_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "b_terracotta");
        strcpy(book[tindex].purpose, "BUY");
        tindex++;
        printf("successfully purchase amount deduct from your account\n");
    }
    else
        printf("you haven't enough money to buy\n");
}
void buy__terr_medium()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin(quan * list.m_terracotta.buy_rate) == 1)
    {

        list.cash_in_hand -= (quan * list.m_terracotta.buy_rate);
        list.m_terracotta.quantity += quan;
        book[tindex].amount = quan * list.m_terracotta.buy_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "m_terracotta");
        strcpy(book[tindex].purpose, "BUY");
        tindex++;
        printf("successfully purchase amount deduct from your account\n");
    }
    else
        printf("you haven't enough money to buy\n");
}
void buy_terr_very_big()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin(quan * list.vb_terracotta.buy_rate) == 1)
    {
        list.cash_in_hand -= (quan * list.vb_terracotta.buy_rate);
        list.vb_terracotta.quantity += quan;
        book[tindex].amount = quan * list.vb_terracotta.buy_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "vb_terracotta");
        strcpy(book[tindex].purpose, "BUY");
        tindex++;
        printf("successfully purchase amount deduct from your account\n");
    }
    else
        printf("you haven't enough money to buy\n");
}

void buy_plastic_small()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin(quan * list.s_plastic.buy_rate) == 1)
    {
        list.cash_in_hand -= (quan * list.s_plastic.buy_rate);
        list.s_plastic.quantity += quan;
        book[tindex].amount = quan * list.s_plastic.buy_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "s_plastic");
        strcpy(book[tindex].purpose, "BUY");
        tindex++;
        printf("successfully purchase amount deduct from your account\n");
    }
    else
        printf("you haven't enough money to buy\n");
}
void buy__plastic_medium()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin(quan * list.m_plastic.buy_rate) == 1)
    {
        list.cash_in_hand -= (quan * list.m_plastic.buy_rate);
        list.m_plastic.quantity += quan;
        book[tindex].amount = quan * list.m_plastic.buy_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "m_plastic");
        strcpy(book[tindex].purpose, "BUY");
        tindex++;
        printf("successfully purchase amount deduct from your account\n");
    }
    else
        printf("you haven't enough money to buy\n");
}
void buy_plastic_big()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin(quan * list.b_plastic.buy_rate) == 1)
    {
        list.cash_in_hand -= (quan * list.b_plastic.buy_rate);
        list.b_plastic.quantity += quan;
        book[tindex].amount = quan * list.b_plastic.buy_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "b_plastic");
        strcpy(book[tindex].purpose, "BUY");
        tindex++;
        printf("successfully purchase amount deduct from your account\n");
    }
    else
        printf("you haven't enough money to buy\n");
}

void buy_plastic_very_big()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin(quan * list.vb_plastic.buy_rate) == 1)
    {
        list.cash_in_hand -= (quan * list.vb_plastic.buy_rate);
        list.vb_plastic.quantity += quan;
        book[tindex].amount = quan * list.vb_plastic.buy_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "vb_plastic");
        strcpy(book[tindex].purpose, "BUY");
        tindex++;
        printf("successfully purchase amount deduct from your account\n");
    }
    else
        printf("you haven't enough money to buy\n");
}
void buy_cement_small()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin(quan * list.s_cement.buy_rate) == 1)
    {
        list.cash_in_hand -= (quan * list.s_cement.buy_rate);
        list.s_cement.quantity += quan;
        book[tindex].amount = quan * list.s_cement.buy_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "s_cement");
        strcpy(book[tindex].purpose, "BUY");
        tindex++;
        printf("successfully purchase amount deduct from your account\n");
    }
    else
        printf("you haven't enough money to buy\n");
}
void buy__cement_medium()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin(quan * list.m_cement.buy_rate) == 1)
    {
        list.cash_in_hand -= (quan * list.m_cement.buy_rate);
        list.m_cement.quantity += quan;
        book[tindex].amount = quan * list.m_cement.buy_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "m_cement");
        strcpy(book[tindex].purpose, "BUY");
        tindex++;
        printf("successfully purchase amount deduct from your account\n");
    }
    else
        printf("you haven't enough money to buy\n");
}
void buy_cement_big()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin(quan * list.b_cement.buy_rate) == 1)
    {
        list.cash_in_hand -= (quan * list.b_cement.buy_rate);
        list.b_cement.quantity += quan;
        book[tindex].amount = quan * list.b_cement.buy_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "b_cement");
        strcpy(book[tindex].purpose, "BUY");
        tindex++;
        printf("successfully purchase amount deduct from your account\n");
    }
    else
        printf("you haven't enough money to buy\n");
}
void buy_cement_very_big()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin(quan * list.vb_cement.buy_rate) == 1)
    {
        list.cash_in_hand -= (quan * list.vb_cement.buy_rate);
        list.vb_cement.quantity += quan;
        book[tindex].amount = quan * list.vb_cement.buy_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "vb_cement");
        strcpy(book[tindex].purpose, "BUY");
        tindex++;
        printf("successfully purchase amount deduct from your account\n");
    }
    else
        printf("you haven't enough money to buy\n");
}

void buy_pot()
{
    int type, size;
sas:
    printf("press 1 for porcelain\npress 2 for terracotta\npress 3 plastic\nprees 4 for  cement\n");
    scanf("%d", &type);
    switch (type)
    {
    case 1:
    sa:
        printf("press 1 for small\npress 2 for medium\npress 3 big\nprees 4 for  very big\n");
        scanf("%d", &size);
        switch (size)
        {
        case 1:
            buy_porc_small();
            break;
        case 2:
            buy__porc_medium();
            break;
        case 3:
            buy_opec_big();
            break;
        case 4:
            buy_porc_very_big();

            break;

        default:
            goto sa;
            break;
        }
        break;
    case 2:
    kis:
        printf("press 1 for small\npress 2 for medium\npress 3 big\nprees 4 for  very big\n");
        scanf("%d", &size);
        switch (size)
        {
        case 1:
            buy_terr_small();
            break;
        case 2:
            buy__terr_medium();
            break;
        case 3:
            buy_terr_big();
            break;
        case 4:
            buy_terr_very_big();
            break;

        default:
            goto kis;
            break;
        }
        break;

    case 3:
    kish:
        printf("press 1 for small\npress 2 for medium\npress 3 big\nprees 4 for  very big\n");
        scanf("%d", &size);
        switch (size)
        {
        case 1:
            buy_plastic_small();
            break;
        case 2:
            buy__plastic_medium();
            break;
        case 3:
            buy_plastic_big();
            break;
        case 4:
            buy_plastic_very_big();
            break;

        default:
            goto kish;
            break;
        }
        break;

    case 4:
    kish0:
        printf("press 1 for small\npress 2 for medium\npress 3 big\nprees 4 for  very big\n");
        scanf("%d", &size);
        switch (size)
        {
        case 1:
            buy_cement_small();
            break;
        case 2:
            buy__cement_medium();
            break;
        case 3:
            buy_cement_big();
            break;
        case 4:
            buy_cement_very_big();
            break;

        default:
            goto kish0;
            break;
        }
        break;

    default:
        goto sas;
        break;
    }
}

void buy()
{
sask:
    printf("press 1 for plant\npress 2 for accessories\npress 3 for fertilizer\n");
    int a, b, c, d;
    scanf("%d", &a);
    switch (a)
    {
    case 1:
    sasken:
        printf("press 1 for flower plant\npress 2 for succulents\npress 3 medicine plant\nprees 4 for indoor plant\n");
        scanf("%d", &b);
        switch (b)
        {
        case 1:
            buy_flower_plant();
            break;
        case 2:
            buy_succulents_plant();
            break;
        case 3:
            buy_medicine_plant();
            break;
        case 4:
            buy_indoor_plant();
            break;
        default:
            printf("you put wrong input\n");
            goto sasken;
            break;
        }
        break;
    case 2:
    sasian:
        printf("press 1 for pot\npress 2 for water collection plant\npress 3 for secateur\npress 4 for pickaxe\npress 5 for shovel\npress 6 for gloves\n");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            buy_pot();
            break;
        case 2:
            buy_water_collection_plant();
            break;
        case 3:
            buy_secateur();
            break;
        case 4:
            buy_pickaxe();
            break;
        case 5:
            buy_shovel();
            break;
        case 6:
            buy_gloves();
            break;
        default:
            printf("you enter wrong input\n");
            goto sasian;
            break;
        }
        break;
    case 3:
        printf("press 1 for 1kg\npress 2 for 500 gm\n");
        int wait;
        scanf("%d", &wait);
        switch (wait)
        {
        case 1:

        sasia:
            printf("press 1 for potting mix\npress 2 for coc peat\npress 3 for vermicompost_1kg\npress 4 for manure_1kg\npress 5 for pesticide_1kg\n");
            scanf("%d", &c);
            switch (c)
            {

            case 1:
                buy_potting_mix();
                break;
            case 2:
                buy_coc_peat();
                break;
            case 3:
                buy_vermicompost();
                break;
            case 4:
                buy_manure();
                break;
            case 5:
                buy_pesticide();
                break;
            default:
                printf("you enter wrong input\n");
                goto sasia;
                break;
            }
            break;
        case 2:
        sasiant:
            printf("press 1 for potting mix_500\npress 2 for coc peat_500\npress 3 for vermicompost_500\npress 4 for manure_500\npress 5 for pesticide_500\n");
            scanf("%d", &c);
            switch (c)
            {

            case 1:
                buy_potting_mix_500();
                break;
            case 2:
                buy_coc_peat_500();
                break;
            case 3:
                buy_vermicompost_500();
                break;
            case 4:
                buy_manure_500();
                break;
            case 5:
                buy_pesticide_500();
                break;
            default:
                printf("you enter wrong input\n");
                goto sasiant;
                break;
            }
            break;
        default:
            printf("you put wrong choice\n");
            goto sask;
            break;
        }
    }
}
