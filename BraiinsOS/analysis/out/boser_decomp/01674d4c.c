// FUN_01674d4c @ 01674d4c size=328 calls_out=5 calls_in=0
// strings: Authority | userinfo | host_parsedIpvFutureRegName

void FUN_01674d4c(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *local_3c;
  undefined1 local_38;
  undefined1 local_37;
  undefined8 local_34;
  undefined8 local_2c;
  uint local_24;
  undefined8 local_20;
  undefined8 local_18;
  
  iVar1 = *param_1;
  local_38 = (**(code **)(param_2[1] + 0xc))(*param_2,"Authority",9);
  local_37 = 0;
  local_3c = param_2;
  local_34 = FUN_013459e4(iVar1);
  FUN_01302c38(&local_3c,"userinfo",8,&local_34,FUN_013d7df0);
  local_2c = FUN_0134595c(iVar1);
  FUN_01302c38(&local_3c,&DAT_0056d4cc,4,&local_2c,&LAB_01674ec4);
  local_24 = (uint)*(byte *)(iVar1 + 0x10);
  local_20 = CONCAT44(local_20._4_4_,(undefined4)local_20);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)(iVar1 + 0x10)) {
  case 1:
    local_24 = 1;
    local_20 = CONCAT44(local_20._4_4_,(undefined4)local_20);
    break;
  case 2:
    local_24 = 2;
    local_20 = CONCAT44(local_20._4_4_,(undefined4)local_20);
    break;
  case 3:
    local_20 = FUN_0134595c(iVar1);
    local_24 = 3;
  }
  FUN_01302c38(&local_3c,"host_parsedIpvFutureRegName",0xb,&local_24,FUN_01674714);
  local_18 = FUN_013458f0(iVar1);
  FUN_01302c38(&local_3c,&DAT_0056f388,4,&local_18,FUN_013d7df0);
  FUN_01302e1c();
  return;
}

