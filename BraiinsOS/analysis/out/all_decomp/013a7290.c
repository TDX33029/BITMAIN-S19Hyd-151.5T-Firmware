// FUN_013a7290 @ 013a7290 size=1748 calls_out=13 calls_in=0
// strings: should find a match | internal error: entered unreachable code: ReverseAnchored always has a DFA

/* WARNING: Type propagation algorithm not settling */

uint FUN_013a7290(int *param_1,int param_2,byte ******param_3,int param_4,uint param_5)

{
  byte ******ppppppbVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  byte *****pppppbVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  byte ******local_60;
  byte *****local_5c;
  byte *****local_58;
  int local_54;
  byte ******local_50;
  byte *****local_4c;
  byte ******local_48;
  byte *****local_44;
  byte *****pppppbStack_40;
  byte *****local_3c;
  byte *****local_38;
  byte *****local_30;
  byte *****local_2c;
  code *local_28;
  
  if (1 < (int)*param_3 - 1U) {
    local_48 = (byte ******)param_3[2];
    local_44 = param_3[3];
    pppppbStack_40 = param_3[4];
    local_3c = param_3[5];
    local_38 = param_3[6];
    local_50 = (byte ******)0x1;
    if (param_1[0x254] == 2) {
      if (*param_1 == 2 && param_1[1] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478("internal error: entered unreachable code: ReverseAnchored always has a DFA",
                     0x95,&DAT_01893408);
      }
      if (*(int *)(param_2 + 0x248) == 2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01893568);
      }
      uVar6 = 0;
      if (*(char *)(param_1[0x140] + 0x15a) == '\x01') {
        uVar6 = (uint)*(byte *)(param_1[0x140] + 0x15b);
      }
      FUN_0137d1fc(&local_60,param_1 + 0xa2,param_2 + 0x198,&local_50);
      if (local_60 == (byte ******)0x2) {
        bVar2 = *(byte *)local_5c;
        local_30 = local_5c;
      }
      else {
        if ((((uint)local_60 & uVar6 & 1) == 0) ||
           (FUN_013b809c(&local_60,&local_50,local_5c,local_58,local_58,param_1 + 0xa2,
                         param_2 + 0x198), local_60 != (byte ******)0x2)) goto joined_r0x013a7940;
        bVar2 = *(byte *)local_5c;
        local_30 = local_5c;
      }
      if (1 < bVar2) {
        local_2c = (byte *****)&local_30;
        local_28 = FUN_013c828c;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_005733f0,&local_2c,&DAT_01892790);
      }
    }
    else {
      iVar4 = param_1[0x29f];
      cVar3 = *(char *)((int)param_1 + 0xa7d);
      FUN_013b1554(&local_60,param_1 + 0x1f2,&local_50);
      if (local_60 == (byte ******)0x2) {
        bVar2 = *(byte *)local_5c;
        local_30 = local_5c;
      }
      else {
        if (((((uint)local_60 & 1) == 0 || (char)iVar4 == '\0') || cVar3 == '\0') ||
           (FUN_013b8260(&local_60,&local_50,local_5c,local_58,local_58,param_1 + 0x1f2),
           local_60 != (byte ******)0x2)) {
joined_r0x013a7940:
          if (local_60 != (byte ******)0x2) {
            if (((uint)local_60 & 1) == 0) {
              return 0;
            }
            if (param_5 <= (uint)(*(int *)(*(int *)(param_1[0x301] + 0x13c) + 0x10) * 2)) {
              pppppbVar5 = param_3[5];
              if (pppppbVar5 < local_58) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa478(&DAT_003ceb44,0x25,&DAT_018935b8);
              }
              uVar6 = (int)local_5c << 1 | 1;
              if ((uint)((int)local_5c * 2) < param_5) {
                *(byte **)(param_4 + (int)local_5c * 8) = (byte *)((int)local_58 + 1);
              }
              if (uVar6 < param_5) {
                *(byte **)(param_4 + uVar6 * 4) = (byte *)((int)pppppbVar5 + 1);
              }
              return 1;
            }
            local_5c = param_3[5];
            local_48 = (byte ******)param_3[2];
            local_2c = param_3[3];
            ppppppbVar1 = param_3 + 6;
            bVar8 = local_2c <= local_5c;
            bVar7 = local_5c == local_2c;
            if (!bVar8 || bVar7) {
              bVar8 = (byte *****)((int)local_5c + 1) <= local_58;
              bVar7 = local_58 == (byte *****)((int)local_5c + 1);
            }
            if (bVar8 && !bVar7) {
LAB_013a7768:
              local_4c = (byte *****)FUN_005ffff4;
              local_50 = (byte ******)&local_60;
              local_48 = &local_2c;
              local_44 = (byte *****)&LAB_00fac484;
                    /* WARNING: Subroutine does not return */
              FUN_00faa478(&DAT_0057a181,&local_50,&DAT_01893ee0);
            }
            param_3 = (byte ******)&local_50;
            local_50 = (byte ******)0x2;
            local_44 = local_2c;
            pppppbStack_40 = local_58;
            local_3c = local_5c;
            local_38 = *ppppppbVar1;
          }
          goto LAB_013a7680;
        }
        bVar2 = *(byte *)local_5c;
        local_30 = local_5c;
      }
      if (1 < bVar2) {
        local_2c = (byte *****)&local_30;
        local_28 = FUN_013c828c;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_005733f0,&local_2c,&DAT_01892790);
      }
    }
    local_5c = local_30;
    thunk_FUN_016d3fb4(local_30);
LAB_013a7680:
    uVar6 = FUN_0139dd94(param_1,param_2,param_3,param_4,param_5);
    return uVar6;
  }
  if ((uint)(*(int *)(*(int *)(param_1[0x301] + 0x13c) + 0x10) * 2) < param_5) {
    if (param_1[0x2b1] != 3) {
      uVar6 = FUN_0139dd94(param_1,param_2,param_3,param_4);
      return uVar6;
    }
    if (param_1[0x254] == 2) {
      if (*param_1 == 2 && param_1[1] == 0) goto LAB_013a7808;
      if (*(int *)(param_2 + 0x248) == 2) goto LAB_013a789c;
      FUN_0139daac(&local_50,param_1,param_2 + 0xd8,param_3);
      if (local_50 == (byte ******)0x2) {
        FUN_0136e7e8(local_4c);
        goto LAB_013a7808;
      }
    }
    else {
      FUN_0139d490(&local_50,param_1 + 0x144,param_3);
      if (local_50 == (byte ******)0x2) {
        local_2c = local_4c;
        if (1 < *(byte *)local_4c) {
          local_60 = &local_2c;
          local_5c = (byte *****)FUN_013c828c;
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_005733f0,&local_60,&DAT_01892790);
        }
        thunk_FUN_016d3fb4();
        goto LAB_013a7808;
      }
    }
    if (local_50 == (byte ******)0x2) {
LAB_013a7808:
      uVar6 = FUN_0139dd94(param_1,param_2,param_3,param_4,param_5);
      return uVar6;
    }
    local_5c = (byte *****)local_48;
    if (((uint)local_50 & 1) == 0) {
      return 0;
    }
    local_2c = param_3[3];
    bVar8 = (byte *****)((int)local_48 + 1) <= local_4c;
    bVar7 = local_4c == (byte *****)((int)local_48 + 1);
    if (!bVar8 || bVar7) {
      bVar8 = local_2c <= local_48;
      bVar7 = local_48 == (byte ******)local_2c;
    }
    if (!bVar8 || bVar7) {
      local_50 = (byte ******)0x2;
      local_48 = (byte ******)param_3[2];
      local_44 = local_2c;
      local_38 = param_3[6];
      uVar6 = FUN_0139dd94(param_1,param_2,&local_50,param_4,param_5);
      if ((uVar6 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("should find a match",0x13,&DAT_018936d0);
      }
      return uVar6;
    }
    goto LAB_013a7768;
  }
  if (param_1[0x254] == 2) {
    if (*param_1 != 2 || param_1[1] != 0) {
      if (*(int *)(param_2 + 0x248) == 2) {
LAB_013a789c:
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01893548);
      }
      FUN_0139daac(&local_50,param_1,param_2 + 0xd8,param_3);
      if (local_50 != (byte ******)0x2) goto joined_r0x013a76b8;
      local_30 = local_4c;
      if (1 < *(byte *)local_4c) {
        local_2c = (byte *****)&local_30;
        local_28 = FUN_013c828c;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_005733f0,&local_2c,&DAT_01892790);
      }
      goto LAB_013a75b0;
    }
  }
  else {
    FUN_0139d490(&local_50,param_1 + 0x144,param_3);
    if (local_50 != (byte ******)0x2) goto joined_r0x013a76b8;
    local_30 = local_4c;
    if (1 < *(byte *)local_4c) {
      local_2c = (byte *****)&local_30;
      local_28 = FUN_013c828c;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_005733f0,&local_2c,&DAT_01892790);
    }
LAB_013a75b0:
    thunk_FUN_016d3fb4();
  }
  FUN_0139d778(&local_60,param_1,param_2,param_3);
  local_44 = (byte *****)local_54;
  local_48 = (byte ******)local_58;
  local_4c = local_5c;
  local_50 = local_60;
joined_r0x013a76b8:
  if (local_50 == (byte ******)0x0) {
    return 0;
  }
  uVar6 = (int)local_44 << 1 | 1;
  if ((uint)((int)local_44 * 2) < param_5) {
    *(byte **)(param_4 + (int)local_44 * 8) = (byte *)((int)local_4c + 1);
  }
  if (uVar6 < param_5) {
    *(byte **)(param_4 + uVar6 * 4) = (byte *)((int)local_48 + 1);
    return 1;
  }
  return 1;
}

