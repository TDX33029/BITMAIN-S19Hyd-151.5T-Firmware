// FUN_010d872c @ 010d872c size=3876 calls_out=11 calls_in=3
// strings: explicit panic

/* WARNING: Type propagation algorithm not settling */

void FUN_010d872c(uint *param_1,undefined4 param_2,byte *param_3,undefined *param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,char param_10)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  uint *******pppppppuVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  uint *******pppppppuVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  undefined *puVar15;
  undefined *puVar16;
  char cVar17;
  uint uVar18;
  uint uVar19;
  undefined *puVar20;
  uint *******pppppppuVar21;
  uint ******ppppppuVar22;
  uint *******pppppppuVar23;
  uint ******ppppppuVar24;
  uint ******ppppppuVar25;
  uint uVar26;
  byte bVar27;
  int iVar28;
  uint ******ppppppuVar29;
  byte *pbVar30;
  uint *puVar31;
  uint uVar32;
  byte *pbVar33;
  uint uVar34;
  bool bVar35;
  bool bVar36;
  uint local_4dc;
  undefined *local_4d8;
  uint *******local_4d4;
  uint *******local_4bc;
  uint local_4a4;
  uint *******local_4a0;
  undefined *local_49c;
  undefined *local_498;
  undefined *local_494;
  undefined4 local_490;
  uint *******local_48c;
  uint *******local_488;
  uint *******local_98;
  undefined4 local_94;
  uint local_90;
  uint *local_8c;
  uint local_30;
  undefined *local_2c;
  undefined4 local_28;
  
  puVar4 = (undefined *)0x0;
  local_494 = (undefined *)0x0;
  local_498 = (undefined *)0x1;
  local_49c = (undefined *)0x0;
  local_490 = 0;
  local_98 = (uint *******)0x0;
  local_94 = 0;
  local_30 = 0;
  if (param_4 != (undefined *)0x0) {
    pbVar30 = param_3;
LAB_010d87b8:
    uVar18 = (uint)param_3[(int)puVar4];
    if (uVar18 - 0x61 < 0x1a) goto LAB_010d87a8;
    if (uVar18 == 0x2e) {
      pbVar30 = param_3 + (int)puVar4 + 1;
      goto LAB_010d87a8;
    }
    FUN_010d4eac(&local_2c,param_2,param_4,&local_94,param_5,param_6,param_7,param_8,param_9,1,
                 &local_490,&local_94,pbVar30,param_3 + ((int)param_4 - (int)pbVar30));
    local_4d8 = local_2c;
    bVar36 = local_2c != param_4;
    if ((bVar36) && ((local_28._1_1_ & 1) == 0)) {
      local_4bc = local_98;
      pppppppuVar5 = (uint *******)&local_48c;
      pppppppuVar11 = local_98;
      if ((uint *******)0xfd < local_98) {
        pppppppuVar5 = local_488;
        pppppppuVar11 = local_48c;
      }
      if (pppppppuVar11 == (uint *******)0x0) {
LAB_010d8870:
        pppppppuVar5 = (uint *******)&local_48c;
        pppppppuVar21 = local_98;
        if ((uint *******)0xfd < local_98) {
          pppppppuVar5 = local_488;
          pppppppuVar21 = local_48c;
        }
      }
      else {
        pppppppuVar21 = (uint *******)((int)pppppppuVar11 + -1);
        if (pppppppuVar5[(int)pppppppuVar11 + -1] != (uint ******)0x2e) goto LAB_010d8870;
      }
      iVar13 = 0;
      iVar10 = (int)pppppppuVar21 * -4;
      do {
        bVar36 = iVar10 != 0;
        if (bVar36) {
          iVar13 = *(int *)((int)pppppppuVar5 + (-4 - iVar10));
          iVar10 = iVar10 + 4;
        }
      } while (bVar36 && iVar13 != 0x2e);
      bVar36 = false;
      puVar31 = &local_90;
      uVar18 = local_30;
      if (8 < local_30) {
        puVar31 = local_8c;
        uVar18 = local_90;
      }
      pppppppuVar11 = local_98;
      if ((uint *******)0xfd < local_98) {
        local_4bc = local_48c;
        pppppppuVar11 = local_488;
      }
      puVar6 = puVar31 + uVar18 * 3;
      bVar3 = false;
      local_4d4 = (uint *******)&local_48c;
      if ((uint *******)0xfd < local_98) {
        local_4d4 = pppppppuVar11;
      }
      do {
        puVar4 = local_494;
        pppppppuVar5 = local_4bc;
        pppppppuVar11 = local_4d4;
        pppppppuVar21 = (uint *******)0x0;
        local_4a0 = local_4d4;
        bVar2 = true;
        bVar35 = local_4bc != (uint *******)0x0;
        local_4bc = (uint *******)0x0;
        if (bVar35) {
          iVar10 = (int)pppppppuVar5 << 2;
          do {
            if (local_4d4[(int)pppppppuVar21] == (uint ******)0x2e) {
              local_4bc = (uint *******)((int)pppppppuVar5 - ((int)pppppppuVar21 + 1));
              local_4d4 = local_4d4 + (int)pppppppuVar21 + 1;
              bVar2 = false;
              goto LAB_010d89b4;
            }
            pppppppuVar21 = (uint *******)((int)pppppppuVar21 + 1);
            iVar10 = iVar10 + -4;
          } while (iVar10 != 0);
          bVar2 = true;
          pppppppuVar21 = pppppppuVar5;
          local_4bc = pppppppuVar5;
        }
LAB_010d89b4:
        if (puVar31 == puVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018857a8);
        }
        uVar18 = *puVar31;
        pbVar30 = (byte *)puVar31[1];
        puVar16 = (undefined *)puVar31[2];
        if (bVar3) {
          if (bVar36) {
            if (local_49c == local_494) {
              FUN_010e02bc(&local_49c,local_494,1);
            }
            local_494[(int)local_498] = 0x2e;
            local_494 = puVar4 + 1;
            goto LAB_010d8a1c;
          }
          local_4d8 = local_4d8 + 1;
          if (local_4d8 != param_4) goto LAB_010d8a1c;
          goto LAB_010d9314;
        }
LAB_010d8a1c:
        if (uVar18 == 0) {
          if (puVar16 != (undefined *)0x0) {
            puVar15 = (undefined *)0x0;
            puVar4 = puVar16;
LAB_010d8bb8:
            if (0x19 < pbVar30[(int)puVar15] - 0x41) goto code_r0x010d8bc8;
            if (bVar36) {
              pbVar33 = pbVar30;
              puVar16 = puVar15;
            }
            else {
              local_4d8 = puVar15 + (int)local_4d8;
              pbVar33 = param_3;
              puVar16 = local_4d8;
              if (param_4 < local_4d8) {
                puVar4 = &DAT_01885768;
                goto LAB_010d9650;
              }
            }
            if (local_49c + -(int)local_494 < puVar16) {
              FUN_010e02bc(&local_49c,local_494,puVar16);
            }
            puVar20 = local_494;
            FUN_016dd1aa(local_498 + (int)local_494,pbVar33,puVar16);
            pbVar30 = pbVar30 + (int)puVar15;
            local_494 = puVar20 + (int)puVar16;
            do {
              puVar16 = local_494;
              bVar1 = *pbVar30;
              uVar18 = 2;
              bVar27 = bVar1;
              if (bVar1 - 0x41 < 0x1a) {
                bVar27 = bVar1 | 0x20;
              }
              if ((uint)(int)(char)bVar1 < 0x80000000) {
                uVar18 = 1;
              }
              if ((uint)((int)local_49c - (int)local_494) < uVar18) {
                FUN_010e02bc(&local_49c,local_494,uVar18);
              }
              if (0x7fffffff < (uint)(int)(char)bVar1) {
                bVar9 = bVar27 & 0xbf;
                bVar27 = bVar1 >> 6 | 0xc0;
                (local_494 + (int)local_498)[1] = bVar9;
              }
              puVar4 = puVar4 + -1;
              local_494[(int)local_498] = bVar27;
              pbVar30 = pbVar30 + 1;
              local_494 = puVar16 + uVar18;
            } while (puVar4 != (undefined *)0x0);
            goto LAB_010d923c;
          }
LAB_010d8c14:
          if (bVar36) {
            if (local_49c + -(int)local_494 < puVar16) {
              FUN_010e02bc(&local_49c,local_494,puVar16);
            }
            puVar4 = local_494;
            FUN_016dd1aa(local_498 + (int)local_494,pbVar30,puVar16);
            local_494 = puVar4 + (int)puVar16;
            goto LAB_010d8918;
          }
          bVar36 = false;
          local_4d8 = local_4d8 + (int)puVar16;
          if (local_4d8 != param_4) goto LAB_010d891c;
          goto LAB_010d9318;
        }
        iVar10 = (int)pppppppuVar21 * 4;
        if (pppppppuVar21 != (uint *******)0x0) {
          iVar13 = 0;
LAB_010d8a38:
          if (*(uint *)((int)pppppppuVar11 + iVar13) < 0x80) goto code_r0x010d8a48;
          if (uVar18 == 1) {
            if (puVar16 == (undefined *)0x0) goto LAB_010d8c14;
            puVar15 = (undefined *)0x0;
            puVar4 = puVar16;
            goto LAB_010d8bf4;
          }
          if (!bVar36) {
            if (param_4 < local_4d8) {
              puVar4 = &DAT_01885788;
              goto LAB_010d9650;
            }
            if (local_49c + -(int)local_494 < local_4d8) {
              FUN_010e02bc(&local_49c,local_494,local_4d8);
            }
            puVar4 = local_494;
            FUN_016dd1aa(local_498 + (int)local_494,param_3,local_4d8);
            local_494 = puVar4 + (int)local_4d8;
          }
          if ((uint)((int)local_49c - (int)local_494) < 4) {
            FUN_010e02bc(&local_49c,local_494,4);
          }
          puVar4 = local_494 + 4;
          *(undefined4 *)(local_494 + (int)local_498) = 0x2d2d6e78;
          uVar18 = (uint)pppppppuVar21 & 0x3fffffff;
          pppppppuVar21 = pppppppuVar11 + (int)pppppppuVar21;
          local_4dc = 0;
          pppppppuVar5 = pppppppuVar11;
          local_494 = puVar4;
          while (pppppppuVar5 != pppppppuVar21) {
            pppppppuVar23 = pppppppuVar5 + 1;
            ppppppuVar22 = *pppppppuVar5;
            pppppppuVar5 = pppppppuVar23;
            if (ppppppuVar22 < (uint ******)0x80) {
              puVar16 = puVar4;
              if (local_49c == puVar4) {
                FUN_010e02bc(&local_49c,puVar4,1);
                puVar16 = local_494;
              }
              puVar4 = puVar4 + 1;
              puVar16[(int)local_498] = (char)ppppppuVar22;
              local_4dc = local_4dc + 1;
              local_494 = puVar4;
            }
          }
          if (0xf0e < uVar18) {
            local_28 = &DAT_0157d360;
            local_2c = &DAT_018856a0;
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_0056c101,&local_2c,&DAT_018856a8);
          }
          if (local_4dc != 0) {
            puVar16 = puVar4;
            if (local_49c == puVar4) {
              FUN_010e02bc(&local_49c,puVar4,1);
              puVar16 = local_494;
            }
            puVar4 = puVar4 + 1;
            puVar16[(int)local_498] = 0x2d;
            local_494 = puVar4;
          }
          if (local_4dc < uVar18) {
            local_4a4 = 0x48;
            ppppppuVar22 = (uint ******)0x80;
            iVar13 = 0;
            uVar19 = local_4dc;
            do {
              iVar7 = 0;
              pppppppuVar5 = pppppppuVar11;
              do {
                iVar28 = iVar7;
                pppppppuVar5 = pppppppuVar5 + 1;
                if (iVar10 == iVar28) {
                    /* WARNING: Subroutine does not return */
                  FUN_00faa444(&DAT_018857f8);
                }
                ppppppuVar24 = *(uint *******)((int)pppppppuVar11 + iVar28);
                iVar7 = iVar28 + 4;
              } while (ppppppuVar24 < ppppppuVar22);
              if ((uint *******)((int)pppppppuVar11 + iVar28 + 4) != pppppppuVar21) {
                uVar14 = (uint)((iVar10 + -4) - iVar28) >> 2;
                do {
                  ppppppuVar29 = *pppppppuVar5;
                  ppppppuVar25 = ppppppuVar29;
                  if (ppppppuVar24 < ppppppuVar29) {
                    ppppppuVar25 = ppppppuVar24;
                  }
                  if (ppppppuVar22 <= ppppppuVar29) {
                    ppppppuVar24 = ppppppuVar25;
                  }
                  uVar14 = uVar14 - 1;
                  pppppppuVar5 = pppppppuVar5 + 1;
                } while (uVar14 != 0);
              }
              uVar14 = ((int)ppppppuVar24 - (int)ppppppuVar22) * (uVar19 + 1) + iVar13;
              pppppppuVar5 = pppppppuVar11;
              while (pppppppuVar5 != pppppppuVar21) {
                pppppppuVar23 = pppppppuVar5 + 1;
                ppppppuVar22 = *pppppppuVar5;
                if (ppppppuVar22 < ppppppuVar24) {
                  uVar14 = uVar14 + 1;
                }
                pppppppuVar5 = pppppppuVar23;
                if (ppppppuVar22 == ppppppuVar24) {
                  uVar32 = 0x1a;
                  if (0x24 < local_4a4 + 0x1a) {
                    uVar32 = 0x24 - local_4a4;
                  }
                  if (0x23 < local_4a4) {
                    uVar32 = 1;
                  }
                  uVar8 = uVar14;
                  if (uVar32 <= uVar14) {
                    uVar34 = 0x48;
                    do {
                      if (uVar32 == 0x24) {
                    /* WARNING: Subroutine does not return */
                        FUN_00fb7c58(&DAT_01885808);
                      }
                      iVar13 = uVar8 - uVar32;
                      uVar8 = FUN_018462e8(iVar13,0x24 - uVar32);
                      cVar17 = 'a';
                      uVar26 = (iVar13 - uVar8 * (0x24 - uVar32)) + uVar32;
                      bVar36 = uVar26 == 0x1a;
                      if (0x19 < uVar26) {
                        cVar17 = '\x16';
                        bVar36 = uVar26 == 0x23;
                      }
                      if (0x22 < uVar26 && !bVar36) goto LAB_010d957c;
                      puVar16 = puVar4;
                      if (puVar4 == local_49c) {
                        FUN_010e02bc(&local_49c,puVar4,1);
                        puVar16 = local_494;
                      }
                      uVar32 = 0x1a;
                      puVar4 = puVar4 + 1;
                      puVar16[(int)local_498] = (char)uVar26 + cVar17;
                      if (uVar34 < local_4a4 + 0x1a) {
                        uVar32 = uVar34 - local_4a4;
                      }
                      if (uVar34 <= local_4a4) {
                        uVar32 = 1;
                      }
                      uVar34 = uVar34 + 0x24;
                      local_494 = puVar4;
                    } while (uVar32 <= uVar8);
                  }
                  cVar17 = 'a';
                  if (0x19 < uVar8) {
                    cVar17 = '\x16';
                  }
                  if (0x23 < uVar8) {
LAB_010d957c:
                    /* WARNING: Subroutine does not return */
                    FUN_00faa464("explicit panic",0xe,&DAT_01885818);
                  }
                  puVar16 = puVar4;
                  if (local_49c == puVar4) {
                    FUN_010e02bc(&local_49c,puVar4,1);
                    puVar16 = local_494;
                  }
                  puVar4 = puVar4 + 1;
                  puVar16[(int)local_498] = (char)uVar8 + cVar17;
                  local_494 = puVar4;
                  if (0xfffffffe < uVar19) {
                    /* WARNING: Subroutine does not return */
                    FUN_00faf2a4(&DAT_0188a318);
                  }
                  uVar12 = 2;
                  if (uVar19 == local_4dc) {
                    uVar12 = 700;
                  }
                  iVar13 = FUN_018462e8(uVar14,uVar12);
                  iVar7 = FUN_018462e8(iVar13,uVar19 + 1);
                  uVar14 = iVar7 + iVar13;
                  iVar13 = 0;
                  uVar32 = uVar14;
                  if (0x1c7 < uVar14) {
                    do {
                      iVar13 = iVar13 + 0x24;
                      uVar14 = uVar32 / 0x23;
                      bVar36 = 0x3e57 < uVar32;
                      uVar32 = uVar14;
                    } while (bVar36);
                  }
                  iVar7 = FUN_018462e8(uVar14 * 0x24 & 0xffff,uVar14 + 0x26 & 0xffff);
                  local_4a4 = iVar13 + iVar7;
                  uVar14 = 0;
                  uVar19 = uVar19 + 1;
                }
              }
              ppppppuVar22 = (uint ******)((int)ppppppuVar24 + 1);
              iVar13 = uVar14 + 1;
            } while (uVar19 < uVar18);
          }
          goto LAB_010d8918;
        }
LAB_010d8a54:
        if (!bVar36) {
          if (param_4 < local_4d8) {
            puVar4 = &DAT_01885798;
LAB_010d9650:
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(0,local_4d8,param_4,puVar4);
          }
          if (local_49c + -(int)local_494 < local_4d8) {
            FUN_010e02bc(&local_49c,local_494,local_4d8);
          }
          puVar4 = local_494;
          FUN_016dd1aa(local_498 + (int)local_494,param_3,local_4d8);
          local_494 = puVar4 + (int)local_4d8;
        }
        if (pppppppuVar21 != (uint *******)0x0) {
          do {
            puVar4 = local_494;
            uVar18 = 1;
            ppppppuVar22 = *local_4a0;
            if ((uint ******)0x7f < ppppppuVar22) {
              uVar18 = 2;
            }
            if (((uint ******)0x7ff < ppppppuVar22) &&
               (uVar18 = 4, ppppppuVar22 < (uint ******)0x10000)) {
              uVar18 = 3;
            }
            if ((uint)((int)local_49c - (int)local_494) < uVar18) {
              FUN_010e02bc(&local_49c,local_494,uVar18);
              pbVar30 = local_494 + (int)local_498;
              if (ppppppuVar22 < &DAT_00000080) goto LAB_010d8ab0;
LAB_010d8b08:
              bVar1 = (byte)ppppppuVar22 & 0x3f | 0x80;
              bVar27 = (byte)((uint)ppppppuVar22 >> 6);
              if (ppppppuVar22 < (uint ******)0x800) {
                pbVar30[1] = bVar1;
                *pbVar30 = bVar27 | 0xc0;
              }
              else {
                bVar27 = bVar27 & 0x3f | 0x80;
                bVar9 = (byte)((uint)ppppppuVar22 >> 0xc);
                if ((uint)ppppppuVar22 >> 0x10 == 0) {
                  pbVar30[1] = bVar27;
                  pbVar30[2] = bVar1;
                  *pbVar30 = bVar9 | 0xe0;
                }
                else {
                  pbVar30[3] = bVar1;
                  pbVar30[2] = bVar27;
                  pbVar30[1] = bVar9 & 0x3f | 0x80;
                  *pbVar30 = (byte)((uint)ppppppuVar22 >> 0x12) | 0xf0;
                }
              }
            }
            else {
              pbVar30 = local_494 + (int)local_498;
              if (&DAT_00000080 <= ppppppuVar22) goto LAB_010d8b08;
LAB_010d8ab0:
              *pbVar30 = (byte)ppppppuVar22;
            }
            local_494 = puVar4 + uVar18;
            iVar10 = iVar10 + -4;
            local_4a0 = local_4a0 + 1;
          } while (iVar10 != 0);
        }
LAB_010d8918:
        bVar36 = true;
LAB_010d891c:
        puVar31 = puVar31 + 3;
        bVar3 = true;
      } while (!bVar2);
      bVar36 = false;
      bVar3 = true;
      goto joined_r0x010d9574;
    }
    goto LAB_010d9318;
  }
LAB_010d9314:
  bVar36 = false;
LAB_010d9318:
  bVar3 = false;
joined_r0x010d9574:
  if (8 < local_30) {
    thunk_FUN_016d3fb4(local_8c);
  }
  if (local_98 < (uint *******)0xfe) {
    if (bVar36) goto LAB_010d9438;
LAB_010d934c:
    if (bVar3) {
      if (param_10 == '\0') {
LAB_010d9520:
        param_1[1] = (uint)local_498;
        param_1[2] = (uint)local_494;
        *param_1 = (uint)local_49c;
        return;
      }
      bVar36 = false;
      puVar4 = (undefined *)0x0;
      if (local_494 == (undefined *)0x0) {
LAB_010d93a4:
        puVar16 = local_498;
        do {
          if (bVar36) goto LAB_010d9520;
          if (puVar4 == (undefined *)0x0) break;
          puVar15 = (undefined *)0x0;
          do {
            bVar36 = puVar15[(int)puVar16] != '.';
            if (!bVar36) {
              puVar20 = puVar16 + (int)(puVar15 + 1);
              puVar4 = puVar4 + -(int)(puVar15 + 1);
              goto LAB_010d93f4;
            }
            puVar15 = puVar15 + 1;
          } while (puVar4 != puVar15);
          puVar15 = puVar4;
          puVar20 = puVar16;
LAB_010d93f4:
          if (puVar16 == (undefined *)0x0) goto LAB_010d9520;
          puVar16 = puVar20;
        } while ((undefined *)0xffffffbf < puVar15 + -0x40 && puVar15 != (undefined *)0x0);
      }
      else {
        puVar4 = local_494;
        if ((((local_494 + -1)[(int)local_498] != '.') ||
            (puVar4 = local_494 + -1, param_10 == '\x01')) && (puVar4 < (undefined *)0xfe))
        goto LAB_010d93a4;
      }
      *param_1 = 0x80000001;
      puVar4 = (undefined *)((uint)local_49c & 0x7fffffff);
      goto joined_r0x010d955c;
    }
    if (param_10 == '\0') {
LAB_010d9538:
      *param_1 = 0x80000000;
      param_1[1] = (uint)param_3;
      param_1[2] = (uint)param_4;
      puVar4 = local_49c;
      goto joined_r0x010d955c;
    }
    bVar36 = false;
    puVar4 = (undefined *)0x0;
    if (param_4 != (undefined *)0x0) {
      puVar4 = param_4;
      if (((param_3[(int)(param_4 + -1)] == 0x2e) && (puVar4 = param_4 + -1, param_10 != '\x01')) ||
         ((undefined *)0xfd < puVar4)) goto LAB_010d9440;
    }
    pbVar30 = param_3;
LAB_010d94d8:
    do {
      if (bVar36) goto LAB_010d9538;
      if (puVar4 == (undefined *)0x0) break;
      puVar16 = (undefined *)0x0;
      do {
        bVar36 = pbVar30[(int)puVar16] != 0x2e;
        if (!bVar36) {
          pbVar30 = pbVar30 + (int)(puVar16 + 1);
          puVar4 = puVar4 + -(int)(puVar16 + 1);
          if (!(puVar16 + -0x40 < (undefined *)0xffffffc0 || puVar16 == (undefined *)0x0))
          goto LAB_010d94d8;
          goto LAB_010d9440;
        }
        puVar16 = puVar16 + 1;
      } while (puVar4 != puVar16);
    } while ((undefined *)0xffffffbf < puVar4 + -0x40 && puVar4 != (undefined *)0x0);
  }
  else {
    thunk_FUN_016d3fb4(local_488);
    if (!bVar36) goto LAB_010d934c;
LAB_010d9438:
    if (bVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_018857b8);
    }
  }
LAB_010d9440:
  *param_1 = 0x80000001;
  puVar4 = local_49c;
joined_r0x010d955c:
  if (puVar4 == (undefined *)0x0) {
    return;
  }
  thunk_FUN_016d3fb4(local_498);
  return;
LAB_010d87a8:
  puVar4 = puVar4 + 1;
  if (param_4 == puVar4) goto LAB_010d9314;
  goto LAB_010d87b8;
code_r0x010d8bc8:
  puVar15 = puVar15 + 1;
  puVar4 = puVar4 + -1;
  if (puVar16 == puVar15) goto LAB_010d8c14;
  goto LAB_010d8bb8;
code_r0x010d8a48:
  iVar13 = iVar13 + 4;
  if (iVar10 == iVar13) goto LAB_010d8a54;
  goto LAB_010d8a38;
LAB_010d8bf4:
  if (0x19 < pbVar30[(int)puVar15] - 0x41) goto code_r0x010d8c04;
  if (bVar36) {
    pbVar33 = pbVar30;
    puVar16 = puVar15;
  }
  else {
    local_4d8 = puVar15 + (int)local_4d8;
    pbVar33 = param_3;
    puVar16 = local_4d8;
    if (param_4 < local_4d8) {
      puVar4 = &DAT_01885778;
      goto LAB_010d9650;
    }
  }
  if (local_49c + -(int)local_494 < puVar16) {
    FUN_010e02bc(&local_49c,local_494,puVar16);
  }
  puVar20 = local_494;
  FUN_016dd1aa(local_498 + (int)local_494,pbVar33,puVar16);
  pbVar30 = pbVar30 + (int)puVar15;
  local_494 = puVar20 + (int)puVar16;
  do {
    puVar16 = local_494;
    bVar1 = *pbVar30;
    uVar18 = 2;
    bVar27 = bVar1;
    if (bVar1 - 0x41 < 0x1a) {
      bVar27 = bVar1 | 0x20;
    }
    if ((uint)(int)(char)bVar1 < 0x80000000) {
      uVar18 = 1;
    }
    if ((uint)((int)local_49c - (int)local_494) < uVar18) {
      FUN_010e02bc(&local_49c,local_494,uVar18);
    }
    if (0x7fffffff < (uint)(int)(char)bVar1) {
      bVar9 = bVar27 & 0xbf;
      bVar27 = bVar1 >> 6 | 0xc0;
      (local_494 + (int)local_498)[1] = bVar9;
    }
    puVar4 = puVar4 + -1;
    local_494[(int)local_498] = bVar27;
    pbVar30 = pbVar30 + 1;
    local_494 = puVar16 + uVar18;
  } while (puVar4 != (undefined *)0x0);
LAB_010d923c:
  bVar36 = true;
  goto LAB_010d891c;
code_r0x010d8c04:
  puVar15 = puVar15 + 1;
  puVar4 = puVar4 + -1;
  if (puVar16 == puVar15) goto LAB_010d8c14;
  goto LAB_010d8bf4;
}

