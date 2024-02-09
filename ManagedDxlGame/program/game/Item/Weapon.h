
///
///装備などの要素
/// 

#pragma once
#include "Item.h"
#include<unordered_map>
#include"../Object/Actor.h"
#include "../dxlib_ext/dxlib_ext.h"
#include"../Item/ItemBase.h"


class Weapon : public ItemBase{
public:

	Weapon();

	void draw();

	

	//武器を格納する配列
	std::vector<ItemBase>weponList;

	//武器屋で使う商品の説明と座標
	std::string weapon_disc[6];

	//武器の値を他のクラスで使う
	std::vector<ItemBase> GetWeaponValue()
	{
		return weponList;
	}

	//武器リストの数を取得する
	int GetWeaponListCount(){
		return weponList.size();
	}

	//武器の値をセットする関数
	void WeaponInint();
	
	
private:

	
//------------------------------------------------------------------------------------------------------------------------
//---ポインタ---//

	Shared<Item>item_ = nullptr;



};