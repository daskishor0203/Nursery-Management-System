#include <stdio.h>
#include <string.h>

int validatoin_s(int n, int d)
{
    if (n <= d)
        return 1;
    else
        return 0;
}

void sell_flower_plant()
{
    int a, quan;
    printf("name          rate\n");
    printf("%s      %d\n", list.jasmine.name, list.jasmine.sell_rate);
    printf("%s      %d\n", list.rose.name, list.rose.sell_rate);
    printf("%s      %d\n", list.chrysanthemum.name, list.chrysanthemum.sell_rate);
    printf("%s      %d\n", list.hibiscus.name, list.hibiscus.sell_rate);
    printf("%s      %d\n", list.tuberose.name, list.tuberose.sell_rate);
sasken:
    printf("press 1 for jasmine\npress 2 for rose\npress 3 for chrysanthemum\npress 4 for hibiscus\npress 5 for tuberose\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("enter quantity. %d pices available\n", list.jasmine.quantity);
        scanf("%d", &quan);
        if (validatoin_s(quan, list.jasmine.quantity))
        {
            list.cash_in_hand = list.cash_in_hand + (quan * list.jasmine.sell_rate);
            list.jasmine.quantity -= quan;
            book[tindex].amount = quan * list.jasmine.sell_rate;
            book[tindex].quantity = quan;
            strcpy(book[tindex].item, "jasmine");
            strcpy(book[tindex].purpose, "SELL");
            tindex++;
            total_profit += (quan * (list.jasmine.sell_rate - list.jasmine.buy_rate));
            printf("successfully sell amount credited to your account\n");
            printf("you want to sell more than exist\n");
        }
        else
            printf("you enter more than existing quantity\n");
        break;
    case 2:
        printf("enter quantity. %d pices available\n", list.rose.quantity);
        scanf("%d", &quan);
        if (validatoin_s(quan, list.rose.quantity))
        {
            list.cash_in_hand = list.cash_in_hand + (quan * list.rose.sell_rate);
            list.rose.quantity -= quan;
            book[tindex].amount = quan * list.rose.sell_rate;
            book[tindex].quantity = quan;
            strcpy(book[tindex].item, "rose");
            strcpy(book[tindex].purpose, "SELL");
            tindex++;
            total_profit += (quan * (list.rose.sell_rate - list.rose.buy_rate));
            printf("successfully sell amount credited to your account\n");
        }
        else
            printf("you enter more than existing quantity\n");
        break;
    case 3:
        printf("enter quantity. %d pices available\n", list.chrysanthemum.quantity);
        scanf("%d", &quan);
        if (validatoin_s(quan, list.chrysanthemum.quantity))
        {
            list.cash_in_hand = list.cash_in_hand + (quan * list.chrysanthemum.sell_rate);
            list.chrysanthemum.quantity -= quan;
            book[tindex].amount = quan * list.chrysanthemum.sell_rate;
            book[tindex].quantity = quan;
            strcpy(book[tindex].item, "chrysanthemum");
            strcpy(book[tindex].purpose, "SELL");
            tindex++;
            total_profit += (quan * (list.chrysanthemum.sell_rate - list.chrysanthemum.buy_rate));
            printf("successfully sell amount credited to your account\n");
        }
        else
            printf("you enter more than existing quantity\n");
        break;
    case 4:
        printf("enter quantity. %d pices available\n", list.hibiscus.quantity);
        scanf("%d", &quan);
        if (validatoin_s(quan, list.hibiscus.quantity))
        {
            list.cash_in_hand = list.cash_in_hand + (quan * list.hibiscus.sell_rate);
            list.hibiscus.quantity -= quan;
            book[tindex].amount = quan * list.hibiscus.sell_rate;
            book[tindex].quantity = quan;
            strcpy(book[tindex].item, "hibiscus");
            strcpy(book[tindex].purpose, "SEll");
            tindex++;
            total_profit += (quan * (list.hibiscus.sell_rate - list.hibiscus.buy_rate));
            printf("successfully sell amount credited to your account\n");
        }
        else
            printf("you enter more than existing quantity\n");
        break;
    case 5:
        printf("enter quantity. %d pices available\n", list.tuberose.quantity);
        scanf("%d", &quan);
        if (validatoin_s(quan, list.tuberose.quantity))
        {
            list.cash_in_hand = list.cash_in_hand + (quan * list.tuberose.sell_rate);
            list.tuberose.quantity -= quan;
            book[tindex].amount = quan * list.tuberose.sell_rate;
            book[tindex].quantity = quan;
            strcpy(book[tindex].item, "tuberose");
            strcpy(book[tindex].purpose, "SELL");
            tindex++;
            total_profit += (quan * (list.tuberose.sell_rate - list.tuberose.buy_rate));
            printf("successfully sell amount credited to your account\n");
        }
        else
            printf("you enter more than existing quantity\n");
        break;
    default:
        printf("you put wrong choice\n");
        goto sasken;
    }
}
void sell_succulents_plant()
{
    int a, quan;
    printf("name          rate\n");
    printf("%s      %d\n", list.lucky_jade.name, list.lucky_jade.sell_rate);
    printf("%s      %d\n", list.aloe_vera.name, list.aloe_vera.sell_rate);
    printf("%s      %d\n", list.cactus.name, list.cactus.sell_rate);
sasken:
    printf("press 1 for lucky_tube\npress 2 for aloe_vera\npress 3 for cactus\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("enter quantity. %d pices available\n", list.lucky_jade.quantity);
        scanf("%d", &quan);
        if (validatoin_s(quan, list.lucky_jade.quantity))
        {
            list.cash_in_hand = list.cash_in_hand + (quan * list.lucky_jade.sell_rate);
            list.lucky_jade.quantity -= quan;
            book[tindex].amount = quan * list.lucky_jade.sell_rate;
            book[tindex].quantity = quan;
            strcpy(book[tindex].item, "lucky_jade");
            strcpy(book[tindex].purpose, "SELL");
            tindex++;
            total_profit += (quan * (list.lucky_jade.sell_rate - list.lucky_jade.buy_rate));
            printf("successfully sell amount credited to your account\n");
        }
        else
            printf("you enter more than existing quantity\n");
        break;
    case 2:
        printf("enter quantity. %d pices available\n", list.aloe_vera.quantity);
        scanf("%d", &quan);
        if (validatoin_s(quan, list.aloe_vera.quantity))
        {
            list.cash_in_hand = list.cash_in_hand + (quan * list.aloe_vera.sell_rate);
            list.aloe_vera.quantity -= quan;
            book[tindex].amount = quan * list.aloe_vera.sell_rate;
            book[tindex].quantity = quan;
            strcpy(book[tindex].item, "aloe_vera");
            strcpy(book[tindex].purpose, "SELL");
            tindex++;
            total_profit += (quan * (list.aloe_vera.sell_rate - list.aloe_vera.buy_rate));
            printf("successfully sell amount credited to your account\n");
        }
        else
            printf("you enter more than existing quantity\n");
        break;
    case 3:
        printf("enter quantity. %d pices available\n", list.cactus.quantity);
        scanf("%d", &quan);
        if (validatoin_s(quan, list.cactus.quantity))
        {
            list.cash_in_hand = list.cash_in_hand + (quan * list.cactus.sell_rate);
            list.cactus.quantity -= quan;
            book[tindex].amount = quan * list.cactus.sell_rate;
            book[tindex].quantity = quan;
            strcpy(book[tindex].item, "cactus");
            strcpy(book[tindex].purpose, "SELL");
            tindex++;
            total_profit += (quan * (list.cactus.sell_rate - list.cactus.buy_rate));
            printf("successfully sell amount credited to your account\n");
        }
        else
            printf("you enter more than existing quantity\n");
        break;
    default:
        printf("you put wrong choice\n");
        goto sasken;
    }
}
void sell_medicine_plant()
{
    int a, quan;
    printf("name          rate\n");
    printf("%s      %d\n", list.tulsi.name, list.tulsi.sell_rate);
    printf("%s      %d\n", list.turmeric.name, list.turmeric.sell_rate);
    printf("%s      %d\n", list.ginger.name, list.ginger.buy_rate);
    printf("%s      %d\n", list.bigthyme.name, list.bigthyme.sell_rate);
sasken:
    printf("press 1 for tulsi\npress 2 for turmeric\npress 3 for ginger\npress 4 for bigthyme\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("enter quantity. %d pices available\n", list.tulsi.quantity);
        scanf("%d", &quan);
        if (validatoin_s(quan, list.tulsi.quantity))
        {
            list.cash_in_hand = list.cash_in_hand + (quan * list.tulsi.sell_rate);
            list.tulsi.quantity -= quan;
            book[tindex].amount = quan * list.tulsi.sell_rate;
            book[tindex].quantity = quan;
            strcpy(book[tindex].item, "tulsi");
            strcpy(book[tindex].purpose, "SELL");
            tindex++;
            total_profit += (quan * (list.tulsi.sell_rate - list.tulsi.buy_rate));
            printf("successfully sell amount credited to your account\n");
        }
        else
            printf("you enter more than existing quantity\n");
        break;
    case 2:
        printf("enter quantity. %d pices available\n", list.turmeric.quantity);
        scanf("%d", &quan);
        if (validatoin_s(quan, list.turmeric.quantity))
        {
            list.cash_in_hand = list.cash_in_hand + (quan * list.turmeric.sell_rate);
            list.turmeric.quantity -= quan;
            book[tindex].amount = quan * list.turmeric.sell_rate;
            book[tindex].quantity = quan;
            strcpy(book[tindex].item, "turmeric");
            strcpy(book[tindex].purpose, "SELL");
            tindex++;
            total_profit += (quan * (list.turmeric.sell_rate - list.turmeric.buy_rate));
            printf("successfully sell amount credited to your account\n");
        }
        else
            printf("you enter more than existing quantity\n");
        break;
    case 3:
        printf("enter quantity. %d pices available\n", list.ginger.quantity);
        scanf("%d", &quan);
        if (validatoin_s(quan, list.ginger.quantity))
        {
            list.cash_in_hand = list.cash_in_hand + (quan * list.ginger.sell_rate);
            list.ginger.quantity -= quan;
            book[tindex].amount = quan * list.ginger.sell_rate;
            book[tindex].quantity = quan;
            strcpy(book[tindex].item, "ginger");
            strcpy(book[tindex].purpose, "SELL");
            tindex++;
            total_profit += (quan * (list.ginger.sell_rate - list.ginger.buy_rate));
            printf("successfully sell amount credited to your account\n");
        }
        else
            printf("you enter more than existing quantity\n");
        break;
    case 4:
        printf("enter quantity. %d pices available\n", list.bigthyme.quantity);
        scanf("%d", &quan);
        if (validatoin_s(quan, list.bigthyme.quantity))
        {
            list.cash_in_hand = list.cash_in_hand + (quan * list.bigthyme.sell_rate);
            list.bigthyme.quantity -= quan;
            book[tindex].amount = quan * list.bigthyme.sell_rate;
            book[tindex].quantity = quan;
            strcpy(book[tindex].item, "bigthyme");
            strcpy(book[tindex].purpose, "SELL");
            tindex++;
            total_profit += (quan * (list.bigthyme.sell_rate - list.bigthyme.buy_rate));
            printf("successfully sell amount credited to your account\n");
        }
        else
            printf("you enter more than existing quantity\n");
        break;
    default:
        printf("you put wrong choice\n");
        goto sasken;
    }
}
void sell_indoor_plant()
{
    int a, quan;
    printf("name          rate\n");
    printf("%s      %d\n", list.rubber_plants.name, list.rubber_plants.sell_rate);
    printf("%s      %d\n", list.spider_plants.name, list.spider_plants.sell_rate);
    printf("%s      %d\n", list.syngonium.name, list.syngonium.sell_rate);
sasken:
    printf("press 1 for rubber_plants\npress 2 for spider_plants\npress 3 for syngonium\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("enter quantity. %d pices available\n", list.rubber_plants.quantity);
        scanf("%d", &quan);
        if (validatoin_s(quan, list.rubber_plants.quantity))
        {
            list.cash_in_hand = list.cash_in_hand + (quan * list.rubber_plants.sell_rate);
            list.rubber_plants.quantity -= quan;
            book[tindex].amount = quan * list.rubber_plants.sell_rate;
            book[tindex].quantity = quan;
            strcpy(book[tindex].item, "rubber_plants");
            strcpy(book[tindex].purpose, "SELL");
            tindex++;
            total_profit += (quan * (list.rubber_plants.sell_rate - list.rubber_plants.buy_rate));
            printf("successfully sell amount credited to your account\n");
        }
        else
            printf("you enter more than existing quantity\n");
        break;
    case 2:
        printf("enter quantity. %d pices available\n", list.spider_plants.quantity);
        scanf("%d", &quan);
        if (validatoin_s(quan, list.spider_plants.quantity))
        {
            list.cash_in_hand = list.cash_in_hand + (quan * list.spider_plants.sell_rate);
            list.spider_plants.quantity -= quan;
            book[tindex].amount = quan * list.spider_plants.sell_rate;
            book[tindex].quantity = quan;
            strcpy(book[tindex].item, "spider_plants");
            strcpy(book[tindex].purpose, "SELL");
            tindex++;
            total_profit += (quan * (list.spider_plants.sell_rate - list.spider_plants.buy_rate));
            printf("successfully sell amount credited to your account\n");
        }
        else
            printf("you enter more than existing quantity\n");
        break;
    case 3:
        printf("enter quantity. %d pices available\n", list.syngonium.quantity);
        scanf("%d", &quan);
        if (validatoin_s(quan, list.syngonium.quantity))
        {
            list.cash_in_hand = list.cash_in_hand + (quan * list.syngonium.sell_rate);
            list.syngonium.quantity -= quan;
            book[tindex].amount = quan * list.syngonium.sell_rate;
            book[tindex].quantity = quan;
            strcpy(book[tindex].item, "syngonium");
            strcpy(book[tindex].purpose, "SELL");
            tindex++;
            total_profit += (quan * (list.syngonium.sell_rate - list.syngonium.buy_rate));
            printf("successfully sell amount credited to your account\n");
        }
        else
            printf("you enter more than existing quantity\n");
        break;
    default:
        printf("you put wrong choice\n");
        goto sasken;
    }
}
void sell_water_collection_plant()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin_s(quan, list.water_plant.quantity))
    {
        list.cash_in_hand += (quan * list.water_plant.sell_rate);
        list.water_plant.quantity -= quan;
        book[tindex].amount = quan * list.water_plant.sell_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "water_plant");
        strcpy(book[tindex].purpose, "SELL");
        tindex++;
        total_profit += (quan * (list.water_plant.sell_rate - list.water_plant.buy_rate));
        printf("successfully sell amount credited in your account\n");
    }
    else
        printf("you enter more than existing quantity\n");
}
void sell_secateur()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin_s(quan, list.secateur1.quantity))
    {
        list.cash_in_hand += (quan * list.secateur1.sell_rate);
        list.secateur1.quantity -= quan;
        book[tindex].amount = quan * list.secateur1.sell_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "secateur1");
        strcpy(book[tindex].purpose, "SELL");
        tindex++;
        total_profit += (quan * (list.secateur1.sell_rate - list.secateur1.buy_rate));
        printf("successfully sell amount credited in your account\n");
    }
    else
        printf("you enter more than existing quantity\n");
}
void sell_pickaxe()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin_s(quan, list.pickaxe1.quantity))
    {
        list.cash_in_hand += (quan * list.pickaxe1.sell_rate);
        list.pickaxe1.quantity -= quan;
        book[tindex].amount = quan * list.pickaxe1.sell_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "pickaxe1");
        strcpy(book[tindex].purpose, "SELL");
        tindex++;
        total_profit += (quan * (list.pickaxe1.sell_rate - list.pickaxe1.buy_rate));
        printf("successfully sell amount credited in your account\n");
    }
    else
        printf("you enter more than existing quantity\n");
}
void sell_shovel()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin_s(quan, list.shovel1.quantity))
    {
        list.cash_in_hand += (quan * list.shovel1.sell_rate);
        list.shovel1.quantity -= quan;
        book[tindex].amount = quan * list.shovel1.sell_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "shovel1");
        strcpy(book[tindex].purpose, "SELL");
        tindex++;
        total_profit += (quan * (list.shovel1.sell_rate - list.shovel1.buy_rate));
        printf("successfully sell amount credited in your account\n");
    }
    else
        printf("you enter more than existing quantity\n");
}
void sell_gloves()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin_s(quan, list.gloves1.quantity))
    {
        list.cash_in_hand += (quan * list.gloves1.sell_rate);
        list.gloves1.quantity -= quan;
        book[tindex].amount = quan * list.gloves1.sell_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "gloves1");
        strcpy(book[tindex].purpose, "SELL");
        tindex++;
        total_profit += (quan * (list.gloves1.sell_rate - list.gloves1.buy_rate));
        printf("successfully sell amount credited in your account\n");
    }
    else
        printf("you enter more than existing quantity\n");
}

void sell_potting_mix()
{
    printf("you have %d  potting_mix_1kg\n", list.potting_mix_1kg.quantity);
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin_s(quan, list.potting_mix_1kg.quantity))
    {
        list.cash_in_hand += (quan * list.potting_mix_1kg.sell_rate);
        list.potting_mix_1kg.quantity -= quan;
        book[tindex].amount = quan * list.potting_mix_1kg.sell_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "potting_mix_1kg");
        strcpy(book[tindex].purpose, "SELL");
        tindex++;
        total_profit += (quan * (list.potting_mix_1kg.sell_rate - list.potting_mix_1kg.buy_rate));
        printf("successfully sell amount credited in your account\n");
    }
    else
        printf("you enter more than existing quantity\n");
}
void sell_coc_peat()
{
    printf("you have %d  coc_peat_1kg\n", list.coc_peat_1kg.quantity);

    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin_s(quan, list.coc_peat_1kg.quantity))
    {
        list.cash_in_hand += (quan * list.coc_peat_1kg.sell_rate);
        list.coc_peat_1kg.quantity -= quan;
        book[tindex].amount = quan * list.coc_peat_1kg.sell_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "coc_peat_1kg");
        strcpy(book[tindex].purpose, "SELL");
        tindex++;
        total_profit += (quan * (list.coc_peat_1kg.sell_rate - list.coc_peat_1kg.buy_rate));
        printf("successfully sell amount credited in your account\n");
    }
    else
        printf("you enter more than existing quantity\n");
}
void sell_vermicompost()
{
    printf("you have %d  vermicompost_1kg\n", list.vermicompost_1kg.quantity);

    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin_s(quan, list.vermicompost_1kg.quantity))
    {
        list.cash_in_hand += (quan * list.vermicompost_1kg.sell_rate);
        list.vermicompost_1kg.quantity -= quan;
        book[tindex].amount = quan * list.vermicompost_1kg.sell_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "vermicompost_1kg");
        strcpy(book[tindex].purpose, "SELL");
        tindex++;
        total_profit += (quan * (list.vermicompost_1kg.sell_rate - list.vermicompost_1kg.buy_rate));
        printf("successfully sell amount credited in your account\n");
    }
    else
        printf("you enter more than existing quantity\n");
}
void sell_manure()
{
    printf("you have %d  manure_1kg\n", list.manure_1kg.quantity);

    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin_s(quan, list.manure_1kg.quantity))
    {
        list.cash_in_hand += (quan * list.manure_1kg.sell_rate);
        list.manure_1kg.quantity -= quan;
        book[tindex].amount = quan * list.manure_1kg.sell_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "manure_1kg");
        strcpy(book[tindex].purpose, "SELL");
        tindex++;
        total_profit += (quan * (list.manure_1kg.sell_rate - list.manure_1kg.buy_rate));
        printf("successfully sell amount credited in your account\n");
    }
    else
        printf("you enter more than existing quantity\n");
}
void sell_pesticide()
{
    printf("you have %d  pesticide_1kg\n", list.pesticide_1kg.quantity);

    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin_s(quan, list.pesticide_1kg.quantity))
    {
        list.cash_in_hand += (quan * list.pesticide_1kg.sell_rate);
        list.pesticide_1kg.quantity -= quan;
        book[tindex].amount = quan * list.pesticide_1kg.sell_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "pesticide_1kg");
        strcpy(book[tindex].purpose, "SELL");
        tindex++;
        total_profit += (quan * (list.pesticide_1kg.sell_rate - list.pesticide_1kg.buy_rate));
        printf("successfully sell amount credited in your account\n");
    }
    else
        printf("you enter more than existing quantity\n");
}

void sell_potting_mix_500()
{
    printf("you have %d  potting_mix_500gm\n", list.potting_mix_500gm.quantity);
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin_s(quan, list.pesticide_500gm.quantity))
    {
        list.cash_in_hand += (quan * list.potting_mix_500gm.sell_rate);
        list.potting_mix_500gm.quantity -= quan;
        book[tindex].amount = quan * list.potting_mix_500gm.sell_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "potting_mix_500gm");
        strcpy(book[tindex].purpose, "SELL");
        tindex++;
        total_profit += (quan * (list.potting_mix_500gm.sell_rate - list.potting_mix_500gm.buy_rate));
        printf("successfully sell amount credited in your account\n");
    }
    else
        printf("you enter more than existing quantity\n");
}
void sell_coc_peat_500()
{
    printf("you have %d  coc_peat_500gm\n", list.coc_peat_500gm.quantity);

    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin_s(quan, list.coc_peat_500gm.quantity))
    {
        list.cash_in_hand += (quan * list.coc_peat_500gm.sell_rate);
        list.coc_peat_500gm.quantity -= quan;
        book[tindex].amount = quan * list.coc_peat_500gm.sell_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "coc_peat_500gm");
        strcpy(book[tindex].purpose, "SELL");
        tindex++;
        total_profit += (quan * (list.coc_peat_500gm.sell_rate - list.coc_peat_500gm.buy_rate));
        printf("successfully sell amount credited in your account\n");
    }
    else
        printf("you enter more than existing quantity\n");
}
void sell_vermicompost_500()
{
    printf("you have %d  vermicompost_500gm\n", list.vermicompost_500gm.quantity);

    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin_s(quan, list.vermicompost_500gm.quantity))
    {
        list.cash_in_hand += (quan * list.vermicompost_500gm.sell_rate);
        list.vermicompost_500gm.quantity -= quan;
        book[tindex].amount = quan * list.vermicompost_500gm.sell_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "vermicompost_500gm");
        strcpy(book[tindex].purpose, "SELL");
        tindex++;
        total_profit += (quan * (list.vermicompost_500gm.sell_rate - list.vermicompost_500gm.buy_rate));
        printf("successfully sell amount credited in your account\n");
    }
    else
        printf("you enter more than existing quantity\n");
}
void sell_manure_500()
{
    printf("you have %d  manure_500gm\n", list.manure_500gm.quantity);

    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin_s(quan, list.manure_500gm.quantity))
    {
        list.cash_in_hand += (quan * list.manure_500gm.sell_rate);
        list.manure_500gm.quantity -= quan;
        book[tindex].amount = quan * list.manure_500gm.sell_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "manure_500gm");
        strcpy(book[tindex].purpose, "SELL");
        tindex++;
        total_profit += (quan * (list.manure_500gm.sell_rate - list.manure_500gm.buy_rate));
        printf("successfully sell amount credited in your account\n");
    }
    else
        printf("you enter more than existing quantity\n");
}
void sell_pesticide_500()
{
    printf("you have %d  pesticide_500gm\n", list.pesticide_500gm.quantity);

    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin_s(quan, list.pesticide_500gm.quantity))
    {
        list.cash_in_hand += (quan * list.pesticide_500gm.sell_rate);
        list.pesticide_500gm.quantity -= quan;
        book[tindex].amount = quan * list.pesticide_500gm.sell_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "pesticide_500gm");
        strcpy(book[tindex].purpose, "SELL");
        tindex++;
        total_profit += (quan * (list.pesticide_500gm.sell_rate - list.pesticide_500gm.buy_rate));
        printf("successfully sell amount credited in your account\n");
    }
    else
        printf("you enter more than existing quantity\n");
}

void sell_porc_small()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin_s(quan, list.s_porcelain.quantity))
    {
        list.cash_in_hand += (quan * list.s_porcelain.sell_rate);
        list.s_porcelain.quantity -= quan;
        book[tindex].amount = quan * list.s_porcelain.sell_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "s_porcelain");
        strcpy(book[tindex].purpose, "SELL");
        tindex++;
        total_profit += (quan * (list.s_porcelain.sell_rate - list.s_porcelain.buy_rate));
        printf("successfully sell amount credited in your account\n");
    }
    else
        printf("you enter more than existing quantity\n");
}
void sell_porc_medium()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin_s(quan, list.m_porcelain.quantity))
    {
        list.cash_in_hand += (quan * list.m_porcelain.sell_rate);
        list.m_porcelain.quantity -= quan;
        book[tindex].amount = quan * list.m_porcelain.sell_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "m_porcelain");
        strcpy(book[tindex].purpose, "SELL");
        tindex++;
        total_profit += (quan * (list.m_porcelain.sell_rate - list.m_porcelain.buy_rate));
        printf("successfully sell amount credited in your account\n");
    }
    else
        printf("you enter more than existing quantity\n");
}
void sell_opec_big()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin_s(quan, list.b_porcelain.quantity))
    {
        list.cash_in_hand += (quan * list.b_porcelain.sell_rate);
        list.b_porcelain.quantity -= quan;
        book[tindex].amount = quan * list.b_porcelain.sell_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "b_porcelain");
        strcpy(book[tindex].purpose, "SELL");
        tindex++;
        total_profit += (quan * (list.b_porcelain.sell_rate - list.b_porcelain.buy_rate));
        printf("successfully sell amount credited in your account\n");
    }
    else
        printf("you enter more than existing quantity\n");
}
void sell_porc_very_big()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin_s(quan, list.vb_porcelain.quantity))
    {
        list.cash_in_hand += (quan * list.vb_porcelain.sell_rate);
        list.vb_porcelain.quantity -= quan;
        book[tindex].amount = quan * list.vb_porcelain.sell_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "vb_porcelain");
        strcpy(book[tindex].purpose, "SELL");
        tindex++;
        total_profit += (quan * (list.vb_porcelain.sell_rate - list.vb_porcelain.buy_rate));
        printf("successfully sell amount credited in your account\n");
    }
    else
        printf("you enter more than existing quantity\n");
}
void sell_terr_small()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin_s(quan, list.s_terracotta.quantity))
    {
        list.cash_in_hand += (quan * list.s_terracotta.sell_rate);
        list.s_terracotta.quantity -= quan;
        book[tindex].amount = quan * list.s_terracotta.sell_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "s_terracotta");
        strcpy(book[tindex].purpose, "SELL");
        tindex++;
        total_profit += (quan * (list.s_terracotta.sell_rate - list.s_terracotta.buy_rate));
        printf("successfully sell amount credited in your account\n");
    }
    else
        printf("you enter more than existing quantity\n");
}
void sell_terr_big()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin_s(quan, list.b_terracotta.quantity))
    {
        list.cash_in_hand += (quan * list.b_terracotta.sell_rate);
        list.b_terracotta.quantity -= quan;
        book[tindex].amount = quan * list.b_terracotta.sell_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "b_terracotta");
        strcpy(book[tindex].purpose, "SELL");
        tindex++;
        total_profit += (quan * (list.b_terracotta.sell_rate - list.b_terracotta.buy_rate));
        printf("successfully sell amount credited in your account\n");
    }
    else
        printf("you enter more than existing quantity\n");
}
void sell__terr_medium()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin_s(quan, list.m_terracotta.quantity))
    {
        list.cash_in_hand += (quan * list.m_terracotta.sell_rate);
        list.m_terracotta.quantity -= quan;
        book[tindex].amount = quan * list.m_terracotta.sell_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "m_terracotta");
        strcpy(book[tindex].purpose, "SELL");
        tindex++;
        total_profit += (quan * (list.m_terracotta.sell_rate - list.m_terracotta.buy_rate));
        printf("successfully sell amount credited in your account\n");
    }
    else
        printf("you enter more than existing quantity\n");
}
void sell_terr_very_big()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin_s(quan, list.vb_terracotta.quantity))
    {
        list.cash_in_hand += (quan * list.vb_terracotta.sell_rate);
        list.vb_terracotta.quantity -= quan;
        book[tindex].amount = quan * list.vb_terracotta.sell_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "vb_terracotta");
        strcpy(book[tindex].purpose, "SELL");
        tindex++;
        total_profit += (quan * (list.vb_terracotta.sell_rate - list.vb_terracotta.buy_rate));
        printf("successfully sell amount credited in your account\n");
    }
    else
        printf("you enter more than existing quantity\n");
}

void sell_plastic_small()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin_s(quan, list.s_plastic.quantity))
    {
        list.cash_in_hand += (quan * list.s_plastic.sell_rate);
        list.s_plastic.quantity -= quan;
        book[tindex].amount = quan * list.s_plastic.sell_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "s_plastic");
        strcpy(book[tindex].purpose, "SELL");
        tindex++;
        total_profit += (quan * (list.s_plastic.sell_rate - list.s_plastic.buy_rate));
        printf("successfully sell amount credited in your account\n");
    }
    else
        printf("you enter more than existing quantity\n");
}
void sell__plastic_medium()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin_s(quan, list.m_plastic.quantity))
    {
        list.cash_in_hand += (quan * list.m_plastic.sell_rate);
        list.m_plastic.quantity -= quan;
        book[tindex].amount = quan * list.m_plastic.sell_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "m_plastic");
        strcpy(book[tindex].purpose, "SELL");
        tindex++;
        total_profit += (quan * (list.m_plastic.sell_rate - list.m_plastic.buy_rate));
        printf("successfully sell amount credited in your account\n");
    }
    else
        printf("you enter more than existing quantity\n");
}
void sell_plastic_big()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin_s(quan, list.b_plastic.quantity))
    {
        list.cash_in_hand += (quan * list.b_plastic.sell_rate);
        list.b_plastic.quantity -= quan;
        book[tindex].amount = quan * list.b_plastic.sell_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "b_plastic");
        strcpy(book[tindex].purpose, "SELL");
        tindex++;
        total_profit += (quan * (list.b_plastic.sell_rate - list.b_plastic.buy_rate));
        printf("successfully sell amount credited in your account\n");
    }
    else
        printf("you enter more than existing quantity\n");
}

void sell_plastic_very_big()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin_s(quan, list.vb_plastic.quantity))
    {
        list.cash_in_hand += (quan * list.vb_plastic.sell_rate);
        list.vb_plastic.quantity -= quan;
        book[tindex].amount = quan * list.vb_plastic.sell_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "vb_plastic");
        strcpy(book[tindex].purpose, "SELL");
        tindex++;
        total_profit += (quan * (list.vb_plastic.sell_rate - list.vb_plastic.buy_rate));
        printf("successfully sell amount credited in your account\n");
    }
    else
        printf("you enter more than existing quantity\n");
}
void sell_cement_small()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin_s(quan, list.s_cement.quantity))
    {
        list.cash_in_hand += (quan * list.s_cement.sell_rate);
        list.s_cement.quantity -= quan;
        book[tindex].amount = quan * list.s_cement.sell_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "s_cement");
        strcpy(book[tindex].purpose, "SELL");
        tindex++;
        total_profit += (quan * (list.s_cement.sell_rate - list.s_cement.buy_rate));
        printf("successfully sell amount credited in your account\n");
    }
    else
        printf("you enter more than existing quantity\n");
}
void sell__cement_medium()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin_s(quan, list.m_cement.quantity))
    {
        list.cash_in_hand += (quan * list.m_cement.sell_rate);
        list.m_cement.quantity -= quan;
        book[tindex].amount = quan * list.m_cement.sell_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "m_cement");
        strcpy(book[tindex].purpose, "SELL");
        tindex++;
        total_profit += (quan * (list.m_cement.sell_rate - list.m_cement.buy_rate));
        printf("successfully sell amount credited in your account\n");
    }
    else
        printf("you enter more than existing quantity\n");
}
void sell_cement_big()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin_s(quan, list.b_cement.quantity))
    {
        list.cash_in_hand += (quan * list.b_cement.sell_rate);
        list.b_cement.quantity -= quan;
        book[tindex].amount = quan * list.b_cement.sell_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "b_cement");
        strcpy(book[tindex].purpose, "SELL");
        tindex++;
        total_profit += (quan * (list.b_cement.sell_rate - list.b_cement.buy_rate));
        printf("successfully sell amount credited in your account\n");
    }
    else
        printf("you enter more than existing quantity\n");
}
void sell_cement_very_big()
{
    int quan;
    printf("enter quantity\n");
    scanf("%d", &quan);
    if (validatoin_s(quan, list.vb_cement.quantity))
    {
        list.cash_in_hand += (quan * list.vb_cement.sell_rate);
        list.vb_cement.quantity -= quan;
        book[tindex].amount = quan * list.vb_cement.sell_rate;
        book[tindex].quantity = quan;
        strcpy(book[tindex].item, "vb_cement");
        strcpy(book[tindex].purpose, "SELL");
        tindex++;
        total_profit += (quan * (list.vb_cement.sell_rate - list.vb_cement.buy_rate));
        printf("successfully sell amount credited in your account\n");
    }
    else
        printf("you enter more than existing quantity\n");
}

void sell_pot()
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
            sell_porc_small();
            break;
        case 2:
            sell_porc_medium();
            break;
        case 3:
            sell_opec_big();
            break;
        case 4:
            sell_porc_very_big();

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
            sell_terr_small();
            break;
        case 2:
            sell__terr_medium();
            break;
        case 3:
            sell_terr_big();
            break;
        case 4:
            sell_terr_very_big();
            break;

        default:
            goto kis;
        }
        break;

    case 3:
    kish:
        printf("press 1 for small\npress 2 for medium\npress 3 big\nprees 4 for  very big\n");
        scanf("%d", &size);
        switch (size)
        {
        case 1:
            sell_plastic_small();
            break;
        case 2:
            sell__plastic_medium();
            break;
        case 3:
            sell_plastic_big();
            break;
        case 4:
            sell_plastic_very_big();
            break;

        default:
            goto kish;
        }
        break;

    case 4:
    kish0:
        printf("press 1 for small\npress 2 for medium\npress 3 big\nprees 4 for  very big\n");
        scanf("%d", &size);
        switch (size)
        {
        case 1:
            sell_cement_small();
            break;
        case 2:
            sell__cement_medium();
            break;
        case 3:
            sell_cement_big();
            break;
        case 4:
            sell_cement_very_big();
            break;

        default:
            goto kish0;
        }
        break;

    default:
        goto sas;
    }
}

void sell()
{
saske:
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
            sell_flower_plant();
            break;
        case 2:
            sell_succulents_plant();
            break;
        case 3:
            sell_medicine_plant();
            break;
        case 4:
            sell_indoor_plant();
            break;
        default:
            printf("you put wrong input\n");
            goto sasken;
        }
        break;
    case 2:
    sasian:
        printf("press 1 for pot\npress 2 for water collection plant\npress 3 for secateur\npress 4 for pickaxe\npress 5 for shovel\npress 6 for gloves\n");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            sell_pot();
            break;
        case 2:
            sell_water_collection_plant();
            break;
        case 3:
            sell_secateur();
            break;
        case 4:
            sell_pickaxe();
            break;
        case 5:
            buy_shovel();
            break;
        case 6:
            sell_gloves();
            break;
        default:
            printf("you enter wrong input\n");
            goto sasian;
        }
        break;
    case 3:
        printf("press 1 for 1kg\npress 2 for 500 gm\n");
        int wait;
        scanf("%d", &wait);
        switch (wait)
        {
        case 1:
        sasiantt:
            printf("press 1 for potting mix\npress 2 for coc peat\npress 3 for vermicompost_1kg\npress 4 for manure_1kg\npress 5 for pesticide_1kg\n");
            scanf("%d", &c);
            switch (c)
            {

            case 1:
                sell_potting_mix();
                break;
            case 2:
                sell_coc_peat();
                break;
            case 3:
                sell_vermicompost();
                break;
            case 4:
                sell_manure();
                break;
            case 5:
                sell_pesticide();
                break;
            default:
                printf("you enter wrong input\n");
                goto sasiantt;
            }
            break;
        case 2:

        sasiant:
            printf("press 1 for potting mix_500\npress 2 for coc peat_500\npress 3 for vermicompost_500\npress 4 for manure_500\npress 5 for pesticide_500\n");
            scanf("%d", &c);
            switch (c)
            {

            case 1:
                sell_potting_mix_500();
                break;
            case 2:
                sell_coc_peat_500();
                break;
            case 3:
                sell_vermicompost_500();
                break;
            case 4:
                sell_manure_500();
                break;
            case 5:
                sell_pesticide_500();
                break;
            default:
                printf("you enter wrong input\n");
                goto sasiant;
            }
            break;
        default:
            printf("you put wrong choice\n");
            goto saske;
            break;
        }
    }
}