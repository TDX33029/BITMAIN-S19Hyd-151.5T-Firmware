/**
 * @file protocol.h
 * @brief Host Communication Protocol (CLI & Binary Frame)
 * @author TDX33029 / AntMiner Project
 */

#ifndef __PROTOCOL_H
#define __PROTOCOL_H

#include <stdint.h>
#include <stdbool.h>

/* Binary Protocol Constants */
#define PROTOCOL_REQ_SYNC0          0xAA
#define PROTOCOL_REQ_SYNC1          0x55
#define PROTOCOL_RSP_SYNC0          0x55
#define PROTOCOL_RSP_SYNC1          0xAA

#define PROTOCOL_MAX_PAYLOAD        256

/* Command IDs */
#define PROTOCOL_CMD_PING           0x01
#define PROTOCOL_CMD_DETECT         0x02
#define PROTOCOL_CMD_ERASE          0x03
#define PROTOCOL_CMD_WRITE_ROW      0x04
#define PROTOCOL_CMD_READ_FLASH     0x05
#define PROTOCOL_CMD_WRITE_CFG      0x06
#define PROTOCOL_CMD_READ_CFG       0x07
#define PROTOCOL_CMD_RESET_TARGET   0x08
#define PROTOCOL_CMD_ONEKEY_BURN    0x09

/* Status Codes */
#define PROTOCOL_STATUS_OK          0x00
#define PROTOCOL_STATUS_ERR_CHIP    0x01
#define PROTOCOL_STATUS_ERR_ERASE   0x02
#define PROTOCOL_STATUS_ERR_WRITE   0x03
#define PROTOCOL_STATUS_ERR_VERIFY  0x04
#define PROTOCOL_STATUS_ERR_PARAM   0x05
#define PROTOCOL_STATUS_ERR_CRC     0x06
#define PROTOCOL_STATUS_ERR_UNKNOWN 0xFF

/* Binary Frame Header */
#pragma pack(push, 1)
typedef struct {
    uint8_t sync0;      // 0xAA
    uint8_t sync1;      // 0x55
    uint8_t cmd;        // Command ID
    uint8_t seq;        // Packet sequence number
    uint16_t addr;      // Word address (Little-Endian)
    uint16_t len;       // Payload length in bytes (Little-Endian)
} protocol_header_t;

typedef struct {
    uint8_t sync0;      // 0x55
    uint8_t sync1;      // 0xAA
    uint8_t cmd;        // Echo command ID
    uint8_t seq;        // Echo sequence number
    uint8_t status;     // Response status code
    uint16_t len;       // Response payload length
} protocol_rsp_header_t;
#pragma pack(pop)

void protocol_init(void);
void protocol_process(void);

uint16_t protocol_crc16(const uint8_t *data, uint16_t len);

#endif /* __PROTOCOL_H */
