// FUN_012faff4 @ 012faff4 size=192 calls_out=1 calls_in=848
// strings: 

void FUN_012faff4(uint param_1,uint param_2,uint param_3,undefined4 param_4)

{
  undefined *puVar1;
  uint local_20;
  uint uStack_1c;
  undefined1 *local_18;
  code *local_14;
  uint *local_10;
  code *local_c;
  
  local_18 = (undefined1 *)&local_20;
  uStack_1c = param_3;
  if (param_3 < param_1) {
    puVar1 = &DAT_005b9c2c;
  }
  else {
    if ((param_3 < param_2) || (param_1 <= param_2)) {
      local_10 = &uStack_1c;
      local_c = FUN_012fd02c;
      local_14 = FUN_012fd02c;
      local_20 = param_2;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005b430f,&local_18,param_4);
    }
    puVar1 = &DAT_0058f2fe;
    uStack_1c = param_2;
  }
  local_c = FUN_012fd02c;
  local_10 = &uStack_1c;
  local_14 = FUN_012fd02c;
  local_20 = param_1;
  local_18 = (undefined1 *)&local_20;
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(puVar1,&local_18,param_4);
}

