// FUN_016f6f78 @ 016f6f78 size=252 calls_out=3 calls_in=0
// strings: 

void FUN_016f6f78(uint *param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  int *piVar1;
  undefined4 local_30;
  uint local_2c;
  uint local_28;
  undefined4 local_24;
  uint local_20;
  uint local_1c;
  
  piVar1 = (int *)*param_2;
  local_24 = 0;
  local_28 = 0;
  local_30 = param_3;
  local_2c = param_4;
  if (*piVar1 == 2) {
    FUN_0183b030(&local_20,piVar1[3],piVar1[4],param_2[1],&local_30);
  }
  else {
    FUN_016fc0e8(&local_20,piVar1,param_2[1],&local_30);
  }
  if ((char)local_20 == '\x04') {
    if (local_2c < local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,local_28,local_2c,&DAT_01d20c0c);
    }
    if (param_4 < local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,local_28,param_4,&DAT_01d2e4e0);
    }
  }
  else {
    if ((local_20 & 0xff) != 4) {
      if ((local_20 & 0xff) == 5) {
        local_1c = 0;
        local_20 = 0xd01;
      }
      *param_1 = local_20;
      param_1[1] = local_1c;
      return;
    }
    local_28 = 0;
  }
  param_1[1] = local_28;
  *(undefined1 *)param_1 = 4;
  return;
}

