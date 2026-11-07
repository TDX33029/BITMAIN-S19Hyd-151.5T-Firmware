// FUN_01907f8c @ 01907f8c size=120 calls_out=3 calls_in=0
// strings: Ed25519SigningKey

void FUN_01907f8c(undefined2 *param_1,undefined4 *param_2)

{
  undefined4 *local_1c;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_12;
  undefined1 local_11;
  
  local_18 = (**(code **)(param_2[1] + 0xc))(*param_2,"Ed25519SigningKey",0x11);
  local_17 = 0;
  local_1c = param_2;
  local_12 = FUN_01904fa0(*param_1);
  local_11 = 0;
  FUN_01302c38(&local_1c,&DAT_005235b8,9,&local_12,&LAB_0190b39c);
  FUN_01302e1c();
  return;
}

