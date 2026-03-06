/*weather.h*/

#ifndef WEATHER_H
#define WEATHER_H

constexpr const char* const WEATHER_CLASS("Component::FX::Weather");

#define WEATHER_FX_RAIN 0
#define WEATHER_FX_SNOW 1
#define WEATHER_FX_THUNDER 2
#define WEATHER_FX_DUST 3

class CFXTypeWeather : public FX {
public:
  CFXTypeWeather();
  ~CFXTypeWeather() = default;

virtual void* createFxWeather( CFXTypeWeather& pFX, int nType, bool bStatic, const char* pAlias ) = 0;
virtual void* destroyFxWeather( CFXTypeWeather& pFX ) = 0;

CFXTypeWeather& get() {
  return *this;
};

protected:
int type;
const char* alias;
};

#endif
