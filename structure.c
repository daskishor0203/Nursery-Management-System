#include <stdio.h>
#include <string.h>

typedef struct flower_plant
{
    int quantity;
    int buy_rate;
    int sell_rate;
    char name[20];
} flower;
typedef struct succulents_plant
{
    int quantity;
    int buy_rate;
    int sell_rate;
    char name[20];
} succulents;
typedef struct medicine_plant
{
    int quantity;
    int buy_rate;
    int sell_rate;
    char name[20];
} medicine;
typedef struct indoor_plant
{
    int quantity;
    int buy_rate;
    int sell_rate;
    char name[20];
} indoor;
typedef struct small_pot
{
    int quantity;
    int buy_rate;
    int sell_rate;
    char name[20];
} s_pot;
typedef struct medium_pot
{
    int quantity;
    int buy_rate;
    int sell_rate;
    char name[20];
} m_pot;
typedef struct big_pot
{
    int quantity;
    int buy_rate;
    int sell_rate;
    char name[20];
} b_pot;
typedef struct very_big_pot
{
    int quantity;
    int buy_rate;
    int sell_rate;
    char name[20];
} vb_pot;
typedef struct water_collection_plant
{
    int quantity;
    int buy_rate;
    int sell_rate;
} w_plant;
typedef struct secateur
{
    int quantity;
    int buy_rate;
    int sell_rate;
} sec;
typedef struct pickaxe
{
    int quantity;
    int buy_rate;
    int sell_rate;
} pic;
typedef struct shovel
{
    int quantity;
    int buy_rate;
    int sell_rate;

} sho;
typedef struct gloves
{
    int quantity;
    int buy_rate;
    int sell_rate;
} glo;

typedef struct fartilizer
{
    int quantity;
    int buy_rate;
    int sell_rate;
    char name[20];

} fartilizer;
typedef struct fartilizer_500
{
    int quantity;
    int buy_rate;
    int sell_rate;
    char name[20];

} fartilizer_500;

typedef struct transection
{
    char purpose[20];
    char item[20];
    int quantity;
    int amount;
} tran;

typedef struct inventory
{
    int cash_in_hand;
    flower jasmine, rose, chrysanthemum, hibiscus, tuberose;
    succulents lucky_jade, aloe_vera, cactus;
    medicine tulsi, turmeric, ginger, bigthyme;
    indoor rubber_plants, spider_plants, syngonium;
    s_pot s_porcelain, s_terracotta, s_plastic, s_cement;
    m_pot m_porcelain, m_terracotta, m_plastic, m_cement;
    b_pot b_porcelain, b_terracotta, b_plastic, b_cement;
    vb_pot vb_porcelain, vb_terracotta, vb_plastic, vb_cement;
    w_plant water_plant;
    sec secateur1;
    pic pickaxe1;
    sho shovel1;
    glo gloves1;
    fartilizer potting_mix_1kg, coc_peat_1kg, vermicompost_1kg, manure_1kg, pesticide_1kg;

    fartilizer_500 potting_mix_500gm, coc_peat_500gm, vermicompost_500gm, manure_500gm, pesticide_500gm;

} inven;
inven list;
tran book[100];
int tindex = 0;
int total_profit;