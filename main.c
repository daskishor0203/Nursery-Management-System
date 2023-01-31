#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "structure.c"
#include "inventory.c"
#include "buy.c"
#include "sell.c"

void show_transection()
{
    printf("total profit  %d/-\n", total_profit);
    for (int i = 0; i < tindex; i++)
    {
        printf("%d. %s  %d pices %d /- %s purpose\n", i + 1, book[i].item, book[i].quantity, book[i].amount, book[i].purpose);
    }
}
int main()
{
    list.cash_in_hand = 100000;
    list.jasmine.quantity = 0;
    list.jasmine.buy_rate = 20;
    list.jasmine.sell_rate = list.jasmine.buy_rate + 20;
    strcpy(list.jasmine.name, "jasmine");

    list.rose.quantity = 0;
    list.rose.buy_rate = 30;
    list.rose.sell_rate = list.rose.buy_rate + 20;
    strcpy(list.rose.name, "rose");

    list.chrysanthemum.quantity = 0;
    list.chrysanthemum.buy_rate = 50;
    list.chrysanthemum.sell_rate = list.chrysanthemum.buy_rate + 20;
    strcpy(list.chrysanthemum.name, "chrysanthemum");

    list.hibiscus.quantity = 0;
    list.hibiscus.buy_rate = 10;
    list.hibiscus.sell_rate = list.hibiscus.buy_rate + 20;
    strcpy(list.hibiscus.name, "hibiscus");

    list.tuberose.quantity = 0;
    list.tuberose.buy_rate = 15;
    list.tuberose.sell_rate = list.tuberose.buy_rate + 20;
    stpcpy(list.tuberose.name, "tuberose");

    list.lucky_jade.quantity = 0;
    list.lucky_jade.buy_rate = 20;
    list.lucky_jade.sell_rate = list.lucky_jade.buy_rate + 20;
    strcpy(list.lucky_jade.name, "lucky_jade");

    list.aloe_vera.quantity = 0;
    list.aloe_vera.buy_rate = 50;
    list.aloe_vera.sell_rate = list.aloe_vera.buy_rate + 20;
    stpcpy(list.aloe_vera.name, "aloe_vera");

    list.cactus.quantity = 0;
    list.cactus.buy_rate = 5;
    list.cactus.sell_rate = list.cactus.buy_rate + 20;
    strcpy(list.cactus.name, "cactus");

    list.tulsi.quantity = 0;
    list.tulsi.buy_rate = 25;
    list.tulsi.sell_rate = list.tulsi.buy_rate + 20;
    strcpy(list.tulsi.name, "tulsi");

    list.turmeric.quantity = 0;
    list.turmeric.buy_rate = 16;
    list.turmeric.sell_rate = list.turmeric.buy_rate + 20;
    strcpy(list.turmeric.name, "turmeric");

    list.ginger.quantity = 0;
    list.ginger.buy_rate = 30;
    list.ginger.sell_rate = list.ginger.buy_rate + 20;
    stpcpy(list.ginger.name, "ginger");

    list.bigthyme.quantity = 0;
    list.bigthyme.buy_rate = 10;
    list.bigthyme.sell_rate = list.bigthyme.buy_rate + 20;
    stpcpy(list.bigthyme.name, "bigthyme");

    list.rubber_plants.quantity = 0;
    list.rubber_plants.buy_rate = 55;
    list.rubber_plants.sell_rate = list.rubber_plants.buy_rate + 20;
    stpcpy(list.rubber_plants.name, "rubber_plant");

    list.spider_plants.quantity = 0;
    list.spider_plants.buy_rate = 10;
    list.spider_plants.sell_rate = list.spider_plants.buy_rate + 20;
    stpcpy(list.spider_plants.name, "spider_plant");

    list.syngonium.quantity = 0;
    list.syngonium.buy_rate = 20;
    list.syngonium.sell_rate = list.syngonium.buy_rate + 20;
    stpcpy(list.syngonium.name, "syngonium");

    list.s_cement.quantity = 0;
    list.s_cement.buy_rate = 50;
    list.s_cement.sell_rate = list.s_cement.buy_rate + 50;
    strcpy(list.s_cement.name, "small_cement_pot");
    list.s_terracotta.quantity = 0;
    list.s_terracotta.buy_rate = 20;
    list.s_terracotta.sell_rate = list.s_terracotta.buy_rate + 50;
    strcpy(list.s_terracotta.name, "small_terracotta_pot");
    list.s_porcelain.quantity = 0;
    list.s_porcelain.buy_rate = 45;
    list.s_porcelain.sell_rate = list.s_porcelain.buy_rate + 50;
    strcpy(list.s_porcelain.name, "small_porcelain_pot");
    list.s_plastic.quantity = 0;
    list.s_plastic.buy_rate = 20;
    list.s_plastic.sell_rate = list.s_plastic.buy_rate + 50;
    strcpy(list.s_plastic.name, "small_plastic_pot");
    list.m_cement.quantity = 0;
    list.m_cement.buy_rate = 70;
    list.m_cement.sell_rate = list.m_cement.buy_rate + 50;
    strcpy(list.m_cement.name, "medium_cement_pot");
    list.m_terracotta.quantity = 0;
    list.m_terracotta.buy_rate = 60;
    list.m_terracotta.sell_rate = list.m_terracotta.buy_rate + 50;
    strcpy(list.m_terracotta.name, "medium_terracotta_pot");
    list.m_porcelain.quantity = 0;
    list.m_porcelain.buy_rate = 60;
    list.m_porcelain.sell_rate = list.m_porcelain.buy_rate + 50;
    strcpy(list.m_porcelain.name, "medium_porcelain_pot");
    list.m_plastic.quantity = 0;
    list.m_plastic.buy_rate = 30;
    list.m_plastic.sell_rate = list.m_plastic.buy_rate + 50;
    strcpy(list.m_plastic.name, "medium_plastic_pot");
    list.b_cement.quantity = 0;
    list.b_cement.buy_rate = 90;
    list.b_cement.sell_rate = list.b_cement.buy_rate + 50;
    strcpy(list.b_cement.name, "big_cement_pot");
    list.b_terracotta.quantity = 0;
    list.b_terracotta.buy_rate = 70;
    list.b_terracotta.sell_rate = list.b_terracotta.buy_rate + 50;
    strcpy(list.m_terracotta.name, "big_terracotta_pot");
    list.b_porcelain.quantity = 0;
    list.b_porcelain.buy_rate = 90;
    list.b_porcelain.sell_rate = list.b_porcelain.buy_rate + 50;
    strcpy(list.b_porcelain.name, "big_pb_porcelain_pot");
    list.b_plastic.quantity = 0;
    list.b_plastic.buy_rate = 40;
    list.b_plastic.sell_rate = list.b_cement.buy_rate + 50;
    strcpy(list.b_plastic.name, "big_pb_plastic_pot");

    list.vb_porcelain.quantity = 0;
    list.vb_porcelain.buy_rate = 100;
    list.vb_porcelain.sell_rate = list.vb_porcelain.buy_rate + 50;
    strcpy(list.vb_porcelain.name, "very_big_porcelain_pot");

    list.vb_terracotta.quantity = 0;
    list.vb_terracotta.buy_rate = 100;
    list.vb_terracotta.sell_rate = list.vb_terracotta.buy_rate + 50;
    strcpy(list.vb_terracotta.name, "very_big_terracotta_pot");

    list.vb_plastic.quantity = 0;
    list.vb_plastic.buy_rate = 100;
    list.vb_plastic.sell_rate = list.vb_plastic.buy_rate + 50;
    strcpy(list.vb_plastic.name, "very_big_pvb_plastic_pot");

    list.vb_cement.quantity = 0;
    list.vb_cement.buy_rate = 100;
    list.vb_cement.sell_rate = list.vb_cement.buy_rate + 50;
    strcpy(list.vb_cement.name, "very_big_cement_pot");

    list.water_plant.quantity = 0;
    list.water_plant.buy_rate = 10;
    list.water_plant.sell_rate = list.water_plant.buy_rate + 50;

    list.pickaxe1.quantity = 0;
    list.pickaxe1.buy_rate = 26;
    list.pickaxe1.sell_rate = list.pickaxe1.buy_rate + 50;

    list.secateur1.quantity = 0;
    list.secateur1.buy_rate = 46;
    list.secateur1.sell_rate = list.secateur1.buy_rate + 50;

    list.shovel1.quantity = 0;
    list.shovel1.buy_rate = 39;
    list.shovel1.sell_rate = list.shovel1.buy_rate + 50;

    list.gloves1.quantity = 0;
    list.gloves1.buy_rate = 36;
    list.gloves1.sell_rate = list.gloves1.buy_rate + 50;

    list.potting_mix_1kg.quantity = 0;
    list.potting_mix_1kg.buy_rate = 100;
    list.potting_mix_1kg.sell_rate = list.potting_mix_1kg.buy_rate + 50;
    strcpy(list.potting_mix_1kg.name, "potting_mix_1kg");

    list.potting_mix_500gm.quantity = 0;
    list.potting_mix_500gm.buy_rate = 50;
    list.potting_mix_500gm.sell_rate = list.potting_mix_500gm.buy_rate + 50;
    strcpy(list.potting_mix_500gm.name, "potting_mix_500gm");

    list.coc_peat_1kg.quantity = 0;
    list.coc_peat_1kg.buy_rate = 120;
    list.coc_peat_1kg.sell_rate = list.coc_peat_1kg.buy_rate + 50;
    strcpy(list.coc_peat_1kg.name, "coc_peat_1kg");

    list.coc_peat_500gm.quantity = 0;
    list.coc_peat_500gm.buy_rate = 60;
    list.coc_peat_500gm.sell_rate = list.coc_peat_500gm.buy_rate + 50;
    strcpy(list.coc_peat_500gm.name, "coc_peat_500gm");

    list.vermicompost_1kg.quantity = 0;
    list.vermicompost_1kg.buy_rate = 110;
    list.vermicompost_1kg.sell_rate = list.vermicompost_1kg.buy_rate + 50;
    strcpy(list.vermicompost_1kg.name, "vermicompost_1kg");

    list.vermicompost_500gm.quantity = 0;
    list.vermicompost_500gm.buy_rate = 55;
    list.vermicompost_500gm.sell_rate = list.vermicompost_500gm.buy_rate + 50;
    strcpy(list.vermicompost_500gm.name, "vermicompost_500gm");

    list.manure_1kg.quantity = 0;
    list.manure_1kg.buy_rate = 90;
    list.manure_1kg.sell_rate = list.manure_1kg.buy_rate + 50;
    strcpy(list.manure_1kg.name, "manure_1kg");

    list.manure_500gm.quantity = 0;
    list.manure_500gm.buy_rate = 45;
    list.manure_500gm.sell_rate = list.manure_500gm.buy_rate + 50;
    strcpy(list.manure_500gm.name, "manure_500gm");

    list.pesticide_1kg.quantity = 0;
    list.pesticide_1kg.buy_rate = 100;
    list.pesticide_1kg.sell_rate = list.pesticide_1kg.buy_rate + 50;
    strcpy(list.pesticide_1kg.name, "pesticide_1kg");

    list.pesticide_500gm.quantity = 0;
    list.pesticide_500gm.buy_rate = 50;
    list.pesticide_500gm.sell_rate = list.pesticide_500gm.buy_rate + 50;
    strcpy(list.pesticide_500gm.name, "pesticide_500gm");

    int a;
    while (1)
    {
    sas:
        printf("press 1 for buy\npress 2 for sell\npress 3 for show inventory\npress 4 for show transection\npress 0 for exit\n");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            buy();
            break;
        case 2:
            sell();
            break;
        case 3:
            show_inventory();
            break;
        case 4:
            show_transection();
            break;
        case 0:
            exit(0);
        default:
            printf("you put wrong choice\n");
            goto sas;
            break;
        }
    }
    return 0;
}
