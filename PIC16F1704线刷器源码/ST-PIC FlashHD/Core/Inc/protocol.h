/**
 * @file    protocol.h
 * @brief   上位机通信协议 (二进制封包 + ASCII CLI 双模式)
 * @author  TDX33029 / AntMiner Project
 *
 * 与 docs/PROTOCOL.md 及 host_tool/ 保持完全兼容, 勿改帧格式与命令码。
 */

#ifndef __PROTOCOL_H
#define __PROTOCOL_H

#include <stdint.h>
#include <stdbool.h>

/* 二进制协议常量 */
#define PROTOCOL_REQ_SYNC0          0xAA
#define PROTOCOL_REQ_SYNC1          0x55
#define PROTOCOL_RSP_SYNC0          0x55
#define PROTOCOL_RSP_SYNC1          0xAA

#define PROTOCOL_MAX_PAYLOAD        256

/* 命令码 */
#define PROTOCOL_CMD_PING           0x01
#define PROTOCOL_CMD_DETECT         0x02
#define PROTOCOL_CMD_ERASE          0x03
#define PROTOCOL_CMD_WRITE_ROW      0x04
#define PROTOCOL_CMD_READ_FLASH     0x05
#define PROTOCOL_CMD_WRITE_CFG      0x06
#define PROTOCOL_CMD_READ_CFG       0x07
#define PROTOCOL_CMD_RESET_TARGET   0x08
#define PROTOCOL_CMD_ONEKEY_BURN    0x09

/* 状态码 */
#define PROTOCOL_STATUS_OK          0x00
#define PROTOCOL_STATUS_ERR_CHIP    0x01
#define PROTOCOL_STATUS_ERR_ERASE   0x02
#define PROTOCOL_STATUS_ERR_WRITE   0x03
#define PROTOCOL_STATUS_ERR_VERIFY  0x04
#define PROTOCOL_STATUS_ERR_PARAM   0x05
#define PROTOCOL_STATUS_ERR_CRC     0x06
#define PROTOCOL_STATUS_ERR_UNKNOWN 0xFF

/* 二进制帧头 */
#pragma pack(push, 1)
typedef struct {
    uint8_t  sync0;     /* 0xAA */
    uint8_t  sync1;     /* 0x55 */
    uint8_t  cmd;       /* 命令码 */
    uint8_t  seq;       /* 序列号 */
    uint16_t addr;      /* 字地址 (小端) */
    uint16_t len;       /* 负载字节数 (小端) */
} protocol_header_t;

typedef struct {
    uint8_t  sync0;     /* 0x55 */
    uint8_t  sync1;     /* 0xAA */
    uint8_t  cmd;       /* 回显命令码 */
    uint8_t  seq;       /* 回显序列号 */
    uint8_t  status;    /* 状态码 */
    uint16_t len;       /* 应答负载长度 (小端) */
} protocol_rsp_header_t;
#pragma pack(pop)

void protocol_init(void);
void protocol_process(void);

uint16_t protocol_crc16(const uint8_t *data, uint16_t len);

#endif /* __PROTOCOL_H */
