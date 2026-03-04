/*health.h*/

#ifndef HEALTH_H
#define HEALTH_H

constexpr const char* const HEALTH_CLASS("Health");

class CHealth {
public:
  CHealth();
  ~CHealth() = default;

  virtual void* initHealth( CHealth& pHealth, bool bZero ) = 0;
  virtual void* destroyHealth( CHealth& pHealth ) = 0;

CHealth& get() {
  return *this;
}

CHealth operator ++( CHealth& pHealth );
CHealth operator --( CHealth& pHealth );

protected:
float health = 150.0f;
bool bDead;
};

#endif
