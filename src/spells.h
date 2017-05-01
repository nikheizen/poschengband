/* spells.c */
extern void browse_spells(spell_info* spells, int ct, cptr desc);
extern int calculate_cost(int cost);
extern int calculate_fail_rate(int level, int base_fail, int stat_idx);
extern int calculate_fail_rate_aux(int caster_lvl, int spell_lvl, int base_fail, int stat_idx);
extern bool cast_spell(ang_spell spell);
extern int  choose_spell(spell_info* spells, int ct, cptr desc, int max_cost);
extern void default_spell(int cmd, variant *res);
extern void do_cmd_power(void);
extern void do_cmd_spell(void);
extern void do_cmd_spell_browse(void);
extern void fail_spell(ang_spell spell);
extern int get_spell_energy(ang_spell spell);
extern int get_spell_cost_extra(ang_spell spell);
extern int get_spell_fail_min(ang_spell spell);
extern cptr get_spell_name(ang_spell spell); /* buffer reset on each call */
extern cptr get_spell_stat_name(ang_spell spell); /* buffer reset on each call */
extern cptr get_spell_desc(ang_spell spell); /* buffer reset on each call */
extern cptr get_spell_spoiler_name(ang_spell spell); /* buffer reset on each call */
extern void spell_stats_on_birth(void);
extern void spell_stats_on_load(savefile_ptr file);
extern void spell_stats_on_save(savefile_ptr file);
extern void spell_stats_on_learn(spell_info *spell, int max_skill);
extern void spell_stats_on_cast(spell_info *spell);
extern void spell_stats_on_fail(spell_info *spell);
extern spell_stats_ptr spell_stats_aux(cptr name);
extern spell_stats_ptr spell_stats(spell_info *spell);
extern int spell_stats_fail(spell_stats_ptr stats);
extern void spellbook_destroy(obj_ptr obj);

extern spell_stats_ptr spell_stats_old(int realm, int spell); /* Deprecated */
extern void spell_stats_on_cast_old(int realm, int spell); /* Deprecated */
extern void spell_stats_on_fail_old(int realm, int spell); /* Deprecated */


extern void spellbook_character_dump(doc_ptr doc);

/* Public Spells:  I'm using the following system for placing code.
   This makes it easier to split a too large file, and easier to locate
   the correct file for a spell.

   Here is an example:
   spells_a.c - Contains spells beginning with 'a' up to next file.
   spells_k.c - Contains spells beginning with 'k' up to next file, etc
*/
extern bool cast_alchemy(void);
extern bool cast_banish_evil(void);
extern bool cast_berserk(void);
extern bool cast_breathe_fire_I(void);
extern bool cast_clear_mind(void);
extern bool cast_cold_touch(void);
extern bool cast_crafting(void);
extern bool cast_create_food(void);
extern bool cast_crusade(void);
extern bool cast_dazzle(void);
extern bool cast_destruction(void);
extern bool cast_detect_curses(void);
extern bool cast_detect_doors_stairs_traps(void);
extern bool cast_detect_monsters(void);
extern bool cast_detect_objects(void);
extern bool cast_detect_traps(void);
extern bool cast_detect_treasure(void);
extern bool cast_dimension_door(void);
extern bool cast_earthquake(void);
extern bool cast_eat_magic(void);
extern bool cast_eat_rock(void);
extern bool cast_enchantment(void);
extern bool cast_grow_mold(void);
extern bool cast_heroism(void);
extern bool cast_hypnotic_gaze(void);
extern bool cast_identify(void);
extern bool cast_identify_fully(void);
extern bool cast_laser_eye(void);
extern bool cast_light_area(void);
extern bool cast_magic_mapping(void);
extern bool cast_magic_missile(void);
extern bool cast_mind_blast(void);
extern bool cast_panic_hit(void);
extern bool cast_phase_door(void);
extern bool cast_polish_shield(void);
extern bool cast_polymorph_self(void);
extern bool cast_power_throw(void);
extern bool cast_probing(void);
extern bool cast_protection_from_evil(void);
extern bool cast_radiation(void);
extern bool cast_recall(void);
extern bool cast_recharging(void);
extern bool cast_remove_curse_I(void);
extern bool cast_remove_curse_II(void);
extern bool cast_remove_fear(void);
extern bool cast_resist_elements(void);
extern bool cast_restore_life(void);
extern bool cast_satisfy_hunger(void);
extern bool cast_shriek(void);
extern bool cast_spit_acid(void);
extern bool cast_sterility(void);
extern bool cast_stone_skin(void);
extern bool cast_stone_to_mud(void);
extern bool cast_summon_tree(void);
extern bool cast_swap_pos(void);
extern bool cast_telekinesis(void);
extern bool cast_teleport(void);
extern bool cast_teleport_level(void);
extern bool cast_vampirism(void);
extern bool cast_weigh_magic(void);

extern void acid_ball_spell(int cmd, variant *res);
extern void acid_bolt_spell(int cmd, variant *res);
extern void alchemy_spell(int cmd, variant *res);
extern void alter_reality_spell(int cmd, variant *res);
extern void amnesia_spell(int cmd, variant *res);
extern void android_ray_gun_spell(int cmd, variant *res);
extern void android_blaster_spell(int cmd, variant *res);
extern void android_bazooka_spell(int cmd, variant *res);
extern void android_beam_cannon_spell(int cmd, variant *res);
extern void android_rocket_spell(int cmd, variant *res);
extern void animate_dead_spell(int cmd, variant *res);
extern void awesome_blow_spell(int cmd, variant *res);
extern void banish_evil_spell(int cmd, variant *res);
extern void battle_frenzy_spell(int cmd, variant *res);
extern void berserk_spell(int cmd, variant *res);
extern void bless_spell(int cmd, variant *res);
extern void bless_weapon_spell(int cmd, variant *res);
extern void brain_smash_spell(int cmd, variant *res);
extern void breathe_disintegration_spell(int cmd, variant *res);
extern void breathe_fire_I_spell(int cmd, variant *res);
extern void breathe_fire_II_spell(int cmd, variant *res);
extern void building_up_spell(int cmd, variant *res);
extern void cause_wounds_I_spell(int cmd, variant *res);
extern void cause_wounds_II_spell(int cmd, variant *res);
extern void cause_wounds_III_spell(int cmd, variant *res);
extern void cause_wounds_IV_spell(int cmd, variant *res);
extern void clairvoyance_spell(int cmd, variant *res);
extern void clear_mind_spell(int cmd, variant *res);
extern void cold_touch_spell(int cmd, variant *res);
extern void confuse_spell(int cmd, variant *res);
extern void confusing_lights_spell(int cmd, variant *res);
extern void crafting_spell(int cmd, variant *res);
extern void create_ammo_spell(int cmd, variant *res);
extern void create_darkness_spell(int cmd, variant *res);
extern void create_food_spell(int cmd, variant *res);
extern void create_major_trap_spell(int cmd, variant *res);
extern void create_minor_trap_spell(int cmd, variant *res);
extern void create_ultimate_trap_spell(int cmd, variant *res);
extern void crusade_spell(int cmd, variant *res);
extern void cure_poison_spell(int cmd, variant *res);
extern void cure_wounds_I_spell(int cmd, variant *res);
extern void cure_wounds_II_spell(int cmd, variant *res);
extern void cure_wounds_III_spell(int cmd, variant *res);
extern void curing_spell(int cmd, variant *res);
extern void darkness_storm_I_spell(int cmd, variant *res);
extern void darkness_storm_II_spell(int cmd, variant *res);
extern void day_of_the_dove_spell(int cmd, variant *res);
extern void dazzle_spell(int cmd, variant *res);
extern void detect_evil_spell(int cmd, variant *res);
extern void detect_life_spell(int cmd, variant *res);
extern void detect_unlife_spell(int cmd, variant *res);
extern void demon_breath_spell(int cmd, variant *res);
extern void destruction_spell(int cmd, variant *res);
extern void detect_menace_spell(int cmd, variant *res);
extern void detect_curses_spell(int cmd, variant *res);
extern void detect_doors_stairs_traps_spell(int cmd, variant *res);
extern void detect_objects_spell(int cmd, variant *res);
extern void detect_monsters_spell(int cmd, variant *res);
extern void detect_traps_spell(int cmd, variant *res);
extern void detect_treasure_spell(int cmd, variant *res);
extern void detection_spell(int cmd, variant *res);
extern void dimension_door_spell(int cmd, variant *res);
extern void disintegrate_spell(int cmd, variant *res);
extern void dispel_evil_spell(int cmd, variant *res);
extern void dispel_life_spell(int cmd, variant *res);
extern void dispel_magic_spell(int cmd, variant *res);
extern void dispel_undead_spell(int cmd, variant *res);
extern void dominate_living_I_spell(int cmd, variant *res);
extern void dominate_living_II_spell(int cmd, variant *res);
extern void drain_mana_spell(int cmd, variant *res);
extern void earthquake_spell(int cmd, variant *res);
extern void eat_magic_spell(int cmd, variant *res);
extern void eat_rock_spell(int cmd, variant *res);
extern void minor_enchantment_spell(int cmd, variant *res);
extern void enchantment_spell(int cmd, variant *res);
extern void enslave_undead_spell(int cmd, variant *res);
extern void evil_bless_spell(int cmd, variant *res);
extern void evocation_spell(int cmd, variant *res);
extern void explosive_rune_spell(int cmd, variant *res);
extern void eye_for_an_eye_spell(int cmd, variant *res);
extern void fire_ball_spell(int cmd, variant *res);
extern void fire_bolt_spell(int cmd, variant *res);
extern void flow_of_lava_spell(int cmd, variant *res);
extern void force_branding_spell(int cmd, variant *res);
extern void frost_ball_spell(int cmd, variant *res);
extern void frost_bolt_spell(int cmd, variant *res);
extern void genocide_spell(int cmd, variant *res);
extern void glyph_of_warding_spell(int cmd, variant *res);
extern void grow_mold_spell(int cmd, variant *res);
extern void hand_of_doom_spell(int cmd, variant *res);
extern void haste_self_spell(int cmd, variant *res);
extern void healing_I_spell(int cmd, variant *res);
extern void healing_II_spell(int cmd, variant *res);
extern void hellfire_spell(int cmd, variant *res);
extern void hell_lance_spell(int cmd, variant *res);
extern void heroism_spell(int cmd, variant *res);
extern void hide_in_flame_spell(int cmd, variant *res);
extern void hide_in_mist_spell(int cmd, variant *res);
extern void hide_in_mud_spell(int cmd, variant *res);
extern void holy_lance_spell(int cmd, variant *res);
extern void hp_to_sp_spell(int cmd, variant *res);
extern void hypnotic_gaze_spell(int cmd, variant *res);
extern void identify_spell(int cmd, variant *res);
extern void identify_fully_spell(int cmd, variant *res);
extern void ice_bolt_spell(int cmd, variant *res);
extern void imp_fire_spell(int cmd, variant *res);
extern void invoke_logrus_spell(int cmd, variant *res);
extern void invulnerability_spell(int cmd, variant *res);
extern void kiss_of_succubus_spell(int cmd, variant *res);
extern void kutar_expand_spell(int cmd, variant *res);
extern void laser_eye_spell(int cmd, variant *res);
extern void light_area_spell(int cmd, variant *res);
extern void lightning_ball_spell(int cmd, variant *res);
extern void lightning_bolt_spell(int cmd, variant *res);
extern void living_trump_spell(int cmd, variant *res);
extern void magic_missile_spell(int cmd, variant *res);
extern void magic_mapping_spell(int cmd, variant *res);
extern void mana_branding_spell(int cmd, variant *res);
extern void mana_bolt_I_spell(int cmd, variant *res);
extern void mana_bolt_II_spell(int cmd, variant *res);
extern void mana_storm_I_spell(int cmd, variant *res);
extern void mana_storm_II_spell(int cmd, variant *res);
extern void massacre_spell(int cmd, variant *res);
extern void mind_blast_spell(int cmd, variant *res);
extern void nature_awareness_spell(int cmd, variant *res);
extern void nether_ball_spell(int cmd, variant *res);
extern void nether_bolt_spell(int cmd, variant *res);
extern void orb_of_entropy_spell(int cmd, variant *res);
extern void panic_hit_spell(int cmd, variant *res);
extern void paralyze_spell(int cmd, variant *res);
extern void pattern_mindwalk_spell(int cmd, variant *res);
extern void perception_spell(int cmd, variant *res);
extern void phase_door_spell(int cmd, variant *res);
extern void plasma_ball_spell(int cmd, variant *res);
extern void plasma_bolt_spell(int cmd, variant *res);
extern void poison_dart_spell(int cmd, variant *res);
extern void polish_shield_spell(int cmd, variant *res);
extern void polymorph_colossus_spell(int cmd, variant *res);
extern void polymorph_demon_spell(int cmd, variant *res);
extern void polymorph_demonlord_spell(int cmd, variant *res);
extern void polymorph_self_spell(int cmd, variant *res);
extern void polymorph_vampire_spell(int cmd, variant *res);
extern void power_throw_spell(int cmd, variant *res);
extern void probing_spell(int cmd, variant *res);
extern void protection_from_evil_spell(int cmd, variant *res);
extern void punishment_spell(int cmd, variant *res);
extern void radiation_ball_spell(int cmd, variant *res);
extern void radiation_spell(int cmd, variant *res);
extern void ray_of_sunlight_spell(int cmd, variant *res);
extern void recall_spell(int cmd, variant *res);
extern void recharging_spell(int cmd, variant *res);
extern void remove_curse_I_spell(int cmd, variant *res);
extern void remove_curse_II_spell(int cmd, variant *res);
extern void remove_fear_spell(int cmd, variant *res);
extern void resistance_spell(int cmd, variant *res);
extern void resist_elements_spell(int cmd, variant *res);
extern void resist_environment_spell(int cmd, variant *res);
extern void resist_fire_spell(int cmd, variant *res);
extern void resist_heat_cold_spell(int cmd, variant *res);
extern void resist_poison_spell(int cmd, variant *res);
extern void restoration_spell(int cmd, variant *res);
extern void restore_life_spell(int cmd, variant *res);
extern void rocket_I_spell(int cmd, variant *res);
extern void rocket_II_spell(int cmd, variant *res);
extern void rush_attack_spell(int cmd, variant *res);
extern void satisfy_hunger_spell(int cmd, variant *res);
extern void scare_monster_spell(int cmd, variant *res);
extern void scare_spell(int cmd, variant *res);
extern void self_knowledge_spell(int cmd, variant *res);
extern void sense_surroundings_spell(int cmd, variant *res);
extern void shadow_shifting_spell(int cmd, variant *res);
extern void shoot_arrow_spell(int cmd, variant *res);
extern void shriek_spell(int cmd, variant *res);
extern void sleeping_dust_spell(int cmd, variant *res);
extern void sleep_spell(int cmd, variant *res);
extern void slow_spell(int cmd, variant *res);
extern void smell_metal_spell(int cmd, variant *res);
extern void smell_monsters_spell(int cmd, variant *res);
extern void sp_to_hp_spell(int cmd, variant *res);
extern void spit_acid_spell(int cmd, variant *res);
extern void starburst_I_spell(int cmd, variant *res);
extern void starburst_II_spell(int cmd, variant *res);
extern void sterility_spell(int cmd, variant *res);
extern void stinking_cloud_spell(int cmd, variant *res);
extern void stone_skin_spell(int cmd, variant *res);
extern void stone_to_mud_spell(int cmd, variant *res);
extern void stop_time_spell(int cmd, variant *res);
extern void summon_amberites_spell(int cmd, variant *res);
extern void summon_angel_spell(int cmd, variant *res);
extern void summon_ants_spell(int cmd, variant *res);
extern void summon_cyberdemon_spell(int cmd, variant *res);
extern void summon_demon_spell(int cmd, variant *res);
extern void summon_demon_II_spell(int cmd, variant *res);
extern void summon_dragon_spell(int cmd, variant *res);
extern void summon_greater_demon_spell(int cmd, variant *res);
extern void summon_hi_dragon_spell(int cmd, variant *res);
extern void summon_hi_undead_spell(int cmd, variant *res);
extern void summon_hounds_spell(int cmd, variant *res);
extern void summon_hydras_spell(int cmd, variant *res);
extern void summon_kin_spell(int cmd, variant *res);
extern void summon_manes_spell(int cmd, variant *res);
extern void summon_monster_spell(int cmd, variant *res);
extern void summon_monsters_spell(int cmd, variant *res);
extern void summon_spiders_spell(int cmd, variant *res);
extern void summon_tree_spell(int cmd, variant *res);
extern void summon_undead_spell(int cmd, variant *res);
extern void summon_uniques_spell(int cmd, variant *res);
extern void super_stealth_spell(int cmd, variant *res);
extern void swap_pos_spell(int cmd, variant *res);
extern void sword_dance_spell(int cmd, variant *res);
extern void telepathy_spell(int cmd, variant *res);
extern void telekinesis_spell(int cmd, variant *res);
extern void teleport_spell(int cmd, variant *res);
extern void teleport_level_spell(int cmd, variant *res);
extern void teleport_to_spell(int cmd, variant *res);
extern void teleport_other_spell(int cmd, variant *res);
extern void throw_boulder_spell(int cmd, variant *res);
extern void touch_of_confusion_spell(int cmd, variant *res);
extern void turn_undead_spell(int cmd, variant *res);
extern void vampirism_spell(int cmd, variant *res);
extern void water_ball_spell(int cmd, variant *res);
extern void water_bolt_spell(int cmd, variant *res);
extern void weigh_magic_spell(int cmd, variant *res);
extern void wonder_spell(int cmd, variant *res);
extern void wraithform_spell(int cmd, variant *res);

