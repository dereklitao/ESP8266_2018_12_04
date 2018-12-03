deps_config := \
	/c/ESP8266/ESP8266_2018_12_04/components/app_update/Kconfig \
	/c/ESP8266/ESP8266_2018_12_04/components/aws_iot/Kconfig \
	/c/ESP8266/ESP8266_2018_12_04/components/esp8266/Kconfig \
	/c/ESP8266/ESP8266_2018_12_04/components/freertos/Kconfig \
	/c/ESP8266/ESP8266_2018_12_04/components/libsodium/Kconfig \
	/c/ESP8266/ESP8266_2018_12_04/components/log/Kconfig \
	/c/ESP8266/ESP8266_2018_12_04/components/lwip/Kconfig \
	/c/ESP8266/ESP8266_2018_12_04/components/mdns/Kconfig \
	/c/ESP8266/ESP8266_2018_12_04/components/newlib/Kconfig \
	/c/ESP8266/ESP8266_2018_12_04/components/pthread/Kconfig \
	/c/ESP8266/ESP8266_2018_12_04/components/ssl/Kconfig \
	/c/ESP8266/ESP8266_2018_12_04/components/tcpip_adapter/Kconfig \
	/c/ESP8266/ESP8266_2018_12_04/components/wpa_supplicant/Kconfig \
	/c/ESP8266/ESP8266_2018_12_04/components/bootloader/Kconfig.projbuild \
	/c/ESP8266/ESP8266_2018_12_04/components/esptool_py/Kconfig.projbuild \
	/c/ESP8266/ESP8266_2018_12_04/components/partition_table/Kconfig.projbuild \
	/c/ESP8266/ESP8266_2018_12_04/Kconfig

include/config/auto.conf: \
	$(deps_config)


$(deps_config): ;
