// FUN_013a00fc @ 013a00fc size=2440 calls_out=13 calls_in=0
// strings: internal error: entered unreachable code: ReverseInner always has a DFA | internal error: entered unreachable code: ReverseInner always has a DFA

/* WARNING: Type propagation algorithm not settling */

void FUN_013a00fc(uint *param_1,int *param_2,int param_3,int *param_4)

{
  char cVar1;
  byte bVar2;
  byte ****ppppbVar3;
  byte ****ppppbVar4;
  byte ****ppppbVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte ****ppppbVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  byte ****ppppbVar17;
  byte ****ppppbVar18;
  byte ****ppppbVar19;
  byte ****ppppbVar20;
  uint uVar21;
  code *pcVar22;
  byte ****ppppbVar23;
  byte ****ppppbVar24;
  byte ****ppppbVar25;
  bool bVar26;
  bool bVar27;
  uint local_78;
  byte ****local_74;
  byte ****local_70;
  byte ****local_6c;
  byte ****local_68;
  byte ****local_64;
  int local_60;
  byte *****local_5c;
  byte ****local_58;
  byte ****local_54;
  byte ****local_50;
  byte ****local_4c;
  byte ****local_48;
  int local_44;
  byte ****local_40;
  byte ****local_3c;
  byte ****local_38;
  byte ****local_34;
  byte ****local_30;
  byte ****local_2c;
  undefined1 *local_28;
  
  if (1 < *param_4 - 1U) {
    ppppbVar12 = (byte ****)param_4[2];
    ppppbVar19 = (byte ****)param_4[5];
    ppppbVar25 = (byte ****)param_4[3];
    ppppbVar24 = (byte ****)param_4[4];
    pcVar22 = *(code **)(param_2[0x455] + 0x10);
    iVar9 = param_2[0x454] + (*(int *)(param_2[0x455] + 8) - 1U & 0xfffffff8) + 8;
    (*pcVar22)(&local_5c,iVar9,ppppbVar12,ppppbVar25,ppppbVar24,ppppbVar19);
    if (local_5c == (byte *****)0x1) {
      ppppbVar20 = (byte ****)0x0;
      piVar6 = param_2 + 0x144;
      iVar13 = param_2[1];
      iVar7 = param_2[0x254];
      iVar16 = *param_2;
      iVar10 = param_3 + 0xd8;
      iVar8 = param_2[0x304];
      iVar11 = param_2[0x305];
      iVar14 = param_2[0x408];
      iVar15 = param_4[6];
      ppppbVar17 = (byte ****)0x0;
      ppppbVar23 = ppppbVar24;
      do {
        ppppbVar4 = local_54;
        ppppbVar3 = local_58;
        if (local_58 < ppppbVar20) {
LAB_013a065c:
          if (iVar7 == 2) {
            if (iVar16 != 2 || iVar13 != 0) {
              if (*(int *)(param_3 + 0x248) == 2) goto LAB_013a0828;
              uVar21 = 0;
              if (*(char *)(param_2[0x9e] + 0x15a) == '\x01') {
                uVar21 = (uint)*(byte *)(param_2[0x9e] + 0x15b);
              }
              FUN_0137a9fc(&local_5c,param_2,iVar10,param_4);
              if (local_5c != (byte *****)0x2) {
                if (((uint)local_5c & uVar21 & 1) == 0) {
                  *param_1 = (uint)local_5c;
                  param_1[1] = (uint)local_58;
                  param_1[2] = (uint)local_54;
                  return;
                }
                FUN_013b7ec0(&local_78,param_4,local_58,local_54,local_54,param_2,iVar10);
                if (local_78 != 2) {
                  *param_1 = local_78;
                  param_1[1] = (uint)local_74;
                  param_1[2] = (uint)local_70;
                  return;
                }
                local_58 = local_74;
              }
              FUN_0136e7e8(local_58);
            }
            FUN_0139d778(&local_5c,param_2,param_3,param_4);
            if (local_5c == (byte *****)0x1) {
              *param_1 = 1;
              param_1[1] = (uint)local_50;
              param_1[2] = (uint)local_54;
              return;
            }
            *param_1 = 0;
            return;
          }
          iVar9 = param_2[0x1f1];
          cVar1 = *(char *)((int)param_2 + 0x7c5);
          FUN_013ae3dc(&local_5c,piVar6,param_4);
          if (local_5c == (byte *****)0x2) {
            bVar2 = *(byte *)local_58;
            local_74 = local_58;
          }
          else {
            if ((((uint)local_5c & 1) == 0) || ((char)iVar9 == '\0' || cVar1 == '\0')) {
              *param_1 = (uint)local_5c;
              param_1[1] = (uint)local_58;
              param_1[2] = (uint)local_54;
              return;
            }
            FUN_013b7b18(&local_78,param_4,local_58,local_54,local_54,piVar6);
            if (local_78 != 2) {
              *param_1 = local_78;
              param_1[1] = (uint)local_74;
              param_1[2] = (uint)local_70;
              return;
            }
            bVar2 = *(byte *)local_74;
            local_78 = 2;
          }
          if (1 < bVar2) {
            local_5c = &local_34;
            local_58 = (byte ****)FUN_013c828c;
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_005733f0,&local_5c,&DAT_01892790);
          }
          thunk_FUN_016d3fb4(local_74);
          FUN_0139d778(&local_5c,param_2,param_3,param_4);
          goto joined_r0x013a0704;
        }
        ppppbVar18 = (byte ****)((int)local_58 + 1);
        bVar27 = ppppbVar18 <= ppppbVar24;
        bVar26 = ppppbVar24 == ppppbVar18;
        local_30 = local_58;
        if (!bVar27 || bVar26) {
          bVar27 = ppppbVar25 <= local_58;
          bVar26 = local_58 == ppppbVar25;
        }
        local_34 = ppppbVar24;
        if (bVar27 && !bVar26) {
          local_58 = (byte ****)FUN_005ffff4;
          local_5c = &local_34;
          local_50 = (byte ****)&LAB_00fac484;
          local_54 = (byte ****)&local_40;
          local_40 = ppppbVar25;
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_0057a181,&local_5c,&DAT_01893ee0);
        }
        local_78 = 1;
        local_64 = local_58;
        local_70 = ppppbVar12;
        local_6c = ppppbVar25;
        local_68 = ppppbVar24;
        local_60 = iVar15;
        if (iVar14 == 2) {
          if (iVar8 == 2 && iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa478("internal error: entered unreachable code: ReverseInner always has a DFA",
                         0x8f,&DAT_018933a8);
          }
          if (*(int *)(param_3 + 200) == 2) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_018933b8);
          }
          FUN_013b6db4(&local_5c,param_2 + 0x304,param_3 + 0x18,&local_78,ppppbVar17);
        }
        else {
          FUN_013b65b8(&local_5c,param_2 + 0x3a6,&local_78);
        }
        ppppbVar5 = local_54;
        ppppbVar17 = local_58;
        if (local_5c == (byte *****)0x2) {
          if (((uint)local_58 & 1) == 0) goto LAB_013a065c;
LAB_013a0604:
          FUN_0139d778(&local_5c,param_2,param_3,param_4);
          if (local_5c == (byte *****)0x1) {
            *param_1 = 1;
            param_1[1] = (uint)local_50;
            param_1[2] = (uint)local_54;
            return;
          }
          break;
        }
        if (((uint)local_5c & 1) == 0) {
          if (ppppbVar19 <= ppppbVar23) break;
          if (ppppbVar3 == (byte ****)0xffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_01893368);
          }
        }
        else {
          bVar27 = ppppbVar25 <= ppppbVar19;
          bVar26 = ppppbVar19 == ppppbVar25;
          ppppbVar20 = ppppbVar19;
          if (!bVar27 || bVar26) {
            ppppbVar20 = (byte ****)((int)ppppbVar19 + 1);
          }
          local_40 = local_54;
          if (!bVar27 || bVar26) {
            bVar27 = ppppbVar20 <= local_54;
            bVar26 = local_54 == ppppbVar20;
          }
          local_3c = ppppbVar19;
          if (bVar27 && !bVar26) {
            local_30 = (byte ****)FUN_005ffff4;
            local_34 = (byte ****)&local_40;
            local_28 = &LAB_00fac484;
            local_2c = (byte ****)&local_38;
            local_38 = ppppbVar25;
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_0057a181,&local_34,&DAT_01893ee0);
          }
          local_5c = (byte *****)0x2;
          local_4c = local_54;
          local_54 = ppppbVar12;
          local_50 = ppppbVar25;
          local_48 = ppppbVar19;
          local_44 = iVar15;
          if (iVar7 == 2) {
            if (iVar16 == 2 && iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa478("internal error: entered unreachable code: ReverseInner always has a DFA"
                           ,0x8f,&DAT_01893388);
            }
            if (*(int *)(param_3 + 0x248) == 2) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa444(&DAT_01893398);
            }
            FUN_01378a88(&local_34,param_2,iVar10,&local_5c);
          }
          else {
            FUN_01377a14(&local_34,piVar6,&local_5c);
          }
          if (local_34 == (byte ****)&SUB_00000002) goto LAB_013a0604;
          if (((uint)local_34 & 1) == 0) {
            if (local_2c < ppppbVar5) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa478(&DAT_003ceb44,0x25,&DAT_018935b8);
            }
            *param_1 = 1;
            param_1[1] = (uint)ppppbVar17;
            param_1[2] = (uint)local_2c;
            return;
          }
          if (ppppbVar3 == (byte ****)0xffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_01893378);
          }
          ppppbVar20 = local_30;
        }
        (*pcVar22)(&local_5c,iVar9,ppppbVar12,ppppbVar25,ppppbVar18,ppppbVar19);
        ppppbVar17 = ppppbVar4;
        ppppbVar23 = ppppbVar18;
      } while (local_5c != (byte *****)0x0);
    }
    *param_1 = 0;
    return;
  }
  if (param_2[0x254] == 2) {
    if (*param_2 == 2 && param_2[1] == 0) {
      FUN_0139d778(&local_5c,param_2);
      goto joined_r0x013a0704;
    }
    if (*(int *)(param_3 + 0x248) == 2) {
LAB_013a0828:
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01893558);
    }
    uVar21 = 0;
    if (*(char *)(param_2[0x9e] + 0x15a) == '\x01') {
      uVar21 = (uint)*(byte *)(param_2[0x9e] + 0x15b);
    }
    FUN_0137a9fc(&local_5c,param_2,param_3 + 0xd8);
    if (local_5c == (byte *****)0x2) {
      bVar2 = *(byte *)local_58;
      local_74 = local_58;
    }
    else {
      if (((uint)local_5c & uVar21 & 1) == 0) {
        *param_1 = (uint)local_5c;
        param_1[1] = (uint)local_58;
        param_1[2] = (uint)local_54;
        return;
      }
      FUN_013b7ec0(&local_78,param_4,local_58,local_54,local_54,param_2,param_3 + 0xd8);
      if (local_78 != 2) {
        *param_1 = local_78;
        param_1[1] = (uint)local_74;
        param_1[2] = (uint)local_70;
        return;
      }
      bVar2 = *(byte *)local_74;
    }
    if (1 < bVar2) {
      local_5c = &local_34;
      local_58 = (byte ****)FUN_013c828c;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_005733f0,&local_5c,&DAT_01892790);
    }
    thunk_FUN_016d3fb4(local_74);
  }
  else {
    iVar9 = param_2[0x1f1];
    cVar1 = *(char *)((int)param_2 + 0x7c5);
    FUN_013ae3dc(&local_5c,param_2 + 0x144,param_4);
    if (local_5c == (byte *****)0x2) {
      bVar2 = *(byte *)local_58;
      local_74 = local_58;
    }
    else {
      if ((((uint)local_5c & 1) == 0) || ((char)iVar9 == '\0' || cVar1 == '\0')) {
        *param_1 = (uint)local_5c;
        param_1[1] = (uint)local_58;
        param_1[2] = (uint)local_54;
        return;
      }
      FUN_013b7b18(&local_78,param_4,local_58,local_54,local_54,param_2 + 0x144);
      if (local_78 != 2) {
        *param_1 = local_78;
        param_1[1] = (uint)local_74;
        param_1[2] = (uint)local_70;
        return;
      }
      bVar2 = *(byte *)local_74;
    }
    if (1 < bVar2) {
      local_5c = &local_34;
      local_58 = (byte ****)FUN_013c828c;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_005733f0,&local_5c,&DAT_01892790);
    }
    thunk_FUN_016d3fb4(local_74);
  }
  FUN_0139d778(&local_5c,param_2,param_3,param_4);
joined_r0x013a0704:
  if (local_5c == (byte *****)0x1) {
    *param_1 = 1;
    param_1[1] = (uint)local_50;
    param_1[2] = (uint)local_54;
    return;
  }
  *param_1 = 0;
  return;
}

