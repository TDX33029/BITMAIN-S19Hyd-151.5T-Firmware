// FUN_00a799f0 @ 00a799f0 size=488 calls_out=4 calls_in=1
// strings: 

void FUN_00a799f0(undefined4 *param_1,int param_2,undefined4 param_3,undefined1 *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iStack_5c;
  int iStack_58;
  int local_54;
  uint local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 *local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint *local_28;
  undefined1 *local_24;
  uint *local_20;
  undefined1 *local_1c;
  
  uVar1 = *(uint *)(param_2 + 0x50);
  if (uVar1 == 0) {
    FUN_00a5e5d4(&local_28);
    uVar2 = 1;
    if ((char)local_28 != '\x05') {
      if (((uint)local_28 & 0xff) == 4) {
        if (local_24 < param_4) {
          param_4 = local_24;
        }
        FUN_01283fd8(&iStack_5c,param_2 + 0x4c,param_4);
        if ((local_50 & 1) != 0) {
          local_44 = iStack_58 + (local_50 >> 5);
          local_48 = iStack_5c - (local_50 >> 5);
          local_4c = local_54 + (local_50 >> 5);
          FUN_01283524(&local_40,&local_4c);
          local_30 = local_50 >> 5;
          if (local_38 < local_50 >> 5) {
            local_20 = &local_2c;
            local_2c = local_38;
            local_1c = &LAB_01a6a304;
            local_24 = &LAB_01a6a304;
            local_28 = &local_30;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_28,&DAT_01d2e534);
          }
          goto LAB_00a79b58;
        }
        goto LAB_00a79a38;
      }
      uVar2 = 0;
      param_1[3] = local_24;
      param_1[1] = 0;
      param_1[2] = local_28;
    }
    *param_1 = uVar2;
  }
  else {
    if (uVar1 < param_4) {
      param_4 = (undefined1 *)uVar1;
    }
    FUN_01283fd8(&iStack_5c,param_2 + 0x4c,param_4);
    if ((local_50 & 1) == 0) {
LAB_00a79a38:
      local_40 = &DAT_01d2e520;
    }
    else {
      local_44 = iStack_58 + (local_50 >> 5);
      local_48 = iStack_5c - (local_50 >> 5);
      local_4c = local_54 + (local_50 >> 5);
      FUN_01283524(&local_40,&local_4c);
      local_30 = local_50 >> 5;
      if (local_38 < local_50 >> 5) {
        local_20 = &local_2c;
        local_2c = local_38;
        local_1c = &LAB_01a6a304;
        local_24 = &LAB_01a6a304;
        local_28 = &local_30;
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_005ac267,&local_28,&DAT_01d2e534);
      }
LAB_00a79b58:
      iStack_58 = local_38 - local_30;
      iStack_5c = local_3c + local_30;
      local_50 = local_34;
    }
    param_1[1] = local_40;
    *param_1 = 0;
    param_1[2] = iStack_5c;
    param_1[3] = iStack_58;
    param_1[4] = local_50;
  }
  return;
}

