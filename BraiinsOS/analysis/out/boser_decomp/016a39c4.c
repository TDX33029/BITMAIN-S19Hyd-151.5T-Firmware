// FUN_016a39c4 @ 016a39c4 size=3216 calls_out=13 calls_in=0
// strings: invalid match span

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_016a39c4(int *param_1,int param_2,uint *****param_3,uint param_4,uint param_5)

{
  byte bVar1;
  uint ****ppppuVar2;
  undefined4 *****pppppuVar3;
  uint ****ppppuVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint ****ppppuVar8;
  int iVar9;
  uint ****ppppuVar10;
  int iVar11;
  uint *****pppppuVar12;
  int iVar13;
  undefined4 *****pppppuVar14;
  uint ****ppppuVar15;
  uint ****ppppuVar16;
  uint ****ppppuVar17;
  int iVar18;
  uint ****ppppuVar19;
  uint unaff_r11;
  code *pcVar20;
  bool bVar21;
  bool bVar22;
  uint ****local_88;
  uint ****local_84;
  uint ****local_80;
  uint ****local_7c;
  uint ****local_78;
  uint ****local_74;
  undefined4 *****local_5c;
  uint ****local_58;
  undefined4 *****local_54;
  uint ****local_50;
  uint ****local_4c;
  uint ****local_48;
  uint local_44;
  uint ****local_40;
  uint ****local_3c;
  uint ****local_38;
  undefined4 *****local_34;
  uint ****local_30;
  undefined4 *****local_2c;
  uint ****local_28;
  
  ppppuVar8 = *param_3;
  if (1 < (int)ppppuVar8 - 1U) {
    iVar9 = param_1[0x301];
    if (param_5 <= (uint)(*(int *)(*(int *)(iVar9 + 0x13c) + 0x10) * 2)) {
      ppppuVar16 = param_3[3];
      pcVar20 = *(code **)(param_1[0x305] + 0x10);
      ppppuVar8 = param_3[2];
      ppppuVar10 = param_3[4];
      ppppuVar4 = param_3[5];
      iVar9 = param_1[0x304] + (*(int *)(param_1[0x305] + 8) - 1U & 0xfffffff8) + 8;
      (*pcVar20)(&local_5c,iVar9,ppppuVar8,ppppuVar16,ppppuVar10,ppppuVar4);
      if (local_5c == (undefined4 *****)0x1) {
        iVar11 = *param_1;
        iVar5 = param_1[1];
        iVar18 = param_1[0x254];
        uVar6 = (uint)*(byte *)(param_3 + 6);
        pppppuVar14 = (undefined4 *****)(uint ****)0x0;
        ppppuVar17 = ppppuVar10;
        do {
          pppppuVar3 = local_54;
          ppppuVar19 = local_58;
          bVar22 = ppppuVar16 <= local_54;
          bVar21 = local_54 == (undefined4 *****)ppppuVar16;
          local_3c = (uint ****)local_54;
          if (!bVar22 || bVar21) {
            bVar22 = (uint ****)((int)local_54 + 1U) <= ppppuVar10;
            bVar21 = ppppuVar10 == (uint ****)((int)local_54 + 1U);
          }
          local_40 = ppppuVar10;
          if (bVar22 && !bVar21) {
LAB_016a4078:
            local_34 = &local_40;
            local_2c = &local_38;
            local_38 = ppppuVar16;
            goto LAB_016a40b0;
          }
          local_48 = (uint ****)local_54;
          unaff_r11 = unaff_r11 & 0xffffff00 | uVar6;
          local_5c = (undefined4 *****)0x1;
          local_54 = (undefined4 *****)ppppuVar8;
          local_50 = ppppuVar16;
          local_4c = ppppuVar10;
          local_44 = unaff_r11;
          if (iVar18 == 2) {
            if (iVar11 == 2 && iVar5 == 0) goto LAB_016a4624;
            if (*(int *)(param_2 + 0x248) == 2) goto LAB_016a4548;
            FUN_016ab87c(&local_34,param_1 + 0xa2,param_2 + 0x198,&local_5c,pppppuVar14);
          }
          else {
            FUN_016ab12c(&local_34,param_1 + 0x1f2,&local_5c);
          }
          pppppuVar14 = local_2c;
          ppppuVar15 = local_30;
          if (local_34 == (undefined4 *****)0x2) {
            if (((uint)local_30 & 1) != 0) {
              FUN_0169e4e0(&local_88,param_1,param_2,param_3);
              goto LAB_016a3e3c;
            }
            if (iVar18 == 2) {
              if (iVar11 == 2 && iVar5 == 0) goto LAB_016a4344;
              if (*(int *)(param_2 + 0x248) == 2) goto LAB_016a4554;
              FUN_0169e7e8(&local_5c,param_1,param_2 + 0xd8,param_3);
            }
            else {
              FUN_0169e238(&local_5c,param_1 + 0x144,param_3);
            }
            if (local_5c == (undefined4 *****)0x2) {
              FUN_016c2dec(local_58);
LAB_016a4344:
              FUN_0169e4e0(&local_88,param_1,param_2,param_3);
            }
            else {
              local_7c = local_50;
              local_80 = (uint ****)local_54;
              local_84 = local_58;
LAB_016a4388:
              local_88 = (uint ****)local_5c;
            }
            goto LAB_016a3e3c;
          }
          if (((uint)local_34 & 1) != 0) {
            bVar22 = ppppuVar16 <= ppppuVar4;
            bVar21 = ppppuVar4 == ppppuVar16;
            if (!bVar22 || bVar21) {
              bVar22 = (uint ****)((int)ppppuVar4 + 1U) <= local_2c;
              bVar21 = local_2c == (undefined4 *****)((int)ppppuVar4 + 1U);
            }
            local_40 = (uint ****)local_2c;
            local_3c = ppppuVar4;
            if (bVar22 && !bVar21) goto LAB_016a4078;
            local_5c = (undefined4 *****)0x2;
            local_4c = (uint ****)local_2c;
            local_58 = local_30;
            local_48 = ppppuVar4;
            local_44 = uVar6;
            if (iVar18 == 2) {
              if (iVar11 == 2 && iVar5 == 0) {
                local_54 = (undefined4 *****)ppppuVar8;
                local_50 = ppppuVar16;
                    /* WARNING: Subroutine does not return */
                FUN_012fb100(&DAT_004ce464,0x91,&DAT_01d07f34);
              }
              if (*(int *)(param_2 + 0x248) == 2) {
                local_54 = (undefined4 *****)ppppuVar8;
                local_50 = ppppuVar16;
                    /* WARNING: Subroutine does not return */
                FUN_012fb0cc(&DAT_01d08064);
              }
              local_54 = (undefined4 *****)ppppuVar8;
              local_50 = ppppuVar16;
              FUN_016a4894(&local_34,param_1,param_2 + 0xd8,&local_5c);
            }
            else {
              local_54 = (undefined4 *****)ppppuVar8;
              local_50 = ppppuVar16;
              FUN_016a4804(&local_34,param_1 + 0x144,&local_5c);
            }
            if (local_34 == (undefined4 *****)0x2) {
              FUN_016c2dec(local_30);
              goto LAB_016a4344;
            }
            if (((uint)local_34 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb100(&DAT_004ce324,0xcf,&DAT_01d07cac);
            }
            if (local_2c < pppppuVar14) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb100("invalid match span",0x25,&DAT_01d08164);
            }
            local_80 = (uint ****)local_2c;
            local_5c = (undefined4 *****)0x1;
            local_7c = ppppuVar15;
            local_84 = (uint ****)pppppuVar14;
            goto LAB_016a4388;
          }
          if (ppppuVar4 <= ppppuVar17) break;
          ppppuVar17 = (uint ****)((int)ppppuVar19 + 1);
          if ((uint ****)0xfffffffe < ppppuVar19) goto LAB_016a453c;
          (*pcVar20)(&local_5c,iVar9,ppppuVar8,ppppuVar16,ppppuVar17,ppppuVar4);
          pppppuVar14 = pppppuVar3;
        } while (local_5c != (undefined4 *****)0x0);
      }
      local_88 = (uint ****)0x0;
LAB_016a3e3c:
      if (local_88 == (uint ****)0x0) {
        return 0;
      }
      uVar6 = (int)local_7c << 1 | 1;
      if ((uint)((int)local_7c * 2) < param_5) {
        *(int *)(param_4 + (int)local_7c * 8) = (int)local_84 + 1;
      }
      if (uVar6 < param_5) {
        *(int *)(param_4 + uVar6 * 4) = (int)local_80 + 1;
        return 1;
      }
      return 1;
    }
    ppppuVar4 = param_3[1];
    pcVar20 = *(code **)(param_1[0x305] + 0x10);
    ppppuVar19 = param_3[3];
    ppppuVar10 = param_3[2];
    ppppuVar16 = param_3[4];
    ppppuVar17 = param_3[5];
    iVar18 = param_1[0x304] + (*(int *)(param_1[0x305] + 8) - 1U & 0xfffffff8) + 8;
    (*pcVar20)(&local_5c,iVar18,ppppuVar10,ppppuVar19,ppppuVar16,ppppuVar17);
    if (local_5c != (undefined4 *****)0x1) {
      return 0;
    }
    iVar13 = *param_1;
    iVar11 = param_1[1];
    iVar5 = param_1[0x254];
    bVar1 = *(byte *)(param_3 + 6);
    pppppuVar14 = (undefined4 *****)(uint ****)0x0;
    ppppuVar15 = ppppuVar16;
    uVar6 = param_4;
    do {
      pppppuVar3 = local_54;
      ppppuVar2 = local_58;
      bVar22 = ppppuVar19 <= local_54;
      bVar21 = local_54 == (undefined4 *****)ppppuVar19;
      local_84 = (uint ****)local_54;
      if (!bVar22 || bVar21) {
        bVar22 = (uint ****)((int)local_54 + 1U) <= ppppuVar16;
        bVar21 = ppppuVar16 == (uint ****)((int)local_54 + 1U);
      }
      local_88 = ppppuVar16;
      if (bVar22 && !bVar21) {
        local_2c = &local_40;
        local_34 = &local_88;
        local_40 = ppppuVar19;
LAB_016a40b0:
        local_28 = (uint ****)FUN_012fd02c;
        local_30 = (uint ****)FUN_0065fd28;
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_005a4e9e,&local_34,&DAT_01d08154);
      }
      local_48 = (uint ****)local_54;
      uVar6 = uVar6 & 0xffffff00 | (uint)bVar1;
      local_5c = (undefined4 *****)0x1;
      local_54 = (undefined4 *****)ppppuVar10;
      local_50 = ppppuVar19;
      local_4c = ppppuVar16;
      local_44 = uVar6;
      if (iVar5 == 2) {
        if (iVar13 == 2 && iVar11 == 0) {
LAB_016a4624:
          local_5c = (undefined4 *****)0x1;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_004ce464,0x91,&DAT_01d07f54);
        }
        if (*(int *)(param_2 + 0x248) == 2) {
LAB_016a4548:
          local_5c = (undefined4 *****)0x1;
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d08094);
        }
        FUN_016ab87c(&local_34,param_1 + 0xa2,param_2 + 0x198,&local_5c,pppppuVar14);
      }
      else {
        FUN_016ab12c(&local_34,param_1 + 0x1f2,&local_5c);
      }
      if (local_34 == (undefined4 *****)0x2) {
        if (((uint)local_30 & 1) != 0) goto LAB_016a4118;
        if (param_5 <= (uint)(*(int *)(*(int *)(iVar9 + 0x13c) + 0x10) * 2)) {
          if (iVar5 == 2) {
            if (iVar13 != 2 || iVar11 != 0) {
              if (*(int *)(param_2 + 0x248) != 2) {
                FUN_0169e7e8(&local_5c,param_1,param_2 + 0xd8,param_3);
                goto LAB_016a43a8;
              }
              goto LAB_016a4554;
            }
          }
          else {
            FUN_0169e238(&local_5c,param_1 + 0x144,param_3);
LAB_016a43a8:
            if (local_5c != (undefined4 *****)0x2) {
              local_28 = local_50;
              local_2c = local_54;
              local_30 = local_58;
              local_34 = local_5c;
              goto LAB_016a4418;
            }
            FUN_016c2dec(local_58);
          }
          FUN_0169e4e0(&local_34,param_1,param_2,param_3);
LAB_016a4418:
          if (local_34 == (undefined4 *****)0x0) {
            return 0;
          }
          uVar6 = (int)local_28 << 1 | 1;
          if ((uint)((int)local_28 * 2) < param_5) {
            *(uint *)(param_4 + (int)local_28 * 8) = (int)local_30 + 1;
          }
          if (uVar6 < param_5) {
            *(int *)(param_4 + uVar6 * 4) = (int)local_2c + 1;
            return 1;
          }
          return 1;
        }
        if ((param_1[0x2b1] != 3) &&
           (*(int *)(param_1[0x2ba] + 0x128) == *(int *)(param_1[0x2ba] + 300))) goto LAB_016a4118;
        if (iVar5 == 2) {
          if (iVar13 == 2 && iVar11 == 0) goto LAB_016a4118;
          if (*(int *)(param_2 + 0x248) == 2) goto LAB_016a4554;
          FUN_0169e7e8(&local_5c,param_1,param_2 + 0xd8,param_3);
        }
        else {
          FUN_0169e238(&local_5c,param_1 + 0x144,param_3);
        }
        ppppuVar2 = local_50;
        pppppuVar14 = local_54;
        ppppuVar15 = local_58;
        if (local_5c == (undefined4 *****)0x2) {
          FUN_016c2dec(local_58);
          goto LAB_016a4118;
        }
        if (((uint)local_5c & 1) == 0) {
          return 0;
        }
        pppppuVar12 = &local_78;
        local_44 = CONCAT31(local_44._1_3_,bVar1);
        local_5c = (undefined4 *****)ppppuVar8;
        local_58 = ppppuVar4;
        local_54 = (undefined4 *****)ppppuVar10;
        local_50 = ppppuVar19;
        local_4c = ppppuVar16;
        local_48 = ppppuVar17;
        FUN_016a21c4(pppppuVar12,&local_5c,ppppuVar15,pppppuVar14);
        local_74 = ppppuVar2;
        local_78 = (uint ****)0x2;
        goto LAB_016a3ff8;
      }
      if (((uint)local_34 & 1) != 0) {
        bVar22 = ppppuVar19 <= ppppuVar17;
        bVar21 = ppppuVar17 == ppppuVar19;
        if (!bVar22 || bVar21) {
          bVar22 = (uint ****)((int)ppppuVar17 + 1U) <= local_2c;
          bVar21 = local_2c == (undefined4 *****)((int)ppppuVar17 + 1U);
        }
        local_34 = local_2c;
        if (!(!bVar22 || bVar21)) {
          local_88 = ppppuVar19;
          local_30 = ppppuVar17;
          goto LAB_016a45b4;
        }
        local_58 = local_30;
        local_4c = (uint ****)local_2c;
        local_5c = (undefined4 *****)0x2;
        local_44 = CONCAT31(local_44._1_3_,bVar1);
        param_3 = (uint *****)&local_5c;
        local_54 = (undefined4 *****)ppppuVar10;
        local_50 = ppppuVar19;
        local_48 = ppppuVar17;
        local_30 = ppppuVar17;
        goto LAB_016a4118;
      }
      if (ppppuVar17 <= ppppuVar15) {
        return 0;
      }
      ppppuVar15 = (uint ****)((int)ppppuVar2 + 1);
      if ((uint ****)0xfffffffe < ppppuVar2) {
LAB_016a453c:
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d07f44);
      }
      (*pcVar20)(&local_5c,iVar18,ppppuVar10,ppppuVar19,ppppuVar15,ppppuVar17);
      pppppuVar14 = pppppuVar3;
      if (local_5c == (undefined4 *****)0x0) {
        return 0;
      }
    } while( true );
  }
  if ((uint)(*(int *)(*(int *)(param_1[0x301] + 0x13c) + 0x10) * 2) < param_5) {
    if (param_1[0x2b1] != 3) {
      uVar7 = FUN_0169ea74(param_1,param_2,param_3,param_4);
      return uVar7;
    }
    if (param_1[0x254] == 2) {
      if (*param_1 == 2 && param_1[1] == 0) goto LAB_016a4118;
      if (*(int *)(param_2 + 0x248) == 2) goto LAB_016a4554;
      FUN_0169e7e8(&local_5c,param_1,param_2 + 0xd8,param_3);
    }
    else {
      FUN_0169e238(&local_5c,param_1 + 0x144,param_3);
    }
    if (local_5c != (undefined4 *****)0x2) {
      if (((uint)local_5c & 1) == 0) {
        return 0;
      }
      ppppuVar8 = param_3[3];
      bVar22 = (uint ****)((int)local_54 + 1U) <= local_58;
      bVar21 = local_58 == (uint ****)((int)local_54 + 1U);
      if (!bVar22 || bVar21) {
        bVar22 = ppppuVar8 <= local_54;
        bVar21 = local_54 == (undefined4 *****)ppppuVar8;
      }
      local_30 = (uint ****)local_54;
      local_34 = (undefined4 *****)local_58;
      if (bVar22 && !bVar21) {
        local_88 = ppppuVar8;
LAB_016a45b4:
        local_50 = (uint ****)FUN_012fd02c;
        local_58 = (uint ****)FUN_0065fd28;
        local_5c = &local_34;
        local_54 = &local_88;
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_005a4e9e,&local_5c,&DAT_01d08154);
      }
      local_44 = CONCAT31(local_44._1_3_,*(undefined1 *)(param_3 + 6));
      pppppuVar12 = (uint *****)&local_5c;
      local_4c = local_58;
      local_48 = (uint ****)local_54;
      local_5c = (undefined4 *****)0x2;
      local_58 = local_50;
      local_54 = (undefined4 *****)param_3[2];
      local_50 = ppppuVar8;
LAB_016a3ff8:
      uVar6 = FUN_0169ea74(param_1,param_2,pppppuVar12,param_4,param_5);
      if ((uVar6 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c(&DAT_004ce55a,0x13,&DAT_01d0827c);
      }
      return 1;
    }
    FUN_016c2dec(local_58);
LAB_016a4118:
    uVar7 = FUN_0169ea74(param_1,param_2,param_3,param_4,param_5);
    return uVar7;
  }
  if (param_1[0x254] == 2) {
    if (*param_1 != 2 || param_1[1] != 0) {
      if (*(int *)(param_2 + 0x248) == 2) {
LAB_016a4554:
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d08054);
      }
      FUN_0169e7e8(&local_5c,param_1,param_2 + 0xd8,param_3);
      goto LAB_016a3eb4;
    }
  }
  else {
    FUN_0169e238(&local_5c,param_1 + 0x144,param_3);
LAB_016a3eb4:
    if (local_5c != (undefined4 *****)0x2) {
      local_28 = local_50;
      local_2c = local_54;
      local_30 = local_58;
      local_34 = local_5c;
      goto LAB_016a3efc;
    }
    FUN_016c2dec(local_58);
  }
  FUN_0169e4e0(&local_34,param_1,param_2,param_3);
LAB_016a3efc:
  if (local_34 == (undefined4 *****)0x0) {
    return 0;
  }
  uVar6 = (int)local_28 << 1 | 1;
  if ((uint)((int)local_28 * 2) < param_5) {
    *(uint *)(param_4 + (int)local_28 * 8) = (int)local_30 + 1;
  }
  if (uVar6 < param_5) {
    *(int *)(param_4 + uVar6 * 4) = (int)local_2c + 1;
    return 1;
  }
  return 1;
}

