// FUN_0176e24c @ 0176e24c size=440 calls_out=7 calls_in=2
// strings: 

void FUN_0176e24c(undefined4 *param_1,int *param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iStack_64;
  int iStack_60;
  uint *local_5c;
  uint local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  int local_44;
  uint local_40;
  undefined4 uStack_3c;
  uint local_38;
  uint local_34;
  uint *local_30;
  undefined1 *local_2c;
  uint *local_28;
  undefined1 *local_24;
  
  if (*param_2 == 0) {
    puVar1 = (uint *)param_2[3];
  }
  else {
    puVar1 = (uint *)0x0;
    if (*param_2 == 1) {
      puVar1 = (uint *)(param_2[3] - param_2[4]);
      if ((uint)param_2[3] < (uint)param_2[4]) {
        puVar1 = (uint *)0x0;
      }
      if (param_2[5] != 0) {
        puVar1 = (uint *)0x0;
      }
    }
  }
  if ((uint *)param_2[6] < puVar1) {
    puVar1 = (uint *)param_2[6];
  }
  if (puVar1 < param_3) {
    local_2c = (undefined1 *)FUN_0176e450(param_2);
    local_30 = param_3;
                    /* WARNING: Subroutine does not return */
    FUN_01284540(&local_30);
  }
  uVar3 = 0;
  if ((int)param_3 < 0) {
LAB_0176e2b8:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar3,param_3);
  }
  iStack_64 = 1;
  local_5c = (uint *)0x0;
  if (param_3 != (uint *)0x0) {
    uVar3 = 1;
    iStack_64 = FUN_01298504(param_3,1);
    local_5c = param_3;
    if (iStack_64 == 0) goto LAB_0176e2b8;
  }
  iStack_60 = 0;
  uVar2 = 0x20 - LZCOUNT((uint)local_5c >> 10);
  if (6 < uVar2) {
    uVar2 = 7;
  }
  local_58 = uVar2 << 2 | 1;
  FUN_0176e49c(&iStack_64,param_2,param_3);
  uVar2 = local_58;
  if ((local_58 & 1) == 0) {
    param_1[1] = iStack_64;
    param_1[2] = iStack_60;
    param_1[3] = local_58;
    *param_1 = &DAT_01d2e520;
  }
  else {
    local_4c = iStack_60 + (local_58 >> 5);
    local_50 = iStack_64 - (local_58 >> 5);
    local_54 = (int)local_5c + (local_58 >> 5);
    FUN_01283524(&local_48,&local_54);
    local_38 = uVar2 >> 5;
    if (local_40 < uVar2 >> 5) {
      local_28 = &local_34;
      local_34 = local_40;
      local_24 = &LAB_01a6a304;
      local_2c = &LAB_01a6a304;
      local_30 = &local_38;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005ac267,&local_30,&DAT_01d2e534);
    }
    *param_1 = local_48;
    param_1[1] = local_44 + local_38;
    param_1[2] = local_40 - local_38;
    param_1[3] = uStack_3c;
  }
  return;
}

