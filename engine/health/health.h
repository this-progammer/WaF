/*health.h*/

#ifndef HEALTH_H
#define HEALTH_H

constexpr const char* const HEALTH_CLASS("Health");

float f_base_health = 150.0f;

class CHealth {
public:
  CHealth();
  ~CHealth() = default;

  virtual void create_base() = 0;

};

#endif
