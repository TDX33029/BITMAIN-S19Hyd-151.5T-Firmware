// FUN_013a4be8 @ 013a4be8 size=3824 calls_out=14 calls_in=0
// strings: should find a match | internal error: entered unreachable code: ReverseSuffix always has a DFA | internal error: entered unreachable code: ReverseSuffix always has a DFA | internal error: entered unreachable code: suffix match plus reverse match implies there must be a match

/* WARNING: Type propagation algorithm not settling */

uint FUN_013a4be8(int *param_1,int param_2,int *param_3,int param_4,uint param_5)

{
  byte ****ppppbVar1;
  byte *****pppppbVar2;
  int iVar3;
  byte *****pppppbVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 extraout_r1;
  byte ****ppppbVar8;
  byte ****ppppbVar9;
  code *pcVar10;
  byte ****ppppbVar11;
  byte ****ppppbVar12;
  byte ***pppbVar13;
  byte ****ppppbVar14;
  bool bVar15;
  bool bVar16;
  undefined8 uVar17;
  int local_94;
  byte ****local_8c;
  byte ****local_88;
  byte ****local_84;
  byte ****local_80;
  undefined4 local_7c;
  byte ****local_78;
  byte ****local_60;
  byte ****local_5c;
  byte *****local_58;
  byte ****local_54;
  undefined8 local_50;
  int local_48;
  byte ****local_40;
  byte ****local_3c;
  byte ****local_38;
  undefined8 local_34;
  byte ****local_2c;
  byte ****local_28;
  
  if (1 < *param_3 - 1U) {
    iVar6 = param_1[0x301];
    if ((uint)(*(int *)(*(int *)(iVar6 + 0x13c) + 0x10) * 2) < param_5) {
      ppppbVar12 = (byte ****)param_3[3];
      ppppbVar9 = (byte ****)param_3[2];
      ppppbVar8 = (byte ****)param_3[4];
      ppppbVar14 = (byte ****)param_3[5];
      pcVar10 = *(code **)(param_1[0x305] + 0x10);
      iVar7 = param_1[0x304] + (*(int *)(param_1[0x305] + 8) - 1U & 0xfffffff8) + 8;
      (*pcVar10)(&local_60,iVar7,ppppbVar9,ppppbVar12,ppppbVar8,ppppbVar14);
      if (local_60 != (byte ****)&DAT_00000001) {
        return 0;
      }
      local_94 = param_3[6];
      iVar3 = param_1[0x254];
      if (iVar3 == 2) {
        if (*param_1 == 2 && param_1[1] == 0) {
          local_88 = (byte ****)local_58;
          if (ppppbVar8 <= (byte ****)((int)local_58 + 1)) {
            local_8c = ppppbVar8;
            if (local_58 <= ppppbVar12) goto LAB_013a59a8;
          }
        }
        else {
          pppppbVar4 = (byte *****)(byte ****)0x0;
          ppppbVar11 = ppppbVar8;
          while( true ) {
            pppppbVar2 = local_58;
            ppppbVar1 = local_5c;
            local_88 = (byte ****)local_58;
            bVar16 = (byte ****)((int)local_58 + 1) <= ppppbVar8;
            bVar15 = ppppbVar8 == (byte ****)((int)local_58 + 1);
            if (!bVar16 || bVar15) {
              bVar16 = ppppbVar12 <= local_58;
              bVar15 = local_58 == (byte *****)ppppbVar12;
            }
            if (bVar16 && !bVar15) break;
            local_60 = (byte ****)&DAT_00000001;
            local_50._4_4_ = (byte ****)local_58;
            local_8c = ppppbVar8;
            local_58 = (byte *****)ppppbVar9;
            local_54 = ppppbVar12;
            local_50._0_4_ = ppppbVar8;
            if (*(int *)(param_2 + 0x248) == 2) goto LAB_013a5910;
            local_48 = local_94;
            FUN_013b6db4(&local_34,param_1 + 0xa2,param_2 + 0x198,&local_60,pppppbVar4);
            if ((byte *****)local_34 == (byte *****)&SUB_00000002) goto LAB_013a53e8;
            if (((uint)(byte *****)local_34 & 1) != 0) goto LAB_013a5480;
            if (ppppbVar14 <= ppppbVar11) {
              return 0;
            }
            ppppbVar11 = (byte ****)((int)ppppbVar1 + 1);
            if ((byte ****)0xfffffffe < ppppbVar1) goto LAB_013a5904;
            (*pcVar10)(&local_60,iVar7,ppppbVar9,ppppbVar12,ppppbVar11,ppppbVar14);
            pppppbVar4 = pppppbVar2;
            if (local_60 == (byte ****)0x0) {
              return 0;
            }
          }
        }
      }
      else {
        pppppbVar4 = (byte *****)(byte ****)0x0;
        ppppbVar11 = ppppbVar8;
        while( true ) {
          pppppbVar2 = local_58;
          ppppbVar1 = local_5c;
          local_88 = (byte ****)local_58;
          bVar16 = (byte ****)((int)local_58 + 1) <= ppppbVar8;
          bVar15 = ppppbVar8 == (byte ****)((int)local_58 + 1);
          if (!bVar16 || bVar15) {
            bVar16 = ppppbVar12 <= local_58;
            bVar15 = local_58 == (byte *****)ppppbVar12;
          }
          if (bVar16 && !bVar15) break;
          local_60 = (byte ****)&DAT_00000001;
          local_50._4_4_ = (byte ****)local_58;
          local_8c = ppppbVar8;
          local_58 = (byte *****)ppppbVar9;
          local_54 = ppppbVar12;
          local_50._0_4_ = ppppbVar8;
          local_48 = local_94;
          FUN_013b65b8(&local_34,param_1 + 0x1f2,&local_60,pppppbVar4);
          if ((byte *****)local_34 == (byte *****)&SUB_00000002) goto LAB_013a53e8;
          if (((uint)(byte *****)local_34 & 1) != 0) goto LAB_013a5480;
          if (ppppbVar14 <= ppppbVar11) {
            return 0;
          }
          ppppbVar11 = (byte ****)((int)ppppbVar1 + 1);
          if ((byte ****)0xfffffffe < ppppbVar1) goto LAB_013a5904;
          (*pcVar10)(&local_60,iVar7,ppppbVar9,ppppbVar12,ppppbVar11,ppppbVar14);
          pppppbVar4 = pppppbVar2;
          if (local_60 == (byte ****)0x0) {
            return 0;
          }
        }
      }
      local_34._4_4_ = FUN_005ffff4;
      local_28 = (byte ****)&LAB_00fac484;
      local_2c = (byte ****)&local_40;
      local_34._0_4_ = &local_8c;
      local_8c = ppppbVar8;
      local_88 = (byte ****)local_58;
      local_40 = ppppbVar12;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_0057a181,&local_34,&DAT_01893ee0);
    }
    ppppbVar12 = (byte ****)param_3[3];
    ppppbVar14 = (byte ****)param_3[2];
    ppppbVar9 = (byte ****)param_3[4];
    ppppbVar8 = (byte ****)param_3[5];
    pcVar10 = *(code **)(param_1[0x305] + 0x10);
    iVar6 = param_1[0x304] + (*(int *)(param_1[0x305] + 8) - 1U & 0xfffffff8) + 8;
    (*pcVar10)(&local_60,iVar6,ppppbVar14,ppppbVar12,ppppbVar9,ppppbVar8);
    if (local_60 == (byte ****)&DAT_00000001) {
      local_94 = param_3[6];
      iVar7 = param_1[0x254];
      local_40 = ppppbVar9;
      if (iVar7 == 2) {
        if (*param_1 == 2 && param_1[1] == 0) {
          local_3c = (byte ****)local_58;
          bVar16 = (byte ****)((int)local_58 + 1) <= ppppbVar9;
          bVar15 = ppppbVar9 == (byte ****)((int)local_58 + 1);
          if (!bVar16 || bVar15) {
            bVar16 = ppppbVar12 <= local_58;
            bVar15 = local_58 == (byte *****)ppppbVar12;
          }
          if (!bVar16 || bVar15) {
LAB_013a59a8:
                    /* WARNING: Subroutine does not return */
            FUN_00faa478("internal error: entered unreachable code: ReverseSuffix always has a DFA",
                         0x91,&DAT_018933e8);
          }
          goto LAB_013a543c;
        }
        pppppbVar4 = (byte *****)(byte ****)0x0;
        ppppbVar11 = ppppbVar9;
        do {
          pppppbVar2 = local_58;
          ppppbVar1 = local_5c;
          local_3c = (byte ****)local_58;
          bVar16 = (byte ****)((int)local_58 + 1) <= ppppbVar9;
          bVar15 = ppppbVar9 == (byte ****)((int)local_58 + 1);
          if (!bVar16 || bVar15) {
            bVar16 = ppppbVar12 <= local_58;
            bVar15 = local_58 == (byte *****)ppppbVar12;
          }
          local_40 = ppppbVar9;
          if (bVar16 && !bVar15) goto LAB_013a543c;
          local_60 = (byte ****)&DAT_00000001;
          local_50._4_4_ = (byte ****)local_58;
          local_58 = (byte *****)ppppbVar14;
          local_54 = ppppbVar12;
          local_50._0_4_ = ppppbVar9;
          if (*(int *)(param_2 + 0x248) == 2) {
LAB_013a5910:
            local_60 = (byte ****)0x1;
            local_48 = local_94;
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_018933f8);
          }
          local_48 = local_94;
          FUN_013b6db4(&local_34,param_1 + 0xa2,param_2 + 0x198,&local_60,pppppbVar4);
          if ((byte *****)local_34 == (byte *****)&SUB_00000002) goto LAB_013a53c4;
          if (((uint)(byte *****)local_34 & 1) != 0) goto LAB_013a5418;
          if (ppppbVar8 <= ppppbVar11) break;
          ppppbVar11 = (byte ****)((int)ppppbVar1 + 1);
          if ((byte ****)0xfffffffe < ppppbVar1) goto LAB_013a5904;
          (*pcVar10)(&local_60,iVar6,ppppbVar14,ppppbVar12,ppppbVar11,ppppbVar8);
          pppppbVar4 = pppppbVar2;
        } while (local_60 != (byte ****)0x0);
      }
      else {
        pppppbVar4 = (byte *****)(byte ****)0x0;
        ppppbVar11 = ppppbVar9;
        do {
          pppppbVar2 = local_58;
          ppppbVar1 = local_5c;
          local_3c = (byte ****)local_58;
          bVar16 = (byte ****)((int)local_58 + 1) <= ppppbVar9;
          bVar15 = ppppbVar9 == (byte ****)((int)local_58 + 1);
          if (!bVar16 || bVar15) {
            bVar16 = ppppbVar12 <= local_58;
            bVar15 = local_58 == (byte *****)ppppbVar12;
          }
          local_40 = ppppbVar9;
          if (bVar16 && !bVar15) goto LAB_013a543c;
          local_60 = (byte ****)&DAT_00000001;
          local_50._4_4_ = (byte ****)local_58;
          local_58 = (byte *****)ppppbVar14;
          local_54 = ppppbVar12;
          local_50._0_4_ = ppppbVar9;
          local_48 = local_94;
          FUN_013b65b8(&local_34,param_1 + 0x1f2,&local_60,pppppbVar4);
          if ((byte *****)local_34 == (byte *****)&SUB_00000002) goto LAB_013a53c4;
          if (((uint)(byte *****)local_34 & 1) != 0) goto LAB_013a5418;
          if (ppppbVar8 <= ppppbVar11) break;
          ppppbVar11 = (byte ****)((int)ppppbVar1 + 1);
          if ((byte ****)0xfffffffe < ppppbVar1) {
LAB_013a5904:
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_018933d8);
          }
          (*pcVar10)(&local_60,iVar6,ppppbVar14,ppppbVar12,ppppbVar11,ppppbVar8);
          pppppbVar4 = pppppbVar2;
        } while (local_60 != (byte ****)0x0);
      }
    }
    local_8c = (byte ****)0x0;
    goto LAB_013a5344;
  }
  if (param_5 <= (uint)(*(int *)(*(int *)(param_1[0x301] + 0x13c) + 0x10) * 2)) {
    if (param_1[0x254] == 2) {
      if (*param_1 == 2 && param_1[1] == 0) {
        FUN_0139d778(&local_34,param_1,param_2,param_3);
        local_5c = (byte ****)local_34._4_4_;
        local_58 = (byte *****)local_2c;
        local_54 = local_28;
        local_60 = (byte ****)(byte *****)local_34;
        goto joined_r0x013a5214;
      }
      if (*(int *)(param_2 + 0x248) == 2) goto LAB_013a591c;
      FUN_0139daac(&local_60,param_1,param_2 + 0xd8,param_3);
      if (local_60 != (byte ****)&SUB_00000002) goto joined_r0x013a5214;
      local_40 = local_5c;
      if (1 < *(byte *)local_5c) {
        local_8c = (byte ****)&local_40;
        local_88 = (byte ****)FUN_013c828c;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_005733f0,&local_8c,&DAT_01892790);
      }
    }
    else {
      FUN_0139d490(&local_60,param_1 + 0x144);
      if (local_60 != (byte ****)&SUB_00000002) goto joined_r0x013a5214;
      local_40 = local_5c;
      if (1 < *(byte *)local_5c) {
        local_8c = (byte ****)&local_40;
        local_88 = (byte ****)FUN_013c828c;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_005733f0,&local_8c,&DAT_01892790);
      }
    }
    thunk_FUN_016d3fb4();
    FUN_0139d778(&local_34,param_1,param_2,param_3);
    local_5c = (byte ****)local_34._4_4_;
    local_58 = (byte *****)local_2c;
    local_54 = local_28;
    local_60 = (byte ****)(byte *****)local_34;
joined_r0x013a5214:
    if (local_60 == (byte ****)0x0) {
      return 0;
    }
    uVar5 = (int)local_54 << 1 | 1;
    if ((uint)((int)local_54 * 2) < param_5) {
      *(byte **)(param_4 + (int)local_54 * 8) = (byte *)((int)local_5c + 1);
    }
    if (uVar5 < param_5) {
      *(byte **)(param_4 + uVar5 * 4) = (byte *)((int)local_58 + 1);
      return 1;
    }
    return 1;
  }
  if (param_1[0x2b1] != 3) {
    uVar5 = FUN_0139dd94(param_1);
    return uVar5;
  }
  if (param_1[0x254] == 2) {
    if (*param_1 == 2 && param_1[1] == 0) goto LAB_013a53ac;
    if (*(int *)(param_2 + 0x248) == 2) {
LAB_013a591c:
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01893548);
    }
    FUN_0139daac(&local_60,param_1,param_2 + 0xd8,param_3);
    uVar17 = CONCAT44(local_58,local_5c);
    ppppbVar8 = local_54;
    iVar6 = local_48;
    if (local_60 == (byte ****)&SUB_00000002) {
      uVar17 = FUN_0136e7e8(local_5c);
      goto LAB_013a5074;
    }
  }
  else {
    FUN_0139d490(&local_60,param_1 + 0x144);
    uVar17 = CONCAT44(local_58,local_5c);
    ppppbVar8 = local_54;
    iVar6 = local_48;
    if (local_60 == (byte ****)&SUB_00000002) {
      local_8c = local_5c;
      if (1 < *(byte *)local_5c) {
        local_34._0_4_ = &local_8c;
        local_34._4_4_ = FUN_013c828c;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_005733f0,&local_34,&DAT_01892790);
      }
      pppbVar13 = local_5c[1];
      thunk_FUN_016d3fb4();
      uVar17 = CONCAT44(extraout_r1,pppbVar13);
LAB_013a5074:
      ppppbVar8 = (byte ****)0x0;
      iVar6 = local_48;
    }
  }
  local_5c = ppppbVar8;
  ppppbVar8 = (byte ****)((ulonglong)uVar17 >> 0x20);
  if (local_60 == (byte ****)&SUB_00000002) {
LAB_013a53ac:
    uVar5 = FUN_0139dd94(param_1,param_2,param_3,param_4,param_5);
    return uVar5;
  }
  if (((uint)local_60 & 1) == 0) {
    return 0;
  }
  local_58 = (byte *****)param_3[2];
  local_54 = (byte ****)param_3[3];
  bVar16 = (byte *)((int)ppppbVar8 + 1) <= (byte *)uVar17;
  bVar15 = (byte *)uVar17 == (byte *)((int)ppppbVar8 + 1);
  local_48 = param_3[6];
  if (!bVar16 || bVar15) {
    bVar16 = local_54 <= ppppbVar8;
    bVar15 = ppppbVar8 == local_54;
  }
  if (!bVar16 || bVar15) {
    local_60 = (byte ****)0x2;
    local_34 = uVar17;
    local_50 = uVar17;
    uVar5 = FUN_0139dd94(param_1,param_2,&local_60,param_4,param_5);
joined_r0x013a5824:
    if ((uVar5 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("should find a match",0x13,&DAT_018936d0);
    }
    return uVar5;
  }
  local_8c = local_54;
  local_48 = iVar6;
LAB_013a5a74:
  local_54 = (byte ****)&LAB_00fac484;
  local_5c = (byte ****)FUN_005ffff4;
  local_60 = (byte ****)&local_34;
  local_58 = &local_8c;
  local_34 = uVar17;
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_0057a181,&local_60,&DAT_01893ee0);
LAB_013a5480:
  bVar16 = ppppbVar12 <= ppppbVar14;
  bVar15 = ppppbVar14 == ppppbVar12;
  if (!bVar16 || bVar15) {
    bVar16 = (byte ****)((int)ppppbVar14 + 1) <= local_2c;
    bVar15 = local_2c == (byte ****)((int)ppppbVar14 + 1);
  }
  local_34._0_4_ = (byte *****)local_2c;
  uVar17 = CONCAT44(ppppbVar14,local_2c);
  if (!bVar16 || bVar15) {
    local_5c = (byte ****)local_34._4_4_;
    local_60 = (byte ****)0x2;
    local_50._0_4_ = local_2c;
    local_58 = (byte *****)ppppbVar9;
    local_54 = ppppbVar12;
    local_50._4_4_ = ppppbVar14;
    local_48 = local_94;
    local_34._4_4_ = (code *)ppppbVar14;
    uVar5 = FUN_0139dd94(param_1,param_2,&local_60,param_4,param_5);
    return uVar5;
  }
  local_8c = ppppbVar12;
  goto LAB_013a5a74;
LAB_013a53c4:
  if ((byte ****)local_34._4_4_ != (byte ****)0x0) {
    FUN_0139d778(&local_8c,param_1,param_2,param_3);
    goto LAB_013a5344;
  }
  if (iVar7 == 2) {
    if (*param_1 != 2 || param_1[1] != 0) {
      if (*(int *)(param_2 + 0x248) == 2) goto LAB_013a591c;
      FUN_0139daac(&local_60,param_1,param_2 + 0xd8,param_3);
      goto LAB_013a561c;
    }
  }
  else {
    FUN_0139d490(&local_60,param_1 + 0x144,param_3);
LAB_013a561c:
    if (local_60 != (byte ****)&SUB_00000002) {
      local_80 = local_54;
      local_84 = (byte ****)local_58;
      local_88 = local_5c;
      goto LAB_013a5744;
    }
    FUN_0136e7e8(local_5c);
  }
  FUN_0139d778(&local_8c,param_1,param_2,param_3);
  goto LAB_013a5344;
LAB_013a53e8:
  if ((byte ****)local_34._4_4_ != (byte ****)0x0) {
    uVar5 = FUN_0139dd94(param_1,param_2,param_3,param_4,param_5);
    return uVar5;
  }
  if ((uint)(*(int *)(*(int *)(iVar6 + 0x13c) + 0x10) * 2) < param_5) {
    if ((param_1[0x2b1] != 3) &&
       (*(int *)(param_1[0x2ba] + 0x128) == *(int *)(param_1[0x2ba] + 300))) {
LAB_013a57b4:
      uVar5 = FUN_0139dd94(param_1,param_2,param_3,param_4,param_5);
      return uVar5;
    }
    if (iVar3 == 2) {
      if (*param_1 == 2 && param_1[1] == 0) goto LAB_013a57b4;
      if (*(int *)(param_2 + 0x248) == 2) goto LAB_013a591c;
      FUN_0139daac(&local_60,param_1,param_2 + 0xd8,param_3);
    }
    else {
      FUN_0139d490(&local_60,param_1 + 0x144,param_3);
    }
    ppppbVar9 = local_54;
    pppppbVar4 = local_58;
    ppppbVar8 = local_5c;
    if (local_60 == (byte ****)&SUB_00000002) {
      FUN_0136e7e8(local_5c);
      goto LAB_013a57b4;
    }
    if (((uint)local_60 & 1) == 0) {
      return 0;
    }
    local_60 = (byte ****)*param_3;
    local_5c = (byte ****)param_3[1];
    local_58 = (byte *****)param_3[2];
    local_54 = (byte ****)param_3[3];
    local_50._0_4_ = (byte ****)param_3[4];
    local_50._4_4_ = (byte ****)param_3[5];
    local_48 = param_3[6];
    FUN_013a237c(&local_7c,&local_60,ppppbVar8,pppppbVar4);
    local_78 = ppppbVar9;
    local_7c = 2;
    uVar5 = FUN_0139dd94(param_1,param_2,&local_7c,param_4,param_5);
    goto joined_r0x013a5824;
  }
  if (iVar3 == 2) {
    if (*param_1 != 2 || param_1[1] != 0) {
      if (*(int *)(param_2 + 0x248) == 2) goto LAB_013a591c;
      FUN_0139daac(&local_60,param_1,param_2 + 0xd8,param_3);
      goto LAB_013a5864;
    }
  }
  else {
    FUN_0139d490(&local_60,param_1 + 0x144,param_3);
LAB_013a5864:
    if (local_60 != (byte ****)&SUB_00000002) {
      local_28 = local_54;
      local_2c = (byte ****)local_58;
      local_34._4_4_ = (code *)local_5c;
      local_34._0_4_ = (byte *****)local_60;
      goto LAB_013a58ac;
    }
    FUN_0136e7e8(local_5c);
  }
  FUN_0139d778(&local_34,param_1,param_2,param_3);
LAB_013a58ac:
  if ((byte *****)local_34 == (byte *****)0x0) {
    return 0;
  }
  uVar5 = (int)local_28 << 1 | 1;
  if ((uint)((int)local_28 * 2) < param_5) {
    *(byte **)(param_4 + (int)local_28 * 8) = (byte *)((int)local_34._4_4_ + 1);
  }
  if (uVar5 < param_5) {
    *(byte **)(param_4 + uVar5 * 4) = (byte *)((int)local_2c + 1);
    return 1;
  }
  return 1;
LAB_013a5418:
  ppppbVar11 = local_2c;
  ppppbVar9 = (byte ****)local_34._4_4_;
  bVar16 = ppppbVar12 <= ppppbVar8;
  bVar15 = ppppbVar8 == ppppbVar12;
  if (!bVar16 || bVar15) {
    bVar16 = (byte ****)((int)ppppbVar8 + 1) <= local_2c;
    bVar15 = local_2c == (byte ****)((int)ppppbVar8 + 1);
  }
  local_40 = local_2c;
  local_3c = ppppbVar8;
  if (bVar16 && !bVar15) {
LAB_013a543c:
    local_34._4_4_ = FUN_005ffff4;
    local_34._0_4_ = &local_40;
    local_28 = (byte ****)&LAB_00fac484;
    local_2c = (byte ****)&local_38;
    local_38 = ppppbVar12;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_0057a181,&local_34,&DAT_01893ee0);
  }
  local_60 = (byte ****)0x2;
  local_50._0_4_ = local_2c;
  local_5c = (byte ****)local_34._4_4_;
  local_50._4_4_ = ppppbVar8;
  if (iVar7 == 2) {
    if (*param_1 == 2 && param_1[1] == 0) {
      local_58 = (byte *****)ppppbVar14;
      local_54 = ppppbVar12;
      local_48 = local_94;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("internal error: entered unreachable code: ReverseSuffix always has a DFA",0x91,
                   &DAT_018933c8);
    }
    if (*(int *)(param_2 + 0x248) == 2) {
      local_58 = (byte *****)ppppbVar14;
      local_54 = ppppbVar12;
      local_48 = local_94;
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01893558);
    }
    local_58 = (byte *****)ppppbVar14;
    local_54 = ppppbVar12;
    local_48 = local_94;
    FUN_013a5d44(&local_34,param_1,param_2 + 0xd8,&local_60);
    if ((byte *****)local_34 == (byte *****)&SUB_00000002) goto LAB_013a569c;
  }
  else {
    local_58 = (byte *****)ppppbVar14;
    local_54 = ppppbVar12;
    local_48 = local_94;
    FUN_013a5cac(&local_34,param_1 + 0x144,&local_60);
    if ((byte *****)local_34 == (byte *****)&SUB_00000002) {
LAB_013a569c:
      local_2c = (byte ****)FUN_0136e7e8(local_34._4_4_);
    }
  }
  if ((byte *****)local_34 == (byte *****)&SUB_00000002) {
    FUN_0139d778(&local_8c,param_1,param_2,param_3);
    goto LAB_013a5344;
  }
  if (((uint)(byte *****)local_34 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("internal error: entered unreachable code: suffix match plus reverse match implies there must be a match"
                 ,0xcf,&DAT_01893120);
  }
  if (local_2c < ppppbVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_003ceb44,0x25,&DAT_018935b8);
  }
  local_60 = (byte ****)&DAT_00000001;
  local_80 = ppppbVar9;
  local_88 = ppppbVar11;
  local_84 = local_2c;
LAB_013a5744:
  local_8c = local_60;
LAB_013a5344:
  if (local_8c == (byte ****)0x0) {
    return 0;
  }
  uVar5 = (int)local_80 << 1 | 1;
  if ((uint)((int)local_80 * 2) < param_5) {
    *(byte **)(param_4 + (int)local_80 * 8) = (byte *)((int)local_88 + 1);
  }
  if (uVar5 < param_5) {
    *(byte **)(param_4 + uVar5 * 4) = (byte *)((int)local_84 + 1);
    return 1;
  }
  return 1;
}

