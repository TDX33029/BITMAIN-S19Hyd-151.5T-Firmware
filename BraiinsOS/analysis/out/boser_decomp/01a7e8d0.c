// FUN_01a7e8d0 @ 01a7e8d0 size=204 calls_out=2 calls_in=0
// strings: DataQ; | stream_id | flags | pad_len

void FUN_01a7e8d0(int param_1,undefined4 *param_2)

{
  undefined4 *local_18;
  undefined1 local_14;
  undefined1 local_13;
  
  local_14 = (**(code **)(param_2[1] + 0xc))(*param_2,"DataQ,",4);
  local_13 = 0;
  local_18 = param_2;
  FUN_01302c38(&local_18,"stream_id",9,param_1 + 0x30,FUN_00b1c384);
  if (*(char *)(param_1 + 0x36) != '\0') {
    FUN_01302c38(&local_18,"flags",5,(char *)(param_1 + 0x36),FUN_01388cf8);
  }
  if (*(char *)(param_1 + 0x34) == '\x01') {
    FUN_01302c38(&local_18,"pad_len",7,param_1 + 0x35,&LAB_01a7e8b0);
  }
  FUN_01302e1c(&local_18);
  return;
}

