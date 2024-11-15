#ifndef DYNAMIC_WEATHER_SYSTEM_H
#define DYNAMIC_WEATHER_SYSTEM_H

#include <string>

// WeatherManager class definition
class WeatherManager {
public:
    void changeWeatherPattern();
private:
    class WeatherEffect* currentWeather;
    class WeatherPattern* weatherPattern;
};

// WeatherEffect class definition
class WeatherEffect {
public:
    virtual void applyEffect() = 0;
protected:
    std::string type;
    float intensity;
    int duration;
};

// Specific WeatherEffect subclasses
class Rain : public WeatherEffect {
public:
    void applyEffect() override;
};

class Snow : public WeatherEffect {
public:
    void applyEffect() override;
};

class Thunderstorm : public WeatherEffect {
public:
    void applyEffect() override;
};

class Fog : public WeatherEffect {
public:
    void applyEffect() override;
};

class Sunshine : public WeatherEffect {
public:
    void applyEffect() override;
};

// WeatherPattern class definition
class WeatherPattern {
public:
    void changeWeatherPattern();
private:
    std::string patternType;
    float frequency;
};

// Player class definition
class Player {
public:
    void adaptMovement();
    void adaptCombat();
private:
    std::string movement;
    std::string combat;
};

// Terrain class definition
class Terrain {
public:
    void reduceVisibility();
    void createObstacles();
private:
    std::string visibility;
    std::string obstacles;
};

// Environment class definition
class Environment {
public:
    void influenceWeather();
private:
    class GeographicLocation* geographicLocation;
    class Season* season;
};

// GeographicLocation class definition
class GeographicLocation {
public:
    void influenceWeather();
private:
    float latitude;
    float longitude;
};

// Season class definition
class Season {
public:
    void influenceWeather();
private:
    std::string currentSeason;
    int duration;
};

#endif // DYNAMIC_WEATHER_SYSTEM_H
