#pragma once
#include "../Engine/ObjectWrapper.h"
#include "../arraywrapper.h"

#include "OnlineProductWrapper.h"
#include "ProductSlotWrapper.h"
#include "ProductTemplateWrapper.h"
#include "ProductWrapper.h"
#include "attributes/ProductAttributeWrapper.h"
#include "attributes/ProductAttribute_AnimatedSkinLabelWrapper.h"
#include "attributes/ProductAttribute_BlueprintCostWrapper.h"
#include "attributes/ProductAttribute_BlueprintWrapper.h"
#include "attributes/ProductAttribute_BodyCompatibilityWrapper.h"
#include "attributes/ProductAttribute_CertifiedWrapper.h"
#include "attributes/ProductAttribute_CurrencyWrapper.h"
#include "attributes/ProductAttribute_PaintedWrapper.h"
#include "attributes/ProductAttribute_QualityWrapper.h"
#include "attributes/ProductAttribute_SpecialEditionWrapper.h"
#include "attributes/ProductAttribute_SpecialEditionSettingsWrapper.h"
#include "attributes/ProductAttribute_TeamEditionUploadWrapper.h"
#include "attributes/ProductAttribute_TeamEditionWrapper.h"
#include "attributes/ProductAttribute_UnlockMethodWrapper.h"
#include "dbs/CertifiedStatDatabaseWrapper.h"
#include "dbs/DataAssetDatabaseWrapper.h"
#include "dbs/DataAssetDatabase_ESportsTeamWrapper.h"
#include "dbs/PaintDatabaseWrapper.h"
#include "dbs/SpecialEditionDatabaseWrapper.h"
#include "TradeWrapper.h"


class BAKKESMOD_PLUGIN_IMPORT ItemsWrapper : public ObjectWrapper
{
public:
	ItemsWrapper(std::uintptr_t gamedata, std::uintptr_t savedata);
	ItemsWrapper(const ItemsWrapper& other);
	ItemsWrapper& operator=(ItemsWrapper rhs);
	~ItemsWrapper();
	ArrayWrapper<ProductWrapper> GetAllProducts();
	ProductWrapper GetProduct(int productId);
	ArrayWrapper<OnlineProductWrapper> GetUnlockedProducts();
	ArrayWrapper<OnlineProductWrapper> GetOwnedProducts();

	CertifiedStatDatabaseWrapper GetCertifiedStatDB();
	DataAssetDatabase_ESportsTeamWrapper GetEsportTeamDB();
	PaintDatabaseWrapper GetPaintDB();
	SpecialEditionDatabaseWrapper GetSpecialEditionDB();

	TradeWrapper GetTradeWrapper();





private:
	PIMPL
};


