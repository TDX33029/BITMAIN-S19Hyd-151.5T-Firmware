// FUN_014148c4 @ 014148c4 size=264 calls_out=4 calls_in=20
// strings: 

void FUN_014148c4(undefined4 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  int iStack_74;
  int iStack_70;
  int local_6c;
  uint local_68;
  uint *local_64;
  undefined1 *local_60;
  uint *local_5c;
  undefined1 *local_58;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 *local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  
  local_68 = 1;
  iStack_74 = 1;
  iStack_70 = 0;
  local_6c = 0;
  uVar2 = FUN_014160e4(&local_64,0xc);
  FUN_01284394(&iStack_74,(int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
  uVar1 = local_68;
  if ((local_68 & 1) == 0) {
    local_30 = &DAT_01d2e520;
  }
  else {
    local_34 = iStack_70 + (local_68 >> 5);
    local_38 = iStack_74 - (local_68 >> 5);
    local_3c = local_6c + (local_68 >> 5);
    FUN_01283524(&local_30,&local_3c);
    local_20 = uVar1 >> 5;
    if (local_28 < uVar1 >> 5) {
      local_5c = &local_1c;
      local_1c = local_28;
      local_58 = &LAB_01a6a304;
      local_60 = &LAB_01a6a304;
      local_64 = &local_20;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005ac267,&local_64,&DAT_01d2e534);
    }
    iStack_70 = local_28 - local_20;
    iStack_74 = local_2c + local_20;
    local_68 = local_24;
  }
  *param_1 = local_30;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[1] = iStack_74;
  param_1[2] = iStack_70;
  param_1[3] = local_68;
  return;
}

