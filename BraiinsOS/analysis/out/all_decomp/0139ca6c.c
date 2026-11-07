// FUN_0139ca6c @ 0139ca6c size=1012 calls_out=8 calls_in=0
// strings: should find a match

/* WARNING: Type propagation algorithm not settling */

uint FUN_0139ca6c(int *param_1,int param_2,int *param_3,int param_4,uint param_5)

{
  byte ****ppppbVar1;
  uint uVar2;
  byte ****extraout_r1;
  byte ******ppppppbVar3;
  byte *****pppppbVar4;
  bool bVar5;
  bool bVar6;
  byte *****local_58;
  byte *****local_54;
  byte ****local_50;
  int local_4c;
  byte ******local_48;
  byte *****local_44;
  byte *****local_40;
  byte ****local_3c;
  byte *****pppppbStack_38;
  byte ****local_34;
  int local_30;
  byte *****local_2c;
  byte *****local_28;
  code *local_24;
  
  if ((uint)(*(int *)(*(int *)(param_1[0x301] + 0x13c) + 0x10) * 2) < param_5) {
    if ((param_1[0x2b1] != 3) &&
       ((*param_3 - 1U < 2 || (*(int *)(param_1[0x2ba] + 0x128) == *(int *)(param_1[0x2ba] + 300))))
       ) {
      uVar2 = FUN_0139dd94(param_1,param_2,param_3,param_4);
      return uVar2;
    }
    if (param_1[0x254] == 2) {
      if (*param_1 == 2 && param_1[1] == 0) goto LAB_0139cd94;
      if (*(int *)(param_2 + 0x248) == 2) goto LAB_0139ce04;
      FUN_0139daac(&local_48,param_1,param_2 + 0xd8,param_3);
      local_58 = local_44;
      local_54 = local_40;
      ppppbVar1 = local_3c;
      if (local_48 == (byte ******)0x2) {
        local_28 = local_44;
        ppppppbVar3 = local_48;
        if (1 < *(byte *)local_44) {
          local_58 = (byte *****)&local_28;
          local_54 = (byte *****)FUN_013c828c;
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_005733f0,&local_58,&DAT_01892790);
        }
        goto LAB_0139ccf4;
      }
    }
    else {
      FUN_0139d490(&local_48,param_1 + 0x144,param_3);
      local_58 = local_44;
      local_54 = local_40;
      ppppbVar1 = local_3c;
      if (local_48 == (byte ******)0x2) {
        local_28 = local_44;
        ppppppbVar3 = local_48;
        if (1 < *(byte *)local_44) {
          local_58 = (byte *****)&local_28;
          local_54 = (byte *****)FUN_013c828c;
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_005733f0,&local_58,&DAT_01892790);
        }
LAB_0139ccf4:
        pppppbVar4 = (byte *****)local_44[1];
        thunk_FUN_016d3fb4();
        local_48 = ppppppbVar3;
        local_58 = pppppbVar4;
        local_54 = (byte *****)extraout_r1;
        ppppbVar1 = (byte ****)0;
      }
    }
    local_44 = (byte *****)ppppbVar1;
    if (local_48 != (byte ******)0x2) {
      if (((uint)local_48 & 1) == 0) {
        return 0;
      }
      local_40 = (byte *****)param_3[2];
      local_28 = (byte *****)param_3[3];
      local_30 = param_3[6];
      bVar6 = (byte *****)((int)local_54 + 1U) <= local_58;
      bVar5 = local_58 == (byte *****)((int)local_54 + 1U);
      if (!bVar6 || bVar5) {
        bVar6 = local_28 <= local_54;
        bVar5 = local_54 == local_28;
      }
      if (!(bVar6 && !bVar5)) {
        local_48 = (byte ******)0x2;
        local_3c = (byte ****)local_28;
        pppppbStack_38 = local_58;
        local_34 = (byte ****)local_54;
        uVar2 = FUN_0139dd94(param_1,param_2,&local_48,param_4,param_5);
        if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8("should find a match",0x13,&DAT_018936d0);
        }
        return uVar2;
      }
      local_44 = (byte *****)FUN_005ffff4;
      local_48 = &local_58;
      local_40 = (byte *****)&local_28;
      local_3c = (byte ****)&LAB_00fac484;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_0057a181,&local_48,&DAT_01893ee0);
    }
LAB_0139cd94:
    uVar2 = FUN_0139dd94(param_1,param_2,param_3,param_4,param_5);
    return uVar2;
  }
  if (param_1[0x254] == 2) {
    if (*param_1 != 2 || param_1[1] != 0) {
      if (*(int *)(param_2 + 0x248) == 2) {
LAB_0139ce04:
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01893548);
      }
      FUN_0139daac(&local_48,param_1,param_2 + 0xd8,param_3);
      if (local_48 != (byte ******)0x2) goto joined_r0x0139cc80;
      local_2c = local_44;
      if (1 < *(byte *)local_44) {
        local_28 = (byte *****)&local_2c;
        local_24 = FUN_013c828c;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_005733f0,&local_28,&DAT_01892790);
      }
      goto LAB_0139cc34;
    }
  }
  else {
    FUN_0139d490(&local_48,param_1 + 0x144,param_3);
    if (local_48 != (byte ******)0x2) goto joined_r0x0139cc80;
    local_2c = local_44;
    if (1 < *(byte *)local_44) {
      local_28 = (byte *****)&local_2c;
      local_24 = FUN_013c828c;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_005733f0,&local_28,&DAT_01892790);
    }
LAB_0139cc34:
    thunk_FUN_016d3fb4();
  }
  FUN_0139d778(&local_58,param_1,param_2,param_3);
  local_3c = (byte ****)local_4c;
  local_40 = (byte *****)local_50;
  local_44 = local_54;
  local_48 = (byte ******)local_58;
joined_r0x0139cc80:
  if (local_48 == (byte ******)0x0) {
    return 0;
  }
  uVar2 = (int)local_3c << 1 | 1;
  if ((uint)((int)local_3c * 2) < param_5) {
    *(byte **)(param_4 + (int)local_3c * 8) = (byte *)((int)local_44 + 1);
  }
  if (uVar2 < param_5) {
    *(uint *)(param_4 + uVar2 * 4) = (int)local_40 + 1;
    return 1;
  }
  return 1;
}

