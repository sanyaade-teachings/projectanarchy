/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2013 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */
#ifndef RPG_PLUGIN_ACTION_POWER_ATTACK_H__
#define RPG_PLUGIN_ACTION_POWER_ATTACK_H__

#include <Vision/Samples/Engine/RPGPlugin/Action.h>
#include <Vision/Samples/Engine/RPGPlugin/ActionAttackBase.h>

class RPG_Action_PowerAttack : public RPG_Action_AttackBase
{
public:
  RPG_Action_PowerAttack(RPG_Character *owner);

  virtual void Tick(float const deltaTime) HKV_OVERRIDE;

protected:
  virtual void StartAttack() HKV_OVERRIDE;
  virtual void FireAttack() HKV_OVERRIDE;
  virtual void PopulateTargetList() HKV_OVERRIDE;

  bool IsTargetInAttackFrustum(RPG_DamageableEntity* const target);
  int CalculateDamage(float const damageMultiplier) const;
  void TryDealDamage();

  void DebugDrawPlanarFrustum(hkvVec3 const& pos, float const baseWidth, float const range, float const angle);
};

#endif  // RPG_PLUGIN_ACTION_POWER_ATTACK_H__

/*
 * Havok SDK - Base file, BUILD(#20130723)
 * 
 * Confidential Information of Havok.  (C) Copyright 1999-2013
 * Telekinesys Research Limited t/a Havok. All Rights Reserved. The Havok
 * Logo, and the Havok buzzsaw logo are trademarks of Havok.  Title, ownership
 * rights, and intellectual property rights in the Havok software remain in
 * Havok and/or its suppliers.
 * 
 * Use of this software for evaluation purposes is subject to and indicates
 * acceptance of the End User licence Agreement for this product. A copy of
 * the license is included with this software and is also available from salesteam@havok.com.
 * 
 */
