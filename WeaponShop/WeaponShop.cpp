// WeaponShop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include "Character.h"
#include "Merchant.h"
#include "Weapon.h"


#include <iostream>
using namespace std;



int main()
{

    Merchant merchant1;

    string buyWeapon;
    string sellWeapon;

    Weapon weaponSelected, weaponBought, weaponSold;
    
    Weapon weapon1;
    Weapon weapon2 = Weapon("slasher","long, heavy, made of steel, sharp edge", 20, 50, 30.0f, 0.9f, WeaponType::SWORD);
    Weapon weapon3 = Weapon("dasher", "short, light, made of steel, sharp and pointy", 20, 40, 10.0f, 0.5f, WeaponType::DAGGER);
    Weapon weapon4 = Weapon("blitzen","string, wooden, light", 20, 40, 5.0f, 0.4f, WeaponType::BOW);



    Character player1 = Character("K", "N", "Hello", 1000.0f, 100, weapon4, RaceType::ELF, ClassType::ARCHER);
    Character player2 = Character("Clark", "Kent", "I don't like Kryptonite", 1000.f, 100, weapon2, RaceType::HUMAN, ClassType::WARRIOR);

    merchant1.AddWeapon(weapon1);
    merchant1.AddWeapon(weapon2);
    merchant1.AddWeapon(weapon3);
    merchant1.AddWeapon(weapon4);

    cout << merchant1.GetCatchphrase() << endl << endl;
    cout << "Here is a list of all my weapons:" << endl;
    
    merchant1.Display();

    cout << "Which weapon would you like to buy?" << endl;
    cout << "Weapon Name: ";

    cin >> buyWeapon;

    //weaponSelected.SetName(buyWeapon);


    cout << "You have chosen " << buyWeapon << endl << endl;

    weaponBought = merchant1.DisplayWeaponChoice(buyWeapon);

    player1.Buy(merchant1, weaponBought);

    cout << "Player would like to sell a weapon." << endl;
    cout << "Weapon Name: ";

    cin >> sellWeapon;

    cout << "Player is selling " << sellWeapon << endl << endl;

    weaponSold = merchant1.DisplayWeaponChoice(sellWeapon);

    player1.Sell(merchant1, weaponSold);

    player1.Use(weapon2, player2);

    //merchant1.Sell(player1, weapon4);


    //player1.Intro();
    





}

