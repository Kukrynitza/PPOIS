#include "BorschtRecipe.h"
namespace BORSCH {
    vector<Meat> BorschtRecipe::getMeat(){
        return meats;
    }
    vector<Vegetable> BorschtRecipe::getVegetable(){
        return vegetables;
    }
    void BorschtRecipe::setIngridients() {
        Vegetable beetroot("������", 4);
        Vegetable carrot("�������", 2);
        Vegetable potato("���������", 5);
        Vegetable cabbage("�������", 1);
        Meat chicken("������", 300);
        vegetables.emplace_back(beetroot);
        vegetables.emplace_back(carrot);
        vegetables.emplace_back(potato);
        vegetables.emplace_back(cabbage);
        meats.emplace_back(chicken);
    }

    void BorschtRecipe::prepareIngredients(){
        kitchen.addStep(vegetables[0], "clean");
        kitchen.addStep(vegetables[0], "slice");
        kitchen.addStep(vegetables[1], "clean");
        kitchen.addStep(vegetables[2], "clean");
        kitchen.addStep(vegetables[2], "slice");
        kitchen.addStep(vegetables[3], "clean");
        kitchen.addStep(meats[0], "slice");

        kitchen.setSpice("pepper");
        kitchen.setSpice("salt");
        kitchen.setDishes("��������");
        kitchen.setDishes("���������");

        cout << "������ �����" << endl;
        for (auto meat : meats) {
            cout << meat.getName() << ' ' << meat.getWeight() << endl;
        }
        for (auto vegetable : vegetables) {
            cout << vegetable.getName() << ' ' << vegetable.getCount() << endl;
        }
        cout << endl;
        kitchen.cook();
        string states;
        for (auto meat : meats) {
            for (auto state : meat.getState()) {
                states += state + ",\n";
            }
            cout << meat.getName() << ' ' << meat.getWeight() << ": " << states << endl;
            states.clear();
        }
        for (auto vegetable : vegetables) {
            for (auto state : vegetable.getState()) {
                states += state + ",\n";
            }
            cout << vegetable.getName() << ' ' << vegetable.getCount() << ": " << states << endl;
            states.clear();
        }
        cout << endl;
    }
}