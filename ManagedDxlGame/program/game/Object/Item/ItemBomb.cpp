#include "ItemBomb.h"
#include "../../Object/Camera.h"

ItemBomb::ItemBomb(const int& mv1model) : ItemBase(mv1model){
	//タイプ設定
	itemtype_ = ITEMTYPE::Bomb;
}

ItemBomb::~ItemBomb(){

}

void ItemBomb::Update(const float& delta_time){
	__super::Update(delta_time);
}
