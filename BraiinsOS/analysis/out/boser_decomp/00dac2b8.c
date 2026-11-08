// FUN_00dac2b8 @ 00dac2b8 size=740 calls_out=11 calls_in=0
// strings: 

void FUN_00dac2b8(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  uint *extraout_r1;
  uint *puVar3;
  uint **ppuVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *local_70;
  int local_6c;
  undefined4 *local_64;
  int local_60;
  int local_5c;
  uint local_58;
  uint *local_54;
  int local_50;
  int local_4c;
  undefined4 *local_48;
  int local_44;
  uint *local_40;
  uint local_3c;
  uint local_38;
  uint *local_34;
  uint *local_30;
  uint **local_2c;
  undefined1 *local_28;
  uint *local_24;
  
  if (param_2[0x13] != 0) {
    uVar6 = *param_3;
    if ((param_2[2] == 0) && ((uint)-param_2[1] < (uint)param_2[0x14])) {
      FUN_01283c9c(param_2);
    }
    iVar1 = param_2[1];
    piVar5 = param_2 + 4;
    ppuVar4 = (uint **)(uint *)0x0;
    if (iVar1 != 0x7fffffff) {
      iVar2 = param_2[2];
      if (iVar2 == iVar1) {
        FUN_01283c9c(param_2,0x40);
        iVar1 = param_2[1];
        iVar2 = param_2[2];
      }
      local_30 = (uint *)(iVar2 - iVar1);
      local_28 = (undefined1 *)0x0;
      puVar3 = (uint *)(*param_2 + iVar1);
      local_2c = (uint **)0x0;
      local_34 = puVar3;
      local_24 = puVar3;
      FUN_019e7bb8(&local_48,piVar5,uVar6,&local_34);
      ppuVar4 = local_2c;
      if (((uint)local_48 & 0xff) != 4) {
        if (((uint)local_48 & 0xff) != 5) {
          if (((uint)local_48 & 0xff) == 4) {
            if (((uint)local_48 & 0x100) == 0) goto LAB_00dac39c;
          }
          else if (((uint)local_48 & 0xff) != 5) {
            if (param_2[0x13] != 0) {
              FUN_005f649c(piVar5);
            }
            param_2[0x13] = 0;
            local_70 = local_48;
            goto LAB_00dac4e4;
          }
        }
        uVar6 = 6;
        goto LAB_00dac430;
      }
LAB_00dac39c:
      if (local_30 < local_2c) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,local_2c,local_30,&DAT_01d2e4e0);
      }
      local_54 = local_34;
      if (puVar3 != local_34) {
        FUN_01aa7758(&local_24,&local_54,&DAT_01d2e49c);
        puVar3 = extraout_r1;
LAB_00dac590:
        local_34 = (uint *)ppuVar4;
        local_30 = puVar3;
                    /* WARNING: Subroutine does not return */
        FUN_01284540(&local_34);
      }
      puVar3 = (uint *)(param_2[2] - param_2[1]);
      if (puVar3 < local_2c) goto LAB_00dac590;
      param_2[1] = param_2[1] + (int)local_2c;
    }
    if (ppuVar4 != (uint **)0x0) {
      FUN_01283fd8(&local_64,param_2,param_2[1]);
      if ((local_58 & 1) == 0) {
        local_48 = &DAT_01d2e520;
      }
      else {
        local_4c = local_60 + (local_58 >> 5);
        local_50 = (int)local_64 - (local_58 >> 5);
        local_54 = (uint *)(local_5c + (local_58 >> 5));
        FUN_01283524(&local_48,&local_54);
        local_38 = local_58 >> 5;
        if (local_40 < (uint *)(local_58 >> 5)) {
          local_2c = &local_24;
          local_24 = local_40;
          local_28 = &LAB_01a6a304;
          local_30 = (uint *)&LAB_01a6a304;
          local_34 = &local_38;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005ac267,&local_34,&DAT_01d2e534);
        }
        local_60 = (int)local_40 - local_38;
        local_64 = (undefined4 *)(local_44 + local_38);
        local_44 = local_60;
        local_70 = local_64;
        if (local_48 == (undefined4 *)0x0) {
LAB_00dac4e4:
          local_6c = local_44;
          uVar6 = FUN_014333d0(&local_70);
          uVar6 = FUN_00715ebc(uVar6,&DAT_01cf5e1c);
          param_1[1] = 0;
          *param_1 = 4;
          param_1[2] = uVar6;
          param_1[3] = &DAT_01c07620;
          return;
        }
        local_58 = local_3c;
      }
      *param_1 = 3;
      param_1[1] = 0;
      param_1[2] = local_48;
      param_1[3] = local_64;
      param_1[4] = local_60;
      param_1[5] = local_58;
      return;
    }
    if (param_2[0x13] != 0) {
      FUN_005f649c(piVar5);
    }
    param_2[0x13] = 0;
  }
  uVar6 = 5;
LAB_00dac430:
  *param_1 = uVar6;
  param_1[1] = 0;
  return;
}

