// FUN_01381580 @ 01381580 size=448 calls_out=2 calls_in=0
// strings: flags | header_table_size | enable_push | max_concurrent_streams | initial_window_size | max_frame_size

void FUN_01381580(int *param_1,undefined4 *param_2)

{
  undefined4 *puStack_1c;
  undefined1 local_18;
  undefined1 local_17;
  int local_14;
  
  local_18 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00570b40,8);
  local_17 = 0;
  puStack_1c = param_2;
  FUN_01302c38(&puStack_1c,"flags",5,param_1 + 0xe,FUN_0138176c);
  if (*param_1 == 1) {
    local_14 = param_1[1];
    FUN_01302c38(&puStack_1c,"header_table_size",0x11,&local_14,&LAB_01a86300);
  }
  if (param_1[2] == 1) {
    local_14 = param_1[3];
    FUN_01302c38(&puStack_1c,"enable_push",0xb,&local_14,&LAB_01a86300);
  }
  if (param_1[4] == 1) {
    local_14 = param_1[5];
    FUN_01302c38(&puStack_1c,"max_concurrent_streams",0x16,&local_14,&LAB_01a86300);
  }
  if (param_1[6] == 1) {
    local_14 = param_1[7];
    FUN_01302c38(&puStack_1c,"initial_window_size",0x13,&local_14,&LAB_01a86300);
  }
  if (param_1[8] == 1) {
    local_14 = param_1[9];
    FUN_01302c38(&puStack_1c,"max_frame_size",0xe,&local_14,&LAB_01a86300);
  }
  if (param_1[10] == 1) {
    local_14 = param_1[0xb];
    FUN_01302c38(&puStack_1c,"max_header_list_size",0x14,&local_14,&LAB_01a86300);
  }
  if (param_1[0xc] == 1) {
    local_14 = param_1[0xd];
    FUN_01302c38(&puStack_1c,"enable_connect_protocol",0x17,&local_14,&LAB_01a86300);
  }
  FUN_01302e1c(&puStack_1c);
  return;
}

