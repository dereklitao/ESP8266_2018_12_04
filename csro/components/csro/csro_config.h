#ifndef CSRO_CONFIG_H_
#define CSRO_CONFIG_H_

#include "stdint.h"
#include "MQTTClient.h"
#include "FreeRTOS/MQTTFreeRTOS.h"


#ifdef 	   DEBUG
   #define debug(format, ...) printf(format, ## __VA_ARGS__)
#else
   #define debug(format, ...)
#endif



typedef enum
{
    IDLE = 0,
    SMARTCONFIG = 1,
    SMARTCONFIG_TIMEOUT = 2,
    NORMAL_START_NOWIFI = 3,
    NORMAL_START_NOSERVER = 4,
    NORMAL_START_OK = 5,
    RESET_PENDING = 6
} csro_system_status;

typedef struct
{
    char ssid[50];
    char pass[50];
    int8_t flag;
} csro_wifi_param;

typedef struct
{
    uint8_t device_type[20];
    uint8_t mac[6];
    uint8_t mac_string[20];
    uint8_t host_name[20];
    uint8_t ip[4];
    uint8_t ip_string[20];
    uint8_t power_on_time[30];
    uint8_t serv_conn_time[30];
    uint8_t time_stamp[30];
    int32_t power_on_count;
    uint32_t wifi_conn_count;
    uint32_t serv_conn_count;
    uint32_t publish_count;
    uint32_t run_minutes;
    csro_system_status status;
} csro_system_info;

typedef struct
{
    uint8_t id[50];
    uint8_t name[50];
    uint8_t password[50];
    uint8_t sub_topic[100];
    uint8_t pub_topic[100];
    uint8_t sendbuf[1000];
    uint8_t recvbuf[1000];
    uint8_t content[1000];
    uint8_t broker[50];
    uint8_t prefix[50];
    struct Network network;
    MQTTClient client;
    MQTTMessage message;
} csro_mqtt;

typedef struct
{
    time_t time_now;
    time_t time_run;
    struct tm timeinfo;
    char strtime[64];
} csro_date_time;






#endif