# cgminer 逆向基线

- .text: 0x12f58 (227840 B)  .rodata: 0x4a960 (48128 B)
- 检测到函数: 441

## 0x39198  (6812 B)

- `parse_stratum_response`
- `reject`
- `share_result`
- `stratum_rthread`
- `supports_resume`
- `wait_lpcurrent`

## 0x12f58  (14456 B)

- `0e80000000800000000000000000000000000000000000000000000000000000000000000000000000000000000080020000410761e97e67b494fd547cfe9ffbb36893da7aec75c6b51b8d5f38f87b5d63cf`
- `get_benchmark_work`
- `load_temp_cutoffs`
- `signal_work_update`

## 0x198ec  (2268 B)

- `ascdevice`
- `get_devs_old`
- `numascs`

## 0x24344  (6580 B)

- `setup_stratum_socket`
- `socks5_negotiate`
- `uohzoahzuhidkgnaparse_reconnect`

## 0x37840  (6488 B)

- `block_exists`
- `set_curblock`
- `test_work_current`

## 0x1b304  (4276 B)

- `api_init_socket`
- `parse_recv_buf`

## 0x22dd8  (328 B)

- `copy_time`
- `ser_string`

## 0x26158  (3060 B)

- `parse_diff`
- `parse_extranonce`

## 0x31c00  (2060 B)

- `prune_stratum_shares`
- `reap_curl`

## 0x33d9c  (844 B)

- `get_work`
- `set_benchmark_work`

## 0x3d988  (1772 B)

- `judge_load_config`
- `load_default_config_without_restart`

## 0x42864  (324 B)

- `bitmain_c5_prepare`
- `bitmain_c5_shutdown`

## 0x46a7c  (2076 B)

- `lex_scan_number`
- `lex_scan_string`

## 0x16db0  (524 B)

- `get_stats`

## 0x16fbc  (1388 B)

- `get_pools`

## 0x17528  (2336 B)

- `get_pools_old`

## 0x182d4  (312 B)

- `reload_config`

## 0x184cc  (676 B)

- `send_api_result`

## 0x18770  (4476 B)

- `get_stats_old`

## 0x1a1c8  (980 B)

- `get_rate`

## 0x1a59c  (1180 B)

- `get_summary`

## 0x1aa38  (2252 B)

- `get_summary_old`

## 0x1c6f4  (168 B)

- `k_new_store`

## 0x1c79c  (688 B)

- `_k_new_list`

## 0x1cb00  (200 B)

- `_k_unlink_tail`

## 0x1cbc8  (212 B)

- `_k_add_head`

## 0x1cc9c  (332 B)

- `_k_add_tail`

## 0x1cde8  (328 B)

- `_k_insert_before`

## 0x1cf30  (340 B)

- `_k_insert_after`

## 0x1d084  (236 B)

- `_k_unlink_item`

## 0x1d170  (368 B)

- `_k_list_transfer_to_head`

## 0x1d2e0  (364 B)

- `_k_list_transfer_to_tail`

## 0x1d44c  (284 B)

- `_k_free_list`

## 0x1d568  (152 B)

- `_k_free_store`

## 0x1db14  (1036 B)

- `isdupnonce`

## 0x1f024  (144 B)

- `clear_sock`

## 0x1f0b4  (104 B)

- `tq_freezethaw`

## 0x1f380  (180 B)

- `bin2hex`

## 0x1f8ec  (92 B)

- `tq_new`

## 0x1f9c0  (212 B)

- `tq_push`

## 0x1fa94  (224 B)

- `tq_pop`

## 0x2069c  (580 B)

- `000000000`

## 0x20c2c  (356 B)

- `suspend_stratum`

## 0x20d90  (944 B)

- `stratum_send`

## 0x21140  (1420 B)

- `recalloc_sock`

## 0x216cc  (3544 B)

- `initiate_stratum`

## 0x22594  (212 B)

- `realloc_strcat`

## 0x22668  (352 B)

- `str_text`

## 0x22844  (72 B)

- `thr_info_create`

## 0x228c4  (68 B)

- `completion_thread`

## 0x22b10  (208 B)

- `cg_completion_timeout`

## 0x22d4c  (140 B)

- `address_to_pubkeyhash`

## 0x22f20  (4456 B)

- `parse_notify`

## 0x24088  (700 B)

- `socks4_negotiate`

## 0x25d84  (980 B)

- `parse_reconnect`

## 0x2895c  (120 B)

- `calc_midstate`

## 0x28b04  (316 B)

- `miner_thread`

## 0x28e28  (252 B)

- `load_config`

## 0x28f24  (904 B)

- `parse_config`

## 0x29614  (504 B)

- `mt_disable`
