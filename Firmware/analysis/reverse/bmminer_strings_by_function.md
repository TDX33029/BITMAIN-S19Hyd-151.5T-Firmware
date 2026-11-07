# bmminer 逆向基线

- .text: 0x12650 (349844 B)  .rodata: 0x67cec (59792 B)
- 检测到函数: 969

## 0x4d3e0  (1608 B)

- `_bitmain_pic_erase_1704`
- `_bitmain_pic_write_1704`
- `_erase_pic_app`
- `_update_pic_app_program_1704`
- `upgrade_pic`

## 0x13f28  (6016 B)

- `bitmain_c5_scanhash`
- `bitmain_soc_prepare`
- `hashtest_submit`
- `r send fifo space ...
`

## 0x36380  (760 B)

- `stop_mining`
- `stop_mining_and_restart`
- `stop_mining_waiting`

## 0x4ca7c  (968 B)

- `_read_an6_voltage`
- `_read_an_voltage`
- `pic_get_voltage`

## 0x18dcc  (3388 B)

- `dump_temp_info`
- `read_sensor_on_pic`

## 0x2ca7c  (556 B)

- `make_work`
- `total_work_inc`

## 0x2d114  (2648 B)

- `calc_midstate`
- `gen_stratum_work`

## 0x3562c  (344 B)

- `copy_time`
- `ser_string`

## 0x44310  (3876 B)

- `check_adc_voltage`
- `dump_adc_voltage`

## 0x4bad4  (516 B)

- `_bitmain_pic_get_sw_ver_common`
- `get_pic_version`

## 0x4bcd8  (420 B)

- `_bitmain_pic_reset_common`
- `reset_pic`

## 0x4be7c  (472 B)

- `_bitmain_pic_start_app_common`
- `jump_from_loader_to_app`

## 0x4c054  (468 B)

- `_bitmain_pic_enable_dc_dc_common`
- `enable_dc_dc`

## 0x4c228  (460 B)

- `_bitmain_pic_disable_dc_dc_common`
- `disable_dc_dc`

## 0x4c3f4  (460 B)

- `_bitmain_pic_heart_beat_common`
- `send_pic_heart_beat`

## 0x4ce44  (704 B)

- `_app_write_data_into_flash_1704_v8`
- `app_write_data_into_flash`

## 0x4d104  (732 B)

- `_app_read_data_from_flash_1704_v8`
- `app_read_data_from_flash`

## 0x4da28  (812 B)

- `_pic_read_iic`
- `pic_read_iic`

## 0x53d70  (2076 B)

- `lex_scan_number`
- `lex_scan_string`

## 0x171b4  (1068 B)

- `I2A_deal_temp_from_respone`

## 0x17830  (616 B)

- `read_sensor_on_asic`

## 0x17a98  (1456 B)

- `set_ext_mode`

## 0x1cd50  (532 B)

- `power_init`

## 0x21368  (168 B)

- `api_miner_chain_num`

## 0x21410  (228 B)

- `api_miner_rate_5s`

## 0x214f4  (312 B)

- `api_miner_rate_30m`

## 0x2162c  (280 B)

- `api_miner_rate_avg`

## 0x21744  (236 B)

- `api_miner_rate_ideal`

## 0x21830  (212 B)

- `api_miner_rate_unit`

## 0x21904  (248 B)

- `api_miner_fan_num`

## 0x219fc  (324 B)

- `api_miner_fan_speed`

## 0x21b40  (212 B)

- `api_miner_chain_frequency`

## 0x21c14  (248 B)

- `api_miner_chain_rate_ideal`

## 0x21d0c  (248 B)

- `api_miner_chain_rate_real`

## 0x21e04  (192 B)

- `api_miner_chain_asic_num`

## 0x21ec4  (248 B)

- `api_miner_chain_asic_status`

## 0x21fbc  (296 B)

- `api_miner_chain_temp_pic`

## 0x220e4  (356 B)

- `api_miner_chain_temp_chip`

## 0x22248  (356 B)

- `api_miner_chain_temp_pcb`

## 0x223ac  (400 B)

- `api_miner_chain_rate_array`

## 0x2253c  (212 B)

- `api_miner_chain_hw`

## 0x22610  (184 B)

- `api_miner_chain_nonce`

## 0x226c8  (208 B)

- `api_miner_chain_eeprom`

## 0x22798  (248 B)

- `api_miner_chain_sn`

## 0x22b10  (168 B)

- `api_miner_version`

## 0x22bb8  (172 B)

- `api_total_hash`

## 0x22c64  (284 B)

- `api_miner_id`

## 0x296ec  (1100 B)

- `check_system_work_thread`

## 0x2a3a4  (832 B)

- `_tuning_freq_dump_nonce_info`

## 0x2c28c  (244 B)

- `load_config`

## 0x2c380  (904 B)

- `parse_config`

## 0x2ce24  (100 B)

- `load_default_config`

## 0x2ce88  (652 B)

- `set_target`

## 0x2dc2c  (356 B)

- `get_work_by_nonce2`

## 0x2dd90  (432 B)

- `inc_hw_errors`

## 0x2e050  (1216 B)

- `read_version_file`

## 0x2e8c0  (208 B)

- `bitmain_primary_init`

## 0x2ea24  (664 B)

- `parse_job_buf`

## 0x2ecfc  (1556 B)

- `bitmain_update_job_cb`

## 0x2f310  (740 B)

- `bitmain_shutdown_cb`
