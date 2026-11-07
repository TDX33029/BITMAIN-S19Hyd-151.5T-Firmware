// FUN_019adae8 @ 019adae8 size=336 calls_out=5 calls_in=2
// strings: 

void FUN_019adae8(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                 uint param_5)

{
  int iVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 local_350;
  uint local_34c;
  undefined1 auStack_348 [388];
  int local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined1 auStack_1b0 [388];
  int local_2c;
  undefined4 local_28;
  
  local_34c = param_5;
  local_350 = param_4;
  if (2 < param_3 >> 7) {
    puVar2 = &local_350;
    pcVar3 = FUN_019adc84;
    param_5 = param_3;
LAB_019adc24:
    FUN_019a5758(param_1,param_2,param_5,puVar2,pcVar3);
    return;
  }
  FUN_01bed4e2(auStack_348,param_2,param_3);
  auStack_348[param_3] = 0;
  FUN_012fbc58(&local_1c4,auStack_348,param_3 + 1);
  if (local_1c4 != 1) {
    local_1b4 = local_1bc;
    local_1b8 = local_1c0;
    if (2 < param_5 >> 7) {
      puVar2 = &local_1b8;
      pcVar3 = FUN_019adc48;
      param_2 = param_4;
      goto LAB_019adc24;
    }
    FUN_01bed4e2(auStack_1b0,param_4,param_5);
    auStack_1b0[param_5] = 0;
    FUN_012fbc58(&local_2c,auStack_1b0,param_5 + 1);
    if (local_2c != 1) {
      iVar1 = FUN_01beb790(local_1c0,local_28);
      if (iVar1 == -1) {
        puVar2 = (undefined4 *)FUN_01be3244();
        uVar4 = *puVar2;
        *param_1 = 0;
        param_1[1] = uVar4;
        return;
      }
      *(undefined1 *)param_1 = 4;
      return;
    }
  }
  *param_1 = 2;
  param_1[1] = &DAT_01d27a70;
  return;
}

