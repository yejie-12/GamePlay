#ifndef LUA_JOINT_H_
#define LUA_JOINT_H_

namespace gameplay
{

// Lua bindings for Joint.
int lua_Joint__gc(lua_State* state);
int lua_Joint_addChild(lua_State* state);
int lua_Joint_addListener(lua_State* state);
int lua_Joint_addRef(lua_State* state);
int lua_Joint_addScriptCallback(lua_State* state);
int lua_Joint_clone(lua_State* state);
int lua_Joint_createAnimation(lua_State* state);
int lua_Joint_createAnimationFromBy(lua_State* state);
int lua_Joint_createAnimationFromTo(lua_State* state);
int lua_Joint_destroyAnimation(lua_State* state);
int lua_Joint_findNode(lua_State* state);
int lua_Joint_getActiveCameraTranslationView(lua_State* state);
int lua_Joint_getActiveCameraTranslationWorld(lua_State* state);
int lua_Joint_getAgent(lua_State* state);
int lua_Joint_getAnimation(lua_State* state);
int lua_Joint_getAnimationPropertyComponentCount(lua_State* state);
int lua_Joint_getAnimationPropertyValue(lua_State* state);
int lua_Joint_getAudioSource(lua_State* state);
int lua_Joint_getBackVector(lua_State* state);
int lua_Joint_getBoundingSphere(lua_State* state);
int lua_Joint_getCamera(lua_State* state);
int lua_Joint_getChildCount(lua_State* state);
int lua_Joint_getCollisionObject(lua_State* state);
int lua_Joint_getDownVector(lua_State* state);
int lua_Joint_getFirstChild(lua_State* state);
int lua_Joint_getForm(lua_State* state);
int lua_Joint_getForwardVector(lua_State* state);
int lua_Joint_getForwardVectorView(lua_State* state);
int lua_Joint_getForwardVectorWorld(lua_State* state);
int lua_Joint_getId(lua_State* state);
int lua_Joint_getInverseBindPose(lua_State* state);
int lua_Joint_getInverseTransposeWorldMatrix(lua_State* state);
int lua_Joint_getInverseTransposeWorldViewMatrix(lua_State* state);
int lua_Joint_getInverseViewMatrix(lua_State* state);
int lua_Joint_getInverseViewProjectionMatrix(lua_State* state);
int lua_Joint_getLeftVector(lua_State* state);
int lua_Joint_getLight(lua_State* state);
int lua_Joint_getMatrix(lua_State* state);
int lua_Joint_getModel(lua_State* state);
int lua_Joint_getNextSibling(lua_State* state);
int lua_Joint_getParent(lua_State* state);
int lua_Joint_getParticleEmitter(lua_State* state);
int lua_Joint_getPreviousSibling(lua_State* state);
int lua_Joint_getProjectionMatrix(lua_State* state);
int lua_Joint_getRefCount(lua_State* state);
int lua_Joint_getRightVector(lua_State* state);
int lua_Joint_getRightVectorWorld(lua_State* state);
int lua_Joint_getRootNode(lua_State* state);
int lua_Joint_getRotation(lua_State* state);
int lua_Joint_getScale(lua_State* state);
int lua_Joint_getScaleX(lua_State* state);
int lua_Joint_getScaleY(lua_State* state);
int lua_Joint_getScaleZ(lua_State* state);
int lua_Joint_getScene(lua_State* state);
int lua_Joint_getTag(lua_State* state);
int lua_Joint_getTerrain(lua_State* state);
int lua_Joint_getTranslation(lua_State* state);
int lua_Joint_getTranslationView(lua_State* state);
int lua_Joint_getTranslationWorld(lua_State* state);
int lua_Joint_getTranslationX(lua_State* state);
int lua_Joint_getTranslationY(lua_State* state);
int lua_Joint_getTranslationZ(lua_State* state);
int lua_Joint_getType(lua_State* state);
int lua_Joint_getUpVector(lua_State* state);
int lua_Joint_getUpVectorWorld(lua_State* state);
int lua_Joint_getViewMatrix(lua_State* state);
int lua_Joint_getViewProjectionMatrix(lua_State* state);
int lua_Joint_getWorldMatrix(lua_State* state);
int lua_Joint_getWorldViewMatrix(lua_State* state);
int lua_Joint_getWorldViewProjectionMatrix(lua_State* state);
int lua_Joint_hasTag(lua_State* state);
int lua_Joint_isActive(lua_State* state);
int lua_Joint_isActiveInHierarchy(lua_State* state);
int lua_Joint_isStatic(lua_State* state);
int lua_Joint_release(lua_State* state);
int lua_Joint_removeAllChildren(lua_State* state);
int lua_Joint_removeChild(lua_State* state);
int lua_Joint_removeListener(lua_State* state);
int lua_Joint_removeScriptCallback(lua_State* state);
int lua_Joint_rotate(lua_State* state);
int lua_Joint_rotateX(lua_State* state);
int lua_Joint_rotateY(lua_State* state);
int lua_Joint_rotateZ(lua_State* state);
int lua_Joint_scale(lua_State* state);
int lua_Joint_scaleX(lua_State* state);
int lua_Joint_scaleY(lua_State* state);
int lua_Joint_scaleZ(lua_State* state);
int lua_Joint_set(lua_State* state);
int lua_Joint_setActive(lua_State* state);
int lua_Joint_setAgent(lua_State* state);
int lua_Joint_setAnimationPropertyValue(lua_State* state);
int lua_Joint_setAudioSource(lua_State* state);
int lua_Joint_setCamera(lua_State* state);
int lua_Joint_setCollisionObject(lua_State* state);
int lua_Joint_setForm(lua_State* state);
int lua_Joint_setId(lua_State* state);
int lua_Joint_setIdentity(lua_State* state);
int lua_Joint_setLight(lua_State* state);
int lua_Joint_setModel(lua_State* state);
int lua_Joint_setParticleEmitter(lua_State* state);
int lua_Joint_setRotation(lua_State* state);
int lua_Joint_setScale(lua_State* state);
int lua_Joint_setScaleX(lua_State* state);
int lua_Joint_setScaleY(lua_State* state);
int lua_Joint_setScaleZ(lua_State* state);
int lua_Joint_setTag(lua_State* state);
int lua_Joint_setTerrain(lua_State* state);
int lua_Joint_setTranslation(lua_State* state);
int lua_Joint_setTranslationX(lua_State* state);
int lua_Joint_setTranslationY(lua_State* state);
int lua_Joint_setTranslationZ(lua_State* state);
int lua_Joint_static_ANIMATE_ROTATE(lua_State* state);
int lua_Joint_static_ANIMATE_ROTATE_TRANSLATE(lua_State* state);
int lua_Joint_static_ANIMATE_SCALE(lua_State* state);
int lua_Joint_static_ANIMATE_SCALE_ROTATE(lua_State* state);
int lua_Joint_static_ANIMATE_SCALE_ROTATE_TRANSLATE(lua_State* state);
int lua_Joint_static_ANIMATE_SCALE_TRANSLATE(lua_State* state);
int lua_Joint_static_ANIMATE_SCALE_UNIT(lua_State* state);
int lua_Joint_static_ANIMATE_SCALE_X(lua_State* state);
int lua_Joint_static_ANIMATE_SCALE_Y(lua_State* state);
int lua_Joint_static_ANIMATE_SCALE_Z(lua_State* state);
int lua_Joint_static_ANIMATE_TRANSLATE(lua_State* state);
int lua_Joint_static_ANIMATE_TRANSLATE_X(lua_State* state);
int lua_Joint_static_ANIMATE_TRANSLATE_Y(lua_State* state);
int lua_Joint_static_ANIMATE_TRANSLATE_Z(lua_State* state);
int lua_Joint_static_isTransformChangedSuspended(lua_State* state);
int lua_Joint_static_resumeTransformChanged(lua_State* state);
int lua_Joint_static_suspendTransformChanged(lua_State* state);
int lua_Joint_transformPoint(lua_State* state);
int lua_Joint_transformVector(lua_State* state);
int lua_Joint_translate(lua_State* state);
int lua_Joint_translateForward(lua_State* state);
int lua_Joint_translateLeft(lua_State* state);
int lua_Joint_translateSmooth(lua_State* state);
int lua_Joint_translateUp(lua_State* state);
int lua_Joint_translateX(lua_State* state);
int lua_Joint_translateY(lua_State* state);
int lua_Joint_translateZ(lua_State* state);

void luaRegister_Joint();

}

#endif
