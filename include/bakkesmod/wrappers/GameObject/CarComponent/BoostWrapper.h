#pragma once
template<class T> class ArrayWrapper;
#include "../../WrapperStructs.h"
#include "../.././GameObject/CarComponent/CarComponentWrapper.h"

class BAKKESMOD_PLUGIN_IMPORT BoostWrapper : public CarComponentWrapper {
public:
	CONSTRUCTORS(BoostWrapper)

	//BEGIN SELF IMPLEMENTED
	//END SELF IMPLEMENTED

	//AUTO-GENERATED FROM FIELDS
	float GetBoostConsumptionRate();
	void SetBoostConsumptionRate(float newBoostConsumptionRate);
	float GetMaxBoostAmount();
	void SetMaxBoostAmount(float newMaxBoostAmount);
	float GetStartBoostAmount();
	void SetStartBoostAmount(float newStartBoostAmount);
	float GetCurrentBoostAmount();
	void SetCurrentBoostAmount(float newCurrentBoostAmount);
	float GetBoostModifier();
	void SetBoostModifier(float newBoostModifier);
	float GetLastBoostAmountRequestTime();
	void SetLastBoostAmountRequestTime(float newLastBoostAmountRequestTime);
	float GetLastBoostAmount();
	void SetLastBoostAmount(float newLastBoostAmount);
	float GetBoostForce();
	void SetBoostForce(float newBoostForce);
	float GetMinBoostTime();
	void SetMinBoostTime(float newMinBoostTime);
	float GetRechargeRate();
	void SetRechargeRate(float newRechargeRate);
	float GetRechargeDelay();
	void SetRechargeDelay(float newRechargeDelay);
	int GetUnlimitedBoostRefCount();
	void SetUnlimitedBoostRefCount(int newUnlimitedBoostRefCount);
	unsigned long GetbUnlimitedBoost();
	void SetbUnlimitedBoost(unsigned long newbUnlimitedBoost);
	unsigned long GetbNoBoost();
	void SetbNoBoost(unsigned long newbNoBoost);
	unsigned char GetReplicatedBoostAmount();
	void SetReplicatedBoostAmount(unsigned char newReplicatedBoostAmount);

	//AUTO-GENERATED FUNCTION PROXIES
	void ReadReplicatedBoostAmount();
	void eventSetReplicatedBoostAmount();
	void ApplyForces(float ActiveTime);
	void ClientGiveBoost(float Amount);
	void ConfirmBoostAmount();
	void ClientFixBoostAmount(float TimeStamp, float Amount);
	void ServerConfirmBoostAmount(float TimeStamp, float Amount);
	void SetRechargeDelay2(float InRechargeDelay);
	void SetRechargeRate2(float InRechargeRate);
	void SetNoBoost(unsigned long Enabled);
	void SetUnlimitedBoost2(unsigned long Enabled);
	void SetBoostModifier2(float Modifier);
	void SetBoostAmount(float Amount);
	void GiveBoost2(float Amount);
	void GiveStartingBoost();
	void GiveFullBoost();
	float GetPercentBoostFull();
	bool IsFull();
	void RemoveFromCar();
	bool CanDeactivate();
	bool CanActivate();
private:
	PIMPL
};