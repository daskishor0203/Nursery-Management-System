#include <stdio.h>
#include <string.h>
void show_inventory()
{

    printf("cash in hand %d\n", list.cash_in_hand);
    printf("jasmine %d in quantity,buy rate %d /-,sell rate %d /-\n\n", list.jasmine.quantity, list.jasmine.buy_rate, list.jasmine.sell_rate);
    printf("rose %d in quantity,buy rate %d /-,sell rate %d /-\n\n", list.rose.quantity, list.rose.buy_rate, list.rose.sell_rate);
    printf("chrysanthemum %d in quantity,buy rate %d /-,sell rate %d /-\n\n", list.chrysanthemum.quantity, list.chrysanthemum.buy_rate, list.chrysanthemum.sell_rate);
    printf("hibiscus %d in quantity,buy rate %d /-,sell rate %d /-\n\n", list.hibiscus.quantity, list.hibiscus.buy_rate, list.hibiscus.sell_rate);
    printf("tuberose %d in quantity,buy rate %d /-,sell rate %d /-\n\n", list.tuberose.quantity, list.tuberose.buy_rate, list.tuberose.sell_rate);
    printf("lucky_jade %d in quantity,buy rate %d /-,sell rate %d /-\n\n", list.lucky_jade.quantity, list.lucky_jade.buy_rate, list.lucky_jade.sell_rate);
    printf("aloe_vera %d in quantity,buy rate %d /-,sell rate %d /-\n\n", list.aloe_vera.quantity, list.aloe_vera.buy_rate, list.aloe_vera.sell_rate);
    printf("cactus %d in quantity,buy rate %d /-,sell rate %d /-\n\n", list.cactus.quantity, list.cactus.buy_rate, list.cactus.sell_rate);
    printf("tulsi %d in quantity,buy rate %d /-,sell rate %d /-\n\n", list.tulsi.quantity, list.tulsi.buy_rate, list.tulsi.sell_rate);
    printf("turmeric %d in quantity,buy rate %d /-,sell rate %d /-\n\n", list.turmeric.quantity, list.turmeric.buy_rate, list.turmeric.sell_rate);
    printf("ginger %d in quantity,buy rate %d /-,sell rate %d /-\n\n", list.ginger.quantity, list.ginger.buy_rate, list.ginger.sell_rate);
    printf("bigthyme %d in quantity,buy rate %d /-,sell rate %d /-\n\n", list.bigthyme.quantity, list.bigthyme.buy_rate, list.bigthyme.sell_rate);
    printf("rubber_plants %d in quantity,buy rate %d /-,sell rate %d /-\n\n", list.rubber_plants.quantity, list.rubber_plants.buy_rate, list.rubber_plants.sell_rate);
    printf("spider_plants %d in quantity,buy rate %d /-,sell rate %d /-\n\n", list.spider_plants.quantity, list.spider_plants.buy_rate, list.spider_plants.sell_rate);

    printf("small_cement_pot %d in quantity,buy rate %d /-,sell rate %d /-\n\n", list.s_cement.quantity, list.s_cement.buy_rate, list.s_cement.sell_rate);
    printf("small_terracotta_pot %d in quantity,buy rate %d /-,sell rate %d /-\n\n", list.s_terracotta.quantity, list.s_terracotta.buy_rate, list.s_terracotta.sell_rate);
    printf("small_porcelain_pot %d in quantity,buy rate %d /-,sell rate %d /-\n\n", list.s_porcelain.quantity, list.s_porcelain.buy_rate, list.s_porcelain.sell_rate);
    printf("small_plastic_pot %d in quantity,buy rate %d /-,sell rate %d /-\n\n", list.s_plastic.quantity, list.s_plastic.buy_rate, list.s_plastic.sell_rate);

    printf("medium_cement_pot %d in quantity,buy rate %d /-,sell rate %d /-\n\n", list.m_cement.quantity, list.m_cement.buy_rate, list.m_cement.sell_rate);
    printf("medium_terracotta_pot %d in quantity,buy rate %d /-,sell rate %d /-\n\n", list.m_terracotta.quantity, list.m_terracotta.buy_rate, list.m_terracotta.sell_rate);
    printf("medium_porcelain_pot %d in quantity,buy rate %d /-,sell rate %d /-\n\n", list.m_porcelain.quantity, list.m_porcelain.buy_rate, list.m_porcelain.sell_rate);
    printf("medium_plastic_pot %d in quantity,buy rate %d /-,sell rate %d /-\n\n", list.m_plastic.quantity, list.m_plastic.buy_rate, list.m_plastic.sell_rate);

    printf("big_cement_pot %d in quantity,buy rate %d /-,sell rate %d /-\n\n", list.b_cement.quantity, list.b_cement.buy_rate, list.b_cement.sell_rate);
    printf("big_terracotta_pot %d in quantity,buy rate %d /-,sell rate %d /-\n\n", list.b_terracotta.quantity, list.b_terracotta.buy_rate, list.b_terracotta.sell_rate);
    printf("big_porcelain_pot %d in quantity,buy rate %d /-,sell rate %d /-\n\n", list.b_porcelain.quantity, list.b_porcelain.buy_rate, list.b_porcelain.sell_rate);
    printf("big_plastic_pot %d in quantity,buy rate %d /-,sell rate %d /-\n\n", list.b_plastic.quantity, list.b_plastic.buy_rate, list.b_plastic.sell_rate);

    printf("very_big_terracotta_pot %d in quantity,buy rate %d /-,sell rate %d /-\n\n", list.vb_terracotta.quantity, list.vb_terracotta.buy_rate, list.vb_terracotta.sell_rate);
    printf("very_big_porcelain_pot %d in quantity,buy rate %d /-,sell rate %d /-\n\n", list.vb_porcelain.quantity, list.vb_porcelain.buy_rate, list.vb_porcelain.sell_rate);
    printf("very_big_plastic_pot %d in quantity,buy rate %d /-,sell rate %d /-\n\n", list.vb_plastic.quantity, list.vb_plastic.buy_rate, list.vb_plastic.sell_rate);
    printf("very_big_cement_pot %d in quantity,buy rate %d /-,sell rate %d /-\n\n", list.vb_cement.quantity, list.vb_cement.buy_rate, list.vb_cement.sell_rate);

    printf("water_collection_plant %d in quantity,buy rate %d /-,sell rate %d /-\n\n", list.water_plant.quantity, list.water_plant.buy_rate, list.water_plant.sell_rate);
    printf("secateur %d in quantity,buy rate %d /-,sell rate %d /-\n\n", list.secateur1.quantity, list.secateur1.buy_rate, list.secateur1.sell_rate);
    printf("pickaxe %d in quantity,buy rate %d /-,sell rate %d /-\n\n", list.pickaxe1.quantity, list.pickaxe1.buy_rate, list.pickaxe1.sell_rate);
    printf("shovel %d in quantity,buy rate %d /-,sell rate %d /-\n\n", list.shovel1.quantity, list.shovel1.buy_rate, list.shovel1.sell_rate);

    printf("potting_mix_1kg %d in quantity,buy rate %d /-,sell rate %d /-\n\n", list.potting_mix_1kg.quantity, list.potting_mix_1kg.buy_rate, list.potting_mix_1kg.sell_rate);
    printf("coc_peat_1kg %d in quantity,buy rate %d /-,sell rate %d /-\n\n", list.coc_peat_1kg.quantity, list.coc_peat_1kg.buy_rate, list.coc_peat_1kg.sell_rate);
    printf("vermicompost_1kg %d in quantity,buy rate %d /-,sell rate %d /-\n\n", list.vermicompost_1kg.quantity, list.vermicompost_1kg.buy_rate, list.vermicompost_1kg.sell_rate);
    printf("manure_1kg %d in quantity,buy rate %d /-,sell rate %d /-\n\n", list.manure_1kg.quantity, list.manure_1kg.buy_rate, list.manure_1kg.sell_rate);
    printf("pesticite_1kg %d in quantity,buy rate %d /-,sell rate %d /-\n\n", list.pesticide_1kg.quantity, list.pesticide_1kg.buy_rate, list.pesticide_1kg.sell_rate);

    printf("potting_mix_500gm %d in quantity,buy rate %d /-,sell rate %d /-\n\n", list.potting_mix_500gm.quantity, list.potting_mix_500gm.buy_rate, list.potting_mix_500gm.sell_rate);
    printf("coc_peat_500gm %d in quantity,buy rate %d /-,sell rate %d /-\n\n", list.coc_peat_500gm.quantity, list.coc_peat_500gm.buy_rate, list.coc_peat_500gm.sell_rate);
    printf("vermicompost_500gm %d in quantity,buy rate %d /-,sell rate %d /-\n\n", list.vermicompost_500gm.quantity, list.vermicompost_500gm.buy_rate, list.vermicompost_500gm.sell_rate);
    printf("manure_500gm %d in quantity,buy rate %d /-,sell rate %d /-\n\n", list.manure_500gm.quantity, list.manure_500gm.buy_rate, list.manure_500gm.sell_rate);
    printf("pesticite_500gm %d in quantity,buy rate %d /-,sell rate %d /-\n\n", list.pesticide_500gm.quantity, list.pesticide_500gm.buy_rate, list.pesticide_500gm.sell_rate);

    // printf("gloves %d in quantity,buy rate %d /-,sell rate %d /-\n", list.gloves1.quantity, list.gloves1.buy_rate, list.gloves1.sell_rate);
    // printf("gloves %d in quantity,buy rate %d /-,sell rate %d /-\n", list.gloves1.quantity, list.gloves1.buy_rate, list.gloves1.sell_rate);
    // printf("gloves %d in quantity,buy rate %d /-,sell rate %d /-\n", list.gloves1.quantity, list.gloves1.buy_rate, list.gloves1.sell_rate);
    // printf("gloves %d in quantity,buy rate %d /-,sell rate %d /-\n", list.gloves1.quantity, list.gloves1.buy_rate, list.gloves1.sell_rate);
}