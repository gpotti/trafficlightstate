/**
 * @file traffic_light.c
 * @brief Traffic Light State Transition API
 *
 * This file defines the API for managing the state transitions
 * of a traffic light system.
 *
 * The traffic light transitions between the following states:
 * - RED
 * - GREEN
 * - YELLOW
 */

#include <stdbool.h>

/// Traffic light states
typedef enum {
    RED,    /**< Red light */
    GREEN,  /**< Green light */
    YELLOW  /**< Yellow light */
} TrafficLightState;

/**
 * @struct TrafficLight
 * @brief Represents the state of a traffic light.
 */
typedef struct {
    TrafficLightState state; /**< Current state of the traffic light */
} TrafficLight;

/**
 * @brief Initializes the traffic light to the RED state.
 * 
 * @param light Pointer to the TrafficLight object.
 */
void initTrafficLight(TrafficLight* light) {
    light->state = RED;
}

/**
 * @brief Transition the traffic light to the GREEN state.
 * 
 * @param light Pointer to the TrafficLight object.
 * @return true if the transition is valid, false otherwise.
 */
bool turnGreen(TrafficLight* light) {
    if (light->state == RED) {
        light->state = GREEN;
        return true;
    }
    return false;
}

/**
 * @brief Transition the traffic light to the YELLOW state.
 * 
 * @param light Pointer to the TrafficLight object.
 * @return true if the transition is valid, false otherwise.
 */
bool turnYellow(TrafficLight* light) {
    if (light->state == GREEN) {
        light->state = YELLOW;
        return true;
    }
    return false;
}

/**
 * @brief Transition the traffic light to the RED state.
 * 
 * @param light Pointer to the TrafficLight object.
 * @return true if the transition is valid, false otherwise.
 */
bool turnRed(TrafficLight* light) {
    if (light->state == YELLOW) {
        light->state = RED;
        return true;
    }
    return false;
}

/**
 * @brief Checks if the traffic light is in a valid state.
 * 
 * @param light Pointer to the TrafficLight object.
 * @return true if the state is valid, false otherwise.
 */
bool isTrafficLightValid(const TrafficLight* light) {
    return light->state == RED || light->state == GREEN || light->state == YELLOW;
}

