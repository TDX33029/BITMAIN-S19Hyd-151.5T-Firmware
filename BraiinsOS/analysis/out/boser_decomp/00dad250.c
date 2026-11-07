// FUN_00dad250 @ 00dad250 size=724 calls_out=11 calls_in=0
// strings: 

void FUN_00dad250(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  uint *extraout_r1;
  uint **ppuVar3;
  uint *extraout_r2;
  uint *puVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *local_70;
  int iStack_6c;
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
  uint *local_2c;
  uint **local_28;
  undefined1 *local_24;
  
  if ((char)param_2[8] != '\x02') {
    uVar5 = *param_3;
    if ((param_2[2] == 0) && ((uint)-param_2[1] < (uint)param_2[4])) {
      FUN_01283c9c(param_2);
    }
    iVar1 = param_2[1];
    piVar6 = param_2 + 5;
    if (iVar1 != 0x7fffffff) {
      iVar2 = param_2[2];
      if (iVar2 == iVar1) {
        FUN_01283c9c(param_2,0x40);
        iVar1 = param_2[1];
        iVar2 = param_2[2];
      }
      local_2c = (uint *)(iVar2 - iVar1);
      local_24 = (undefined1 *)0x0;
      puVar4 = (uint *)(*param_2 + iVar1);
      local_28 = (uint **)0x0;
      local_34 = puVar4;
      local_30 = puVar4;
      FUN_0121f3c0(&local_48,piVar6,uVar5,&local_30);
      if (((uint)local_48 & 0xff) != 4) {
        if (((uint)local_48 & 0xff) != 5) {
          if (((uint)local_48 & 0xff) == 4) {
            if (((uint)local_48 & 0x100) == 0) goto LAB_00dad360;
          }
          else if (((uint)local_48 & 0xff) != 5) {
            if ((char)param_2[8] != '\x02') {
              FUN_00d3b00c(piVar6);
            }
            *(undefined1 *)(param_2 + 8) = 2;
            local_70 = local_48;
            goto LAB_00dad478;
          }
        }
        uVar5 = 6;
        goto LAB_00dad2c8;
      }
LAB_00dad360:
      if (local_2c < local_28) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,local_28,local_2c,&DAT_01d2e4e0);
      }
      local_54 = local_30;
      if (puVar4 != local_30) {
        FUN_01a680b0(&local_34,&local_54,&DAT_01d2e49c);
        ppuVar3 = (uint **)extraout_r1;
        puVar4 = extraout_r2;
LAB_00dad4d8:
        local_30 = (uint *)ppuVar3;
        local_2c = puVar4;
                    /* WARNING: Subroutine does not return */
        FUN_01284540(&local_30);
      }
      puVar4 = (uint *)(param_2[2] - param_2[1]);
      ppuVar3 = local_28;
      if (puVar4 < local_28) goto LAB_00dad4d8;
      param_2[1] = param_2[1] + (int)local_28;
      if (local_28 != (uint **)0x0) {
        FUN_01283fd8(&local_64,param_2);
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
            local_28 = &local_34;
            local_34 = local_40;
            local_24 = &LAB_01a6a304;
            local_2c = (uint *)&LAB_01a6a304;
            local_30 = &local_38;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_30,&DAT_01d2e534);
          }
          local_60 = (int)local_40 - local_38;
          local_64 = (undefined4 *)(local_44 + local_38);
          local_70 = local_64;
          local_44 = local_60;
          if (local_48 == (undefined4 *)0x0) {
LAB_00dad478:
            iStack_6c = local_44;
            uVar5 = FUN_014333d0(&local_70);
            uVar5 = FUN_00715ebc(uVar5,&DAT_01cf5e1c);
            param_1[1] = 0;
            *param_1 = 4;
            param_1[2] = uVar5;
            param_1[3] = &DAT_01c07620;
            return;
          }
          local_58 = local_3c;
        }
        param_1[1] = 0;
        *param_1 = 3;
        param_1[2] = local_48;
        param_1[3] = local_64;
        param_1[4] = local_60;
        param_1[5] = local_58;
        return;
      }
    }
    if ((char)param_2[8] != '\x02') {
      FUN_00d3b00c(piVar6);
    }
    *(undefined1 *)(param_2 + 8) = 2;
  }
  uVar5 = 5;
LAB_00dad2c8:
  *param_1 = uVar5;
  param_1[1] = 0;
  return;
}

