// FUN_01377a14 @ 01377a14 size=4056 calls_out=8 calls_in=4
// strings: cannot find with empty needles

void FUN_01377a14(uint *param_1,undefined4 *param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  char cVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  byte *pbVar18;
  int iVar19;
  byte *pbVar20;
  uint *puVar21;
  byte *pbVar22;
  uint uVar23;
  uint *puVar24;
  uint uVar25;
  byte *pbVar26;
  uint uVar27;
  byte *unaff_r5;
  uint uVar28;
  byte *pbVar29;
  byte *pbVar30;
  byte *pbVar31;
  byte *pbVar32;
  uint *puVar33;
  int iVar34;
  byte *pbVar35;
  bool bVar36;
  ulonglong uVar37;
  uint local_48;
  byte local_36;
  byte local_35;
  byte **local_34;
  code *local_30;
  byte **local_2c;
  byte *local_28;
  
  pbVar35 = (byte *)0x1377a34;
  uVar37 = FUN_0136d07c(param_2,param_3);
  pbVar20 = (byte *)(uVar37 >> 0x20);
  if ((uVar37 & 1) != 0) {
    local_28 = pbVar20;
    if (1 < *pbVar20) {
      local_34 = &local_28;
      local_30 = FUN_013c828c;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_005733f0,&local_34,&DAT_01892790);
    }
    uVar28 = *(uint *)(pbVar20 + 4);
    thunk_FUN_016d3fb4(pbVar20);
    *param_1 = 2;
    param_1[1] = uVar28;
    return;
  }
  pbVar29 = *(byte **)(param_3 + 0x10);
  pbVar26 = *(byte **)(param_3 + 0x14);
  pbVar4 = *(byte **)(param_3 + 0xc);
  if (pbVar29 < pbVar26) {
    iVar34 = *(int *)(param_3 + 8);
    uVar28 = param_2[0x57] & 0x1f;
    pbVar5 = (byte *)param_2[1];
    pbVar6 = (byte *)param_2[2];
    pbVar7 = (byte *)param_2[3];
    pbVar8 = (byte *)param_2[5];
    puVar9 = (uint *)param_2[0x60];
    iVar10 = param_2[0x5c];
    uVar11 = param_2[0x5d];
    iVar12 = param_2[0x5e];
    iVar13 = param_2[0x59];
    uVar14 = param_2[0x5a];
    iVar15 = param_2[0x15];
    puVar21 = (uint *)(pbVar4 + iVar34);
    iVar16 = param_2[0x61];
    cVar3 = *(char *)(param_3 + 0x18);
    pbVar22 = (byte *)*param_2;
    pbVar31 = (byte *)param_2[4];
    pbVar32 = (byte *)param_2[0x16];
    pbVar1 = (byte *)(iVar16 << 2);
    local_48 = 0;
    unaff_r5 = pbVar26;
    pbVar30 = pbVar29;
    do {
      if (pbVar4 <= pbVar30) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(pbVar30,pbVar4,&DAT_018929f0);
      }
      puVar33 = (uint *)(pbVar30 + iVar34);
      pbVar20 = pbVar20 + *(byte *)((int)param_2 + (byte)*puVar33 + 0x5c);
      if (pbVar32 <= pbVar20) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(pbVar20,pbVar32,&DAT_018936f0);
      }
      pbVar20 = *(byte **)(iVar15 + (int)pbVar20 * 4);
      if (pbVar22 < pbVar20) {
LAB_01377b9c:
        pbVar29 = pbVar30 + 1;
      }
      else {
        pbVar29 = pbVar26;
        if (((pbVar20 == (byte *)0x0) || (pbVar20 < pbVar6)) || (pbVar7 < pbVar20)) {
          if (((pbVar20 == (byte *)0x0) || (pbVar20 < pbVar31)) || (pbVar8 < pbVar20)) {
            if (pbVar20 != (byte *)0x0) {
              if (pbVar5 == pbVar20) {
                FUN_013c7204((uint)(byte)*puVar33,pbVar30);
                uVar28 = FUN_0136e7e8();
                *param_1 = 2;
                param_1[1] = uVar28;
                return;
              }
              goto LAB_01377b9c;
            }
            goto LAB_01378760;
          }
          pbVar2 = (byte *)((uint)((int)pbVar20 - (int)pbVar31) >> uVar28);
          local_28 = pbVar2;
          if (iVar16 == 0) {
LAB_0137898c:
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(0,0,&DAT_01892d90);
          }
          if ((byte *)*puVar9 <= pbVar2) {
LAB_013788e4:
            local_34 = &local_28;
            local_30 = (code *)&LAB_00fac484;
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_005855ae,&local_34,&DAT_01893750);
          }
          pbVar18 = (byte *)((int)pbVar2 << 3 | 4);
          if (pbVar1 <= pbVar18) {
LAB_013789a0:
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(pbVar18,pbVar1,&DAT_01893730);
          }
          local_28 = (byte *)(uint)*(byte *)((int)puVar9 + (int)pbVar18);
          uVar17 = (int)pbVar2 << 3 | 5;
          pbVar18 = local_28 + uVar17;
          if ((CARRY4(uVar17,(uint)local_28)) || (pbVar1 < pbVar18)) {
LAB_0137885c:
            local_28 = pbVar2;
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(uVar17,pbVar18,pbVar1,&DAT_01893740);
          }
          if ((byte *)0x3 < local_28) {
LAB_01378934:
            local_30 = (code *)&LAB_00fac484;
            local_34 = &local_28;
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_00587cb5,&local_34,&DAT_018937a0);
          }
          pbVar18 = (byte *)((int)puVar9 + uVar17);
          switch(local_28) {
          case (byte *)0x0:
switchD_01377cdc_caseD_0:
            local_28 = pbVar2;
                    /* WARNING: Subroutine does not return */
            FUN_00faa478("cannot find with empty needles",0x3d,&DAT_01893790);
          case (byte *)0x1:
            uVar17 = (uint)*pbVar18;
            uVar23 = (int)pbVar4 - (int)pbVar30;
            puVar24 = puVar33;
            if (uVar23 < 4) {
              while (uVar17 != (byte)*puVar24) {
                puVar24 = (uint *)((int)puVar24 + 1);
                uVar23 = uVar23 - 1;
                local_28 = pbVar2;
                if (uVar23 == 0) goto LAB_01378590;
              }
            }
            else {
              uVar25 = uVar17 * 0x1010101;
              if ((~(0x1010100 - (*puVar33 ^ uVar25) | *puVar33 ^ uVar25) & 0x80808080) == 0) {
                puVar24 = (uint *)(((uint)puVar33 & 0xfffffffc) + 4);
                if (uVar23 < 9) {
                  if (puVar21 <= puVar24) goto LAB_01378850;
                  pbVar18 = pbVar4 + ((((uint)puVar33 & 3) - 4) - (int)pbVar30);
                  while (uVar17 != (byte)*puVar24) {
                    puVar24 = (uint *)((int)puVar24 + 1);
                    pbVar18 = pbVar18 + -1;
                    local_28 = pbVar2;
                    if (pbVar18 == (byte *)0x0) goto LAB_01378590;
                  }
                }
                else {
                  for (; puVar24 <= puVar21 + -2; puVar24 = puVar24 + 2) {
                    uVar23 = ~(0x1010100 - (*puVar24 ^ uVar25) | *puVar24 ^ uVar25);
                    bVar36 = (uVar23 & 0x80808080) != 0;
                    if (!bVar36) {
                      uVar23 = ~(0x1010100 - (puVar24[1] ^ uVar25) | puVar24[1] ^ uVar25);
                    }
                    if (bVar36 || (uVar23 & 0x80808080) != 0) break;
                  }
                  if (puVar21 <= puVar24) {
                    local_28 = pbVar2;
                    goto LAB_013785ec;
                  }
                  while (uVar17 != (byte)*puVar24) {
                    puVar24 = (uint *)((int)puVar24 + 1);
                    local_28 = pbVar2;
                    if (puVar24 == puVar21) goto LAB_01378590;
                  }
                }
              }
              else {
                while (uVar17 != (byte)*puVar24) {
                  puVar24 = (uint *)((int)puVar24 + 1);
                  uVar23 = uVar23 - 1;
                  local_28 = pbVar2;
                  if (uVar23 == 0) goto LAB_01378590;
                }
              }
            }
            pbVar29 = (byte *)((int)puVar24 + ((int)pbVar30 - (int)puVar33));
            local_28 = pbVar2;
            break;
          case (byte *)0x2:
            uVar17 = (uint)*pbVar18;
            uVar23 = (uint)pbVar18[1];
            uVar25 = (int)pbVar4 - (int)pbVar30;
            puVar24 = puVar33;
            if (uVar25 < 4) {
              while (uVar17 != (byte)*puVar24 && uVar23 != (byte)*puVar24) {
                puVar24 = (uint *)((int)puVar24 + 1);
                uVar25 = uVar25 - 1;
                local_28 = pbVar2;
                if (uVar25 == 0) goto LAB_013785a4;
              }
            }
            else {
              uVar27 = *puVar33 ^ uVar17 * 0x1010101;
              if (((~(0x1010100 - uVar27 | uVar27) & 0x80808080) == 0) &&
                 (uVar27 = *puVar33 ^ uVar23 * 0x1010101,
                 (~(0x1010100 - uVar27 | uVar27) & 0x80808080) == 0)) {
                puVar24 = (uint *)((uint)puVar33 & 0xfffffffc);
                do {
                  puVar24 = puVar24 + 1;
                  if (puVar21 + -1 < puVar24) break;
                  uVar25 = *puVar24;
                  uVar27 = uVar25 ^ uVar17 * 0x1010101;
                  bVar36 = (~(0x1010100 - uVar27 | uVar27) & 0x80808080) == 0;
                  if (bVar36) {
                    uVar25 = uVar25 ^ uVar23 * 0x1010101;
                    uVar25 = ~(0x1010100 - uVar25 | uVar25);
                  }
                } while (bVar36 && (uVar25 & 0x80808080) == 0);
                if (puVar21 <= puVar24) {
LAB_01378850:
                  local_28 = pbVar2;
                  goto LAB_013785f4;
                }
                while (uVar17 != (byte)*puVar24 && uVar23 != (byte)*puVar24) {
                  puVar24 = (uint *)((int)puVar24 + 1);
                  local_28 = pbVar2;
                  if (puVar24 == puVar21) goto LAB_01378590;
                }
              }
              else {
                while (uVar17 != (byte)*puVar24 && uVar23 != (byte)*puVar24) {
                  uVar25 = uVar25 - 1;
                  puVar24 = (uint *)((int)puVar24 + 1);
                  if (uVar25 == 0) {
                    local_28 = pbVar2;
LAB_013785e8:
                    goto LAB_013785ec;
                  }
                }
              }
            }
            pbVar29 = (byte *)((int)puVar24 + ((int)pbVar30 - (int)puVar33));
            local_28 = pbVar2;
            break;
          case (byte *)0x3:
            local_36 = *pbVar18;
            local_35 = pbVar18[1];
            local_2c = &local_28;
            local_30 = (code *)&local_35;
            local_28._1_3_ = (undefined3)((uint)pbVar2 >> 8);
            local_28 = (byte *)CONCAT31(local_28._1_3_,pbVar18[2]);
            local_34 = (byte **)&local_36;
            uVar37 = FUN_005f70a0(&local_34,puVar33,puVar21);
            if ((uVar37 & 1) != 0) {
              pbVar29 = pbVar30 + ((int)(uVar37 >> 0x20) - (int)puVar33);
              break;
            }
            goto LAB_013785f4;
          }
        }
        else {
          pbVar35 = (byte *)0x0;
          if (iVar12 != 1) {
            uVar17 = (uint)((int)pbVar20 - (int)pbVar6) >> uVar28;
            if (uVar14 <= uVar17 * 2) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar17 << 1,uVar14,&DAT_01894868);
            }
            uVar23 = uVar17 << 1 | 1;
            if (uVar14 <= uVar23) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar23,uVar14,&DAT_01894878);
            }
            uVar17 = *(uint *)(iVar13 + uVar17 * 8);
            uVar23 = *(uint *)(iVar13 + uVar23 * 4);
            if ((CARRY4(uVar23,uVar17)) || (uVar11 < uVar23 + uVar17)) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(uVar17,uVar23 + uVar17,uVar11,&DAT_01894888);
            }
            if (uVar23 == 0) goto LAB_013787d0;
            pbVar35 = *(byte **)(iVar10 + uVar17 * 4);
          }
          if (cVar3 != '\0') {
            *param_1 = 0;
            param_1[1] = (uint)pbVar35;
            param_1[2] = (uint)pbVar30;
            return;
          }
          local_48 = 1;
          unaff_r5 = pbVar30;
          if ((pbVar20 < pbVar31) || (pbVar8 < pbVar20)) goto LAB_01377b9c;
          pbVar2 = (byte *)((uint)((int)pbVar20 - (int)pbVar31) >> uVar28);
          local_28 = pbVar2;
          if (iVar16 == 0) goto LAB_0137898c;
          if ((byte *)*puVar9 <= pbVar2) goto LAB_013788e4;
          pbVar18 = (byte *)((int)pbVar2 << 3 | 4);
          if (pbVar1 <= pbVar18) goto LAB_013789a0;
          local_28 = (byte *)(uint)*(byte *)((int)puVar9 + (int)pbVar18);
          uVar17 = (int)pbVar2 << 3 | 5;
          pbVar18 = local_28 + uVar17;
          if ((CARRY4(uVar17,(uint)local_28)) || (pbVar1 < pbVar18)) goto LAB_0137885c;
          if ((byte *)0x3 < local_28) goto LAB_01378934;
          pbVar18 = (byte *)((int)puVar9 + uVar17);
          switch(local_28) {
          case (byte *)0x0:
            goto switchD_01377cdc_caseD_0;
          case (byte *)0x1:
            uVar17 = (uint)*pbVar18;
            puVar24 = puVar33;
            pbVar18 = pbVar4;
            if ((uint)((int)pbVar4 - (int)pbVar30) < 4) {
              while (uVar17 != (byte)*puVar24) {
                pbVar18 = pbVar18 + -1;
                puVar24 = (uint *)((int)puVar24 + 1);
                if (pbVar30 == pbVar18) goto LAB_0137858c;
              }
            }
            else {
              uVar23 = uVar17 * 0x1010101;
              if ((~(0x1010100 - (*puVar33 ^ uVar23) | *puVar33 ^ uVar23) & 0x80808080) == 0) {
                puVar24 = (uint *)(((uint)puVar33 & 0xfffffffc) + 4);
                if ((uint)((int)pbVar4 - (int)pbVar30) < 9) {
                  if (puVar21 <= puVar24) {
LAB_0137858c:
                    local_48 = 1;
                    local_28 = pbVar2;
LAB_01378590:
                    goto LAB_013785f4;
                  }
                  pbVar18 = pbVar4 + (((uint)puVar33 & 3) - 4);
                  while (uVar17 != (byte)*puVar24) {
                    pbVar18 = pbVar18 + -1;
                    puVar24 = (uint *)((int)puVar24 + 1);
                    if (pbVar30 == pbVar18) goto LAB_0137858c;
                  }
                }
                else {
                  for (; puVar24 <= puVar21 + -2; puVar24 = puVar24 + 2) {
                    uVar25 = ~(0x1010100 - (*puVar24 ^ uVar23) | *puVar24 ^ uVar23);
                    bVar36 = (uVar25 & 0x80808080) == 0;
                    if (bVar36) {
                      uVar25 = ~(0x1010100 - (puVar24[1] ^ uVar23) | puVar24[1] ^ uVar23);
                    }
                    if (!bVar36 || (uVar25 & 0x80808080) != 0) break;
                  }
                  local_48 = 1;
                  if (puVar21 <= puVar24) {
                    local_28 = pbVar2;
                    goto LAB_013785f4;
                  }
                  while (uVar17 != (byte)*puVar24) {
                    puVar24 = (uint *)((int)puVar24 + 1);
                    if (puVar24 == puVar21) goto LAB_0137858c;
                  }
                }
              }
              else {
                while (uVar17 != (byte)*puVar24) {
                  pbVar18 = pbVar18 + -1;
                  puVar24 = (uint *)((int)puVar24 + 1);
                  if (pbVar30 == pbVar18) goto LAB_0137858c;
                }
              }
            }
            iVar19 = (int)puVar24 - (int)puVar33;
            local_28 = pbVar2;
            break;
          case (byte *)0x2:
            uVar17 = (uint)*pbVar18;
            uVar23 = (uint)pbVar18[1];
            puVar24 = puVar33;
            pbVar18 = pbVar4;
            if ((uint)((int)pbVar4 - (int)pbVar30) < 4) {
              while (uVar17 != (byte)*puVar24 && uVar23 != (byte)*puVar24) {
                pbVar18 = pbVar18 + -1;
                puVar24 = (uint *)((int)puVar24 + 1);
                if (pbVar30 == pbVar18) {
                  local_48 = 1;
                  local_28 = pbVar2;
                  goto LAB_013785a4;
                }
              }
            }
            else {
              uVar25 = *puVar33 ^ uVar17 * 0x1010101;
              if (((~(0x1010100 - uVar25 | uVar25) & 0x80808080) == 0) &&
                 (uVar25 = *puVar33 ^ uVar23 * 0x1010101,
                 (~(0x1010100 - uVar25 | uVar25) & 0x80808080) == 0)) {
                puVar24 = (uint *)((uint)puVar33 & 0xfffffffc);
                do {
                  puVar24 = puVar24 + 1;
                  if (puVar21 + -1 < puVar24) break;
                  uVar25 = *puVar24 ^ uVar17 * 0x1010101;
                  uVar25 = ~(0x1010100 - uVar25 | uVar25);
                  bVar36 = (uVar25 & 0x80808080) == 0;
                  if (bVar36) {
                    uVar25 = *puVar24 ^ uVar23 * 0x1010101;
                    uVar25 = ~(0x1010100 - uVar25 | uVar25);
                  }
                } while (bVar36 && (uVar25 & 0x80808080) == 0);
                local_48 = 1;
                if (puVar21 <= puVar24) {
                  local_28 = pbVar2;
                  goto LAB_013785f4;
                }
                while (uVar17 != (byte)*puVar24 && uVar23 != (byte)*puVar24) {
                  puVar24 = (uint *)((int)puVar24 + 1);
                  if (puVar24 == puVar21) goto LAB_0137858c;
                }
              }
              else {
                while (uVar17 != (byte)*puVar24 && uVar23 != (byte)*puVar24) {
                  pbVar18 = pbVar18 + -1;
                  puVar24 = (uint *)((int)puVar24 + 1);
                  if (pbVar30 == pbVar18) {
                    local_48 = 1;
                    local_28 = pbVar2;
                    goto LAB_013785e8;
                  }
                }
              }
            }
            iVar19 = (int)puVar24 - (int)puVar33;
            local_28 = pbVar2;
            break;
          case (byte *)0x3:
            local_36 = *pbVar18;
            local_35 = pbVar18[1];
            local_2c = &local_28;
            local_30 = (code *)&local_35;
            local_28._1_3_ = (undefined3)((uint)pbVar2 >> 8);
            local_28 = (byte *)CONCAT31(local_28._1_3_,pbVar18[2]);
            local_34 = (byte **)&local_36;
            uVar37 = FUN_005f70a0(&local_34,puVar33,puVar21);
            if ((uVar37 & 1) == 0) {
              local_48 = 1;
LAB_013785ec:
              goto LAB_013785f4;
            }
            iVar19 = (int)(uVar37 >> 0x20) - (int)puVar33;
          }
          pbVar29 = pbVar30 + iVar19;
          local_48 = 1;
        }
      }
      pbVar30 = pbVar29;
    } while (pbVar29 < pbVar26);
  }
  else {
    local_48 = 0;
  }
LAB_013785f4:
  if (pbVar26 < pbVar4) {
    pbVar20 = pbVar20 + *(byte *)((int)param_2 + pbVar26[*(int *)(param_3 + 8)] + 0x5c);
    if ((byte *)param_2[0x16] <= pbVar20) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(pbVar20,(byte *)param_2[0x16],&DAT_018936f0);
    }
    uVar28 = *(uint *)(param_2[0x15] + (int)pbVar20 * 4);
    if (((uVar28 == 0) || (uVar28 < (uint)param_2[2])) || ((uint)param_2[3] < uVar28)) {
      if ((uVar28 != 0) && (param_2[1] == uVar28)) {
        *param_1 = 2;
        param_1[1] = (uint)pbVar26;
        return;
      }
      goto LAB_01378758;
    }
    if (param_2[0x5e] == 1) {
      local_48 = 1;
      pbVar35 = (byte *)0x0;
      unaff_r5 = pbVar26;
      goto LAB_01378758;
    }
    uVar14 = param_2[0x5a];
    uVar11 = uVar28 - param_2[2] >> (param_2[0x57] & 0x1f);
    uVar28 = uVar11 << 1;
    if (uVar14 <= uVar11 * 2) {
LAB_013789f4:
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar28,uVar14,&DAT_01894868);
    }
    uVar28 = uVar28 | 1;
    if (uVar14 <= uVar28) {
LAB_01378a00:
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar28,uVar14,&DAT_01894878);
    }
    uVar11 = *(uint *)(param_2[0x59] + uVar11 * 8);
    uVar28 = *(uint *)(param_2[0x59] + uVar28 * 4);
    if ((CARRY4(uVar28,uVar11)) || ((uint)param_2[0x5d] < uVar28 + uVar11)) {
LAB_01378910:
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c();
    }
  }
  else {
    pbVar20 = pbVar20 + *(byte *)((int)param_2 + 0x15b) + 1;
    if ((byte *)param_2[0x16] <= pbVar20) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(pbVar20,(byte *)param_2[0x16],&DAT_018ae9c4);
    }
    uVar28 = *(uint *)(param_2[0x15] + (int)pbVar20 * 4);
    if (uVar28 == 0) goto LAB_01378758;
    if ((uVar28 < (uint)param_2[2]) || ((uint)param_2[3] < uVar28)) goto LAB_01378758;
    if (param_2[0x5e] == 1) {
      local_48 = 1;
      pbVar35 = (byte *)0x0;
      unaff_r5 = pbVar4;
      goto LAB_01378758;
    }
    uVar14 = param_2[0x5a];
    uVar11 = uVar28 - param_2[2] >> (param_2[0x57] & 0x1f);
    uVar28 = uVar11 << 1;
    if (uVar14 <= uVar11 * 2) goto LAB_013789f4;
    uVar28 = uVar28 | 1;
    if (uVar14 <= uVar28) goto LAB_01378a00;
    uVar11 = *(uint *)(param_2[0x59] + uVar11 * 8);
    uVar28 = *(uint *)(param_2[0x59] + uVar28 * 4);
    if ((CARRY4(uVar28,uVar11)) || (pbVar26 = pbVar4, (uint)param_2[0x5d] < uVar28 + uVar11))
    goto LAB_01378910;
  }
  if (uVar28 == 0) {
LAB_013787d0:
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(0,0,&DAT_01894818);
  }
  local_48 = 1;
  pbVar35 = *(byte **)(param_2[0x5c] + uVar11 * 4);
  unaff_r5 = pbVar26;
LAB_01378758:
  pbVar30 = pbVar29;
LAB_01378760:
  if (local_48 != 0) {
    pbVar30 = pbVar35;
  }
  *param_1 = local_48 ^ 1;
  param_1[1] = (uint)pbVar30;
  param_1[2] = (uint)unaff_r5;
  return;
LAB_013785a4:
  goto LAB_013785f4;
}

