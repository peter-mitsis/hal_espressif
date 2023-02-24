#define CONFIG_LOG_TIMESTAMP_SOURCE_RTOS 1
#define CONFIG_ESP32_DPORT_DIS_INTERRUPT_LVL 5
#define CONFIG_BOOTLOADER_LOG_LEVEL 3

#define CONFIG_ESP_MAC_ADDR_UNIVERSE_BT 1
#define CONFIG_ESP_MAC_ADDR_UNIVERSE_BT_OFFSET 2

#define BT_CONTROLLER_ONLY 1
#define BTDM_CTRL_HCI_MODE_VHCI 1
#define CONFIG_SPIRAM_ALLOW_BSS_SEG_EXTERNAL_MEMORY 1
#define CONFIG_FREERTOS_UNICORE 1
#define CONFIG_PARTITION_TABLE_OFFSET 0x8000
#define CONFIG_IDF_FIRMWARE_CHIP_ID 0x0000
#define CONFIG_SPIRAM_SIZE -1