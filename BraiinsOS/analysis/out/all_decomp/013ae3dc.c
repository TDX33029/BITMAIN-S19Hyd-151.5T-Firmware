// FUN_013ae3dc @ 013ae3dc size=11712 calls_out=11 calls_in=12
// strings: cannot find with empty needles

/* WARNING: Type propagation algorithm not settling */

void FUN_013ae3dc(undefined4 *param_1,uint *param_2,int *param_3)

{
  byte bVar1;
  byte bVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint **ppuVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  uint **ppuVar9;
  uint extraout_r2;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  uint **ppuVar15;
  byte *pbVar16;
  uint uVar17;
  byte ***pppbVar18;
  uint **unaff_r7;
  uint uVar19;
  undefined4 uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint **ppuVar24;
  bool bVar25;
  bool bVar26;
  ulonglong uVar27;
  undefined4 local_94;
  uint **local_90;
  undefined4 local_8c;
  uint **local_88;
  undefined4 local_80;
  int local_6c;
  uint **local_68;
  byte ****local_60;
  int *local_5c;
  byte ****local_58;
  uint local_54;
  uint **local_50;
  uint local_4c;
  int iStack_48;
  uint **local_40;
  uint local_3c;
  uint local_38;
  byte ***local_34;
  uint **local_30;
  uint *local_2c;
  undefined1 *local_28;
  
  ppuVar15 = (uint **)param_3[4];
  ppuVar9 = (uint **)param_3[5];
  if (ppuVar9 < ppuVar15) {
LAB_013ae400:
    *param_1 = 0;
    return;
  }
  if ((1 < *param_3 - 1U) && ((char)param_2[0x13] != '\x02')) {
    if ((char)param_3[6] == '\0') {
      uVar10 = param_2[100];
      uVar27 = FUN_0136d07c(param_2,param_3);
      uVar22 = (uint)(uVar27 >> 0x20);
      if ((uVar27 & 1) != 0) goto LAB_013aedf8;
      iVar23 = param_3[2];
      ppuVar24 = (uint **)param_3[3];
      (**(code **)(param_2[0x11] + 0x10))
                (&local_34,param_2[0x10] + (*(int *)(param_2[0x11] + 8) - 1U & 0xfffffff8) + 8,
                 iVar23,ppuVar24,ppuVar15,ppuVar9);
      if (local_34 == (byte ***)0x0) goto LAB_013ae400;
      if (uVar10 == 0) {
        local_60 = (byte ****)*param_3;
        local_5c = (int *)param_3[1];
        local_58 = (byte ****)param_3[2];
        local_54 = param_3[3];
        local_50 = (uint **)param_3[4];
        local_4c = param_3[5];
        iStack_48 = param_3[6];
        FUN_0137d0ac(&local_60,local_30,local_4c);
        uVar27 = FUN_0136d07c(param_2,&local_60);
        uVar22 = (uint)(uVar27 >> 0x20);
        if ((uVar27 & 1) != 0) goto LAB_013aef34;
      }
      if (local_30 < ppuVar9) {
        puVar3 = (uint *)((int)ppuVar24 + iVar23);
        local_80 = 0;
        unaff_r7 = local_30;
        do {
          uVar21 = *param_2;
          uVar12 = param_2[0x15];
          do {
            uVar22 = *(uint *)(uVar12 + (uVar22 + *(byte *)((int)param_2 +
                                                           *(byte *)((int)unaff_r7 + iVar23) + 0x5c)
                                        ) * 4);
            if (uVar22 <= uVar21) break;
            if (ppuVar9 <= (uint **)((int)unaff_r7 + 3)) break;
            uVar22 = *(uint *)(uVar12 + (uVar22 + *(byte *)((int)param_2 +
                                                           *(byte *)((int)unaff_r7 + iVar23 + 1) +
                                                           0x5c)) * 4);
            if (uVar22 <= uVar21) {
              unaff_r7 = (uint **)((int)unaff_r7 + 1);
              break;
            }
            uVar22 = *(uint *)(uVar12 + (uVar22 + *(byte *)((int)param_2 +
                                                           *(byte *)((int)unaff_r7 + iVar23 + 2) +
                                                           0x5c)) * 4);
            if (uVar22 <= uVar21) {
              unaff_r7 = (uint **)((int)unaff_r7 + 2);
              break;
            }
            uVar22 = *(uint *)(uVar12 + (uVar22 + *(byte *)((int)param_2 +
                                                           *(byte *)((int)unaff_r7 + iVar23 + 3) +
                                                           0x5c)) * 4);
            if (uVar22 <= uVar21) {
              unaff_r7 = (uint **)((int)unaff_r7 + 3);
              break;
            }
            unaff_r7 = unaff_r7 + 1;
          } while (unaff_r7 < ppuVar9);
          if (uVar21 < uVar22) {
LAB_013b0308:
            ppuVar15 = (uint **)((int)unaff_r7 + 1);
          }
          else {
            if (uVar22 == 0) {
LAB_013b0490:
              if (((uVar22 != 0) && (param_2[2] <= uVar22)) && (uVar22 <= param_2[3])) {
                local_94 = 0;
                if (param_2[0x5e] != 1) {
                  uVar4 = param_2[0x5a];
                  uVar12 = uVar22 - param_2[2] >> (param_2[0x57] & 0x1f);
                  uVar21 = uVar12 << 1;
                  if (uVar4 <= uVar12 * 2) goto LAB_013b118c;
                  uVar21 = uVar21 | 1;
                  if (uVar4 <= uVar21) goto LAB_013b1198;
                  uVar12 = *(uint *)(param_2[0x59] + uVar12 * 8);
                  uVar21 = *(uint *)(param_2[0x59] + uVar21 * 4);
                  if ((CARRY4(uVar21,uVar12)) || (param_2[0x5d] < uVar21 + uVar12))
                  goto LAB_013b0f10;
                  if (uVar21 == 0) goto LAB_013b11a8;
                  local_94 = *(undefined4 *)(param_2[0x5c] + uVar12 * 4);
                }
                local_80 = 1;
                local_88 = unaff_r7;
                if ((uVar22 < param_2[4]) || (param_2[5] < uVar22)) goto LAB_013b0308;
                uVar21 = param_2[0x61];
                local_34 = (byte ***)(uVar22 - param_2[4] >> (param_2[0x57] & 0x1f));
                if (uVar21 == 0) goto LAB_013b1148;
                puVar11 = (uint *)param_2[0x60];
                if ((byte ***)*puVar11 <= local_34) goto LAB_013b0e20;
                uVar12 = uVar21 * 4;
                uVar4 = (int)local_34 << 3 | 4;
                if (uVar21 << 2 <= uVar4) goto LAB_013b115c;
                pppbVar18 = (byte ***)(uint)*(byte *)((int)puVar11 + uVar4);
                uVar21 = (int)local_34 << 3 | 5;
                if ((CARRY4(uVar21,(uint)pppbVar18)) || (uVar12 < uVar21 + (int)pppbVar18))
                goto LAB_013b0d64;
                if ((byte ***)0x3 < pppbVar18) goto LAB_013b10cc;
                puVar8 = (undefined1 *)((int)puVar11 + uVar21);
                ppuVar15 = (uint **)((int)unaff_r7 + 1);
                switch(pppbVar18) {
                case (byte ***)0x0:
                  goto switchD_013ae77c_caseD_0;
                case (byte ***)0x1:
                  if (ppuVar24 < ppuVar15) {
                    /* WARNING: Subroutine does not return */
                    FUN_00faa36c(ppuVar15,ppuVar24,ppuVar24,&DAT_01893760);
                  }
                  uVar27 = FUN_013b13f0(*puVar8,(byte *)((int)ppuVar15 + iVar23),puVar3);
                  break;
                case (byte ***)0x2:
                  if (ppuVar24 < ppuVar15) goto LAB_013b10ec;
                  uVar27 = FUN_013ac848(*puVar8,puVar8[1],(byte *)((int)ppuVar15 + iVar23),puVar3);
                  break;
                case (byte ***)0x3:
                  if (ppuVar24 < ppuVar15) goto LAB_013b1104;
                  local_40 = (uint **)CONCAT31(local_40._1_3_,*puVar8);
                  local_58 = &local_34;
                  local_5c = &local_6c;
                  local_6c = CONCAT31(local_6c._1_3_,puVar8[1]);
                  local_60 = (byte ****)&local_40;
                  local_34._1_3_ = (undefined3)((uint)local_34 >> 8);
                  local_34 = (byte ***)CONCAT31(local_34._1_3_,puVar8[2]);
                  uVar27 = FUN_005f70a0(&local_60,(byte *)((int)ppuVar15 + iVar23),puVar3);
                }
                if ((uVar27 & 1) != 0) {
                  ppuVar15 = (uint **)((int)(uVar27 >> 0x20) - iVar23);
                  local_80 = 1;
                  goto LAB_013b030c;
                }
                local_80 = 1;
                break;
              }
              if (((uVar22 == 0) || (uVar22 < param_2[4])) || (param_2[5] < uVar22)) {
                if (uVar22 == 0) {
                  param_1[1] = local_94;
                  param_1[2] = local_88;
                  *param_1 = local_80;
                  return;
                }
                if (ppuVar24 <= unaff_r7) {
                    /* WARNING: Subroutine does not return */
                  FUN_00faa4a4(unaff_r7,ppuVar24,&DAT_01893800);
                }
                bVar2 = *(byte *)((int)unaff_r7 + iVar23);
                goto LAB_013b0a34;
              }
              uVar21 = param_2[0x61];
              local_34 = (byte ***)(uVar22 - param_2[4] >> (param_2[0x57] & 0x1f));
              if (uVar21 == 0) goto LAB_013b1148;
              puVar11 = (uint *)param_2[0x60];
              if ((byte ***)*puVar11 <= local_34) goto LAB_013b0e20;
              uVar12 = uVar21 * 4;
              uVar4 = (int)local_34 << 3 | 4;
              if (uVar21 << 2 <= uVar4) goto LAB_013b115c;
              pppbVar18 = (byte ***)(uint)*(byte *)((int)puVar11 + uVar4);
              uVar21 = (int)local_34 << 3 | 5;
              if ((CARRY4(uVar21,(uint)pppbVar18)) || (uVar12 < uVar21 + (int)pppbVar18))
              goto LAB_013b0d64;
              if ((byte ***)0x3 < pppbVar18) {
LAB_013b10cc:
                local_34 = pppbVar18;
                goto LAB_013b0f6c;
              }
              pbVar7 = (byte *)((int)puVar11 + uVar21);
              ppuVar15 = (uint **)((int)unaff_r7 + 1);
              switch(pppbVar18) {
              case (byte ***)0x0:
                goto switchD_013ae77c_caseD_0;
              case (byte ***)0x1:
                if (ppuVar24 < ppuVar15) {
                    /* WARNING: Subroutine does not return */
                  FUN_00faa36c(ppuVar15,ppuVar24,ppuVar24,&DAT_01893760);
                }
                if (ppuVar24 <= ppuVar15) goto LAB_013b0958;
                uVar21 = (uint)*pbVar7;
                uVar12 = (int)ppuVar24 - (int)ppuVar15;
                puVar13 = (uint *)((int)ppuVar15 + iVar23);
                puVar11 = puVar13;
                if (uVar12 < 4) {
                  while (uVar21 != (byte)*puVar11) {
                    puVar11 = (uint *)((int)puVar11 + 1);
                    uVar12 = uVar12 - 1;
                    if (uVar12 == 0) goto LAB_013b0958;
                  }
                }
                else {
                  uVar4 = uVar21 * 0x1010101;
                  if ((~(0x1010100 - (*puVar13 ^ uVar4) | *puVar13 ^ uVar4) & 0x80808080) == 0) {
                    puVar11 = (uint *)(((uint)puVar13 & 0xfffffffc) + 4);
                    if (uVar12 < 9) {
                      if (puVar3 <= puVar11) goto LAB_013b0958;
                      pbVar7 = (byte *)((int)ppuVar24 + ((((uint)puVar13 & 3) - 5) - (int)unaff_r7))
                      ;
                      while (uVar21 != (byte)*puVar11) {
                        puVar11 = (uint *)((int)puVar11 + 1);
                        pbVar7 = pbVar7 + -1;
                        if (pbVar7 == (byte *)0x0) goto LAB_013b0958;
                      }
                    }
                    else {
                      for (; puVar11 <= puVar3 + -2; puVar11 = puVar11 + 2) {
                        uVar12 = ~(0x1010100 - (*puVar11 ^ uVar4) | *puVar11 ^ uVar4);
                        bVar25 = (uVar12 & 0x80808080) != 0;
                        if (!bVar25) {
                          uVar12 = ~(0x1010100 - (puVar11[1] ^ uVar4) | puVar11[1] ^ uVar4);
                        }
                        if (bVar25 || (uVar12 & 0x80808080) != 0) break;
                      }
                      if (puVar3 <= puVar11) goto LAB_013b0958;
                      while (uVar21 != (byte)*puVar11) {
                        puVar11 = (uint *)((int)puVar11 + 1);
                        if (puVar11 == puVar3) goto LAB_013b0958;
                      }
                    }
                  }
                  else {
                    while (uVar21 != (byte)*puVar11) {
                      puVar11 = (uint *)((int)puVar11 + 1);
                      uVar12 = uVar12 - 1;
                      if (uVar12 == 0) goto LAB_013b0958;
                    }
                  }
                }
                ppuVar15 = (uint **)((int)puVar11 + ((int)ppuVar15 - (int)puVar13));
                goto LAB_013b030c;
              case (byte ***)0x2:
                if (ppuVar24 < ppuVar15) {
LAB_013b10ec:
                    /* WARNING: Subroutine does not return */
                  FUN_00faa36c((byte *)((int)unaff_r7 + 1),ppuVar24,ppuVar24,&DAT_01893770);
                }
                uVar27 = FUN_013ac848(*pbVar7,pbVar7[1],(byte *)((int)ppuVar15 + iVar23),puVar3);
                if ((uVar27 & 1) == 0) goto LAB_013b0958;
                iVar5 = (int)(uVar27 >> 0x20) - ((int)ppuVar15 + iVar23);
                break;
              case (byte ***)0x3:
                if (ppuVar24 < ppuVar15) {
LAB_013b1104:
                    /* WARNING: Subroutine does not return */
                  FUN_00faa36c((byte *)((int)unaff_r7 + 1),ppuVar24,ppuVar24,&DAT_01893780);
                }
                local_40 = (uint **)CONCAT31(local_40._1_3_,*pbVar7);
                local_58 = &local_34;
                local_5c = &local_6c;
                local_6c = CONCAT31(local_6c._1_3_,pbVar7[1]);
                local_60 = (byte ****)&local_40;
                local_34._1_3_ = (undefined3)((uint)local_34 >> 8);
                local_34 = (byte ***)CONCAT31(local_34._1_3_,pbVar7[2]);
                uVar27 = FUN_005f70a0(&local_60,(byte *)((int)ppuVar15 + iVar23),puVar3);
                if ((uVar27 & 1) == 0) goto LAB_013b0958;
                iVar5 = (int)(uVar27 >> 0x20) - ((int)ppuVar15 + iVar23);
              }
              ppuVar15 = (uint **)((int)ppuVar15 + iVar5);
            }
            else {
              bVar26 = uVar22 <= param_2[6];
              bVar25 = param_2[6] == uVar22;
              if (!bVar26 || bVar25) {
                bVar26 = param_2[7] <= uVar22;
                bVar25 = uVar22 == param_2[7];
              }
              if (bVar26 && !bVar25) goto LAB_013b0490;
              (**(code **)(param_2[0x11] + 0x10))
                        (&local_6c,
                         param_2[0x10] + (*(int *)(param_2[0x11] + 8) - 1U & 0xfffffff8) + 8,iVar23,
                         ppuVar24,unaff_r7,ppuVar9);
              ppuVar15 = local_68;
              if (local_6c != 1) {
                *param_1 = local_80;
                param_1[1] = local_94;
                param_1[2] = local_88;
                return;
              }
              if (local_68 <= unaff_r7) {
                goto LAB_013b0308;
              }
              if (uVar10 != 0) goto LAB_013b030c;
              local_60 = (byte ****)*param_3;
              local_5c = (int *)param_3[1];
              local_58 = (byte ****)param_3[2];
              local_54 = param_3[3];
              local_50 = (uint **)param_3[4];
              local_4c = param_3[5];
              iStack_48 = param_3[6];
              bVar26 = (uint **)(local_4c + 1) <= local_68;
              bVar25 = local_68 == (uint **)(local_4c + 1);
              local_40 = local_68;
              if (!bVar26 || bVar25) {
                bVar26 = local_54 <= local_4c;
                bVar25 = local_4c == local_54;
              }
              local_3c = local_4c;
              if (bVar26 && !bVar25) {
                local_2c = &local_38;
                local_34 = (byte ***)&local_40;
                local_28 = &LAB_00fac484;
                local_30 = (uint **)FUN_005ffff4;
                local_38 = local_54;
                    /* WARNING: Subroutine does not return */
                FUN_00faa478(&DAT_0057a181,&local_34,&DAT_01893ee0);
              }
              local_50 = local_68;
              uVar27 = FUN_0136d07c(param_2,&local_60);
              uVar22 = (uint)(uVar27 >> 0x20);
              if ((uVar27 & 1) != 0) {
                *param_1 = 2;
                param_1[1] = uVar22;
                return;
              }
            }
          }
LAB_013b030c:
          unaff_r7 = ppuVar15;
        } while (ppuVar15 < ppuVar9);
      }
      else {
        local_80 = 0;
      }
LAB_013b0958:
      if (ppuVar24 <= ppuVar9) {
        uVar22 = FUN_013b13b4(param_2,uVar22);
        if (uVar22 == 0) goto LAB_013b0c98;
        bVar26 = uVar22 <= param_2[2];
        bVar25 = param_2[2] == uVar22;
        puVar3 = (uint *)0x13b09dc;
        if (!bVar26 || bVar25) {
          bVar26 = param_2[3] <= uVar22;
          bVar25 = uVar22 == param_2[3];
          puVar3 = param_2;
        }
        param_2 = puVar3;
        if (bVar26 && !bVar25) goto LAB_013b0c98;
LAB_013b0a54:
        local_94 = FUN_013b12e0(param_2);
        local_80 = 1;
        local_88 = ppuVar24;
LAB_013b0c98:
        *param_1 = local_80;
        param_1[1] = local_94;
        param_1[2] = local_88;
        return;
      }
      uVar10 = (uint)*(byte *)((int)ppuVar9 + iVar23);
      uVar21 = param_2[0x16];
      uVar22 = uVar22 + *(byte *)((int)param_2 + uVar10 + 0x5c);
      if (uVar21 <= uVar22) goto LAB_013b1170;
      uVar22 = *(uint *)(param_2[0x15] + uVar22 * 4);
      if (uVar22 != 0) {
        bVar26 = uVar22 <= param_2[2];
        bVar25 = param_2[2] == uVar22;
        if (!bVar26 || bVar25) {
          bVar26 = param_2[3] <= uVar22;
          bVar25 = uVar22 == param_2[3];
        }
        if (!bVar26 || bVar25) {
          ppuVar24 = ppuVar9;
          goto LAB_013b0a54;
        }
      }
      if (uVar22 == 0) {
        goto LAB_013b0c98;
      }
      if (param_2[1] != uVar22) goto LAB_013b0c98;
      goto LAB_013b0b38;
    }
    uVar10 = param_2[100];
    uVar27 = FUN_0136d07c(param_2,param_3);
    uVar22 = (uint)(uVar27 >> 0x20);
    if ((uVar27 & 1) != 0) {
LAB_013aedf8:
      *param_1 = 2;
      param_1[1] = uVar22;
      return;
    }
    iVar23 = param_3[2];
    ppuVar24 = (uint **)param_3[3];
    (**(code **)(param_2[0x11] + 0x10))
              (&local_34,param_2[0x10] + (*(int *)(param_2[0x11] + 8) - 1U & 0xfffffff8) + 8,iVar23,
               ppuVar24,ppuVar15,ppuVar9);
    ppuVar15 = local_30;
    if (local_34 == (byte ***)0x0) goto LAB_013ae400;
    if (uVar10 == 0) {
      local_60 = (byte ****)*param_3;
      local_5c = (int *)param_3[1];
      local_58 = (byte ****)param_3[2];
      local_54 = param_3[3];
      local_50 = (uint **)param_3[4];
      local_4c = param_3[5];
      iStack_48 = param_3[6];
      FUN_0137d0ac(&local_60,local_30,local_4c);
      uVar27 = FUN_0136d07c(param_2,&local_60);
      uVar22 = (uint)(uVar27 >> 0x20);
      if ((uVar27 & 1) != 0) {
LAB_013aef34:
        param_1[1] = uVar22;
        *param_1 = 2;
        return;
      }
    }
    if (ppuVar15 < ppuVar9) {
      puVar3 = (uint *)((int)ppuVar24 + iVar23);
LAB_013afe00:
      uVar21 = *param_2;
      uVar12 = param_2[0x15];
      do {
        uVar22 = *(uint *)(uVar12 + (uVar22 + *(byte *)((int)param_2 +
                                                       *(byte *)((int)ppuVar15 + iVar23) + 0x5c)) *
                                    4);
        if (uVar22 <= uVar21) break;
        if (ppuVar9 <= (uint **)((int)ppuVar15 + 3)) break;
        uVar22 = *(uint *)(uVar12 + (uVar22 + *(byte *)((int)param_2 +
                                                       *(byte *)((int)ppuVar15 + iVar23 + 1) + 0x5c)
                                    ) * 4);
        if (uVar22 <= uVar21) {
          ppuVar15 = (uint **)((int)ppuVar15 + 1);
          break;
        }
        uVar22 = *(uint *)(uVar12 + (uVar22 + *(byte *)((int)param_2 +
                                                       *(byte *)((int)ppuVar15 + iVar23 + 2) + 0x5c)
                                    ) * 4);
        if (uVar22 <= uVar21) {
          ppuVar15 = (uint **)((int)ppuVar15 + 2);
          break;
        }
        uVar22 = *(uint *)(uVar12 + (uVar22 + *(byte *)((int)param_2 +
                                                       *(byte *)((int)ppuVar15 + iVar23 + 3) + 0x5c)
                                    ) * 4);
        if (uVar22 <= uVar21) {
          ppuVar15 = (uint **)((int)ppuVar15 + 3);
          break;
        }
        ppuVar15 = ppuVar15 + 1;
      } while (ppuVar15 < ppuVar9);
      if (uVar21 < uVar22) {
LAB_013afdf4:
        ppuVar6 = (uint **)((int)ppuVar15 + 1);
      }
      else {
        if (uVar22 != 0) {
          bVar26 = uVar22 <= param_2[6];
          bVar25 = param_2[6] == uVar22;
          if (!bVar26 || bVar25) {
            bVar26 = param_2[7] <= uVar22;
            bVar25 = uVar22 == param_2[7];
          }
          if (!bVar26 || bVar25) {
            (**(code **)(param_2[0x11] + 0x10))
                      (&local_34,param_2[0x10] + (*(int *)(param_2[0x11] + 8) - 1U & 0xfffffff8) + 8
                       ,iVar23,ppuVar24,ppuVar15,ppuVar9);
            ppuVar6 = local_30;
            if (local_34 != (byte ***)0x1) {
              *param_1 = 0;
              return;
            }
            if (local_30 <= ppuVar15) goto LAB_013afdf4;
            if (uVar10 != 0) goto LAB_013afdf8;
            local_60 = (byte ****)*param_3;
            local_5c = (int *)param_3[1];
            local_58 = (byte ****)param_3[2];
            local_54 = param_3[3];
            local_50 = (uint **)param_3[4];
            local_4c = param_3[5];
            iStack_48 = param_3[6];
            FUN_0137d0ac(&local_60,local_30,local_4c);
            uVar27 = FUN_0136d07c(param_2,&local_60);
            uVar22 = (uint)(uVar27 >> 0x20);
            if ((uVar27 & 1) != 0) goto LAB_013aef34;
            goto LAB_013afdf8;
          }
        }
        if (uVar22 != 0) {
          bVar26 = uVar22 <= param_2[2];
          bVar25 = param_2[2] == uVar22;
          if (!bVar26 || bVar25) {
            bVar26 = param_2[3] <= uVar22;
            bVar25 = uVar22 == param_2[3];
          }
          if (!bVar26 || bVar25) {
            uVar20 = FUN_013b12e0(param_2,uVar22);
            param_1[1] = uVar20;
            param_1[2] = ppuVar15;
            *param_1 = 1;
            return;
          }
        }
        if (((uVar22 == 0) || (uVar22 < param_2[4])) || (param_2[5] < uVar22)) {
          if (uVar22 == 0) goto LAB_013b0d2c;
          if (ppuVar24 <= ppuVar15) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(ppuVar15,ppuVar24,&DAT_01893800);
          }
          uVar10 = (uint)*(byte *)((int)ppuVar15 + iVar23);
          ppuVar9 = ppuVar15;
          goto LAB_013b0b38;
        }
        uVar21 = param_2[0x61];
        local_34 = (byte ***)(uVar22 - param_2[4] >> (param_2[0x57] & 0x1f));
        if (uVar21 == 0) goto LAB_013b1148;
        puVar11 = (uint *)param_2[0x60];
        if ((byte ***)*puVar11 <= local_34) goto LAB_013b0e20;
        uVar12 = uVar21 * 4;
        uVar4 = (int)local_34 << 3 | 4;
        if (uVar21 << 2 <= uVar4) goto LAB_013b115c;
        pppbVar18 = (byte ***)(uint)*(byte *)((int)puVar11 + uVar4);
        uVar21 = (int)local_34 << 3 | 5;
        if ((CARRY4(uVar21,(uint)pppbVar18)) || (uVar12 < uVar21 + (int)pppbVar18))
        goto LAB_013b0d64;
        if ((byte ***)0x3 < pppbVar18) goto LAB_013b0f30;
        pbVar7 = (byte *)((int)puVar11 + uVar21);
        ppuVar6 = (uint **)((int)ppuVar15 + 1);
        switch(pppbVar18) {
        case (byte ***)0x0:
          goto switchD_013ae77c_caseD_0;
        case (byte ***)0x1:
          if (ppuVar24 < ppuVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(ppuVar6,ppuVar24,ppuVar24,&DAT_01893760);
          }
          if (ppuVar24 <= ppuVar6) goto joined_r0x013b0e58;
          uVar21 = (uint)*pbVar7;
          uVar12 = (int)ppuVar24 - (int)ppuVar6;
          puVar13 = (uint *)((int)ppuVar6 + iVar23);
          puVar11 = puVar13;
          if (uVar12 < 4) {
            while (uVar21 != (byte)*puVar11) {
              puVar11 = (uint *)((int)puVar11 + 1);
              uVar12 = uVar12 - 1;
              if (uVar12 == 0) goto joined_r0x013b0e58;
            }
          }
          else {
            uVar4 = uVar21 * 0x1010101;
            if ((~(0x1010100 - (*puVar13 ^ uVar4) | *puVar13 ^ uVar4) & 0x80808080) == 0) {
              puVar11 = (uint *)(((uint)puVar13 & 0xfffffffc) + 4);
              if (uVar12 < 9) {
                if (puVar3 <= puVar11) goto joined_r0x013b0e58;
                pbVar7 = (byte *)((int)ppuVar24 + ((((uint)puVar13 & 3) - 5) - (int)ppuVar15));
                while (uVar21 != (byte)*puVar11) {
                  puVar11 = (uint *)((int)puVar11 + 1);
                  pbVar7 = pbVar7 + -1;
                  if (pbVar7 == (byte *)0x0) goto joined_r0x013b0e58;
                }
              }
              else {
                for (; puVar11 <= puVar3 + -2; puVar11 = puVar11 + 2) {
                  uVar12 = ~(0x1010100 - (*puVar11 ^ uVar4) | *puVar11 ^ uVar4);
                  bVar25 = (uVar12 & 0x80808080) != 0;
                  if (!bVar25) {
                    uVar12 = ~(0x1010100 - (puVar11[1] ^ uVar4) | puVar11[1] ^ uVar4);
                  }
                  if (bVar25 || (uVar12 & 0x80808080) != 0) break;
                }
                if (puVar3 <= puVar11) goto joined_r0x013b0e58;
                while (uVar21 != (byte)*puVar11) {
                  puVar11 = (uint *)((int)puVar11 + 1);
                  if (puVar11 == puVar3) goto joined_r0x013b0e58;
                }
              }
            }
            else {
              while (uVar21 != (byte)*puVar11) {
                puVar11 = (uint *)((int)puVar11 + 1);
                uVar12 = uVar12 - 1;
                if (uVar12 == 0) goto joined_r0x013b0e58;
              }
            }
          }
          iVar5 = (int)puVar11 - (int)puVar13;
          goto LAB_013b0238;
        case (byte ***)0x2:
          if (ppuVar24 < ppuVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(ppuVar6,ppuVar24,ppuVar24,&DAT_01893770);
          }
          uVar27 = FUN_013ac848(*pbVar7,pbVar7[1],(byte *)((int)ppuVar6 + iVar23),puVar3);
          break;
        case (byte ***)0x3:
          if (ppuVar24 < ppuVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(ppuVar6,ppuVar24,ppuVar24,&DAT_01893780);
          }
          local_40 = (uint **)CONCAT31(local_40._1_3_,*pbVar7);
          local_58 = &local_34;
          local_5c = &local_6c;
          local_6c = CONCAT31(local_6c._1_3_,pbVar7[1]);
          local_60 = (byte ****)&local_40;
          local_34._1_3_ = (undefined3)((uint)local_34 >> 8);
          local_34 = (byte ***)CONCAT31(local_34._1_3_,pbVar7[2]);
          uVar27 = FUN_005f70a0(&local_60,(byte *)((int)ppuVar6 + iVar23),puVar3);
        }
        if ((uVar27 & 1) == 0) goto joined_r0x013b0e58;
        iVar5 = (int)(uVar27 >> 0x20) - (int)((int)ppuVar6 + iVar23);
LAB_013b0238:
        ppuVar6 = (uint **)((int)ppuVar6 + iVar5);
      }
LAB_013afdf8:
      ppuVar15 = ppuVar6;
      if (ppuVar9 <= ppuVar6) goto joined_r0x013b0e58;
      goto LAB_013afe00;
    }
joined_r0x013b0e58:
    if (ppuVar24 <= ppuVar9) {
      uVar22 = FUN_013b13b4(param_2,uVar22);
      uVar12 = extraout_r2;
      if (((uVar22 != 0) && (param_2[2] <= uVar22)) && (uVar22 <= param_2[3])) {
LAB_013b0e9c:
        uVar20 = FUN_013b12e0(param_2);
        *param_1 = 1;
        param_1[1] = uVar20;
        param_1[2] = ppuVar24;
        return;
      }
LAB_013b0ebc:
      *param_1 = 0;
      param_1[1] = uVar12;
      param_1[2] = ppuVar24;
      return;
    }
    uVar10 = (uint)*(byte *)((int)ppuVar9 + iVar23);
    uVar12 = (uint)*(byte *)((int)param_2 + uVar10 + 0x5c);
    uVar21 = param_2[0x16];
    uVar22 = uVar22 + uVar12;
    if (uVar21 <= uVar22) goto LAB_013b1170;
    uVar22 = *(uint *)(param_2[0x15] + uVar22 * 4);
    if (uVar22 != 0) {
      uVar12 = param_2[2];
      bVar26 = uVar22 <= uVar12;
      bVar25 = uVar12 == uVar22;
      if (!bVar26 || bVar25) {
        uVar12 = param_2[3];
        bVar26 = uVar12 <= uVar22;
        bVar25 = uVar22 == uVar12;
      }
      if (!bVar26 || bVar25) {
        ppuVar24 = ppuVar9;
        goto LAB_013b0e9c;
      }
    }
    if ((uVar22 == 0) || (uVar12 = param_2[1], uVar12 != uVar22)) goto LAB_013b0ebc;
    goto LAB_013b0b34;
  }
  if ((char)param_3[6] != '\0') {
    uVar27 = FUN_0136d07c(param_2,param_3);
    uVar22 = (uint)(uVar27 >> 0x20);
    if ((uVar27 & 1) != 0) {
      *param_1 = 2;
      param_1[1] = uVar22;
      return;
    }
    if (ppuVar9 <= ppuVar15) {
      ppuVar24 = (uint **)param_3[3];
      if (ppuVar9 < ppuVar24) goto LAB_013aee28;
LAB_013afcd0:
      ppuVar9 = ppuVar24;
      uVar10 = param_2[0x16];
      uVar22 = *(byte *)((int)param_2 + 0x15b) + uVar22 + 1;
      if (uVar10 <= uVar22) {
LAB_013b1180:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar22,uVar10,&DAT_018ae9c4);
      }
      uVar21 = param_2[0x15];
      uVar20 = 0;
      uVar22 = *(uint *)(uVar21 + uVar22 * 4);
      ppuVar24 = ppuVar9;
      if ((uVar22 == 0) || (uVar12 = param_2[2], uVar22 < uVar12)) goto LAB_013afd18;
      if (param_2[3] < uVar22) goto LAB_013afd70;
LAB_013afd5c:
      uVar21 = 0;
      uVar20 = 1;
      ppuVar24 = ppuVar9;
      if (param_2[0x5e] != 1) {
        uVar4 = param_2[0x5a];
        uVar22 = uVar22 - uVar12 >> (param_2[0x57] & 0x1f);
        uVar21 = uVar22 << 1;
        if (uVar4 <= uVar22 * 2) {
LAB_013b118c:
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar21,uVar4,&DAT_01894868);
        }
        uVar21 = uVar21 | 1;
        if (uVar4 <= uVar21) {
LAB_013b1198:
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar21,uVar4,&DAT_01894878);
        }
        uVar22 = *(uint *)(param_2[0x59] + uVar22 * 8);
        uVar10 = *(uint *)(param_2[0x59] + uVar21 * 4);
        if ((CARRY4(uVar10,uVar22)) || (param_2[0x5d] < uVar10 + uVar22)) {
LAB_013b0f10:
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c();
        }
        if (uVar10 != 0) {
          uVar20 = *(undefined4 *)(param_2[0x5c] + uVar22 * 4);
          *param_1 = 1;
          param_1[1] = uVar20;
          param_1[2] = ppuVar9;
          return;
        }
LAB_013b11a8:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(0,0,&DAT_01894818);
      }
LAB_013afd70:
      *param_1 = uVar20;
      param_1[1] = uVar21;
      param_1[2] = ppuVar24;
      return;
    }
    iVar23 = param_3[2];
    ppuVar24 = (uint **)param_3[3];
    uVar10 = param_2[0x15];
    puVar3 = (uint *)((int)ppuVar24 + iVar23);
    uVar21 = *param_2;
LAB_013ae644:
    do {
      uVar22 = *(uint *)(uVar10 + (uVar22 + *(byte *)((int)param_2 +
                                                     *(byte *)((int)ppuVar15 + iVar23) + 0x5c)) * 4)
      ;
      if (uVar21 < uVar22) {
        unaff_r7 = (uint **)((int)ppuVar15 + 3);
        if (ppuVar9 <= unaff_r7) goto LAB_013ae6cc;
        ppuVar6 = (uint **)((int)ppuVar15 + 1);
        uVar22 = *(uint *)(uVar10 + (uVar22 + *(byte *)((int)param_2 +
                                                       *(byte *)((int)ppuVar6 + iVar23) + 0x5c)) * 4
                          );
        if (uVar22 <= uVar21) {
LAB_013ae6c8:
          ppuVar15 = ppuVar6;
          goto LAB_013ae6cc;
        }
        ppuVar6 = (uint **)((int)ppuVar15 + 2);
        uVar22 = *(uint *)(uVar10 + (uVar22 + *(byte *)((int)param_2 +
                                                       *(byte *)((int)ppuVar6 + iVar23) + 0x5c)) * 4
                          );
        if (uVar22 <= uVar21) goto LAB_013ae6c8;
        uVar22 = *(uint *)(uVar10 + (uVar22 + *(byte *)((int)param_2 +
                                                       *(byte *)((int)unaff_r7 + iVar23) + 0x5c)) *
                                    4);
        if (uVar21 < uVar22) {
          ppuVar15 = ppuVar15 + 1;
          if (ppuVar9 <= ppuVar15) goto LAB_013ae6cc;
          goto LAB_013ae644;
        }
        if (uVar22 <= uVar21) goto LAB_013ae6d4;
LAB_013ae638:
        ppuVar15 = (uint **)((int)unaff_r7 + 1);
      }
      else {
LAB_013ae6cc:
        unaff_r7 = ppuVar15;
        if (uVar21 < uVar22) goto LAB_013ae638;
LAB_013ae6d4:
        if (uVar22 != 0) {
          bVar26 = uVar22 <= param_2[6];
          bVar25 = param_2[6] == uVar22;
          if (!bVar26 || bVar25) {
            bVar26 = param_2[7] <= uVar22;
            bVar25 = uVar22 == param_2[7];
          }
          if (bVar26 && !bVar25) goto LAB_013ae7d4;
          if ((uVar22 < param_2[4]) || (param_2[5] < uVar22)) goto LAB_013ae638;
          uVar19 = param_2[0x61];
          local_34 = (byte ***)(uVar22 - param_2[4] >> (param_2[0x57] & 0x1f));
          if (uVar19 == 0) goto LAB_013b1148;
          puVar11 = (uint *)param_2[0x60];
          if ((byte ***)*puVar11 <= local_34) goto LAB_013b0e20;
          uVar4 = (int)local_34 << 3 | 4;
          uVar12 = uVar19 * 4;
          if (uVar19 << 2 <= uVar4) goto LAB_013b115c;
          pppbVar18 = (byte ***)(uint)*(byte *)((int)puVar11 + uVar4);
          uVar4 = (int)local_34 << 3 | 5;
          if ((CARRY4(uVar4,(uint)pppbVar18)) || (uVar12 < uVar4 + (int)pppbVar18))
          goto LAB_013b0d64;
          if ((byte ***)0x3 < pppbVar18) {
LAB_013b0f50:
            local_34 = pppbVar18;
            goto LAB_013b0f6c;
          }
          pbVar7 = (byte *)((int)puVar11 + uVar4);
          ppuVar15 = (uint **)((int)unaff_r7 + 1);
          switch(pppbVar18) {
          case (byte ***)0x0:
            goto switchD_013ae77c_caseD_0;
          case (byte ***)0x2:
            if (ppuVar24 < ppuVar15) goto LAB_013b0fb0;
            pbVar16 = (byte *)((int)ppuVar15 + iVar23);
            uVar27 = FUN_013ac848(*pbVar7,pbVar7[1],pbVar16,puVar3);
            goto LAB_013ae9c0;
          case (byte ***)0x3:
            if (ppuVar24 < ppuVar15) goto LAB_013b0f80;
            bVar2 = *pbVar7;
            bVar1 = pbVar7[1];
            local_34._1_3_ = (undefined3)((uint)local_34 >> 8);
            local_34 = (byte ***)CONCAT31(local_34._1_3_,pbVar7[2]);
            goto LAB_013ae998;
          }
          if (ppuVar24 < ppuVar15) goto LAB_013b0f98;
          if (ppuVar24 <= ppuVar15) break;
          uVar12 = (uint)*pbVar7;
          puVar11 = (uint *)((int)ppuVar15 + iVar23);
          if ((uint)((int)ppuVar24 - (int)ppuVar15) < 4) {
            while (uVar12 != *(byte *)((int)ppuVar15 + iVar23)) {
              ppuVar15 = (uint **)((int)ppuVar15 + 1);
              if (ppuVar24 == ppuVar15) goto joined_r0x013b0d5c;
            }
LAB_013aec90:
            puVar13 = (uint *)((int)ppuVar15 + iVar23);
          }
          else {
            uVar4 = uVar12 * 0x1010101;
            if ((~(0x1010100 - (*puVar11 ^ uVar4) | *puVar11 ^ uVar4) & 0x80808080) != 0) {
              while (uVar12 != *(byte *)((int)ppuVar15 + iVar23)) {
                ppuVar15 = (uint **)((int)ppuVar15 + 1);
                if (ppuVar24 == ppuVar15) goto joined_r0x013b0d5c;
              }
              goto LAB_013aec90;
            }
            puVar13 = (uint *)(((uint)puVar11 & 0xfffffffc) + 4);
            if ((uint)((int)ppuVar24 - (int)ppuVar15) < 9) {
              if (puVar3 <= puVar13) break;
              iVar5 = (((uint)puVar11 & 3) - (int)unaff_r7) + -5;
              while (uVar12 != *(byte *)(iVar23 - iVar5)) {
                iVar5 = iVar5 + -1;
                if ((byte *)((int)ppuVar24 + iVar5) == (byte *)0x0) goto joined_r0x013b0d5c;
              }
              puVar13 = (uint *)(iVar23 - iVar5);
            }
            else {
              for (; puVar13 <= puVar3 + -2; puVar13 = puVar13 + 2) {
                uVar19 = ~(0x1010100 - (*puVar13 ^ uVar4) | *puVar13 ^ uVar4);
                bVar25 = (uVar19 & 0x80808080) == 0;
                if (bVar25) {
                  uVar19 = ~(0x1010100 - (puVar13[1] ^ uVar4) | puVar13[1] ^ uVar4);
                }
                if (!bVar25 || (uVar19 & 0x80808080) != 0) break;
              }
              if (puVar3 <= puVar13) break;
              while (uVar12 != (byte)*puVar13) {
                puVar13 = (uint *)((int)puVar13 + 1);
                if (puVar13 == puVar3) goto joined_r0x013b0d5c;
              }
            }
          }
          iVar5 = (int)puVar13 - (int)puVar11;
          goto LAB_013aec9c;
        }
LAB_013ae7d4:
        if (uVar22 != 0) {
          bVar26 = uVar22 <= param_2[2];
          bVar25 = param_2[2] == uVar22;
          if (!bVar26 || bVar25) {
            bVar26 = param_2[3] <= uVar22;
            bVar25 = uVar22 == param_2[3];
          }
          if (!bVar26 || bVar25) {
            uVar20 = FUN_013b12e0(param_2,uVar22);
            param_1[1] = uVar20;
            param_1[2] = unaff_r7;
            *param_1 = 1;
            return;
          }
        }
        if (((uVar22 == 0) || (uVar22 < param_2[4])) || (param_2[5] < uVar22)) {
          if (uVar22 == 0) {
LAB_013b0d2c:
            *param_1 = 0;
            return;
          }
          if (ppuVar24 <= unaff_r7) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(unaff_r7,ppuVar24,&DAT_01893800);
          }
          bVar2 = *(byte *)((int)unaff_r7 + iVar23);
          goto LAB_013b0a34;
        }
        uVar19 = param_2[0x61];
        local_34 = (byte ***)(uVar22 - param_2[4] >> (param_2[0x57] & 0x1f));
        if (uVar19 == 0) goto LAB_013b1148;
        puVar11 = (uint *)param_2[0x60];
        if ((byte ***)*puVar11 <= local_34) goto LAB_013b0e20;
        uVar4 = (int)local_34 << 3 | 4;
        uVar12 = uVar19 * 4;
        if (uVar19 << 2 <= uVar4) goto LAB_013b115c;
        pppbVar18 = (byte ***)(uint)*(byte *)((int)puVar11 + uVar4);
        uVar4 = (int)local_34 << 3 | 5;
        if ((CARRY4(uVar4,(uint)pppbVar18)) || (uVar12 < uVar4 + (int)pppbVar18)) goto LAB_013b0d64;
        if ((byte ***)0x3 < pppbVar18) goto LAB_013b0f50;
        pbVar7 = (byte *)((int)puVar11 + uVar4);
        ppuVar15 = (uint **)((int)unaff_r7 + 1);
        switch(pppbVar18) {
        case (byte ***)0x0:
          goto switchD_013ae77c_caseD_0;
        case (byte ***)0x1:
          if (ppuVar24 < ppuVar15) {
LAB_013b0f98:
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c((byte *)((int)unaff_r7 + 1),ppuVar24,ppuVar24,&DAT_01893760);
          }
          if (ppuVar24 <= ppuVar15) goto joined_r0x013b0d5c;
          uVar12 = (uint)*pbVar7;
          puVar11 = (uint *)((int)ppuVar15 + iVar23);
          ppuVar6 = ppuVar15;
          if ((uint)((int)ppuVar24 - (int)ppuVar15) < 4) {
            while (uVar12 != *(byte *)((int)ppuVar6 + iVar23)) {
              ppuVar6 = (uint **)((int)ppuVar6 + 1);
              if (ppuVar24 == ppuVar6) goto joined_r0x013b0d5c;
            }
LAB_013aebc4:
            puVar13 = (uint *)((int)ppuVar6 + iVar23);
          }
          else {
            uVar4 = uVar12 * 0x1010101;
            if ((~(0x1010100 - (*puVar11 ^ uVar4) | *puVar11 ^ uVar4) & 0x80808080) != 0) {
              while (uVar12 != *(byte *)((int)ppuVar6 + iVar23)) {
                ppuVar6 = (uint **)((int)ppuVar6 + 1);
                if (ppuVar24 == ppuVar6) goto joined_r0x013b0d5c;
              }
              goto LAB_013aebc4;
            }
            puVar13 = (uint *)(((uint)puVar11 & 0xfffffffc) + 4);
            if ((uint)((int)ppuVar24 - (int)ppuVar15) < 9) {
              if (puVar3 <= puVar13) goto joined_r0x013b0d5c;
              iVar5 = (((uint)puVar11 & 3) - (int)unaff_r7) + -5;
              while (uVar12 != *(byte *)(iVar23 - iVar5)) {
                iVar5 = iVar5 + -1;
                if ((byte *)((int)ppuVar24 + iVar5) == (byte *)0x0) goto joined_r0x013b0d5c;
              }
              puVar13 = (uint *)(iVar23 - iVar5);
            }
            else {
              for (; puVar13 <= puVar3 + -2; puVar13 = puVar13 + 2) {
                uVar19 = ~(0x1010100 - (*puVar13 ^ uVar4) | *puVar13 ^ uVar4);
                bVar25 = (uVar19 & 0x80808080) == 0;
                if (bVar25) {
                  uVar19 = ~(0x1010100 - (puVar13[1] ^ uVar4) | puVar13[1] ^ uVar4);
                }
                if (!bVar25 || (uVar19 & 0x80808080) != 0) break;
              }
              if (puVar3 <= puVar13) goto joined_r0x013b0d5c;
              while (uVar12 != (byte)*puVar13) {
                puVar13 = (uint *)((int)puVar13 + 1);
                if (puVar13 == puVar3) goto joined_r0x013b0d5c;
              }
            }
          }
          ppuVar15 = (uint **)((int)puVar13 + ((int)ppuVar15 - (int)puVar11));
          break;
        case (byte ***)0x2:
          if (ppuVar24 < ppuVar15) {
LAB_013b0fb0:
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c((byte *)((int)unaff_r7 + 1),ppuVar24,ppuVar24,&DAT_01893770);
          }
          if (ppuVar24 <= ppuVar15) goto joined_r0x013b0d5c;
          uVar12 = (uint)*pbVar7;
          puVar11 = (uint *)((int)ppuVar15 + iVar23);
          uVar4 = (uint)pbVar7[1];
          if ((uint)((int)ppuVar24 - (int)ppuVar15) < 4) {
            while (uVar12 != *(byte *)((int)ppuVar15 + iVar23) &&
                   uVar4 != *(byte *)((int)ppuVar15 + iVar23)) {
              ppuVar15 = (uint **)((int)ppuVar15 + 1);
              if (ppuVar24 == ppuVar15) goto joined_r0x013b0d5c;
            }
            puVar13 = (uint *)((int)ppuVar15 + iVar23);
          }
          else {
            uVar19 = *puVar11 ^ uVar12 * 0x1010101;
            if (((~(0x1010100 - uVar19 | uVar19) & 0x80808080) == 0) &&
               (uVar19 = *puVar11 ^ uVar4 * 0x1010101,
               (~(0x1010100 - uVar19 | uVar19) & 0x80808080) == 0)) {
              puVar13 = (uint *)((uint)puVar11 & 0xfffffffc);
              do {
                puVar13 = puVar13 + 1;
                if (puVar3 + -1 < puVar13) break;
                uVar19 = *puVar13;
                uVar17 = uVar19 ^ uVar12 * 0x1010101;
                bVar25 = (~(0x1010100 - uVar17 | uVar17) & 0x80808080) == 0;
                if (bVar25) {
                  uVar19 = uVar19 ^ uVar4 * 0x1010101;
                  uVar19 = ~(0x1010100 - uVar19 | uVar19);
                }
              } while (bVar25 && (uVar19 & 0x80808080) == 0);
              if (puVar3 <= puVar13) goto joined_r0x013b0d5c;
              while (uVar12 != (byte)*puVar13 && uVar4 != (byte)*puVar13) {
                puVar13 = (uint *)((int)puVar13 + 1);
                if (puVar13 == puVar3) goto joined_r0x013b0d5c;
              }
            }
            else {
              while (uVar12 != *(byte *)((int)ppuVar15 + iVar23) &&
                     uVar4 != *(byte *)((int)ppuVar15 + iVar23)) {
                ppuVar15 = (uint **)((int)ppuVar15 + 1);
                if (ppuVar24 == ppuVar15) goto joined_r0x013b0d5c;
              }
              puVar13 = (uint *)((int)ppuVar15 + iVar23);
            }
          }
          iVar5 = (int)puVar13 - (int)puVar11;
LAB_013aec9c:
          ppuVar15 = (uint **)((int)unaff_r7 + iVar5 + 1);
          break;
        case (byte ***)0x3:
          if (ppuVar24 < ppuVar15) {
LAB_013b0f80:
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c((byte *)((int)unaff_r7 + 1),ppuVar24,ppuVar24,&DAT_01893780);
          }
          bVar2 = *pbVar7;
          bVar1 = pbVar7[1];
          local_34._1_3_ = (undefined3)((uint)local_34 >> 8);
          local_34 = (byte ***)CONCAT31(local_34._1_3_,pbVar7[2]);
LAB_013ae998:
          local_40 = (uint **)CONCAT31(local_40._1_3_,bVar2);
          local_6c = CONCAT31(local_6c._1_3_,bVar1);
          local_58 = &local_34;
          local_5c = &local_6c;
          local_60 = (byte ****)&local_40;
          pbVar16 = (byte *)((int)unaff_r7 + iVar23 + 1);
          uVar27 = FUN_005f70a0(&local_60,pbVar16,puVar3);
LAB_013ae9c0:
          if ((uVar27 & 1) == 0) goto joined_r0x013b0d5c;
          ppuVar15 = (uint **)((int)unaff_r7 + ((int)(uVar27 >> 0x20) - (int)pbVar16) + 1);
        }
      }
    } while (ppuVar15 < ppuVar9);
joined_r0x013b0d5c:
    if (ppuVar24 <= ppuVar9) goto LAB_013afcd0;
LAB_013aee28:
    uVar10 = (uint)*(byte *)((int)ppuVar9 + param_3[2]);
    uVar21 = param_2[0x16];
    uVar22 = uVar22 + *(byte *)((int)param_2 + uVar10 + 0x5c);
    if (uVar21 <= uVar22) {
LAB_013b1170:
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar22,uVar21,&DAT_018936f0);
    }
    uVar21 = param_2[0x15];
    uVar22 = *(uint *)(uVar21 + uVar22 * 4);
    if (uVar22 != 0) {
      uVar12 = param_2[2];
      bVar26 = uVar22 <= uVar12;
      bVar25 = uVar12 == uVar22;
      if (!bVar26 || bVar25) {
        uVar21 = param_2[3];
        bVar26 = uVar21 <= uVar22;
        bVar25 = uVar22 == uVar21;
      }
      if (!bVar26 || bVar25) goto LAB_013afd5c;
    }
    uVar20 = 0;
    if (uVar22 == 0) {
LAB_013afd18:
      *param_1 = 0;
      param_1[1] = uVar21;
      param_1[2] = ppuVar24;
      return;
    }
    uVar21 = param_2[1];
    if (uVar21 != uVar22) goto LAB_013afd70;
    goto LAB_013b0b34;
  }
  uVar27 = FUN_0136d07c(param_2,param_3);
  uVar22 = (uint)(uVar27 >> 0x20);
  if ((uVar27 & 1) != 0) goto LAB_013aedf8;
  if (ppuVar9 <= ppuVar15) {
    ppuVar24 = (uint **)param_3[3];
    local_88 = (uint **)0x0;
    goto LAB_013b0ad0;
  }
  ppuVar24 = (uint **)param_3[3];
  iVar23 = param_3[2];
  puVar11 = (uint *)((int)ppuVar24 + iVar23);
  local_88 = (uint **)0x0;
  uVar19 = *param_2;
  uVar10 = param_2[0x15];
  puVar3 = puVar11 + -2;
LAB_013aef5c:
  uVar22 = *(uint *)(uVar10 + (uVar22 + *(byte *)((int)param_2 +
                                                 *(byte *)((int)ppuVar15 + iVar23) + 0x5c)) * 4);
  unaff_r7 = ppuVar15;
  if ((uVar19 < uVar22) && ((uint **)((int)ppuVar15 + 3) < ppuVar9)) {
    uVar22 = *(uint *)(uVar10 + (uVar22 + *(byte *)((int)param_2 +
                                                   *(byte *)((int)ppuVar15 + iVar23 + 1) + 0x5c)) *
                                4);
    if (uVar19 < uVar22) {
      uVar22 = *(uint *)(uVar10 + (uVar22 + *(byte *)((int)param_2 +
                                                     *(byte *)((int)ppuVar15 + iVar23 + 2) + 0x5c))
                                  * 4);
      if (uVar19 < uVar22) {
        uVar22 = *(uint *)(uVar10 + (uVar22 + *(byte *)((int)param_2 +
                                                       *(byte *)((int)ppuVar15 + iVar23 + 3) + 0x5c)
                                    ) * 4);
        unaff_r7 = (uint **)((int)ppuVar15 + 3);
        if (uVar19 < uVar22) {
          ppuVar15 = ppuVar15 + 1;
          unaff_r7 = ppuVar15;
          if (ppuVar15 < ppuVar9) goto LAB_013aef5c;
        }
      }
      else {
        unaff_r7 = (uint **)((int)ppuVar15 + 2);
      }
    }
    else {
      unaff_r7 = (uint **)((int)ppuVar15 + 1);
    }
  }
  if (uVar19 < uVar22) {
LAB_013aef4c:
    ppuVar15 = (uint **)((int)unaff_r7 + 1);
    goto LAB_013aef50;
  }
  if (uVar22 != 0) {
    bVar26 = uVar22 <= param_2[6];
    bVar25 = param_2[6] == uVar22;
    if (!bVar26 || bVar25) {
      bVar26 = param_2[7] <= uVar22;
      bVar25 = uVar22 == param_2[7];
    }
    if (bVar26 && !bVar25) goto LAB_013af0f8;
    if ((uVar22 < param_2[4]) || (param_2[5] < uVar22)) goto LAB_013aef4c;
    uVar21 = param_2[0x61];
    local_34 = (byte ***)(uVar22 - param_2[4] >> (param_2[0x57] & 0x1f));
    if (uVar21 == 0) goto LAB_013b1148;
    puVar13 = (uint *)param_2[0x60];
    if ((byte ***)*puVar13 <= local_34) goto LAB_013b0e20;
    uVar12 = uVar21 * 4;
    uVar4 = (int)local_34 << 3 | 4;
    if (uVar21 << 2 <= uVar4) goto LAB_013b115c;
    pppbVar18 = (byte ***)(uint)*(byte *)((int)puVar13 + uVar4);
    uVar21 = (int)local_34 << 3 | 5;
    if ((CARRY4(uVar21,(uint)pppbVar18)) || (uVar12 < uVar21 + (int)pppbVar18)) goto LAB_013b0d64;
    if ((byte ***)0x3 < pppbVar18) goto LAB_013b0f30;
    pbVar7 = (byte *)((int)puVar13 + uVar21);
    ppuVar15 = (uint **)((int)unaff_r7 + 1);
    switch(pppbVar18) {
    case (byte ***)0x0:
      goto switchD_013ae77c_caseD_0;
    case (byte ***)0x1:
      if (ppuVar24 < ppuVar15) goto LAB_013b0fc8;
      if (ppuVar24 <= ppuVar15) goto LAB_013b0ac8;
      uVar21 = (uint)*pbVar7;
      puVar13 = (uint *)((int)ppuVar15 + iVar23);
      ppuVar6 = ppuVar15;
      if ((uint)((int)ppuVar24 - (int)ppuVar15) < 4) {
        while (uVar21 != *(byte *)((int)ppuVar6 + iVar23)) {
          ppuVar6 = (uint **)((int)ppuVar6 + 1);
          if (ppuVar24 == ppuVar6) goto LAB_013b0ac8;
        }
LAB_013af994:
        puVar14 = (uint *)((int)ppuVar6 + iVar23);
      }
      else {
        uVar12 = uVar21 * 0x1010101;
        if ((~(0x1010100 - (*puVar13 ^ uVar12) | *puVar13 ^ uVar12) & 0x80808080) != 0) {
          while (uVar21 != *(byte *)((int)ppuVar6 + iVar23)) {
            ppuVar6 = (uint **)((int)ppuVar6 + 1);
            if (ppuVar24 == ppuVar6) goto LAB_013b0ac8;
          }
          goto LAB_013af994;
        }
        puVar14 = (uint *)(((uint)puVar13 & 0xfffffffc) + 4);
        if ((uint)((int)ppuVar24 - (int)ppuVar15) < 9) {
          if (puVar11 <= puVar14) goto LAB_013b0ac8;
          iVar5 = (((uint)puVar13 & 3) - (int)unaff_r7) + -5;
          while (uVar21 != *(byte *)(iVar23 - iVar5)) {
            iVar5 = iVar5 + -1;
            if ((byte *)((int)ppuVar24 + iVar5) == (byte *)0x0) goto LAB_013b0ac8;
          }
          puVar14 = (uint *)(iVar23 - iVar5);
        }
        else {
          for (; puVar14 <= puVar3; puVar14 = puVar14 + 2) {
            uVar4 = ~(0x1010100 - (*puVar14 ^ uVar12) | *puVar14 ^ uVar12);
            bVar25 = (uVar4 & 0x80808080) == 0;
            if (bVar25) {
              uVar4 = ~(0x1010100 - (puVar14[1] ^ uVar12) | puVar14[1] ^ uVar12);
            }
            if (!bVar25 || (uVar4 & 0x80808080) != 0) break;
          }
          if (puVar11 <= puVar14) goto LAB_013b0ac8;
          while (uVar21 != (byte)*puVar14) {
            puVar14 = (uint *)((int)puVar14 + 1);
            if (puVar14 == puVar11) goto LAB_013b0ac8;
          }
        }
      }
      ppuVar15 = (uint **)((int)puVar14 + ((int)ppuVar15 - (int)puVar13));
      break;
    case (byte ***)0x2:
      if (ppuVar24 < ppuVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(ppuVar15,ppuVar24,ppuVar24,&DAT_01893770);
      }
      if (ppuVar24 <= ppuVar15) goto LAB_013b0ac8;
      uVar21 = (uint)*pbVar7;
      puVar13 = (uint *)((int)ppuVar15 + iVar23);
      uVar12 = (uint)pbVar7[1];
      ppuVar6 = ppuVar15;
      if ((uint)((int)ppuVar24 - (int)ppuVar15) < 4) {
        while (uVar21 != *(byte *)((int)ppuVar6 + iVar23) &&
               uVar12 != *(byte *)((int)ppuVar6 + iVar23)) {
          ppuVar6 = (uint **)((int)ppuVar6 + 1);
          if (ppuVar24 == ppuVar6) goto LAB_013b0ac8;
        }
        puVar14 = (uint *)((int)ppuVar6 + iVar23);
      }
      else {
        uVar4 = *puVar13 ^ uVar21 * 0x1010101;
        if (((~(0x1010100 - uVar4 | uVar4) & 0x80808080) == 0) &&
           (uVar4 = *puVar13 ^ uVar12 * 0x1010101, (~(0x1010100 - uVar4 | uVar4) & 0x80808080) == 0)
           ) {
          puVar14 = (uint *)((uint)puVar13 & 0xfffffffc);
          do {
            puVar14 = puVar14 + 1;
            if (puVar11 + -1 < puVar14) break;
            uVar4 = *puVar14 ^ uVar21 * 0x1010101;
            uVar4 = ~(0x1010100 - uVar4 | uVar4);
            bVar25 = (uVar4 & 0x80808080) == 0;
            if (bVar25) {
              uVar4 = *puVar14 ^ uVar12 * 0x1010101;
              uVar4 = ~(0x1010100 - uVar4 | uVar4);
            }
          } while (bVar25 && (uVar4 & 0x80808080) == 0);
          if (puVar11 <= puVar14) goto LAB_013b0ac8;
          while (uVar21 != (byte)*puVar14 && uVar12 != (byte)*puVar14) {
            puVar14 = (uint *)((int)puVar14 + 1);
            if (puVar14 == puVar11) goto LAB_013b0ac8;
          }
        }
        else {
          while (uVar21 != *(byte *)((int)ppuVar6 + iVar23) &&
                 uVar12 != *(byte *)((int)ppuVar6 + iVar23)) {
            ppuVar6 = (uint **)((int)ppuVar6 + 1);
            if (ppuVar24 == ppuVar6) goto LAB_013b0ac8;
          }
          puVar14 = (uint *)((int)ppuVar6 + iVar23);
        }
      }
      ppuVar15 = (uint **)((int)puVar14 + ((int)ppuVar15 - (int)puVar13));
      break;
    case (byte ***)0x3:
      if (ppuVar24 < ppuVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(ppuVar15,ppuVar24,ppuVar24,&DAT_01893780);
      }
      bVar2 = *pbVar7;
      bVar1 = pbVar7[1];
      local_34._1_3_ = (undefined3)((uint)local_34 >> 8);
      local_34 = (byte ***)CONCAT31(local_34._1_3_,pbVar7[2]);
      goto LAB_013af4f8;
    }
    goto LAB_013aef50;
  }
LAB_013af0f8:
  if (((uVar22 == 0) || (uVar22 < param_2[2])) || (param_2[3] < uVar22)) {
    if (((uVar22 == 0) || (uVar22 < param_2[4])) || (param_2[5] < uVar22)) {
      if (uVar22 == 0) {
        *param_1 = local_88;
        param_1[1] = local_8c;
        param_1[2] = local_90;
        return;
      }
      if (ppuVar24 <= unaff_r7) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(unaff_r7,ppuVar24,&DAT_01893800);
      }
      bVar2 = *(byte *)((int)unaff_r7 + iVar23);
LAB_013b0a34:
      uVar20 = FUN_013c7204(bVar2,unaff_r7);
      *param_1 = 2;
      param_1[1] = uVar20;
      return;
    }
    uVar21 = param_2[0x61];
    local_34 = (byte ***)(uVar22 - param_2[4] >> (param_2[0x57] & 0x1f));
    if (uVar21 == 0) goto LAB_013b1148;
    puVar13 = (uint *)param_2[0x60];
    if ((byte ***)*puVar13 <= local_34) goto LAB_013b0e20;
    uVar12 = uVar21 * 4;
    uVar4 = (int)local_34 << 3 | 4;
    if (uVar21 << 2 <= uVar4) goto LAB_013b115c;
    pppbVar18 = (byte ***)(uint)*(byte *)((int)puVar13 + uVar4);
    uVar21 = (int)local_34 << 3 | 5;
    if ((CARRY4(uVar21,(uint)pppbVar18)) || (uVar12 < uVar21 + (int)pppbVar18)) goto LAB_013b0d64;
    if ((byte ***)0x3 < pppbVar18) goto LAB_013b0f30;
    pbVar7 = (byte *)((int)puVar13 + uVar21);
    ppuVar15 = (uint **)((int)unaff_r7 + 1);
    switch(pppbVar18) {
    case (byte ***)0x0:
      goto switchD_013ae77c_caseD_0;
    case (byte ***)0x1:
      if (ppuVar24 < ppuVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(ppuVar15,ppuVar24,ppuVar24,&DAT_01893760);
      }
      if (ppuVar24 <= ppuVar15) goto LAB_013b0ac8;
      uVar21 = (uint)*pbVar7;
      puVar13 = (uint *)((int)ppuVar15 + iVar23);
      ppuVar6 = ppuVar15;
      if ((uint)((int)ppuVar24 - (int)ppuVar15) < 4) {
        while (uVar21 != *(byte *)((int)ppuVar6 + iVar23)) {
          ppuVar6 = (uint **)((int)ppuVar6 + 1);
          if (ppuVar24 == ppuVar6) goto LAB_013b0ac8;
        }
        puVar14 = (uint *)((int)ppuVar6 + iVar23);
      }
      else {
        uVar12 = uVar21 * 0x1010101;
        if ((~(0x1010100 - (*puVar13 ^ uVar12) | *puVar13 ^ uVar12) & 0x80808080) == 0) {
          puVar14 = (uint *)(((uint)puVar13 & 0xfffffffc) + 4);
          if ((uint)((int)ppuVar24 - (int)ppuVar15) < 9) {
            if (puVar11 <= puVar14) goto LAB_013b0ac8;
            iVar5 = (((uint)puVar13 & 3) - (int)unaff_r7) + -5;
            while (uVar21 != *(byte *)(iVar23 - iVar5)) {
              iVar5 = iVar5 + -1;
              if ((byte *)((int)ppuVar24 + iVar5) == (byte *)0x0) goto LAB_013b0ac8;
            }
            puVar14 = (uint *)(iVar23 - iVar5);
          }
          else {
            for (; puVar14 <= puVar3; puVar14 = puVar14 + 2) {
              uVar4 = ~(0x1010100 - (*puVar14 ^ uVar12) | *puVar14 ^ uVar12);
              bVar25 = (uVar4 & 0x80808080) == 0;
              if (bVar25) {
                uVar4 = ~(0x1010100 - (puVar14[1] ^ uVar12) | puVar14[1] ^ uVar12);
              }
              if (!bVar25 || (uVar4 & 0x80808080) != 0) break;
            }
            if (puVar11 <= puVar14) goto LAB_013b0ac8;
            while (uVar21 != (byte)*puVar14) {
              puVar14 = (uint *)((int)puVar14 + 1);
              if (puVar14 == puVar11) goto LAB_013b0ac8;
            }
          }
        }
        else {
          while (uVar21 != *(byte *)((int)ppuVar6 + iVar23)) {
            ppuVar6 = (uint **)((int)ppuVar6 + 1);
            if (ppuVar24 == ppuVar6) goto LAB_013b0ac8;
          }
          puVar14 = (uint *)((int)ppuVar6 + iVar23);
        }
      }
      ppuVar15 = (uint **)((int)puVar14 + ((int)ppuVar15 - (int)puVar13));
      break;
    case (byte ***)0x2:
      if (ppuVar24 < ppuVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(ppuVar15,ppuVar24,ppuVar24,&DAT_01893770);
      }
      if (ppuVar24 <= ppuVar15) goto LAB_013b0ac8;
      uVar21 = (uint)*pbVar7;
      puVar13 = (uint *)((int)ppuVar15 + iVar23);
      uVar12 = (uint)pbVar7[1];
      ppuVar6 = ppuVar15;
      if ((uint)((int)ppuVar24 - (int)ppuVar15) < 4) {
        while (uVar21 != *(byte *)((int)ppuVar6 + iVar23) &&
               uVar12 != *(byte *)((int)ppuVar6 + iVar23)) {
          ppuVar6 = (uint **)((int)ppuVar6 + 1);
          if (ppuVar24 == ppuVar6) goto LAB_013b0ac8;
        }
        puVar14 = (uint *)((int)ppuVar6 + iVar23);
      }
      else {
        uVar4 = *puVar13 ^ uVar21 * 0x1010101;
        if (((~(0x1010100 - uVar4 | uVar4) & 0x80808080) == 0) &&
           (uVar4 = *puVar13 ^ uVar12 * 0x1010101, (~(0x1010100 - uVar4 | uVar4) & 0x80808080) == 0)
           ) {
          puVar14 = (uint *)((uint)puVar13 & 0xfffffffc);
          do {
            puVar14 = puVar14 + 1;
            if (puVar11 + -1 < puVar14) break;
            uVar4 = *puVar14 ^ uVar21 * 0x1010101;
            uVar4 = ~(0x1010100 - uVar4 | uVar4);
            bVar25 = (uVar4 & 0x80808080) == 0;
            if (bVar25) {
              uVar4 = *puVar14 ^ uVar12 * 0x1010101;
              uVar4 = ~(0x1010100 - uVar4 | uVar4);
            }
          } while (bVar25 && (uVar4 & 0x80808080) == 0);
          if (puVar11 <= puVar14) goto LAB_013b0ac8;
          while (uVar21 != (byte)*puVar14 && uVar12 != (byte)*puVar14) {
            puVar14 = (uint *)((int)puVar14 + 1);
            if (puVar14 == puVar11) goto LAB_013b0ac8;
          }
        }
        else {
          while (uVar21 != *(byte *)((int)ppuVar6 + iVar23) &&
                 uVar12 != *(byte *)((int)ppuVar6 + iVar23)) {
            ppuVar6 = (uint **)((int)ppuVar6 + 1);
            if (ppuVar24 == ppuVar6) goto LAB_013b0ac8;
          }
          puVar14 = (uint *)((int)ppuVar6 + iVar23);
        }
      }
      ppuVar15 = (uint **)((int)puVar14 + ((int)ppuVar15 - (int)puVar13));
      break;
    case (byte ***)0x3:
      if (ppuVar24 < ppuVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(ppuVar15,ppuVar24,ppuVar24,&DAT_01893780);
      }
      bVar2 = *pbVar7;
      bVar1 = pbVar7[1];
      local_34._1_3_ = (undefined3)((uint)local_34 >> 8);
      local_34 = (byte ***)CONCAT31(local_34._1_3_,pbVar7[2]);
LAB_013af4f8:
      local_40 = (uint **)CONCAT31(local_40._1_3_,bVar2);
      local_58 = &local_34;
      local_5c = &local_6c;
      local_60 = (byte ****)&local_40;
      local_6c = CONCAT31(local_6c._1_3_,bVar1);
      pbVar7 = (byte *)((int)unaff_r7 + iVar23 + 1);
      uVar27 = FUN_005f70a0(&local_60,pbVar7,puVar11);
      if ((uVar27 & 1) == 0) goto LAB_013b0ac8;
      ppuVar15 = (uint **)((int)unaff_r7 + ((int)(uVar27 >> 0x20) - (int)pbVar7) + 1);
    }
    goto LAB_013aef50;
  }
  local_8c = 0;
  if (param_2[0x5e] != 1) {
    uVar4 = param_2[0x5a];
    uVar12 = uVar22 - param_2[2] >> (param_2[0x57] & 0x1f);
    uVar21 = uVar12 << 1;
    if (uVar4 <= uVar12 * 2) goto LAB_013b118c;
    uVar21 = uVar21 | 1;
    if (uVar4 <= uVar21) goto LAB_013b1198;
    uVar12 = *(uint *)(param_2[0x59] + uVar12 * 8);
    uVar21 = *(uint *)(param_2[0x59] + uVar21 * 4);
    if ((CARRY4(uVar21,uVar12)) || (param_2[0x5d] < uVar21 + uVar12)) goto LAB_013b0f10;
    if (uVar21 == 0) goto LAB_013b11a8;
    local_8c = *(undefined4 *)(param_2[0x5c] + uVar12 * 4);
  }
  local_88 = (uint **)0x1;
  local_90 = unaff_r7;
  if ((uVar22 < param_2[4]) || (param_2[5] < uVar22)) goto LAB_013aef4c;
  uVar21 = param_2[0x61];
  local_34 = (byte ***)(uVar22 - param_2[4] >> (param_2[0x57] & 0x1f));
  if (uVar21 == 0) {
LAB_013b1148:
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(0,0,&DAT_01892d90);
  }
  puVar13 = (uint *)param_2[0x60];
  if ((byte ***)*puVar13 <= local_34) {
LAB_013b0e20:
    local_60 = &local_34;
    local_5c = (int *)&LAB_00fac484;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_005855ae,&local_60,&DAT_01893750);
  }
  uVar12 = uVar21 * 4;
  uVar4 = (int)local_34 << 3 | 4;
  if (uVar21 << 2 <= uVar4) {
LAB_013b115c:
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar4,uVar12,&DAT_01893730);
  }
  pppbVar18 = (byte ***)(uint)*(byte *)((int)puVar13 + uVar4);
  uVar21 = (int)local_34 << 3 | 5;
  if ((CARRY4(uVar21,(uint)pppbVar18)) || (uVar12 < uVar21 + (int)pppbVar18)) {
LAB_013b0d64:
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c();
  }
  if ((byte ***)0x3 < pppbVar18) {
LAB_013b0f30:
    local_34 = pppbVar18;
LAB_013b0f6c:
    local_5c = (int *)&LAB_00fac484;
    local_60 = &local_34;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00587cb5,&local_60,&DAT_018937a0);
  }
  pbVar7 = (byte *)((int)puVar13 + uVar21);
  ppuVar15 = (uint **)((int)unaff_r7 + 1);
  switch(pppbVar18) {
  case (byte ***)0x0:
    goto switchD_013ae77c_caseD_0;
  case (byte ***)0x1:
    if (ppuVar24 < ppuVar15) {
LAB_013b0fc8:
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c((byte *)((int)unaff_r7 + 1),ppuVar24,ppuVar24,&DAT_01893760);
    }
    if (ppuVar24 <= ppuVar15) {
LAB_013b0d74:
      local_88 = (uint **)0x1;
      goto LAB_013b0ad0;
    }
    uVar21 = (uint)*pbVar7;
    puVar13 = (uint *)((int)ppuVar15 + iVar23);
    ppuVar6 = ppuVar15;
    if ((uint)((int)ppuVar24 - (int)ppuVar15) < 4) {
      while (uVar21 != *(byte *)((int)ppuVar6 + iVar23)) {
        ppuVar6 = (uint **)((int)ppuVar6 + 1);
        if (ppuVar24 == ppuVar6) goto LAB_013b0250;
      }
LAB_013afaa0:
      puVar14 = (uint *)((int)ppuVar6 + iVar23);
LAB_013afaa4:
      pbVar7 = (byte *)((int)puVar14 - (int)puVar13);
      goto LAB_013af5a0;
    }
    uVar12 = uVar21 * 0x1010101;
    if ((~(0x1010100 - (*puVar13 ^ uVar12) | *puVar13 ^ uVar12) & 0x80808080) != 0) {
      while (uVar21 != *(byte *)((int)ppuVar6 + iVar23)) {
        ppuVar6 = (uint **)((int)ppuVar6 + 1);
        if (ppuVar24 == ppuVar6) goto LAB_013b0250;
      }
      goto LAB_013afaa0;
    }
    puVar14 = (uint *)(((uint)puVar13 & 0xfffffffc) + 4);
    if (8 < (uint)((int)ppuVar24 - (int)ppuVar15)) {
      for (; puVar14 <= puVar3; puVar14 = puVar14 + 2) {
        uVar4 = ~(0x1010100 - (*puVar14 ^ uVar12) | *puVar14 ^ uVar12);
        bVar25 = (uVar4 & 0x80808080) == 0;
        if (bVar25) {
          uVar4 = ~(0x1010100 - (puVar14[1] ^ uVar12) | puVar14[1] ^ uVar12);
        }
        if (!bVar25 || (uVar4 & 0x80808080) != 0) break;
      }
      if (puVar11 <= puVar14) goto LAB_013b0250;
      while (uVar21 != (byte)*puVar14) {
        puVar14 = (uint *)((int)puVar14 + 1);
        if (puVar14 == puVar11) goto LAB_013b0d74;
      }
      goto LAB_013afaa4;
    }
    if (puVar11 <= puVar14) {
LAB_013b0250:
      local_88 = (uint **)0x1;
      goto LAB_013b0ad0;
    }
    ppuVar6 = (uint **)((int)ppuVar24 + (((uint)puVar13 & 3) - 5));
    iVar5 = (iVar23 + 5) - ((uint)puVar13 & 3);
    while (uVar21 != *(byte *)((int)unaff_r7 + iVar5)) {
      ppuVar6 = (uint **)((int)ppuVar6 + -1);
      iVar5 = iVar5 + 1;
      if (unaff_r7 == ppuVar6) goto LAB_013b0d74;
    }
    pbVar7 = (byte *)((int)unaff_r7 + (iVar5 - (int)puVar13));
    goto LAB_013af5a0;
  case (byte ***)0x2:
    if (ppuVar24 < ppuVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(ppuVar15,ppuVar24,ppuVar24,&DAT_01893770);
    }
    uVar27 = FUN_013ac848(*pbVar7,pbVar7[1],(byte *)((int)ppuVar15 + iVar23),puVar11);
    break;
  case (byte ***)0x3:
    if (ppuVar24 < ppuVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(ppuVar15,ppuVar24,ppuVar24,&DAT_01893780);
    }
    local_40 = (uint **)CONCAT31(local_40._1_3_,*pbVar7);
    local_58 = &local_34;
    local_5c = &local_6c;
    local_6c = CONCAT31(local_6c._1_3_,pbVar7[1]);
    local_60 = (byte ****)&local_40;
    local_34._1_3_ = (undefined3)((uint)local_34 >> 8);
    local_34 = (byte ***)CONCAT31(local_34._1_3_,pbVar7[2]);
    uVar27 = FUN_005f70a0(&local_60,(byte *)((int)ppuVar15 + iVar23),puVar11);
  }
  if ((uVar27 & 1) == 0) {
    local_88 = (uint **)0x1;
    goto LAB_013b0ad0;
  }
  pbVar7 = (byte *)((int)(uVar27 >> 0x20) - (int)((int)ppuVar15 + iVar23));
LAB_013af5a0:
  ppuVar15 = (uint **)((int)ppuVar15 + (int)pbVar7);
  local_88 = (uint **)0x1;
LAB_013aef50:
  if (ppuVar9 <= ppuVar15) goto LAB_013b0ac8;
  goto LAB_013aef5c;
switchD_013ae77c_caseD_0:
                    /* WARNING: Subroutine does not return */
  FUN_00faa478("cannot find with empty needles",0x3d,&DAT_01893790);
LAB_013b0ac8:
  unaff_r7 = local_90;
LAB_013b0ad0:
  if (ppuVar24 <= ppuVar9) {
    uVar10 = param_2[0x16];
    uVar22 = *(byte *)((int)param_2 + 0x15b) + uVar22 + 1;
    if (uVar10 <= uVar22) goto LAB_013b1180;
    uVar22 = *(uint *)(param_2[0x15] + uVar22 * 4);
    if (uVar22 == 0) goto LAB_013b0c28;
    uVar21 = param_2[2];
    bVar26 = uVar22 <= uVar21;
    bVar25 = uVar21 == uVar22;
    if (!bVar26 || bVar25) {
      bVar26 = param_2[3] <= uVar22;
      bVar25 = uVar22 == param_2[3];
    }
    if (bVar26 && !bVar25) goto LAB_013b0b90;
LAB_013b0ba4:
    uVar20 = 0;
    if (param_2[0x5e] == 1) {
LAB_013b0c14:
      *param_1 = 1;
      param_1[1] = uVar20;
      param_1[2] = ppuVar24;
      return;
    }
    uVar4 = param_2[0x5a];
    uVar22 = uVar22 - uVar21 >> (param_2[0x57] & 0x1f);
    uVar21 = uVar22 << 1;
    if (uVar4 <= uVar22 * 2) goto LAB_013b118c;
    uVar21 = uVar21 | 1;
    if (uVar4 <= uVar21) goto LAB_013b1198;
    uVar22 = *(uint *)(param_2[0x59] + uVar22 * 8);
    uVar10 = *(uint *)(param_2[0x59] + uVar21 * 4);
    if ((CARRY4(uVar10,uVar22)) || (param_2[0x5d] < uVar10 + uVar22)) goto LAB_013b0f10;
    if (uVar10 != 0) {
      uVar20 = *(undefined4 *)(param_2[0x5c] + uVar22 * 4);
      goto LAB_013b0c14;
    }
    goto LAB_013b11a8;
  }
  uVar10 = (uint)*(byte *)((int)ppuVar9 + param_3[2]);
  uVar21 = param_2[0x16];
  uVar22 = uVar22 + *(byte *)((int)param_2 + uVar10 + 0x5c);
  if (uVar21 <= uVar22) goto LAB_013b1170;
  uVar22 = *(uint *)(param_2[0x15] + uVar22 * 4);
  if (uVar22 != 0) {
    uVar21 = param_2[2];
    bVar26 = uVar22 <= uVar21;
    bVar25 = uVar21 == uVar22;
    if (!bVar26 || bVar25) {
      bVar26 = param_2[3] <= uVar22;
      bVar25 = uVar22 == param_2[3];
    }
    if (!bVar26 || bVar25) {
      ppuVar24 = ppuVar9;
      goto LAB_013b0ba4;
    }
  }
  if (uVar22 == 0) {
LAB_013b0c28:
    *param_1 = local_88;
    param_1[1] = local_8c;
    param_1[2] = unaff_r7;
    return;
  }
  if (param_2[1] != uVar22) {
LAB_013b0b90:
    *param_1 = local_88;
    param_1[1] = local_8c;
    param_1[2] = unaff_r7;
    return;
  }
LAB_013b0b34:
LAB_013b0b38:
  uVar20 = FUN_013c7204(uVar10,ppuVar9);
  *param_1 = 2;
  param_1[1] = uVar20;
  return;
}

