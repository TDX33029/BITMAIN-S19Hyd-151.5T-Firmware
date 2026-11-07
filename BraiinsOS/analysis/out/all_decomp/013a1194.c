// FUN_013a1194 @ 013a1194 size=4088 calls_out=14 calls_in=0
// strings: should find a match | internal error: entered unreachable code: ReverseInner always has a DFA | internal error: entered unreachable code: ReverseInner always has a DFA

/* WARNING: Type propagation algorithm not settling */

uint FUN_013a1194(int *param_1,int param_2,int *param_3,int param_4,uint param_5)

{
  byte ******ppppppbVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  byte ******ppppppbVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte *****extraout_r1;
  byte *****extraout_r1_00;
  byte *****extraout_r1_01;
  byte *****extraout_r1_02;
  int iVar11;
  byte *****pppppbVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  byte *****extraout_r3;
  byte *****extraout_r3_00;
  byte *****pppppbVar16;
  byte *****pppppbVar17;
  byte *****pppppbVar18;
  code *pcVar19;
  byte *****pppppbVar20;
  byte *****unaff_r9;
  byte *****pppppbVar21;
  byte *****pppppbVar22;
  byte ******unaff_r11;
  byte *****pppppbVar23;
  byte *****pppppbVar24;
  bool bVar25;
  bool bVar26;
  int local_bc;
  byte *****local_a8;
  byte *****local_a4;
  byte *****local_a0;
  byte *****local_9c;
  byte ******local_98;
  byte *****local_94;
  byte *****local_90;
  byte *****local_8c;
  byte *****local_88;
  byte *****local_84;
  int local_80;
  undefined4 local_7c;
  byte *****local_78;
  byte ******local_60;
  byte *****local_5c;
  byte ******local_58;
  byte *****local_54;
  byte *****local_50;
  byte *****local_4c;
  int local_48;
  byte *****local_40;
  byte *****local_3c;
  byte *****local_38;
  byte *****local_34;
  byte *****local_30;
  byte *****local_2c;
  undefined1 *local_28;
  
  if (1 < *param_3 - 1U) {
    iVar11 = param_1[0x301];
    piVar7 = param_1 + 0x304;
    if (param_5 <= (uint)(*(int *)(*(int *)(iVar11 + 0x13c) + 0x10) * 2)) {
      pppppbVar23 = (byte *****)param_3[3];
      pppppbVar18 = (byte *****)param_3[2];
      pcVar19 = *(code **)(param_1[0x455] + 0x10);
      pppppbVar21 = (byte *****)param_3[4];
      pppppbVar16 = (byte *****)param_3[5];
      iVar11 = param_1[0x454] + (*(int *)(param_1[0x455] + 8) - 1U & 0xfffffff8) + 8;
      (*pcVar19)(&local_60,iVar11,pppppbVar18,pppppbVar23,pppppbVar21,pppppbVar16);
      pppppbVar12 = extraout_r1;
      if (local_60 == (byte ******)&DAT_00000001) {
        pppppbVar17 = (byte *****)0x0;
        iVar13 = *param_1;
        iVar9 = param_1[1];
        iVar8 = param_1[0x254];
        iVar3 = *piVar7;
        iVar4 = param_1[0x305];
        iVar10 = param_1[0x408];
        local_bc = param_3[6];
        ppppppbVar5 = (byte ******)(byte *****)0x0;
        pppppbVar24 = pppppbVar21;
        do {
          ppppppbVar1 = local_58;
          pppppbVar22 = local_5c;
          if (local_5c < pppppbVar17) {
LAB_013a1ad0:
            if (iVar8 == 2) {
              if (iVar13 == 2 && iVar9 == 0) {
                FUN_0139d778(&local_a8,param_1,param_2,param_3);
                goto LAB_013a1834;
              }
              if (*(int *)(param_2 + 0x248) == 2) goto LAB_013a20a4;
              FUN_0139daac(&local_60,param_1,param_2 + 0xd8,param_3);
              if (local_60 == (byte ******)&SUB_00000002) {
                FUN_0136e7e8(local_5c);
                FUN_0139d778(&local_a8,param_1,param_2,param_3);
                goto LAB_013a1834;
              }
            }
            else {
              FUN_0139d490(&local_60,param_1 + 0x144,param_3);
              if (local_60 == (byte ******)&SUB_00000002) {
                FUN_0136e7e8(local_5c);
                FUN_0139d778(&local_a8,param_1,param_2,param_3);
                goto LAB_013a1834;
              }
            }
            local_9c = local_54;
            local_a0 = (byte *****)local_58;
            local_a4 = local_5c;
            goto LAB_013a1830;
          }
          pppppbVar20 = (byte *****)((int)local_5c + 1);
          bVar26 = pppppbVar20 <= pppppbVar21;
          bVar25 = pppppbVar21 == pppppbVar20;
          local_30 = local_5c;
          if (!bVar26 || bVar25) {
            bVar26 = pppppbVar23 <= local_5c;
            bVar25 = local_5c == pppppbVar23;
          }
          local_34 = pppppbVar21;
          if (bVar26 && !bVar25) {
            local_58 = &local_40;
            local_40 = pppppbVar23;
            goto LAB_013a1fa4;
          }
          local_98 = (byte ******)&DAT_00000001;
          local_84 = local_5c;
          local_90 = pppppbVar18;
          local_8c = pppppbVar23;
          local_88 = pppppbVar21;
          local_80 = local_bc;
          if (iVar10 == 2) {
            if (iVar3 == 2 && iVar4 == 0) goto LAB_013a1fbc;
            if (*(int *)(param_2 + 200) == 2) goto LAB_013a1fd4;
            FUN_013b6db4(&local_60,piVar7,param_2 + 0x18,&local_98,ppppppbVar5);
            pppppbVar12 = extraout_r1_01;
          }
          else {
            FUN_013b65b8(&local_60,param_1 + 0x3a6,&local_98);
            pppppbVar12 = extraout_r1_02;
          }
          unaff_r11 = local_58;
          unaff_r9 = local_5c;
          if (local_60 == (byte ******)&SUB_00000002) {
            if (((uint)local_5c & 1) == 0) goto LAB_013a1ad0;
LAB_013a1c64:
            FUN_0139d778(&local_a8,param_1,param_2,param_3);
            goto LAB_013a1834;
          }
          if (((uint)local_60 & 1) == 0) {
            unaff_r11 = (byte ******)pppppbVar24;
            if (pppppbVar16 <= pppppbVar24) break;
            if (pppppbVar22 == (byte *****)0xffffffff) goto LAB_013a2068;
          }
          else {
            bVar26 = pppppbVar23 <= pppppbVar16;
            bVar25 = pppppbVar16 == pppppbVar23;
            ppppppbVar5 = local_60;
            if (!bVar26 || bVar25) {
              ppppppbVar5 = (byte ******)((int)pppppbVar16 + 1);
            }
            local_40 = (byte *****)local_58;
            if (!bVar26 || bVar25) {
              bVar26 = ppppppbVar5 <= local_58;
              bVar25 = local_58 == ppppppbVar5;
            }
            local_3c = pppppbVar16;
            if (bVar26 && !bVar25) {
              local_30 = (byte *****)FUN_005ffff4;
              local_34 = (byte *****)&local_40;
              local_28 = &LAB_00fac484;
              local_2c = (byte *****)&local_38;
              local_38 = pppppbVar23;
                    /* WARNING: Subroutine does not return */
              FUN_00faa478(&DAT_0057a181,&local_34,&DAT_01893ee0);
            }
            local_60 = (byte ******)&SUB_00000002;
            local_50 = (byte *****)local_58;
            local_58 = (byte ******)pppppbVar18;
            local_54 = pppppbVar23;
            local_4c = pppppbVar16;
            local_48 = local_bc;
            if (iVar8 == 2) {
              if (iVar13 == 2 && iVar9 == 0) goto LAB_013a2080;
              if (*(int *)(param_2 + 0x248) == 2) goto LAB_013a2098;
              FUN_01378a88(&local_34,param_1,param_2 + 0xd8,&local_60);
            }
            else {
              FUN_01377a14(&local_34,param_1 + 0x144,&local_60);
            }
            if (local_34 == (byte *****)&SUB_00000002) goto LAB_013a1c64;
            if (((uint)local_34 & 1) == 0) {
              if (local_2c < unaff_r11) goto LAB_013a213c;
              local_60 = (byte ******)&DAT_00000001;
              goto LAB_013a181c;
            }
            if (pppppbVar22 == (byte *****)0xffffffff) goto LAB_013a2074;
            pppppbVar17 = local_30;
          }
          (*pcVar19)(&local_60,iVar11,pppppbVar18,pppppbVar23,pppppbVar20,pppppbVar16);
          pppppbVar12 = extraout_r1_00;
          ppppppbVar5 = ppppppbVar1;
          unaff_r11 = (byte ******)pppppbVar20;
          pppppbVar24 = pppppbVar20;
        } while (local_60 != (byte ******)0x0);
      }
      local_2c = pppppbVar12;
      local_60 = (byte ******)0x0;
LAB_013a181c:
      local_a4 = (byte *****)unaff_r11;
      local_a0 = local_2c;
      local_9c = unaff_r9;
LAB_013a1830:
      local_a8 = (byte *****)local_60;
LAB_013a1834:
      if (local_a8 == (byte *****)0x0) {
        return 0;
      }
      uVar6 = (int)local_9c << 1 | 1;
      if ((uint)((int)local_9c * 2) < param_5) {
        *(byte **)(param_4 + (int)local_9c * 8) = (byte *)((int)local_a4 + 1);
      }
      if (uVar6 < param_5) {
        *(byte **)(param_4 + uVar6 * 4) = (byte *)((int)local_a0 + 1);
        return 1;
      }
      return 1;
    }
    pppppbVar18 = (byte *****)param_3[5];
    pppppbVar12 = (byte *****)param_3[2];
    pppppbVar23 = (byte *****)param_3[3];
    pppppbVar21 = (byte *****)param_3[4];
    pcVar19 = *(code **)(param_1[0x455] + 0x10);
    iVar8 = param_1[0x454] + (*(int *)(param_1[0x455] + 8) - 1U & 0xfffffff8) + 8;
    (*pcVar19)(&local_60,iVar8,pppppbVar12,pppppbVar23,pppppbVar21,pppppbVar18);
    if (local_60 != (byte ******)&DAT_00000001) {
      return 0;
    }
    pppppbVar17 = (byte *****)0x0;
    piVar2 = param_1 + 0x144;
    iVar15 = *param_1;
    iVar13 = param_1[1];
    iVar3 = param_1[0x254];
    iVar9 = param_2 + 0xd8;
    iVar4 = *piVar7;
    iVar10 = param_1[0x305];
    iVar14 = param_1[0x408];
    local_bc = param_3[6];
    ppppppbVar5 = (byte ******)(byte *****)0x0;
    pppppbVar16 = pppppbVar21;
    while (ppppppbVar1 = local_58, pppppbVar24 = local_5c, pppppbVar17 <= local_5c) {
      pppppbVar22 = (byte *****)((int)local_5c + 1);
      bVar26 = pppppbVar22 <= pppppbVar21;
      bVar25 = pppppbVar21 == pppppbVar22;
      local_30 = local_5c;
      if (!bVar26 || bVar25) {
        bVar26 = pppppbVar23 <= local_5c;
        bVar25 = local_5c == pppppbVar23;
      }
      local_34 = pppppbVar21;
      if (bVar26 && !bVar25) {
        local_58 = &local_a8;
        local_a8 = pppppbVar23;
LAB_013a1fa4:
        local_54 = (byte *****)&LAB_00fac484;
        local_5c = (byte *****)FUN_005ffff4;
        local_60 = &local_34;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_0057a181,&local_60,&DAT_01893ee0);
      }
      local_98 = (byte ******)&DAT_00000001;
      local_84 = local_5c;
      local_90 = pppppbVar12;
      local_8c = pppppbVar23;
      local_88 = pppppbVar21;
      local_80 = local_bc;
      if (iVar14 == 2) {
        if (iVar4 == 2 && iVar10 == 0) {
LAB_013a1fbc:
          local_98 = (byte ******)0x1;
          local_88 = local_34;
          local_80 = local_bc;
                    /* WARNING: Subroutine does not return */
          FUN_00faa478("internal error: entered unreachable code: ReverseInner always has a DFA",
                       0x8f,&DAT_018933a8);
        }
        if (*(int *)(param_2 + 200) == 2) {
LAB_013a1fd4:
          local_98 = (byte ******)0x1;
          local_88 = local_34;
          local_80 = local_bc;
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018933b8);
        }
        FUN_013b6db4(&local_60,piVar7,param_2 + 0x18,&local_98,ppppppbVar5);
      }
      else {
        FUN_013b65b8(&local_60,param_1 + 0x3a6,&local_98);
      }
      ppppppbVar5 = local_58;
      if (local_60 == (byte ******)&SUB_00000002) {
        if (((uint)local_5c & 1) != 0) {
LAB_013a1b18:
          uVar6 = FUN_0139dd94(param_1,param_2,param_3,param_4,param_5);
          return uVar6;
        }
        break;
      }
      if (((uint)local_60 & 1) == 0) {
        if (pppppbVar18 <= pppppbVar16) {
          return 0;
        }
        if (pppppbVar24 == (byte *****)0xffffffff) {
LAB_013a2068:
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_01893368);
        }
      }
      else {
        bVar26 = pppppbVar23 <= pppppbVar18;
        bVar25 = pppppbVar18 == pppppbVar23;
        pppppbVar16 = pppppbVar18;
        if (!bVar26 || bVar25) {
          pppppbVar16 = (byte *****)((int)pppppbVar18 + 1);
        }
        local_a8 = (byte *****)local_58;
        if (!bVar26 || bVar25) {
          bVar26 = pppppbVar16 <= local_58;
          bVar25 = local_58 == (byte ******)pppppbVar16;
        }
        local_a4 = pppppbVar18;
        if (bVar26 && !bVar25) {
          local_30 = (byte *****)FUN_005ffff4;
          local_28 = &LAB_00fac484;
          local_2c = (byte *****)&local_40;
          local_34 = (byte *****)&local_a8;
          local_40 = pppppbVar23;
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_0057a181,&local_34,&DAT_01893ee0);
        }
        local_60 = (byte ******)&SUB_00000002;
        local_50 = (byte *****)local_58;
        local_58 = (byte ******)pppppbVar12;
        local_54 = pppppbVar23;
        local_4c = pppppbVar18;
        local_48 = local_bc;
        if (iVar3 == 2) {
          if (iVar15 == 2 && iVar13 == 0) {
LAB_013a2080:
            local_60 = (byte ******)0x2;
            local_48 = local_bc;
                    /* WARNING: Subroutine does not return */
            FUN_00faa478("internal error: entered unreachable code: ReverseInner always has a DFA",
                         0x8f,&DAT_01893388);
          }
          if (*(int *)(param_2 + 0x248) == 2) {
LAB_013a2098:
            local_60 = (byte ******)0x2;
            local_48 = local_bc;
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_01893398);
          }
          FUN_01378a88(&local_34,param_1,iVar9,&local_60);
          pppppbVar16 = extraout_r3;
        }
        else {
          FUN_01377a14(&local_34,piVar2,&local_60);
          pppppbVar16 = extraout_r3_00;
        }
        if (local_34 == (byte *****)&SUB_00000002) goto LAB_013a1b18;
        if (((uint)local_34 & 1) == 0) {
          if (local_2c < ppppppbVar5) {
LAB_013a213c:
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_003ceb44,0x25,&DAT_018935b8);
          }
          bVar26 = pppppbVar23 <= local_2c;
          bVar25 = local_2c == pppppbVar23;
          local_94 = local_2c;
          if (!bVar26 || bVar25) {
            pppppbVar16 = (byte *****)((int)local_2c + 1);
          }
          local_98 = ppppppbVar5;
          if (!bVar26 || bVar25) {
            bVar26 = pppppbVar16 <= ppppppbVar5;
            bVar25 = ppppppbVar5 == (byte ******)pppppbVar16;
          }
          if (!bVar26 || bVar25) {
            local_4c = local_2c;
            local_50 = (byte *****)ppppppbVar5;
            local_60 = (byte ******)0x2;
            local_58 = (byte ******)pppppbVar12;
            local_54 = pppppbVar23;
            local_48 = local_bc;
            uVar6 = FUN_0139dd94(param_1,param_2,&local_60,param_4,param_5);
            return uVar6;
          }
          local_34 = pppppbVar23;
          goto LAB_013a217c;
        }
        if (pppppbVar24 == (byte *****)0xffffffff) {
LAB_013a2074:
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_01893378);
        }
        pppppbVar17 = local_30;
      }
      (*pcVar19)(&local_60,iVar8,pppppbVar12,pppppbVar23,pppppbVar22,pppppbVar18);
      ppppppbVar5 = ppppppbVar1;
      pppppbVar16 = pppppbVar22;
      if (local_60 == (byte ******)0x0) {
        return 0;
      }
    }
    if ((uint)(*(int *)(*(int *)(iVar11 + 0x13c) + 0x10) * 2) < param_5) {
      if ((param_1[0x2b1] != 3) &&
         (*(int *)(param_1[0x2ba] + 0x128) == *(int *)(param_1[0x2ba] + 300))) {
        uVar6 = FUN_0139dd94(param_1,param_2,param_3,param_4,param_5);
        return uVar6;
      }
      if (iVar3 == 2) {
        if (iVar15 == 2 && iVar13 == 0) goto LAB_013a1dfc;
        if (*(int *)(param_2 + 0x248) == 2) goto LAB_013a20a4;
        FUN_0139daac(&local_60,param_1,iVar9,param_3);
      }
      else {
        FUN_0139d490(&local_60,piVar2,param_3);
      }
      pppppbVar18 = local_54;
      ppppppbVar5 = local_58;
      pppppbVar12 = local_5c;
      if (local_60 == (byte ******)&SUB_00000002) {
        FUN_0136e7e8(local_5c);
LAB_013a1dfc:
        uVar6 = FUN_0139dd94(param_1,param_2,param_3,param_4,param_5);
        return uVar6;
      }
      if (((uint)local_60 & 1) == 0) {
        return 0;
      }
      local_60 = (byte ******)*param_3;
      local_5c = (byte *****)param_3[1];
      local_58 = (byte ******)param_3[2];
      local_54 = (byte *****)param_3[3];
      local_50 = (byte *****)param_3[4];
      local_4c = (byte *****)param_3[5];
      local_48 = param_3[6];
      FUN_013a237c(&local_7c,&local_60,pppppbVar12,ppppppbVar5);
      local_78 = pppppbVar18;
      local_7c = 2;
      uVar6 = FUN_0139dd94(param_1,param_2,&local_7c,param_4,param_5);
      if ((uVar6 & 1) != 0) {
        return uVar6;
      }
      goto LAB_013a19a8;
    }
    if (iVar3 == 2) {
      if (iVar15 == 2 && iVar13 == 0) {
LAB_013a1dac:
        FUN_0139d778(&local_98,param_1,param_2,param_3);
      }
      else {
        if (*(int *)(param_2 + 0x248) == 2) goto LAB_013a20a4;
        FUN_0139daac(&local_60,param_1,iVar9,param_3);
        if (local_60 != (byte ******)&SUB_00000002) goto LAB_013a1ef4;
        FUN_0136e7e8(local_5c);
        FUN_0139d778(&local_98,param_1,param_2,param_3);
      }
    }
    else {
      FUN_0139d490(&local_60,piVar2,param_3);
      if (local_60 == (byte ******)&SUB_00000002) {
        FUN_0136e7e8(local_5c);
        goto LAB_013a1dac;
      }
LAB_013a1ef4:
      local_94 = local_5c;
      local_90 = (byte *****)local_58;
      local_8c = local_54;
      local_98 = local_60;
    }
    if (local_98 == (byte ******)0x0) {
      return 0;
    }
    uVar6 = (int)local_8c << 1 | 1;
    if ((uint)((int)local_8c * 2) < param_5) {
      *(byte **)(param_4 + (int)local_8c * 8) = (byte *)((int)local_94 + 1);
    }
    if (param_5 <= uVar6) {
      return 1;
    }
    goto LAB_013a1a80;
  }
  if ((uint)(*(int *)(*(int *)(param_1[0x301] + 0x13c) + 0x10) * 2) < param_5) {
    if (param_1[0x2b1] != 3) {
      uVar6 = FUN_0139dd94(param_1,param_2,param_3);
      return uVar6;
    }
    if (param_1[0x254] == 2) {
      if (*param_1 == 2 && param_1[1] == 0) goto LAB_013a1aa8;
      if (*(int *)(param_2 + 0x248) == 2) goto LAB_013a20a4;
      FUN_0139daac(&local_60,param_1,param_2 + 0xd8,param_3);
      if (local_60 == (byte ******)&SUB_00000002) {
        FUN_0136e7e8(local_5c);
        goto LAB_013a1aa8;
      }
    }
    else {
      FUN_0139d490(&local_60,param_1 + 0x144,param_3);
      if (local_60 == (byte ******)&SUB_00000002) {
        local_34 = local_5c;
        if (1 < *(byte *)local_5c) {
          local_98 = &local_34;
          local_94 = (byte *****)FUN_013c828c;
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_005733f0,&local_98,&DAT_01892790);
        }
        thunk_FUN_016d3fb4();
        goto LAB_013a1aa8;
      }
    }
    if (local_60 == (byte ******)&SUB_00000002) {
LAB_013a1aa8:
      uVar6 = FUN_0139dd94(param_1,param_2,param_3,param_4,param_5);
      return uVar6;
    }
    local_98 = (byte ******)local_5c;
    local_94 = (byte *****)local_58;
    pppppbVar12 = local_54;
    if (((uint)local_60 & 1) == 0) {
      return 0;
    }
    local_54 = (byte *****)param_3[3];
    bVar26 = (byte *****)((int)local_58 + 1) <= local_5c;
    bVar25 = local_5c == (byte *****)((int)local_58 + 1);
    if (!bVar26 || bVar25) {
      bVar26 = local_54 <= local_58;
      bVar25 = local_58 == (byte ******)local_54;
    }
    if (bVar26 && !bVar25) {
      local_34 = local_54;
LAB_013a217c:
      local_54 = (byte *****)&LAB_00fac484;
      local_58 = &local_34;
      local_5c = (byte *****)FUN_005ffff4;
      local_60 = (byte ******)&local_98;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_0057a181,&local_60,&DAT_01893ee0);
    }
    local_60 = (byte ******)0x2;
    local_5c = pppppbVar12;
    local_58 = (byte ******)param_3[2];
    local_50 = (byte *****)local_98;
    local_4c = local_94;
    local_48 = param_3[6];
    uVar6 = FUN_0139dd94(param_1,param_2,&local_60,param_4,param_5);
    if ((uVar6 & 1) != 0) {
      return uVar6;
    }
LAB_013a19a8:
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("should find a match",0x13,&DAT_018936d0);
  }
  if (param_1[0x254] == 2) {
    if (*param_1 != 2 || param_1[1] != 0) {
      if (*(int *)(param_2 + 0x248) == 2) {
LAB_013a20a4:
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01893548);
      }
      FUN_0139daac(&local_60,param_1,param_2 + 0xd8,param_3);
      if (local_60 != (byte ******)&SUB_00000002) goto LAB_013a1a2c;
      local_a8 = local_5c;
      if (1 < *(byte *)local_5c) {
        local_34 = (byte *****)&local_a8;
        local_30 = (byte *****)FUN_013c828c;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_005733f0,&local_34,&DAT_01892790);
      }
LAB_013a1a04:
      thunk_FUN_016d3fb4();
    }
    FUN_0139d778(&local_98,param_1,param_2,param_3);
    local_54 = local_8c;
    local_5c = local_94;
    local_60 = local_98;
  }
  else {
    FUN_0139d490(&local_60,param_1 + 0x144,param_3);
    if (local_60 == (byte ******)&SUB_00000002) {
      local_a8 = local_5c;
      if (1 < *(byte *)local_5c) {
        local_34 = (byte *****)&local_a8;
        local_30 = (byte *****)FUN_013c828c;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_005733f0,&local_34,&DAT_01892790);
      }
      goto LAB_013a1a04;
    }
LAB_013a1a2c:
    local_90 = (byte *****)local_58;
  }
  if (local_60 == (byte ******)0x0) {
    return 0;
  }
  uVar6 = (int)local_54 << 1 | 1;
  if ((uint)((int)local_54 * 2) < param_5) {
    *(byte **)(param_4 + (int)local_54 * 8) = (byte *)((int)local_5c + 1);
  }
  if (param_5 <= uVar6) {
    return 1;
  }
LAB_013a1a80:
  *(byte **)(param_4 + uVar6 * 4) = (byte *)((int)local_90 + 1);
  return 1;
}

