/* ---------------------------------------------------------------------- *
 * engglobs.c
 * This file is part of lincity.
 * Lincity is copyright (c) I J Peters 1995-1997, (c) Greg Sharp 1997-2001.
 * ---------------------------------------------------------------------- */

/* ----------------------------------------------------------------- */

/* module header file */
#include "engglobs.h"

/* system libraries */

/* app general headers */
#include "common.h"

/* other modules */
#include "fileutil.h"

/* ----------------------------------------------------------------- */

Map map;

Map_Coord mappoint_array[WORLD_SIDE_LEN];
int numof_shanties;
int numof_communes;
Map_Coord last_built;
int main_screen_originx, main_screen_originy;

int pix_double = 0;

#if defined (WIN32)
char windowsfontfile[LC_PATH_MAX];
#endif

int cheat_flag;
int modern_windmill_flag = 0;

int askdir_lines;
char *askdir_path[4];

int monthgraph_size = 0;
int *monthgraph_pop;
int *monthgraph_starve;
int *monthgraph_nojobs;
int *monthgraph_ppool;

#if defined (commentout)
int monthgraph_pop[MAPPOINT_STATS_W], monthgraph_starve[MAPPOINT_STATS_W];
int monthgraph_nojobs[MAPPOINT_STATS_W], monthgraph_ppool[MAPPOINT_STATS_W];
#endif

#if defined (commentout)
int diffgraph_power[MAPPOINT_STATS_W], diffgraph_coal[MAPPOINT_STATS_W];
int diffgraph_goods[MAPPOINT_STATS_W], diffgraph_ore[MAPPOINT_STATS_W];
int diffgraph_population[MAPPOINT_STATS_W];
int diff_old_population;
#endif

int sust_dig_ore_coal_tip_flag = 0, sust_port_flag = 0, sustain_flag = 0;
int sust_dig_ore_coal_count = 0, sust_port_count = 0, sust_old_money = 0;
int sust_old_money_count = 0, sust_old_population = 0, sust_old_population_count = 0;
int sust_old_tech = 0, sust_old_tech_count = 0, sust_fire_count = 0;

int total_time = 0;    /* game time */

int population, starving_population;
int housed_population;
int unemployed_population, people_pool;
Map_Coord substations[MAX_NUMOF_SUBSTATIONS];
unsigned int numof_substations = 0;
Map_Coord markets[MAX_NUMOF_MARKETS];
unsigned int numof_markets = 0;
int numof_health_centres, max_pop_ever = 0, total_evacuated = 0, total_births = 0;

int total_money = 0, income_tax_rate, coal_tax_rate;
int dole_rate, transport_cost_rate;
int goods_tax_rate;
int export_tax_rate, import_cost_rate;
int tech_level, highest_tech_level, unnat_deaths;

int total_pollution_deaths = 0, total_starve_deaths = 0, total_unemployed_days = 0;
int total_unemployed_years = 0;
float pollution_deaths_history = 0.0, starve_deaths_history = 0.0;
float unemployed_history = 0.0;

int university_intake_rate;
int power_made, power_used, coal_made, coal_used;
int goods_made, goods_used, ore_made, ore_used;
int rockets_launched, rockets_launched_success;
int coal_survey_done;

int selected_type_cost;


