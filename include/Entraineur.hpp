#pragma once
#include <string>
#include <vector>
#include "./Pokemon.hpp"


class Tamer{
    private :
        std::string name;
        std::vector<Pokemon> liste_pokemon;
        int selected_pokemon_index = 0;


    public :
        Tamer(std::string name, std::vector<Pokemon> liste);
        Tamer(std::string name);

        std::string getName() const;
        std::vector<Pokemon>& getPokeList();
        const std::vector<Pokemon>& getPokeList() const;

        void setName(std::string name);
        void setPokeList(std::vector<Pokemon> poke_list);

        int getSelectedPokemonIndex();
        void setSelectedPokemonIndex(int index);
        bool checkhp();

        // Methods to reorder pokemons
        void movePokemonUp(int index);
        void movePokemonDown(int index);
};

class Player : public Tamer{
    private : 
        int nombre_badges;
        int nombre_combats_gagnes;
        int nombre_combats_perdus;
        std::vector<std::string> nom_badge;
        std::vector<Pokemon> reserve_pokemon;

    public : 
        Player(std::string name, std::vector<Pokemon> liste, int nb, int ncombat_gagnes, int ncombat_perdu);
        void set_nombre_badges(std::string nom_badge);
        void set_nombre_combats_gagnes(int v);
        void set_nombre_combats_perdus(int v);

        // Added getters
        int get_nombre_badges() const;
        int get_nombre_combats_gagnes() const;
        int get_nombre_combats_perdus() const;
        const std::vector<std::string>& get_nom_badge() const;
};

class GymLeader : public Tamer{
    private : 
        std::string badge;
        std::string gymnase;
        
    public : 
        GymLeader(std::string name, std::string badge, std::string gymnase, std::string pokemon1, std::string pokemon2, std::string pokemon3, std::string pokemon4, std::string pokemon5, std::string pokemon6, std::vector<Pokemon> poke_list);
        std::string getBadge() const;
        std::string getGymnase() const;
};

class MasterTamer : public Tamer{
    public : 
        MasterTamer(std::string name, std::string pokemon1, std::string pokemon2, std::string pokemon3, std::string pokemon4, std::string pokemon5, std::string pokemon6, std::vector<Pokemon> poke_list) ;
};

