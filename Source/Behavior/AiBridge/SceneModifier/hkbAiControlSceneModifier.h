/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2013 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */

#ifndef HKB_AI_CONTROL_SCENE_MODIFIER_H
#define HKB_AI_CONTROL_SCENE_MODIFIER_H

#include <Behavior/Behavior/Utils/hkbSceneModifierUtils.h>

class hkbAiBridge;

/// A scene modifier that is responsible for updating the AI simulation during
/// the hkbWorld step. 
class hkbAiControlSceneModifier : public hkbSceneModifier
{
public:
	hkbAiControlSceneModifier(hkbAiBridge* bridge) : m_bridge(bridge) { }

	HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BEHAVIOR_RUNTIME);

	/// hkbSceneModifier interface implementation.
	virtual void modify( hkbSceneCharacters& sceneCharacters, float timestep ) HK_OVERRIDE;

private:
	hkbAiBridge* m_bridge;
};

#endif

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
