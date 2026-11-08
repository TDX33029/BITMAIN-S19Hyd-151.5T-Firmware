// FUN_013aca88 @ 013aca88 size=6300 calls_out=7 calls_in=2
// strings: cannot find with empty needles

/* WARNING: Type propagation algorithm not settling */

uint FUN_013aca88(uint *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint **ppuVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint **ppuVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  uint **ppuVar19;
  uint uVar20;
  uint uVar21;
  uint **ppuVar22;
  uint uVar23;
  uint **ppuVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  uint **ppuVar29;
  uint uVar30;
  uint *puVar31;
  int iVar32;
  uint uVar33;
  bool bVar34;
  bool bVar35;
  ulonglong uVar36;
  int local_6c;
  uint **local_68;
  uint ***local_60;
  int *local_5c;
  uint ***local_58;
  uint local_54;
  uint **local_50;
  uint local_4c;
  int iStack_48;
  uint **local_40;
  uint local_3c;
  uint local_38;
  undefined4 ***local_34;
  code *local_30;
  uint *local_2c;
  undefined1 *local_28;
  
  ppuVar24 = (uint **)param_2[4];
  ppuVar22 = (uint **)param_2[5];
  *param_3 = 0;
  if (ppuVar22 < ppuVar24) {
    return 0;
  }
  if ((*param_2 - 1U < 2) || ((char)param_1[0x13] == '\x02')) {
    if (param_3[3] == 1) {
      uVar18 = param_3[4];
      if (param_3[5] != 0) {
        if (((uVar18 == 0) || (uVar18 < param_1[2])) || (param_1[3] < uVar18)) goto LAB_013ae1a8;
        uVar4 = param_1[0x5a];
        uVar11 = uVar18 - param_1[2] >> (param_1[0x57] & 0x1f);
        uVar1 = uVar11 << 1 | 1;
        if (uVar4 <= uVar1) goto LAB_013ae2c4;
        uVar25 = param_1[0x59];
        uVar4 = param_3[6];
        uVar1 = *(uint *)(uVar25 + uVar1 * 4);
        if (uVar4 < uVar1) goto LAB_013ad50c;
      }
      ppuVar24 = (uint **)(param_3[7] + 1);
      param_3[7] = (int)ppuVar24;
      if (ppuVar22 < ppuVar24) {
        return 0;
      }
    }
    else {
      param_3[7] = (int)ppuVar24;
      uVar36 = FUN_0136d07c(param_1,param_2);
      uVar18 = (uint)(uVar36 >> 0x20);
      if ((uVar36 & 1) != 0) {
        return uVar18;
      }
    }
    ppuVar5 = (uint **)param_2[3];
    if (ppuVar24 < ppuVar22) {
      iVar32 = param_2[2];
      puVar12 = (uint *)(iVar32 + (int)ppuVar5);
      uVar1 = param_1[0x57] & 0x1f;
      uVar4 = param_1[2];
      uVar25 = param_1[3];
      uVar6 = param_1[6];
      uVar7 = param_1[7];
      puVar8 = (uint *)param_1[0x60];
      uVar20 = param_1[0x61];
      uVar9 = param_1[0x16];
      uVar14 = *param_1;
      uVar23 = param_1[4];
      uVar28 = param_1[5];
      uVar33 = param_1[0x15];
      uVar11 = uVar20 << 2;
      do {
        if (ppuVar5 <= ppuVar24) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(ppuVar24,ppuVar5,&DAT_01893820);
        }
        uVar2 = (uint)*(byte *)(iVar32 + (int)ppuVar24);
        uVar18 = uVar18 + *(byte *)((int)param_1 + uVar2 + 0x5c);
        if (uVar9 <= uVar18) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar18,uVar9,&DAT_018936f0);
        }
        uVar18 = *(uint *)(uVar33 + uVar18 * 4);
        if (uVar14 < uVar18) {
LAB_013acc4c:
          ppuVar24 = (uint **)((int)ppuVar24 + 1);
        }
        else {
          param_3[3] = 1;
          param_3[4] = uVar18;
          if (uVar18 == 0) {
LAB_013acd90:
            if (((uVar18 != 0) && (uVar4 <= uVar18)) && (uVar18 <= uVar25)) {
              uVar11 = param_1[0x5e];
              iVar32 = 0;
              param_3[5] = 1;
              param_3[6] = 1;
              if (uVar11 != 1) {
                uVar25 = param_1[0x5a];
                uVar11 = uVar18 - uVar4 >> uVar1;
                uVar18 = uVar11 << 1;
                if (uVar25 <= uVar11 * 2) goto LAB_013ae2fc;
                uVar18 = uVar18 | 1;
                if (uVar25 <= uVar18) goto LAB_013ae31c;
                uVar11 = *(uint *)(param_1[0x59] + uVar11 * 8);
                uVar18 = *(uint *)(param_1[0x59] + uVar18 * 4);
                if ((CARRY4(uVar18,uVar11)) || (param_1[0x5d] < uVar18 + uVar11)) goto LAB_013ae1f8;
                if (uVar18 == 0) goto LAB_013ae308;
                iVar32 = *(int *)(param_1[0x5c] + uVar11 * 4);
              }
              *param_3 = 1;
              param_3[1] = iVar32;
              param_3[2] = (int)ppuVar24;
              return 0;
            }
            if (((uVar18 == 0) || (uVar18 < uVar23)) || (uVar28 < uVar18)) {
              if (uVar18 == 0) {
                return 0;
              }
              goto LAB_013ae184;
            }
            local_34 = (undefined4 ***)(uVar18 - uVar23 >> uVar1);
            if (uVar20 == 0) goto LAB_013ae2a0;
            if ((uint **)*puVar8 <= local_34) goto LAB_013ae1c0;
            uVar2 = (int)local_34 << 3 | 4;
            if (uVar11 <= uVar2) {
LAB_013ae2b4:
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar2,uVar11,&DAT_01893730);
            }
            ppuVar15 = (uint **)(uint)*(byte *)((int)puVar8 + uVar2);
            uVar2 = (int)local_34 << 3 | 5;
            uVar10 = uVar2 + (int)ppuVar15;
            if ((CARRY4(uVar2,(uint)ppuVar15)) || (uVar11 < uVar10)) {
LAB_013ae198:
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(uVar2,uVar10,uVar11,&DAT_01893740);
            }
            if ((uint **)0x3 < ppuVar15) goto LAB_013ae204;
            pbVar3 = (byte *)((int)puVar8 + uVar2);
            ppuVar29 = (uint **)((int)ppuVar24 + 1);
            switch(ppuVar15) {
            case (uint **)0x0:
              goto switchD_013acd3c_caseD_0;
            case (uint **)0x1:
              if (ppuVar29 < ppuVar5) {
                uVar2 = (uint)*pbVar3;
                uVar10 = (int)ppuVar5 - (int)ppuVar29;
                puVar31 = (uint *)(iVar32 + (int)ppuVar29);
                puVar16 = puVar31;
                if (uVar10 < 4) {
                  while (uVar2 != (byte)*puVar16) {
                    puVar16 = (uint *)((int)puVar16 + 1);
                    uVar10 = uVar10 - 1;
                    if (uVar10 == 0) goto LAB_013ad610;
                  }
                }
                else {
                  uVar21 = uVar2 * 0x1010101;
                  if ((~(0x1010100 - (*puVar31 ^ uVar21) | *puVar31 ^ uVar21) & 0x80808080) == 0) {
                    puVar16 = (uint *)(((uint)puVar31 & 0xfffffffc) + 4);
                    if (uVar10 < 9) {
                      if (puVar16 < puVar12) {
                        iVar26 = (int)ppuVar5 + ((((uint)puVar31 & 3) - 5) - (int)ppuVar24);
                        while (uVar2 != (byte)*puVar16) {
                          puVar16 = (uint *)((int)puVar16 + 1);
                          iVar26 = iVar26 + -1;
                          if (iVar26 == 0) goto LAB_013ad610;
                        }
                        goto LAB_013ad478;
                      }
                    }
                    else {
                      for (; puVar16 <= puVar12 + -2; puVar16 = puVar16 + 2) {
                        uVar10 = ~(0x1010100 - (*puVar16 ^ uVar21) | *puVar16 ^ uVar21);
                        bVar34 = (uVar10 & 0x80808080) == 0;
                        if (bVar34) {
                          uVar10 = ~(0x1010100 - (puVar16[1] ^ uVar21) | puVar16[1] ^ uVar21);
                        }
                        if (!bVar34 || (uVar10 & 0x80808080) != 0) break;
                      }
                      if (puVar16 < puVar12) {
                        while (uVar2 != (byte)*puVar16) {
                          puVar16 = (uint *)((int)puVar16 + 1);
                          if (puVar16 == puVar12) goto LAB_013ad610;
                        }
                        goto LAB_013ad478;
                      }
                    }
                    break;
                  }
                  while (uVar2 != (byte)*puVar16) {
                    puVar16 = (uint *)((int)puVar16 + 1);
                    uVar10 = uVar10 - 1;
                    if (uVar10 == 0) goto LAB_013ad610;
                  }
                }
LAB_013ad478:
                iVar26 = (int)puVar16 - (int)puVar31;
LAB_013ad47c:
                ppuVar24 = (uint **)((int)ppuVar24 + iVar26 + 1);
                goto LAB_013acc50;
              }
              break;
            case (uint **)0x2:
              if (ppuVar29 < ppuVar5) {
                uVar2 = (uint)*pbVar3;
                uVar21 = (int)ppuVar5 - (int)ppuVar29;
                uVar10 = (uint)pbVar3[1];
                puVar31 = (uint *)(iVar32 + (int)ppuVar29);
                puVar16 = puVar31;
                if (uVar21 < 4) {
                  while (uVar2 != (byte)*puVar16 && uVar10 != (byte)*puVar16) {
                    puVar16 = (uint *)((int)puVar16 + 1);
                    uVar21 = uVar21 - 1;
                    if (uVar21 == 0) goto LAB_013ad610;
                  }
                }
                else {
                  uVar30 = *puVar31 ^ uVar2 * 0x1010101;
                  if (((~(0x1010100 - uVar30 | uVar30) & 0x80808080) == 0) &&
                     (uVar30 = *puVar31 ^ uVar10 * 0x1010101,
                     (~(0x1010100 - uVar30 | uVar30) & 0x80808080) == 0)) {
                    puVar16 = (uint *)((uint)puVar31 & 0xfffffffc);
                    do {
                      puVar16 = puVar16 + 1;
                      if (puVar12 + -1 < puVar16) break;
                      uVar21 = *puVar16 ^ uVar2 * 0x1010101;
                      uVar21 = ~(0x1010100 - uVar21 | uVar21);
                      bVar34 = (uVar21 & 0x80808080) == 0;
                      if (bVar34) {
                        uVar21 = *puVar16 ^ uVar10 * 0x1010101;
                        uVar21 = ~(0x1010100 - uVar21 | uVar21);
                      }
                    } while (bVar34 && (uVar21 & 0x80808080) == 0);
                    if (puVar12 <= puVar16) break;
                    while (uVar2 != (byte)*puVar16 && uVar10 != (byte)*puVar16) {
                      puVar16 = (uint *)((int)puVar16 + 1);
                      if (puVar16 == puVar12) goto LAB_013ad610;
                    }
                  }
                  else {
                    while (uVar2 != (byte)*puVar16 && uVar10 != (byte)*puVar16) {
                      uVar21 = uVar21 - 1;
                      puVar16 = (uint *)((int)puVar16 + 1);
                      if (uVar21 == 0) goto LAB_013ad610;
                    }
                  }
                }
LAB_013ad350:
                iVar26 = (int)puVar16 - (int)puVar31;
                goto LAB_013ad47c;
              }
              break;
            case (uint **)0x3:
              goto switchD_013acd3c_caseD_3;
            }
LAB_013ad610:
            param_3[7] = (int)ppuVar22;
            break;
          }
          bVar35 = uVar18 <= uVar6;
          bVar34 = uVar6 == uVar18;
          if (!bVar35 || bVar34) {
            bVar35 = uVar7 <= uVar18;
            bVar34 = uVar18 == uVar7;
          }
          if (bVar35 && !bVar34) goto LAB_013acd90;
          if ((uVar18 < uVar23) || (uVar28 < uVar18)) goto LAB_013acc4c;
          local_34 = (undefined4 ***)(uVar18 - uVar23 >> uVar1);
          if (uVar20 == 0) goto LAB_013ae2a0;
          if ((uint **)*puVar8 <= local_34) goto LAB_013ae1c0;
          uVar2 = (int)local_34 << 3 | 4;
          if (uVar11 <= uVar2) goto LAB_013ae2b4;
          ppuVar15 = (uint **)(uint)*(byte *)((int)puVar8 + uVar2);
          uVar2 = (int)local_34 << 3 | 5;
          uVar10 = uVar2 + (int)ppuVar15;
          if ((CARRY4(uVar2,(uint)ppuVar15)) || (uVar11 < uVar10)) goto LAB_013ae198;
          if ((uint **)0x3 < ppuVar15) {
LAB_013ae204:
            local_34 = (undefined4 ***)ppuVar15;
            goto LAB_013ae240;
          }
          pbVar3 = (byte *)((int)puVar8 + uVar2);
          ppuVar29 = (uint **)((int)ppuVar24 + 1);
          switch(ppuVar15) {
          case (uint **)0x0:
            goto switchD_013acd3c_caseD_0;
          case (uint **)0x1:
            if (ppuVar29 < ppuVar5) {
              uVar2 = (uint)*pbVar3;
              uVar10 = (int)ppuVar5 - (int)ppuVar29;
              puVar31 = (uint *)(iVar32 + (int)ppuVar29);
              puVar16 = puVar31;
              if (uVar10 < 4) {
                while (uVar2 != (byte)*puVar16) {
                  puVar16 = (uint *)((int)puVar16 + 1);
                  uVar10 = uVar10 - 1;
                  if (uVar10 == 0) goto LAB_013ad610;
                }
              }
              else {
                uVar21 = uVar2 * 0x1010101;
                if ((~(0x1010100 - (*puVar31 ^ uVar21) | *puVar31 ^ uVar21) & 0x80808080) == 0) {
                  puVar16 = (uint *)(((uint)puVar31 & 0xfffffffc) + 4);
                  if (uVar10 < 9) {
                    if (puVar16 < puVar12) {
                      iVar26 = (int)ppuVar5 + ((((uint)puVar31 & 3) - 5) - (int)ppuVar24);
                      while (uVar2 != (byte)*puVar16) {
                        puVar16 = (uint *)((int)puVar16 + 1);
                        iVar26 = iVar26 + -1;
                        if (iVar26 == 0) goto LAB_013ad610;
                      }
                      goto LAB_013ad478;
                    }
                  }
                  else {
                    for (; puVar16 <= puVar12 + -2; puVar16 = puVar16 + 2) {
                      uVar10 = ~(0x1010100 - (*puVar16 ^ uVar21) | *puVar16 ^ uVar21);
                      bVar34 = (uVar10 & 0x80808080) == 0;
                      if (bVar34) {
                        uVar10 = ~(0x1010100 - (puVar16[1] ^ uVar21) | puVar16[1] ^ uVar21);
                      }
                      if (!bVar34 || (uVar10 & 0x80808080) != 0) break;
                    }
                    if (puVar16 < puVar12) {
                      while (uVar2 != (byte)*puVar16) {
                        puVar16 = (uint *)((int)puVar16 + 1);
                        if (puVar16 == puVar12) goto LAB_013ad610;
                      }
                      goto LAB_013ad478;
                    }
                  }
                  goto LAB_013ad610;
                }
                while (uVar2 != (byte)*puVar16) {
                  puVar16 = (uint *)((int)puVar16 + 1);
                  uVar10 = uVar10 - 1;
                  if (uVar10 == 0) goto LAB_013ad610;
                }
              }
              goto LAB_013ad478;
            }
            goto LAB_013ad610;
          case (uint **)0x2:
            if (ppuVar5 <= ppuVar29) goto LAB_013ad610;
            uVar2 = (uint)*pbVar3;
            uVar21 = (int)ppuVar5 - (int)ppuVar29;
            uVar10 = (uint)pbVar3[1];
            puVar31 = (uint *)(iVar32 + (int)ppuVar29);
            puVar16 = puVar31;
            if (uVar21 < 4) {
              while (uVar2 != (byte)*puVar16 && uVar10 != (byte)*puVar16) {
                puVar16 = (uint *)((int)puVar16 + 1);
                uVar21 = uVar21 - 1;
                if (uVar21 == 0) goto LAB_013ad610;
              }
            }
            else {
              uVar30 = *puVar31 ^ uVar2 * 0x1010101;
              if (((~(0x1010100 - uVar30 | uVar30) & 0x80808080) == 0) &&
                 (uVar30 = *puVar31 ^ uVar10 * 0x1010101,
                 (~(0x1010100 - uVar30 | uVar30) & 0x80808080) == 0)) {
                puVar16 = (uint *)((uint)puVar31 & 0xfffffffc);
                do {
                  puVar16 = puVar16 + 1;
                  if (puVar12 + -1 < puVar16) break;
                  uVar21 = *puVar16 ^ uVar2 * 0x1010101;
                  uVar21 = ~(0x1010100 - uVar21 | uVar21);
                  bVar34 = (uVar21 & 0x80808080) == 0;
                  if (bVar34) {
                    uVar21 = *puVar16 ^ uVar10 * 0x1010101;
                    uVar21 = ~(0x1010100 - uVar21 | uVar21);
                  }
                } while (bVar34 && (uVar21 & 0x80808080) == 0);
                if (puVar12 <= puVar16) goto LAB_013ad610;
                while (uVar2 != (byte)*puVar16 && uVar10 != (byte)*puVar16) {
                  puVar16 = (uint *)((int)puVar16 + 1);
                  if (puVar16 == puVar12) goto LAB_013ad610;
                }
              }
              else {
                while (uVar2 != (byte)*puVar16 && uVar10 != (byte)*puVar16) {
                  uVar21 = uVar21 - 1;
                  puVar16 = (uint *)((int)puVar16 + 1);
                  if (uVar21 == 0) goto LAB_013ad610;
                }
              }
            }
            goto LAB_013ad350;
          case (uint **)0x3:
switchD_013acd3c_caseD_3:
            iVar26 = (int)ppuVar24 + iVar32 + 1;
            local_34 = (undefined4 ***)CONCAT31(local_34._1_3_,pbVar3[2]);
            local_58 = (uint ***)&local_34;
            local_5c = &local_6c;
            local_6c = CONCAT31(local_6c._1_3_,pbVar3[1]);
            local_60 = &local_40;
            local_40 = (uint **)CONCAT31(local_40._1_3_,*pbVar3);
            uVar36 = FUN_005f70a0(&local_60,iVar26,puVar12);
            if ((uVar36 & 1) == 0) goto LAB_013ad610;
            ppuVar24 = (uint **)((int)ppuVar24 + ((int)(uVar36 >> 0x20) - iVar26) + 1);
          }
        }
LAB_013acc50:
        param_3[7] = (int)ppuVar24;
      } while (ppuVar24 < ppuVar22);
    }
    if (ppuVar22 < ppuVar5) {
      uVar1 = (uint)*(byte *)(param_2[2] + (int)ppuVar22);
      uVar11 = param_1[0x16];
      uVar18 = uVar18 + *(byte *)((int)param_1 + uVar1 + 0x5c);
      if (uVar11 <= uVar18) goto LAB_013ae2d0;
      uVar11 = *(uint *)(param_1[0x15] + uVar18 * 4);
      if (((uVar11 == 0) || (uVar11 < param_1[2])) || (param_1[3] < uVar11)) {
        if ((uVar11 == 0) || (param_1[1] != uVar11)) goto LAB_013adf5c;
        goto LAB_013add70;
      }
      iVar32 = 0;
      ppuVar5 = ppuVar22;
      if (param_1[0x5e] != 1) {
        uVar25 = param_1[0x5a];
        uVar1 = uVar11 - param_1[2] >> (param_1[0x57] & 0x1f);
        uVar18 = uVar1 << 1;
        if (uVar25 <= uVar1 * 2) goto LAB_013ae2fc;
        uVar18 = uVar18 | 1;
        if (uVar25 <= uVar18) goto LAB_013ae31c;
        uVar1 = *(uint *)(param_1[0x59] + uVar1 * 8);
        uVar18 = *(uint *)(param_1[0x59] + uVar18 * 4);
        if ((CARRY4(uVar18,uVar1)) || (param_1[0x5d] < uVar18 + uVar1)) goto LAB_013ae1f8;
        goto joined_r0x013ad6c8;
      }
    }
    else {
      uVar11 = param_1[0x16];
      uVar18 = *(byte *)((int)param_1 + 0x15b) + uVar18 + 1;
      if (uVar11 <= uVar18) goto LAB_013ae2e0;
      uVar11 = *(uint *)(param_1[0x15] + uVar18 * 4);
      if (((uVar11 == 0) || (uVar11 < param_1[2])) || (param_1[3] < uVar11)) goto LAB_013adf5c;
      iVar32 = 0;
      if (param_1[0x5e] != 1) {
        uVar25 = param_1[0x5a];
        uVar1 = uVar11 - param_1[2] >> (param_1[0x57] & 0x1f);
        uVar18 = uVar1 << 1;
        if (uVar25 <= uVar1 * 2) goto LAB_013ae2fc;
        uVar18 = uVar18 | 1;
        if (uVar25 <= uVar18) {
LAB_013ae31c:
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar18,uVar25,&DAT_01894878);
        }
        uVar1 = *(uint *)(param_1[0x59] + uVar1 * 8);
        uVar18 = *(uint *)(param_1[0x59] + uVar18 * 4);
        if ((CARRY4(uVar18,uVar1)) || (param_1[0x5d] < uVar18 + uVar1)) goto LAB_013ae1f8;
joined_r0x013ad6c8:
        if (uVar18 == 0) goto LAB_013ae308;
        iVar32 = *(int *)(param_1[0x5c] + uVar1 * 4);
      }
    }
    param_3[1] = iVar32;
    param_3[2] = (int)ppuVar5;
  }
  else {
    uVar6 = param_1[100];
    if (param_3[3] == 1) {
      uVar18 = param_3[4];
      if (param_3[5] != 0) {
        if (((uVar18 == 0) || (uVar18 < param_1[2])) || (param_1[3] < uVar18)) {
LAB_013ae1a8:
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_003cd612,0x29,&DAT_018924d0);
        }
        uVar4 = param_1[0x5a];
        uVar11 = uVar18 - param_1[2] >> (param_1[0x57] & 0x1f);
        uVar1 = uVar11 << 1 | 1;
        if (uVar4 <= uVar1) {
LAB_013ae2c4:
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar1,uVar4,&DAT_01894878);
        }
        uVar25 = param_1[0x59];
        uVar4 = param_3[6];
        uVar1 = *(uint *)(uVar25 + uVar1 * 4);
        if (uVar4 < uVar1) {
LAB_013ad50c:
          uVar18 = param_1[0x5e];
          iVar32 = 0;
          param_3[5] = 1;
          param_3[6] = uVar4 + 1;
          if (uVar18 != 1) {
            uVar18 = *(uint *)(uVar25 + uVar11 * 8);
            if ((CARRY4(uVar1,uVar18)) || (param_1[0x5d] < uVar1 + uVar18)) goto LAB_013ae1f8;
            iVar32 = *(int *)(param_1[0x5c] + uVar18 * 4 + uVar4 * 4);
          }
          *param_3 = 1;
          param_3[1] = iVar32;
          param_3[2] = param_3[7];
          return 0;
        }
      }
      ppuVar24 = (uint **)(param_3[7] + 1);
      param_3[7] = (int)ppuVar24;
      if (ppuVar22 < ppuVar24) {
        return 0;
      }
    }
    else {
      param_3[7] = (int)ppuVar24;
      uVar36 = FUN_0136d07c(param_1,param_2);
      uVar18 = (uint)(uVar36 >> 0x20);
      if ((uVar36 & 1) != 0) {
        return uVar18;
      }
    }
    ppuVar5 = (uint **)param_2[3];
    if (ppuVar24 < ppuVar22) {
      uVar1 = param_1[0x10];
      uVar28 = param_1[0x57];
      uVar4 = param_1[2];
      uVar25 = param_1[3];
      uVar7 = param_1[4];
      uVar9 = param_1[5];
      uVar14 = param_1[6];
      uVar20 = param_1[7];
      uVar23 = param_1[0x11];
      uVar30 = param_1[0x61];
      iVar32 = param_2[2];
      puVar8 = (uint *)param_1[0x60];
      puVar12 = (uint *)(iVar32 + (int)ppuVar5);
      uVar10 = *param_1;
      uVar21 = param_1[0x15];
      uVar33 = param_1[0x16];
      uVar11 = uVar30 << 2;
LAB_013ad7e4:
      if (ppuVar5 <= ppuVar24) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(ppuVar24,ppuVar5,&DAT_01893820);
      }
      uVar2 = (uint)*(byte *)(iVar32 + (int)ppuVar24);
      uVar18 = uVar18 + *(byte *)((int)param_1 + uVar2 + 0x5c);
      if (uVar33 <= uVar18) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar18,uVar33,&DAT_018936f0);
      }
      uVar18 = *(uint *)(uVar21 + uVar18 * 4);
      if (uVar10 < uVar18) {
LAB_013ad7d4:
        ppuVar15 = (uint **)((int)ppuVar24 + 1);
        param_3[7] = (int)ppuVar15;
        goto LAB_013ad7dc;
      }
      param_3[3] = 1;
      param_3[4] = uVar18;
      if (uVar18 != 0) {
        bVar35 = uVar18 <= uVar14;
        bVar34 = uVar14 == uVar18;
        if (!bVar35 || bVar34) {
          bVar35 = uVar20 <= uVar18;
          bVar34 = uVar18 == uVar20;
        }
        if (!bVar35 || bVar34) {
          (**(code **)(uVar23 + 0x10))
                    (&local_6c,uVar1 + 8 + (*(int *)(uVar23 + 8) - 1U & 0xfffffff8),iVar32,ppuVar5,
                     ppuVar24,ppuVar22);
          ppuVar15 = local_68;
          if (local_6c != 1) {
            return 0;
          }
          if (local_68 <= ppuVar24) goto LAB_013ad7d4;
          param_3[7] = (int)local_68;
          if (uVar6 == 0) {
            local_60 = (uint ***)*param_2;
            local_5c = (int *)param_2[1];
            local_58 = (uint ***)param_2[2];
            local_54 = param_2[3];
            local_50 = (uint **)param_2[4];
            local_4c = param_2[5];
            iStack_48 = param_2[6];
            bVar35 = (uint **)(local_4c + 1) <= local_68;
            bVar34 = local_68 == (uint **)(local_4c + 1);
            local_40 = local_68;
            if (!bVar35 || bVar34) {
              bVar35 = local_54 <= local_4c;
              bVar34 = local_4c == local_54;
            }
            local_3c = local_4c;
            if (bVar35 && !bVar34) {
              local_2c = &local_38;
              local_34 = &local_40;
              local_28 = &LAB_00fac484;
              local_30 = FUN_005ffff4;
              local_38 = local_54;
                    /* WARNING: Subroutine does not return */
              FUN_00faa478(&DAT_0057a181,&local_34,&DAT_01893ee0);
            }
            local_50 = local_68;
            uVar36 = FUN_0136d07c(param_1,&local_60);
            uVar18 = (uint)(uVar36 >> 0x20);
            if ((uVar36 & 1) != 0) {
              return uVar18;
            }
          }
          goto LAB_013ad7dc;
        }
      }
      if (((uVar18 == 0) || (uVar18 < uVar4)) || (uVar25 < uVar18)) {
        if (((uVar18 == 0) || (uVar18 < uVar7)) || (uVar9 < uVar18)) {
          if (uVar18 == 0) {
            return 0;
          }
LAB_013ae184:
          uVar18 = FUN_013c7204(uVar2,ppuVar24);
          return uVar18;
        }
        local_34 = (undefined4 ***)(uVar18 - uVar7 >> (uVar28 & 0x1f));
        if (uVar30 == 0) {
LAB_013ae2a0:
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(0,0,&DAT_01892d90);
        }
        if ((uint **)*puVar8 <= local_34) {
LAB_013ae1c0:
          local_60 = (uint ***)&local_34;
          local_5c = (int *)&LAB_00fac484;
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_005855ae,&local_60,&DAT_01893750);
        }
        uVar2 = (int)local_34 << 3 | 4;
        if (uVar11 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar2,uVar11,&DAT_01893730);
        }
        ppuVar29 = (uint **)(uint)*(byte *)((int)puVar8 + uVar2);
        uVar2 = (int)local_34 << 3 | 5;
        if ((CARRY4(uVar2,(uint)ppuVar29)) || (uVar11 < uVar2 + (int)ppuVar29)) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c();
        }
        if ((uint **)0x3 < ppuVar29) {
          local_34 = (undefined4 ***)ppuVar29;
LAB_013ae240:
          local_5c = (int *)&LAB_00fac484;
          local_60 = (uint ***)&local_34;
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00587cb5,&local_60,&DAT_018937a0);
        }
        pbVar3 = (byte *)((int)puVar8 + uVar2);
        ppuVar19 = (uint **)((int)ppuVar24 + 1);
        ppuVar15 = ppuVar22;
        switch(ppuVar29) {
        case (uint **)0x0:
switchD_013acd3c_caseD_0:
                    /* WARNING: Subroutine does not return */
          FUN_00faa478("cannot find with empty needles",0x3d,&DAT_01893790);
        case (uint **)0x1:
          if (ppuVar19 < ppuVar5) {
            uVar2 = (uint)*pbVar3;
            uVar13 = (int)ppuVar5 - (int)ppuVar19;
            puVar31 = (uint *)(iVar32 + (int)ppuVar19);
            puVar16 = puVar31;
            if (uVar13 < 4) {
              do {
                if (uVar2 == (byte)*puVar16) goto LAB_013add34;
                puVar16 = (uint *)((int)puVar16 + 1);
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            else {
              uVar27 = uVar2 * 0x1010101;
              if ((~(0x1010100 - (*puVar31 ^ uVar27) | *puVar31 ^ uVar27) & 0x80808080) == 0) {
                puVar16 = (uint *)(((uint)puVar31 & 0xfffffffc) + 4);
                if (uVar13 < 9) {
                  if (puVar16 < puVar12) {
                    iVar26 = (int)ppuVar5 + ((((uint)puVar31 & 3) - 5) - (int)ppuVar24);
                    do {
                      if (uVar2 == (byte)*puVar16) goto LAB_013add34;
                      puVar16 = (uint *)((int)puVar16 + 1);
                      iVar26 = iVar26 + -1;
                    } while (iVar26 != 0);
                  }
                }
                else {
                  for (; puVar16 <= puVar12 + -2; puVar16 = puVar16 + 2) {
                    uVar13 = ~(0x1010100 - (*puVar16 ^ uVar27) | *puVar16 ^ uVar27);
                    bVar34 = (uVar13 & 0x80808080) == 0;
                    if (bVar34) {
                      uVar13 = ~(0x1010100 - (puVar16[1] ^ uVar27) | puVar16[1] ^ uVar27);
                    }
                    if (!bVar34 || (uVar13 & 0x80808080) != 0) break;
                  }
                  if (puVar16 < puVar12) {
                    do {
                      if (uVar2 == (byte)*puVar16) goto LAB_013add34;
                      puVar16 = (uint *)((int)puVar16 + 1);
                    } while (puVar16 != puVar12);
                  }
                }
              }
              else {
                do {
                  if (uVar2 == (byte)*puVar16) goto LAB_013add34;
                  puVar16 = (uint *)((int)puVar16 + 1);
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
            }
          }
          break;
        case (uint **)0x2:
          if (ppuVar19 < ppuVar5) {
            uVar2 = (uint)*pbVar3;
            uVar27 = (int)ppuVar5 - (int)ppuVar19;
            uVar13 = (uint)pbVar3[1];
            puVar31 = (uint *)(iVar32 + (int)ppuVar19);
            puVar16 = puVar31;
            if (uVar27 < 4) {
              do {
                if (uVar2 == (byte)*puVar16 || uVar13 == (byte)*puVar16) goto LAB_013adca4;
                puVar16 = (uint *)((int)puVar16 + 1);
                uVar27 = uVar27 - 1;
              } while (uVar27 != 0);
            }
            else {
              uVar17 = *puVar31 ^ uVar2 * 0x1010101;
              if (((~(0x1010100 - uVar17 | uVar17) & 0x80808080) != 0) ||
                 (uVar17 = *puVar31 ^ uVar13 * 0x1010101,
                 (~(0x1010100 - uVar17 | uVar17) & 0x80808080) != 0)) {
                do {
                  if (uVar2 == (byte)*puVar16 || uVar13 == (byte)*puVar16) goto LAB_013adca4;
                  uVar27 = uVar27 - 1;
                  puVar16 = (uint *)((int)puVar16 + 1);
                } while (uVar27 != 0);
                goto LAB_013adc98;
              }
              puVar16 = (uint *)((uint)puVar31 & 0xfffffffc);
              do {
                puVar16 = puVar16 + 1;
                if (puVar12 + -1 < puVar16) break;
                uVar27 = *puVar16;
                uVar17 = uVar27 ^ uVar2 * 0x1010101;
                bVar34 = (~(0x1010100 - uVar17 | uVar17) & 0x80808080) == 0;
                if (bVar34) {
                  uVar27 = uVar27 ^ uVar13 * 0x1010101;
                  uVar27 = ~(0x1010100 - uVar27 | uVar27);
                }
              } while (bVar34 && (uVar27 & 0x80808080) == 0);
              if (puVar16 < puVar12) {
                do {
                  if (uVar2 == (byte)*puVar16 || uVar13 == (byte)*puVar16) goto LAB_013adca4;
                  puVar16 = (uint *)((int)puVar16 + 1);
                } while (puVar16 != puVar12);
              }
            }
          }
          break;
        case (uint **)0x3:
          local_34._1_3_ = (undefined3)((uint)local_34 >> 8);
          local_34 = (undefined4 ***)CONCAT31(local_34._1_3_,pbVar3[2]);
          local_58 = (uint ***)&local_34;
          local_5c = &local_6c;
          local_60 = &local_40;
          local_6c = CONCAT31(local_6c._1_3_,pbVar3[1]);
          local_40 = (uint **)CONCAT31(local_40._1_3_,*pbVar3);
          uVar36 = FUN_005f70a0(&local_60,iVar32 + (int)ppuVar19,puVar12);
          if ((uVar36 & 1) != 0) {
            ppuVar15 = (uint **)(((int)(uVar36 >> 0x20) - (iVar32 + (int)ppuVar19)) + (int)ppuVar19)
            ;
          }
LAB_013adc98:
        }
        goto LAB_013add3c;
      }
      param_3[5] = 1;
      param_3[6] = 1;
      iVar32 = 0;
      if (param_1[0x5e] != 1) {
        uVar25 = param_1[0x5a];
        uVar11 = uVar18 - uVar4 >> (uVar28 & 0x1f);
        uVar18 = uVar11 << 1;
        if (uVar25 <= uVar11 * 2) goto LAB_013ae2fc;
        uVar18 = uVar18 | 1;
        if (uVar25 <= uVar18) goto LAB_013ae31c;
        uVar11 = *(uint *)(param_1[0x59] + uVar11 * 8);
        uVar18 = *(uint *)(param_1[0x59] + uVar18 * 4);
        if ((CARRY4(uVar18,uVar11)) || (param_1[0x5d] < uVar18 + uVar11)) goto LAB_013ae1f8;
        if (uVar18 == 0) goto LAB_013ae308;
        iVar32 = *(int *)(param_1[0x5c] + uVar11 * 4);
      }
      *param_3 = 1;
      param_3[1] = iVar32;
      param_3[2] = (int)ppuVar24;
      return 0;
    }
LAB_013add98:
    if (ppuVar22 < ppuVar5) {
      uVar1 = (uint)*(byte *)(param_2[2] + (int)ppuVar22);
      uVar11 = param_1[0x16];
      uVar18 = uVar18 + *(byte *)((int)param_1 + uVar1 + 0x5c);
      if (uVar11 <= uVar18) {
LAB_013ae2d0:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar18,uVar11,&DAT_018936f0);
      }
      uVar11 = *(uint *)(param_1[0x15] + uVar18 * 4);
      if (((uVar11 == 0) || (uVar11 < param_1[2])) || (param_1[3] < uVar11)) {
        if ((uVar11 == 0) || (param_1[1] != uVar11)) goto LAB_013adf5c;
LAB_013add70:
        uVar18 = FUN_013c7204(uVar1,ppuVar22);
        param_3[3] = 1;
        param_3[4] = uVar11;
        if (*param_3 == 0) {
          return uVar18;
        }
        goto LAB_013ade7c;
      }
      iVar32 = 0;
      ppuVar5 = ppuVar22;
      if (param_1[0x5e] != 1) {
        uVar25 = param_1[0x5a];
        uVar1 = uVar11 - param_1[2] >> (param_1[0x57] & 0x1f);
        uVar18 = uVar1 << 1;
        if (uVar25 <= uVar1 * 2) goto LAB_013ae2fc;
        uVar18 = uVar18 | 1;
        if (uVar25 <= uVar18) goto LAB_013ae31c;
        uVar1 = *(uint *)(param_1[0x59] + uVar1 * 8);
        uVar18 = *(uint *)(param_1[0x59] + uVar18 * 4);
        if ((CARRY4(uVar18,uVar1)) || (param_1[0x5d] < uVar18 + uVar1)) goto LAB_013ae1f8;
        goto joined_r0x013adf38;
      }
    }
    else {
      uVar11 = param_1[0x16];
      uVar18 = *(byte *)((int)param_1 + 0x15b) + uVar18 + 1;
      if (uVar11 <= uVar18) {
LAB_013ae2e0:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar18,uVar11,&DAT_018ae9c4);
      }
      uVar11 = *(uint *)(param_1[0x15] + uVar18 * 4);
      if (((uVar11 == 0) || (uVar11 < param_1[2])) || (param_1[3] < uVar11)) {
LAB_013adf5c:
        param_3[3] = 1;
        param_3[4] = uVar11;
        return 0;
      }
      iVar32 = 0;
      if (param_1[0x5e] != 1) {
        uVar25 = param_1[0x5a];
        uVar1 = uVar11 - param_1[2] >> (param_1[0x57] & 0x1f);
        uVar18 = uVar1 << 1;
        if (uVar25 <= uVar1 * 2) {
LAB_013ae2fc:
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar18,uVar25,&DAT_01894868);
        }
        uVar18 = uVar18 | 1;
        if (uVar25 <= uVar18) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar18,uVar25,&DAT_01894878);
        }
        uVar1 = *(uint *)(param_1[0x59] + uVar1 * 8);
        uVar18 = *(uint *)(param_1[0x59] + uVar18 * 4);
        if ((CARRY4(uVar18,uVar1)) || (param_1[0x5d] < uVar18 + uVar1)) {
LAB_013ae1f8:
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c();
        }
joined_r0x013adf38:
        if (uVar18 == 0) {
LAB_013ae308:
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(0,0,&DAT_01894818);
        }
        iVar32 = *(int *)(param_1[0x5c] + uVar1 * 4);
      }
    }
    param_3[1] = iVar32;
    param_3[2] = (int)ppuVar5;
  }
  *param_3 = 1;
  param_3[3] = 1;
  uVar18 = 0;
  param_3[4] = uVar11;
LAB_013ade7c:
  param_3[5] = 1;
  param_3[6] = 1;
  return uVar18;
LAB_013adca4:
  iVar26 = (int)puVar16 - (int)puVar31;
  goto LAB_013add38;
LAB_013add34:
  iVar26 = (int)puVar16 - (int)puVar31;
LAB_013add38:
  ppuVar15 = (uint **)(iVar26 + (int)ppuVar19);
LAB_013add3c:
  param_3[7] = (int)ppuVar15;
LAB_013ad7dc:
  ppuVar24 = ppuVar15;
  if (ppuVar22 <= ppuVar15) goto LAB_013add98;
  goto LAB_013ad7e4;
}

