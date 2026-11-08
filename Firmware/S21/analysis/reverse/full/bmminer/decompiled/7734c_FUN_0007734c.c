// FUN_0007734c @ 0007734c  size=404  callers=1
// program: bmminer


undefined4 FUN_0007734c(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  int extraout_r2;
  undefined4 uVar1;
  longlong lVar2;
  undefined4 local_68;
  undefined4 uStack_64;
  uint local_60;
  char acStack_56 [70];
  uint local_10;
  uint local_c;
  
  lVar2 = CONCAT44(param_4,param_3);
  acStack_56[2] = '\0';
  acStack_56[3] = '\0';
  acStack_56[4] = '\0';
  acStack_56[5] = '\0';
  memset(acStack_56 + 6,0,0x3d);
  if ((((int)param_5 < 2) || (0x24 < param_5)) || (param_2 == 0)) {
    uVar1 = 0;
  }
  else {
    local_60 = param_2;
    if (0x41 < param_2) {
      local_60 = 0x41;
    }
    for (local_c = 0; uStack_64 = (undefined4)((ulonglong)lVar2 >> 0x20),
        local_68 = (undefined4)lVar2, local_c < local_60 - 1; local_c = local_c + 1) {
      FUN_00098f3c(local_68,uStack_64,param_5,(int)param_5 >> 0x1f);
      acStack_56[local_c + 2] =
           "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZbitmain_get_power_temp_fanspeed"[extraout_r2];
      lVar2 = FUN_00098f3c(local_68,uStack_64,param_5,(int)param_5 >> 0x1f);
    }
    if (lVar2 == 0) {
      for (local_10 = 0; local_10 < local_60 - 1; local_10 = local_10 + 1) {
        *(char *)(param_1 + local_10) = acStack_56[local_60 - local_10];
      }
      *(undefined1 *)(param_1 + (local_60 - 1)) = 0;
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

