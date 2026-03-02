/*player.h*/

#ifndef PLAYER_H
#define PLAYER_H

namespace _component {

class Player : public Component {
public:
  Player();
  ~Player() = default;

Player& get() {
  return *this;
}

Vector3& getOrigin() const {
  return origin;
}

const char* getAlias() const {
  return alias_class;
}

virtual void* CreatePlayerNode( const Player& pPlayer, const Vector3& xyz, const char* pAlias ) = 0;
virtual void* DestroyPlayerNode( const Player& pPlayer ) = 0;

protected:
  Vector3 origin;
  const char* alias_class;
};

}

#endif
