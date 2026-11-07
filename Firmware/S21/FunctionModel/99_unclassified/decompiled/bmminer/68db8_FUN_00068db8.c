// FUN_00068db8 @ 00068db8  size=636  callers=1
// program: bmminer


undefined4
FUN_00068db8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  void *local_30;
  void *local_2c;
  void *local_28;
  void *local_24;
  int local_20;
  int local_1c;
  void *local_18;
  undefined4 local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  
  local_14 = 0;
  local_18 = malloc(0x18);
  if (local_18 == (undefined4 *)0x0) {
    local_14 = 2;
  }
  else {
    *(undefined4 **)local_18 = param_1 + 1;
    *(undefined4 **)((int)local_18 + 4) = param_1 + 1;
    *(undefined4 *)((int)local_18 + 0xc) = 1;
    uVar1 = FUN_00069e48(param_2,param_3);
    *(undefined4 *)((int)local_18 + 0x10) = uVar1;
    if (param_4 == 0) {
      *(undefined4 *)((int)local_18 + 0x14) = 0;
    }
    else {
      uVar1 = FUN_00069e48(param_4,param_5);
      *(undefined4 *)((int)local_18 + 0x14) = uVar1;
    }
    local_c = (undefined4 *)*param_1;
    local_10 = (undefined4 *)0x0;
    while (local_c != param_1 + 1) {
      local_20 = 0;
      FUN_00069eec(local_c[4],&local_24);
      FUN_00069eec(*(undefined4 *)((int)local_18 + 0x10),&local_28);
      local_20 = (*(code *)param_1[9])(local_28,local_24);
      free(local_24);
      free(local_28);
      if (local_20 == 0) {
        return 0x191;
      }
      local_10 = local_c;
      if (local_20 < 0) {
        local_c = (undefined4 *)*local_c;
      }
      else {
        local_c = (undefined4 *)local_c[1];
      }
    }
    *(undefined4 **)((int)local_18 + 8) = local_10;
    if (local_10 == (undefined4 *)0x0) {
      *param_1 = local_18;
    }
    else {
      local_1c = 0;
      FUN_00069eec(local_10[4],&local_2c);
      FUN_00069eec(*(undefined4 *)((int)local_18 + 0x10),&local_30);
      local_1c = (*(code *)param_1[9])(local_30,local_2c);
      free(local_2c);
      free(local_30);
      if (local_1c < 0) {
        *local_10 = local_18;
      }
      else {
        local_10[1] = local_18;
      }
    }
    FUN_00068aac(param_1,local_18);
    FUN_000699c8(param_1);
  }
  return local_14;
}

