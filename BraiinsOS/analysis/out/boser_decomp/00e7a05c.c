// FUN_00e7a05c @ 00e7a05c size=668 calls_out=9 calls_in=1
// strings: 

void FUN_00e7a05c(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint *extraout_r1;
  undefined4 **ppuVar4;
  uint *extraout_r2;
  uint *puVar5;
  int *piVar6;
  int iStack_5c;
  int iStack_58;
  int local_54;
  uint local_50;
  uint *local_4c;
  int local_48;
  int local_44;
  undefined4 *local_40;
  int local_3c;
  undefined4 *local_38;
  uint local_34;
  uint local_30;
  uint *local_2c;
  uint *local_28;
  uint *local_24;
  undefined4 **local_20;
  undefined1 *local_1c;
  
  piVar6 = param_2 + 7;
  if (*param_2 == 3) {
    uVar1 = 0;
LAB_00e7a07c:
    *param_1 = uVar1;
  }
  else {
    if ((param_2[9] == 0) && ((uint)-param_2[8] < (uint)param_2[0xb])) {
      FUN_01283c9c(piVar6);
    }
    iVar2 = param_2[8];
    if (iVar2 != 0x7fffffff) {
      iVar3 = param_2[9];
      if (iVar3 == iVar2) {
        FUN_01283c9c(piVar6,0x40);
        iVar2 = param_2[8];
        iVar3 = param_2[9];
      }
      local_24 = (uint *)(iVar3 - iVar2);
      local_1c = (undefined1 *)0x0;
      puVar5 = (uint *)(param_2[7] + iVar2);
      local_20 = (undefined4 **)0x0;
      local_2c = puVar5;
      local_28 = puVar5;
      FUN_01209080(&local_40,param_2,param_3,&local_28);
      if (((uint)local_40 & 0xff) != 4) {
        if (((uint)local_40 & 0xff) != 5) {
          if (((uint)local_40 & 0xff) == 4) {
            if (((uint)local_40 & 0x100) == 0) goto LAB_00e7a170;
          }
          else if (((uint)local_40 & 0xff) != 5) {
            if (*param_2 != 3) {
              FUN_00e7a36c(param_2);
            }
            *param_1 = 1;
            *param_2 = 3;
            param_1[1] = 0;
            param_1[2] = local_40;
            param_1[3] = local_3c;
            return;
          }
        }
        uVar1 = 2;
        goto LAB_00e7a07c;
      }
LAB_00e7a170:
      if (local_24 < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,local_20,local_24,&DAT_01d2e4e0);
      }
      local_4c = local_28;
      if (puVar5 != local_28) {
        FUN_01a680b0(&local_2c,&local_4c,&DAT_01d2e49c);
        ppuVar4 = (undefined4 **)extraout_r1;
        puVar5 = extraout_r2;
LAB_00e7a2ac:
        local_28 = (uint *)ppuVar4;
        local_24 = puVar5;
                    /* WARNING: Subroutine does not return */
        FUN_01284540(&local_28);
      }
      puVar5 = (uint *)(param_2[9] - param_2[8]);
      ppuVar4 = local_20;
      if (puVar5 < local_20) goto LAB_00e7a2ac;
      param_2[8] = param_2[8] + (int)local_20;
      if (local_20 != (undefined4 **)0x0) {
        FUN_01283fd8(&iStack_5c,piVar6);
        if ((local_50 & 1) == 0) {
          local_40 = &DAT_01d2e520;
        }
        else {
          local_44 = iStack_58 + (local_50 >> 5);
          local_48 = iStack_5c - (local_50 >> 5);
          local_4c = (uint *)(local_54 + (local_50 >> 5));
          FUN_01283524(&local_40,&local_4c);
          local_30 = local_50 >> 5;
          if (local_38 < (undefined4 *)(local_50 >> 5)) {
            local_20 = &local_2c;
            local_2c = local_38;
            local_1c = &LAB_01a6a304;
            local_24 = (uint *)&LAB_01a6a304;
            local_28 = &local_30;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_28,&DAT_01d2e534);
          }
          iStack_58 = (int)local_38 - local_30;
          iStack_5c = local_3c + local_30;
          local_50 = local_34;
        }
        param_1[1] = local_40;
        *param_1 = 1;
        param_1[2] = iStack_5c;
        param_1[3] = iStack_58;
        param_1[4] = local_50;
        return;
      }
    }
    if (*param_2 != 3) {
      FUN_00e7a36c(param_2);
    }
    *param_1 = 0;
    *param_2 = 3;
  }
  return;
}

