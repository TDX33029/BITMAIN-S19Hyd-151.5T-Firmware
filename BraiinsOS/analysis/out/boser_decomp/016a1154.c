// FUN_016a1154 @ 016a1154 size=3748 calls_out=13 calls_in=0
// strings: invalid match span

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_016a1154(int *param_1,int param_2,code ******param_3,code *****param_4,uint param_5)

{
  byte bVar1;
  code *****pppppcVar2;
  code *****pppppcVar3;
  code *****pppppcVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  code *****extraout_r1;
  code *****pppppcVar15;
  code *****extraout_r1_00;
  code *****extraout_r1_01;
  code *****pppppcVar16;
  int iVar17;
  int iVar18;
  code ******ppppppcVar19;
  int iVar20;
  code *****extraout_r3;
  code *****extraout_r3_00;
  code *****pppppcVar21;
  code *pcVar22;
  code *****pppppcVar23;
  code *****pppppcVar24;
  code *****pppppcVar25;
  code *****pppppcVar26;
  code *****pppppcVar27;
  code *****pppppcVar28;
  code *****pppppcVar29;
  bool bVar30;
  bool bVar31;
  uint local_d4;
  code *****local_ac;
  code *****local_a8;
  code *****local_a4;
  code *****local_a0;
  code *****local_9c;
  code *****local_98;
  code *****local_94;
  code *****local_90;
  code *****local_8c;
  code *****local_88;
  code *****local_84;
  code *****local_80;
  code *****local_7c;
  code *****local_78;
  code *****local_74;
  code *****local_5c;
  code *****local_58;
  code *****local_54;
  code *****local_50;
  code *****local_4c;
  code *****local_48;
  uint local_44;
  code *****local_40;
  code *****local_3c;
  code *****local_38;
  code *****local_34;
  code *****local_30;
  code *****local_2c;
  code *local_28;
  
  pppppcVar16 = *param_3;
  if (1 < (int)pppppcVar16 - 1U) {
    iVar20 = param_1[0x301];
    piVar11 = param_1 + 0x304;
    if (param_5 <= (uint)(*(int *)(*(int *)(iVar20 + 0x13c) + 0x10) * 2)) {
      local_a8 = param_3[5];
      local_ac = param_3[2];
      pppppcVar24 = param_3[3];
      pppppcVar21 = param_3[4];
      pppppcVar28 = *(code ******)(param_1[0x455] + 0x10);
      iVar20 = param_1[0x454] + (*(int *)(param_1[0x455] + 8) - 1U & 0xfffffff8) + 8;
      (*(code *)pppppcVar28)(&local_5c,iVar20,local_ac,pppppcVar24,pppppcVar21,local_a8);
      pppppcVar4 = extraout_r1;
      pppppcVar26 = pppppcVar28;
      pppppcVar16 = param_4;
      if (local_5c == (code *****)&DAT_00000001) {
        pppppcVar27 = (code *****)0x0;
        iVar13 = *param_1;
        iVar7 = param_1[1];
        iVar12 = param_1[0x254];
        iVar5 = *piVar11;
        pppppcVar15 = (code *****)param_1[0x305];
        iVar8 = param_1[0x408];
        bVar1 = *(byte *)(param_3 + 6);
        pppppcVar23 = pppppcVar15;
        pppppcVar25 = (code *****)0x0;
        pppppcVar26 = pppppcVar21;
        pppppcVar29 = local_a8;
        do {
          pppppcVar3 = local_54;
          pppppcVar2 = local_58;
          if (local_58 < pppppcVar27) {
LAB_016a1a84:
            if (iVar12 == 2) {
              if (iVar13 != 2 || iVar7 != 0) {
                if (*(int *)(param_2 + 0x248) == 2) goto LAB_016a1f24;
                FUN_0169e7e8(&local_5c,param_1,param_2 + 0xd8,param_3);
                if (local_5c != (code *****)0x2) goto LAB_016a1bf0;
                FUN_016c2dec(local_58);
              }
            }
            else {
              FUN_0169e238(&local_5c,param_1 + 0x144,param_3);
              if (local_5c != (code *****)0x2) {
LAB_016a1bf0:
                local_98 = local_50;
                local_9c = local_54;
                local_a0 = local_58;
                goto LAB_016a1818;
              }
              FUN_016c2dec(local_58);
            }
            FUN_0169e4e0(&local_a4,param_1,param_2,param_3);
            goto LAB_016a181c;
          }
          bVar31 = pppppcVar24 <= local_58;
          bVar30 = local_58 == pppppcVar24;
          if (!bVar31 || bVar30) {
            pppppcVar29 = (code *****)((int)local_58 + 1);
          }
          local_30 = local_58;
          if (!bVar31 || bVar30) {
            bVar31 = pppppcVar29 <= pppppcVar21;
            bVar30 = pppppcVar21 == pppppcVar29;
          }
          local_34 = pppppcVar21;
          if (bVar31 && !bVar30) {
            local_54 = (code *****)&local_40;
            local_40 = pppppcVar24;
            goto LAB_016a1e5c;
          }
          local_80 = local_58;
          pppppcVar23 = (code *****)((uint)pppppcVar23 & 0xffffff00 | (uint)bVar1);
          local_94 = (code *****)&DAT_00000001;
          local_8c = local_ac;
          local_88 = pppppcVar24;
          local_84 = pppppcVar21;
          local_7c = pppppcVar23;
          if (iVar8 == 2) {
            if (iVar5 == 2 && pppppcVar15 == (code *****)0x0) goto LAB_016a1fc8;
            if (*(int *)(param_2 + 200) == 2) goto LAB_016a1e74;
            FUN_016ab87c(&local_5c,piVar11,param_2 + 0x18,&local_94,pppppcVar25);
            pppppcVar4 = extraout_r1_00;
          }
          else {
            FUN_016ab12c(&local_5c,param_1 + 0x3a6,&local_94);
            pppppcVar4 = extraout_r1_01;
          }
          pppppcVar25 = local_54;
          pppppcVar16 = local_58;
          if (local_5c == (code *****)0x2) {
            if (((uint)local_58 & 1) == 0) goto LAB_016a1a84;
LAB_016a1a64:
            FUN_0169e4e0(&local_a4,param_1,param_2,param_3);
            goto LAB_016a181c;
          }
          if (((uint)local_5c & 1) == 0) {
            if (local_a8 <= pppppcVar26) break;
            if (pppppcVar2 == (code *****)&DAT_ffffffff) goto LAB_016a1f00;
          }
          else {
            bVar31 = pppppcVar24 <= local_a8;
            bVar30 = local_a8 == pppppcVar24;
            pppppcVar4 = local_a8;
            if (!bVar31 || bVar30) {
              pppppcVar4 = (code *****)((int)local_a8 + 1);
            }
            local_40 = local_54;
            if (!bVar31 || bVar30) {
              bVar31 = pppppcVar4 <= local_54;
              bVar30 = local_54 == pppppcVar4;
            }
            local_3c = local_a8;
            if (bVar31 && !bVar30) {
              local_34 = (code *****)&local_40;
              local_2c = (code *****)&local_38;
              local_38 = pppppcVar24;
              goto LAB_016a1ef4;
            }
            local_4c = local_54;
            local_d4 = local_d4 & 0xffffff00 | (uint)bVar1;
            local_5c = (code *****)0x2;
            local_54 = local_ac;
            local_50 = pppppcVar24;
            local_48 = local_a8;
            local_44 = local_d4;
            if (iVar12 == 2) {
              if (iVar13 == 2 && iVar7 == 0) goto LAB_016a1fe0;
              if (*(int *)(param_2 + 0x248) == 2) goto LAB_016a1f18;
              FUN_016aaa2c(&local_34,param_1,param_2 + 0xd8,&local_5c);
            }
            else {
              FUN_016a9b88(&local_34,param_1 + 0x144,&local_5c);
            }
            if (local_34 == (code *****)0x2) goto LAB_016a1a64;
            if (((uint)local_34 & 1) == 0) {
              if (local_2c < pppppcVar25) goto LAB_016a1f74;
              local_5c = (code *****)&DAT_00000001;
              goto LAB_016a1804;
            }
            if (pppppcVar2 == (code *****)&DAT_ffffffff) goto LAB_016a1f0c;
            pppppcVar27 = local_30;
          }
          (*(code *)pppppcVar28)(&local_5c,iVar20,local_ac,pppppcVar24,pppppcVar29,local_a8);
          pppppcVar4 = pppppcVar23;
          pppppcVar25 = pppppcVar3;
          pppppcVar26 = pppppcVar29;
        } while (local_5c != (code *****)0x0);
      }
      local_2c = pppppcVar4;
      local_5c = (code *****)0x0;
      pppppcVar25 = pppppcVar26;
LAB_016a1804:
      local_a0 = pppppcVar25;
      local_9c = local_2c;
      local_98 = pppppcVar16;
LAB_016a1818:
      local_a4 = local_5c;
LAB_016a181c:
      if (local_a4 == (code *****)0x0) {
        return 0;
      }
      uVar9 = (int)local_98 << 1 | 1;
      if ((uint)((int)local_98 * 2) < param_5) {
        param_4[(int)local_98 * 2] = (code ****)((int)local_a0 + 1);
      }
      if (uVar9 < param_5) {
        param_4[uVar9] = (code ****)((int)local_9c + 1);
        return 1;
      }
      return 1;
    }
    pppppcVar4 = param_3[1];
    local_a8 = param_3[5];
    local_ac = param_3[2];
    pppppcVar28 = param_3[3];
    pppppcVar26 = param_3[4];
    pcVar22 = *(code **)(param_1[0x455] + 0x10);
    iVar12 = param_1[0x454] + (*(int *)(param_1[0x455] + 8) - 1U & 0xfffffff8) + 8;
    (*pcVar22)(&local_5c,iVar12,local_ac,pppppcVar28,pppppcVar26,local_a8);
    if (local_5c != (code *****)&DAT_00000001) {
      return 0;
    }
    pppppcVar23 = (code *****)0x0;
    iVar17 = *param_1;
    iVar5 = param_1[1];
    piVar6 = param_1 + 0x144;
    iVar7 = param_1[0x254];
    iVar13 = param_2 + 0xd8;
    iVar8 = *piVar11;
    iVar14 = param_1[0x305];
    iVar18 = param_1[0x408];
    bVar1 = *(byte *)(param_3 + 6);
    pppppcVar24 = (code *****)0x0;
    pppppcVar21 = pppppcVar26;
    pppppcVar25 = local_a8;
    pppppcVar29 = param_4;
    while( true ) {
      pppppcVar15 = local_54;
      pppppcVar27 = local_58;
      if (local_58 < pppppcVar23) break;
      bVar31 = pppppcVar28 <= local_58;
      bVar30 = local_58 == pppppcVar28;
      if (!bVar31 || bVar30) {
        pppppcVar25 = (code *****)((int)local_58 + 1);
      }
      local_30 = local_58;
      if (!bVar31 || bVar30) {
        bVar31 = pppppcVar25 <= pppppcVar26;
        bVar30 = pppppcVar26 == pppppcVar25;
      }
      local_34 = pppppcVar26;
      if (bVar31 && !bVar30) {
        local_54 = (code *****)&local_a4;
        local_a4 = pppppcVar28;
LAB_016a1e5c:
        local_5c = (code *****)&local_34;
        goto LAB_016a1e68;
      }
      pppppcVar29 = (code *****)((uint)pppppcVar29 & 0xffffff00 | (uint)bVar1);
      local_80 = local_58;
      local_94 = (code *****)&DAT_00000001;
      local_8c = local_ac;
      local_88 = pppppcVar28;
      local_84 = pppppcVar26;
      local_7c = pppppcVar29;
      if (iVar18 == 2) {
        if (iVar8 == 2 && iVar14 == 0) {
LAB_016a1fc8:
          local_94 = (code *****)0x1;
          local_8c = local_ac;
          local_84 = local_34;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_004ce41d,0x8f,&DAT_01d07f24);
        }
        if (*(int *)(param_2 + 200) == 2) {
LAB_016a1e74:
          local_94 = (code *****)0x1;
          local_8c = local_ac;
          local_84 = local_34;
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d08104);
        }
        FUN_016ab87c(&local_5c,piVar11,param_2 + 0x18,&local_94,pppppcVar24);
      }
      else {
        FUN_016ab12c(&local_5c,param_1 + 0x3a6,&local_94);
      }
      pppppcVar24 = local_54;
      if (local_5c == (code *****)0x2) {
        if (((uint)local_58 & 1) == 0) break;
        goto LAB_016a1d7c;
      }
      if (((uint)local_5c & 1) == 0) {
        if (local_a8 <= pppppcVar21) {
          return 0;
        }
        if (pppppcVar27 == (code *****)&DAT_ffffffff) {
LAB_016a1f00:
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d07ef4);
        }
      }
      else {
        bVar31 = pppppcVar28 <= local_a8;
        bVar30 = local_a8 == pppppcVar28;
        pppppcVar21 = local_a8;
        if (!bVar31 || bVar30) {
          pppppcVar21 = (code *****)((int)local_a8 + 1);
        }
        local_a4 = local_54;
        if (!bVar31 || bVar30) {
          bVar31 = pppppcVar21 <= local_54;
          bVar30 = local_54 == pppppcVar21;
        }
        local_a0 = local_a8;
        if (bVar31 && !bVar30) {
          local_2c = (code *****)&local_40;
          local_34 = (code *****)&local_a4;
          local_40 = pppppcVar28;
LAB_016a1ef4:
          local_28 = FUN_012fd02c;
          local_30 = (code *****)FUN_0065fd28;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005a4e9e,&local_34,&DAT_01d08154);
        }
        local_4c = local_54;
        local_d4 = local_d4 & 0xffffff00 | (uint)bVar1;
        local_5c = (code *****)0x2;
        local_44 = local_d4;
        if (iVar7 == 2) {
          local_50 = pppppcVar28;
          if (iVar17 == 2 && iVar5 == 0) {
LAB_016a1fe0:
            local_5c = (code *****)0x2;
            local_54 = local_ac;
            local_48 = local_a8;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_004ce41d,0x8f,&DAT_01d07f14);
          }
          if (*(int *)(param_2 + 0x248) == 2) {
LAB_016a1f18:
            local_5c = (code *****)0x2;
            local_54 = local_ac;
            local_48 = local_a8;
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01d08084);
          }
          local_54 = local_ac;
          local_48 = local_a8;
          FUN_016aaa2c(&local_34,param_1,iVar13,&local_5c);
          pppppcVar21 = extraout_r3;
        }
        else {
          local_54 = local_ac;
          local_50 = pppppcVar28;
          local_48 = local_a8;
          FUN_016a9b88(&local_34,piVar6,&local_5c);
          pppppcVar21 = extraout_r3_00;
        }
        if (local_34 == (code *****)0x2) goto LAB_016a1d7c;
        if (((uint)local_34 & 1) == 0) {
          if (local_2c < pppppcVar24) {
LAB_016a1f74:
                    /* WARNING: Subroutine does not return */
            FUN_012fb100("invalid match span",0x25,&DAT_01d08164);
          }
          bVar31 = pppppcVar28 <= local_2c;
          bVar30 = local_2c == pppppcVar28;
          local_90 = local_2c;
          if (!bVar31 || bVar30) {
            pppppcVar21 = (code *****)((int)local_2c + 1);
          }
          local_94 = pppppcVar24;
          if (!bVar31 || bVar30) {
            bVar31 = pppppcVar21 <= pppppcVar24;
            bVar30 = pppppcVar24 == pppppcVar21;
          }
          if (!(!bVar31 || bVar30)) {
            local_34 = pppppcVar28;
            goto LAB_016a1fb4;
          }
          local_44 = CONCAT31(local_44._1_3_,bVar1);
          local_48 = local_2c;
          local_4c = pppppcVar24;
          local_5c = (code *****)0x2;
          param_3 = &local_5c;
          local_54 = local_ac;
          local_50 = pppppcVar28;
          goto LAB_016a1d7c;
        }
        if (pppppcVar27 == (code *****)&DAT_ffffffff) {
LAB_016a1f0c:
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d07f04);
        }
        pppppcVar23 = local_30;
      }
      (*pcVar22)(&local_5c,iVar12,local_ac,pppppcVar28,pppppcVar25,local_a8);
      pppppcVar24 = pppppcVar15;
      pppppcVar21 = pppppcVar25;
      if (local_5c == (code *****)0x0) {
        return 0;
      }
    }
    if (param_5 <= (uint)(*(int *)(*(int *)(iVar20 + 0x13c) + 0x10) * 2)) {
      if (iVar7 == 2) {
        if (iVar17 != 2 || iVar5 != 0) {
          if (*(int *)(param_2 + 0x248) != 2) {
            FUN_0169e7e8(&local_5c,param_1,iVar13,param_3);
            goto LAB_016a1ca0;
          }
          goto LAB_016a1f24;
        }
      }
      else {
        FUN_0169e238(&local_5c,piVar6,param_3);
LAB_016a1ca0:
        if (local_5c != (code *****)0x2) {
          local_88 = local_50;
          local_8c = local_54;
          local_90 = local_58;
          local_94 = local_5c;
          goto LAB_016a1d0c;
        }
        FUN_016c2dec(local_58);
      }
      FUN_0169e4e0(&local_94,param_1,param_2,param_3);
LAB_016a1d0c:
      if (local_94 == (code *****)0x0) {
        return 0;
      }
      uVar9 = (int)local_88 << 1 | 1;
      if ((uint)((int)local_88 * 2) < param_5) {
        param_4[(int)local_88 * 2] = (code ****)((int)local_90 + 1);
      }
      if (uVar9 < param_5) {
        param_4[uVar9] = (code ****)((int)local_8c + 1);
        return 1;
      }
      return 1;
    }
    if ((param_1[0x2b1] != 3) &&
       (*(int *)(param_1[0x2ba] + 0x128) == *(int *)(param_1[0x2ba] + 300))) goto LAB_016a1d7c;
    if (iVar7 == 2) {
      if (iVar17 == 2 && iVar5 == 0) goto LAB_016a1d7c;
      if (*(int *)(param_2 + 0x248) == 2) {
LAB_016a1f24:
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d08054);
      }
      FUN_0169e7e8(&local_5c,param_1,iVar13,param_3);
    }
    else {
      FUN_0169e238(&local_5c,piVar6,param_3);
    }
    pppppcVar23 = local_50;
    pppppcVar21 = local_54;
    pppppcVar24 = local_58;
    if (local_5c != (code *****)0x2) {
      if (((uint)local_5c & 1) == 0) {
        return 0;
      }
      ppppppcVar19 = &local_78;
      local_44 = CONCAT31(local_44._1_3_,bVar1);
      local_5c = pppppcVar16;
      local_58 = pppppcVar4;
      local_54 = local_ac;
      local_50 = pppppcVar28;
      local_4c = pppppcVar26;
      local_48 = local_a8;
      FUN_016a21c4(ppppppcVar19,&local_5c,pppppcVar24,pppppcVar21);
      local_74 = pppppcVar23;
      local_78 = (code *****)0x2;
LAB_016a19e0:
      uVar9 = FUN_0169ea74(param_1,param_2,ppppppcVar19,param_4,param_5);
      if ((uVar9 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c(&DAT_004ce55a,0x13,&DAT_01d0827c);
      }
      return 1;
    }
    FUN_016c2dec(local_58);
LAB_016a1d7c:
    uVar10 = FUN_0169ea74(param_1,param_2,param_3,param_4,param_5);
    return uVar10;
  }
  if ((uint)(*(int *)(*(int *)(param_1[0x301] + 0x13c) + 0x10) * 2) < param_5) {
    if (param_1[0x2b1] != 3) {
      uVar10 = FUN_0169ea74(param_1,param_2,param_3,param_4);
      return uVar10;
    }
    if (param_1[0x254] == 2) {
      if (!(*param_1 != 2 || param_1[1] != 0)) goto LAB_016a1d7c;
      if (*(int *)(param_2 + 0x248) == 2) goto LAB_016a1f24;
      FUN_0169e7e8(&local_5c,param_1,param_2 + 0xd8,param_3);
    }
    else {
      FUN_0169e238(&local_5c,param_1 + 0x144,param_3);
    }
    if (local_5c != (code *****)0x2) {
      if (((uint)local_5c & 1) == 0) {
        return 0;
      }
      pppppcVar16 = param_3[3];
      bVar31 = (code *****)((int)local_54 + 1) <= local_58;
      bVar30 = local_58 == (code *****)((int)local_54 + 1);
      local_90 = local_54;
      if (!bVar31 || bVar30) {
        bVar31 = pppppcVar16 <= local_54;
        bVar30 = local_54 == pppppcVar16;
      }
      local_94 = local_58;
      if (bVar31 && !bVar30) {
        local_34 = pppppcVar16;
LAB_016a1fb4:
        local_54 = (code *****)&local_34;
        local_5c = (code *****)&local_94;
LAB_016a1e68:
        local_50 = (code *****)FUN_012fd02c;
        local_58 = (code *****)FUN_0065fd28;
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_005a4e9e,&local_5c,&DAT_01d08154);
      }
      local_48 = local_54;
      ppppppcVar19 = &local_5c;
      local_4c = local_58;
      local_5c = (code *****)0x2;
      local_44 = CONCAT31(local_44._1_3_,*(undefined1 *)(param_3 + 6));
      local_58 = local_50;
      local_54 = param_3[2];
      local_50 = pppppcVar16;
      goto LAB_016a19e0;
    }
    FUN_016c2dec(local_58);
    goto LAB_016a1d7c;
  }
  if (param_1[0x254] == 2) {
    if (*param_1 != 2 || param_1[1] != 0) {
      if (*(int *)(param_2 + 0x248) == 2) goto LAB_016a1f24;
      FUN_0169e7e8(&local_5c,param_1,param_2 + 0xd8,param_3);
      goto LAB_016a1894;
    }
  }
  else {
    FUN_0169e238(&local_5c,param_1 + 0x144,param_3);
LAB_016a1894:
    if (local_5c != (code *****)0x2) {
      local_88 = local_50;
      local_8c = local_54;
      local_90 = local_58;
      local_94 = local_5c;
      goto LAB_016a18dc;
    }
    FUN_016c2dec(local_58);
  }
  FUN_0169e4e0(&local_94,param_1,param_2,param_3);
LAB_016a18dc:
  if (local_94 == (code *****)0x0) {
    return 0;
  }
  uVar9 = (int)local_88 << 1 | 1;
  if ((uint)((int)local_88 * 2) < param_5) {
    param_4[(int)local_88 * 2] = (code ****)((int)local_90 + 1);
  }
  if (uVar9 < param_5) {
    param_4[uVar9] = (code ****)((int)local_8c + 1);
    return 1;
  }
  return 1;
}

