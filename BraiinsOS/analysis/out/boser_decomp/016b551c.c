// FUN_016b551c @ 016b551c size=2752 calls_out=15 calls_in=1
// strings: 

void FUN_016b551c(undefined4 *param_1,int param_2,int param_3,int *param_4,int *param_5,uint param_6
                 )

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  byte bVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int *piVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  byte *pbVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  undefined8 uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  uint local_68;
  undefined1 local_30 [4];
  undefined4 local_2c;
  int local_28;
  
  iVar9 = *(int *)(param_2 + 0x24);
  bVar18 = 0;
  uVar27 = param_4[4];
  if (*(char *)(iVar9 + 0x15a) == '\x01') {
    bVar18 = *(byte *)(iVar9 + 0x15b);
  }
  uVar10 = param_4[5];
  if (uVar10 < uVar27) goto LAB_016b5f04;
  uVar29 = *(uint *)(param_2 + 0x138);
  uVar19 = param_6 - uVar29;
  if (param_6 < uVar29) {
    uVar19 = 0;
  }
  if (0x1f < uVar19) {
    uVar19 = 0x20;
  }
  *(uint *)(param_3 + 0xc) = uVar19;
  uVar34 = FUN_016b6024();
  iVar20 = (int)((ulonglong)uVar34 >> 0x20);
  if (iVar20 != 0) {
    FUN_01bed93e((int)uVar34,0,iVar20 << 2);
  }
  if (param_6 != 0) {
    FUN_01bed93e(param_5,0,param_6 << 2);
  }
  uVar19 = param_6 + 1 >> 1;
  piVar26 = param_5;
  for (iVar20 = *(int *)(iVar9 + 0x154); iVar20 != 0 && uVar19 != 0; iVar20 = iVar20 + -1) {
    *piVar26 = uVar27 + 1;
    uVar19 = uVar19 - 1;
    piVar26 = piVar26 + 2;
  }
  if (*param_4 == 0) {
    if (*(int *)(iVar9 + 0x128) != *(int *)(iVar9 + 300)) {
      local_2c = 0;
LAB_016b5670:
      local_30[0] = 3;
      uVar11 = FUN_016cc61c(local_30);
      *param_1 = 2;
      param_1[1] = uVar11;
      return;
    }
LAB_016b5648:
    if (*(int *)(param_2 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(0,0,&DAT_01d08a78);
    }
    uVar19 = **(uint **)(param_2 + 0x1c);
  }
  else {
    if (*param_4 == 1) goto LAB_016b5648;
    local_28 = param_4[1];
    if ((*(byte *)(param_2 + 9) & 1) == 0) {
      local_2c = 2;
      goto LAB_016b5670;
    }
    uVar19 = 0;
    if (local_28 + 1U < *(uint *)(param_2 + 0x20)) {
      uVar19 = *(uint *)(*(int *)(param_2 + 0x1c) + (local_28 + 1U) * 4);
    }
  }
  if (uVar27 < uVar10) {
    uVar24 = param_6 - uVar29;
    iVar20 = param_4[2];
    uVar12 = param_4[3];
    uVar17 = 0x20;
    if (uVar24 < 0x20) {
      uVar17 = uVar24;
    }
    uVar13 = uVar12;
    if (uVar12 < uVar27) {
      uVar13 = uVar27;
    }
    bVar1 = *(byte *)(param_2 + 8);
    iVar7 = param_4[6];
    uVar14 = *(uint *)(param_2 + 0x28);
    bVar6 = false;
    do {
      if (uVar27 == uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar13,uVar12,&DAT_01d089a8);
      }
      uVar28 = uVar27 + 1;
      pbVar30 = (byte *)(iVar20 + uVar27);
      uVar35 = FUN_016b5490(param_2,uVar19,*pbVar30);
      uVar21 = (uint)(uVar35 >> 0x20);
      uVar25 = (uint)uVar35;
      if (uVar14 <= uVar19) {
        uVar36 = FUN_016b54d8(param_2,uVar19);
        uVar22 = (uint)(uVar36 >> 0x20);
        uVar16 = (uint)uVar36;
        if ((uVar36 & 0x3ff) == 0) {
LAB_016b5960:
          uVar15 = uVar22 >> 9 | 1;
          if (uVar15 < param_6) {
            param_5[uVar15] = uVar28;
          }
          if (uVar29 < param_6) {
            uVar34 = FUN_016b6024(param_3);
            uVar15 = (uint)((ulonglong)uVar34 >> 0x20);
            if (uVar24 != uVar15) {
                    /* WARNING: Subroutine does not return */
              FUN_013070f0(uVar24,uVar15,&DAT_01d08998);
            }
            FUN_01bed4e2(param_5 + uVar29,(int)uVar34,uVar24 * 4);
            uVar16 = uVar16 >> 10;
            uVar15 = uVar16 | uVar22 << 0x16;
            if (uVar15 != 0) {
              bVar4 = (byte)uVar16;
              bVar5 = (byte)(uVar16 >> 8);
              bVar3 = (byte)(uVar15 >> 0x10);
              bVar2 = (byte)((uVar22 & 0x3ff) >> 2);
              uVar16 = LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                                bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                              bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                            bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x18 |
                               (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                              bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                            bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x10 |
                               (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                                bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                              bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                            bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 8 |
                               (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 |
                                                bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1) << 1 |
                                              bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                                            bVar2 >> 6 & 1) << 1 | bVar2 >> 7));
              if (uVar16 < uVar24) {
                do {
                  uVar15 = uVar15 & ~(1 << uVar16);
                  (param_5 + uVar29)[uVar16] = uVar28;
                  bVar3 = (byte)uVar15;
                  bVar4 = (byte)(uVar15 >> 8);
                  bVar5 = (byte)(uVar15 >> 0x10);
                  bVar2 = (byte)(uVar15 >> 0x18);
                  uVar16 = LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                                    bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                                  bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                                bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x18 |
                                   (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                                    bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                                  bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                                bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x10 |
                                   (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                    bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                                  bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                                bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 8 |
                                   (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 |
                                                    bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1) << 1 |
                                                  bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                                                bVar2 >> 6 & 1) << 1 | bVar2 >> 7));
                } while (uVar16 < uVar17);
              }
            }
          }
          local_68 = uVar22 >> 10;
          if (((char)iVar7 != '\0') ||
             (bVar6 = true, ((uint)(bVar1 == 2 | bVar1) & (uVar21 & 0x400) >> 10) != 0))
          goto LAB_016b5e88;
        }
        else if (((((uVar36 & 2) == 0) && (uVar15 = (uint)(uVar27 == 0) | ~uVar16 & 1, uVar15 != 0))
                 && (((uVar36 & 4) == 0 || uVar27 == 0 ||
                     (uVar15 = (uint)*(byte *)(iVar9 + 0x158), pbVar30[-1] == uVar15)))) &&
                (((uVar36 & 8) == 0 || (uVar15 = (uint)*(byte *)(iVar9 + 0x158), *pbVar30 == uVar15)
                 ))) {
          bVar31 = uVar27 == 0;
          if (!bVar31) {
            uVar15 = uVar16 & 0x10;
          }
          bVar32 = (uVar36 & 0x10) == 0;
          bVar33 = bVar31 || bVar32;
          if (!bVar31 && !bVar32) {
            uVar15 = (uint)pbVar30[-1];
            bVar33 = uVar15 == 10;
          }
          if ((bVar33) || ((uVar15 == 0xd && (uVar15 = (uint)*pbVar30, uVar15 != 10)))) {
            bVar31 = (uVar36 & 0x20) != 0;
            if (bVar31) {
              uVar15 = (uint)*pbVar30;
            }
            if (bVar31 && uVar15 != 0xd) {
              if (uVar15 == 10) {
                if (uVar27 == 0) {
                  uVar15 = 10;
                  if ((uVar36 & 0x40) != 0) goto LAB_016b58c0;
LAB_016b58d4:
                  if ((uVar36 & 0x80) != 0) goto LAB_016b58dc;
                  goto LAB_016b58f0;
                }
                uVar23 = (uint)pbVar30[-1];
                if (uVar23 != 0xd) {
                  if ((uVar36 & 0x40) != 0) {
                    uVar15 = 10;
                    goto LAB_016b580c;
                  }
                  goto LAB_016b5824;
                }
              }
            }
            else if ((uVar36 & 0x40) == 0) {
LAB_016b5824:
              if ((uVar36 & 0x80) == 0) {
LAB_016b58f0:
                if ((((uVar36 & 0x100) == 0) ||
                    (cVar8 = FUN_016b61dc(iVar20,uVar12,uVar27), cVar8 != '\0')) &&
                   (((uVar36 & 0x200) == 0 ||
                    (cVar8 = FUN_016b6454(iVar20,uVar12,uVar27), cVar8 != '\0'))))
                goto LAB_016b5960;
              }
              else {
                uVar15 = (uint)*pbVar30;
                if (uVar27 == 0) {
LAB_016b58dc:
                  if (""[uVar15] == '\0') goto LAB_016b58f0;
                }
                else if (""[pbVar30[-1]] == ""[uVar15]) goto LAB_016b58f0;
              }
            }
            else {
              uVar15 = (uint)*pbVar30;
              if (uVar27 == 0) {
LAB_016b58c0:
                if (""[uVar15] != '\0') goto LAB_016b58d4;
              }
              else {
                uVar23 = (uint)pbVar30[-1];
LAB_016b580c:
                if (""[uVar23] != ""[uVar15]) goto LAB_016b5824;
              }
            }
          }
        }
      }
      if (uVar19 == 0) goto LAB_016b5e7c;
      if ((uVar35 & 0x3ff) != 0) {
        if (((((uVar35 & 2) != 0) || (uVar19 = (uint)(uVar27 == 0) | ~uVar25 & 1, uVar19 == 0)) ||
            (((uVar35 & 4) != 0 && uVar27 != 0 &&
             (uVar19 = (uint)*(byte *)(iVar9 + 0x158), pbVar30[-1] != uVar19)))) ||
           (((uVar35 & 8) != 0 && (uVar19 = (uint)*(byte *)(iVar9 + 0x158), *pbVar30 != uVar19))))
        goto LAB_016b5e7c;
        bVar31 = uVar27 == 0;
        if (!bVar31) {
          uVar19 = uVar25 & 0x10;
        }
        bVar32 = (uVar35 & 0x10) == 0;
        bVar33 = bVar31 || bVar32;
        if (!bVar31 && !bVar32) {
          uVar19 = (uint)pbVar30[-1];
          bVar33 = uVar19 == 10;
        }
        if ((!bVar33) && ((uVar19 != 0xd || (uVar19 = (uint)*pbVar30, uVar19 == 10))))
        goto LAB_016b5e7c;
        bVar31 = (uVar35 & 0x20) != 0;
        if (bVar31) {
          uVar19 = (uint)*pbVar30;
        }
        if (bVar31 && uVar19 != 0xd) {
          if (uVar19 != 10) goto LAB_016b5e7c;
          if (uVar27 != 0) {
            uVar19 = (uint)pbVar30[-1];
            if (uVar19 != 0xd) {
              if ((uVar35 & 0x40) != 0) {
                uVar16 = 10;
                goto LAB_016b5b0c;
              }
              goto LAB_016b5b24;
            }
            goto LAB_016b5e7c;
          }
          uVar16 = 10;
          if ((uVar35 & 0x40) != 0) goto LAB_016b5b64;
LAB_016b5b78:
          if ((uVar35 & 0x80) != 0) goto LAB_016b5b80;
        }
        else {
          if ((uVar35 & 0x40) != 0) {
            uVar16 = (uint)*pbVar30;
            if (uVar27 == 0) {
LAB_016b5b64:
              if (""[uVar16] != '\0') goto LAB_016b5b78;
              goto LAB_016b5e7c;
            }
            uVar19 = (uint)pbVar30[-1];
LAB_016b5b0c:
            if (""[uVar19] == ""[uVar16]) goto LAB_016b5e7c;
          }
LAB_016b5b24:
          if ((uVar35 & 0x80) != 0) {
            uVar16 = (uint)*pbVar30;
            if (uVar27 == 0) {
LAB_016b5b80:
              if (""[uVar16] != '\0') goto LAB_016b5e7c;
            }
            else if (""[pbVar30[-1]] != ""[uVar16]) goto LAB_016b5e7c;
          }
        }
        if ((((uVar35 & 0x100) != 0) && (cVar8 = FUN_016b61dc(iVar20,uVar12,uVar27), cVar8 == '\0'))
           || (((uVar35 & 0x200) != 0 && (cVar8 = FUN_016b6454(iVar20,uVar12,uVar27), cVar8 == '\0')
               ))) goto LAB_016b5e7c;
      }
      uVar25 = uVar25 >> 10;
      uVar19 = uVar25 | uVar21 << 0x16;
      uVar35 = FUN_016b6024(param_3);
      uVar27 = (uint)(uVar35 >> 0x20);
      if (uVar19 != 0) {
        bVar4 = (byte)uVar25;
        bVar5 = (byte)(uVar25 >> 8);
        bVar3 = (byte)(uVar19 >> 0x10);
        bVar2 = (byte)((uVar21 & 0x3ff) >> 2);
        uVar25 = LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1
                                          ) << 1 | bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 |
                                       bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                         0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                 bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                               bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                             bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x10 |
                         (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1
                                          ) << 1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                       bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                         8 | (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 |
                                              bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1) << 1 |
                                            bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                                          bVar2 >> 6 & 1) << 1 | bVar2 >> 7));
        if (uVar25 < uVar27) {
          if (0x1fffffffff < uVar35) {
            uVar27 = 0x20;
          }
          do {
            uVar19 = uVar19 & ~(1 << uVar25);
            *(uint *)((int)uVar35 + uVar25 * 4) = uVar28;
            bVar3 = (byte)uVar19;
            bVar4 = (byte)(uVar19 >> 8);
            bVar5 = (byte)(uVar19 >> 0x10);
            bVar2 = (byte)(uVar19 >> 0x18);
            uVar25 = LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                              bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                            bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                          bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x18 |
                             (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                              bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                            bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                          bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x10 |
                             (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                              bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                            bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                          bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 8 |
                             (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 |
                                              bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1) << 1 |
                                            bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                                          bVar2 >> 6 & 1) << 1 | bVar2 >> 7));
          } while (uVar25 < uVar27);
        }
      }
      uVar19 = uVar21 >> 0xb;
      uVar27 = uVar28;
    } while (uVar28 != uVar10);
  }
  else {
    uVar14 = *(uint *)(param_2 + 0x28);
    bVar6 = false;
  }
  if (uVar19 < uVar14) {
LAB_016b5e7c:
    if (!bVar6) goto LAB_016b5f04;
  }
  else {
    uVar35 = FUN_016b54d8(param_2,uVar19);
    uVar27 = (uint)(uVar35 >> 0x20);
    if ((uVar35 & 0x3ff) != 0) {
      iVar20 = param_4[2];
      uVar14 = param_4[3];
      uVar19 = uVar10;
      if (uVar10 != 0) {
        uVar19 = (uint)uVar35 & 1;
      }
      if (uVar10 == 0 || (uVar35 & 1) == 0) {
        bVar31 = (uVar35 & 2) == 0;
        if (!bVar31) {
          uVar19 = uVar10;
        }
        if (bVar31 || uVar19 == uVar14) {
          bVar33 = (uVar35 & 4) != 0;
          uVar17 = uVar19;
          if (bVar33) {
            uVar17 = uVar10;
          }
          bVar31 = bVar33 || (bVar31 || uVar14 <= uVar19);
          if (bVar33 && uVar17 != 0) {
            uVar19 = uVar10 - 1;
            if (uVar14 <= uVar19) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar19,uVar14,&DAT_01d08bc8);
            }
            uVar17 = (uint)*(byte *)(iVar20 + uVar19);
            bVar31 = *(byte *)(iVar9 + 0x158) <= uVar17;
            if (uVar17 != *(byte *)(iVar9 + 0x158)) goto LAB_016b5e7c;
          }
          bVar33 = (uVar35 & 8) != 0;
          if (bVar33) {
            bVar31 = uVar14 <= uVar10;
            uVar17 = uVar10;
          }
          if (bVar33 && uVar17 != uVar14) {
            if (bVar31) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar10,uVar14,&DAT_01d08c48);
            }
            if (*(char *)(iVar20 + uVar10) != *(char *)(iVar9 + 0x158)) goto LAB_016b5e7c;
          }
          if (((((uVar35 & 0x10) == 0) || (iVar9 = FUN_016b6050(iVar20,uVar14,uVar10), iVar9 != 0))
              && ((((uVar35 & 0x20) == 0 || (iVar9 = FUN_016b60b4(iVar20,uVar14,uVar10), iVar9 != 0)
                   ) && (((uVar35 & 0x40) == 0 ||
                         (iVar9 = FUN_016b6118(iVar20,uVar14,uVar10), iVar9 != 0)))))) &&
             ((((uVar35 & 0x80) == 0 || (iVar9 = FUN_016b6178(iVar20,uVar14,uVar10), iVar9 != 0)) &&
              ((((uVar35 & 0x100) == 0 ||
                (cVar8 = FUN_016b61dc(iVar20,uVar14,uVar10), cVar8 != '\0')) &&
               (((uVar35 & 0x200) == 0 ||
                (cVar8 = FUN_016b6454(iVar20,uVar14,uVar10), cVar8 != '\0'))))))))
          goto LAB_016b5d90;
        }
      }
      goto LAB_016b5e7c;
    }
LAB_016b5d90:
    uVar19 = uVar27 >> 9 | 1;
    local_68 = uVar27 >> 10;
    if (uVar19 < param_6) {
      param_5[uVar19] = uVar10 + 1;
    }
    if (uVar29 < param_6) {
      uVar14 = param_6 - uVar29;
      uVar34 = FUN_016b6024(param_3);
      uVar19 = (uint)((ulonglong)uVar34 >> 0x20);
      if (uVar14 != uVar19) {
                    /* WARNING: Subroutine does not return */
        FUN_013070f0(uVar14,uVar19,&DAT_01d08998);
      }
      FUN_01bed4e2(param_5 + uVar29,(int)uVar34,uVar14 * 4);
      uVar19 = (uint)uVar35 >> 10;
      uVar17 = uVar19 | uVar27 << 0x16;
      if (uVar17 != 0) {
        bVar3 = (byte)uVar19;
        bVar4 = (byte)(uVar19 >> 8);
        bVar2 = (byte)(uVar17 >> 0x10);
        bVar1 = (byte)((uVar27 & 0x3ff) >> 2);
        uVar27 = LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1
                                          ) << 1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                       bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                         0x18 | (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                                 bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                               bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                             bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x10 |
                         (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1
                                          ) << 1 | bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 |
                                       bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1) << 1 | bVar2 >> 7) <<
                         8 | (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                              bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                            bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                          bVar1 >> 6 & 1) << 1 | bVar1 >> 7));
        if (uVar27 < uVar14) {
          if (0x1f < uVar14) {
            uVar14 = 0x20;
          }
          do {
            uVar17 = uVar17 & ~(1 << uVar27);
            (param_5 + uVar29)[uVar27] = uVar10 + 1;
            bVar2 = (byte)uVar17;
            bVar3 = (byte)(uVar17 >> 8);
            bVar4 = (byte)(uVar17 >> 0x10);
            bVar1 = (byte)(uVar17 >> 0x18);
            uVar27 = LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 |
                                              bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1) << 1 |
                                            bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                                          bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x18 |
                             (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                              bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                            bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                          bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x10 |
                             (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                              bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                            bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                          bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8 |
                             (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                              bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                            bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                          bVar1 >> 6 & 1) << 1 | bVar1 >> 7));
          } while (uVar27 < uVar14);
        }
      }
    }
  }
LAB_016b5e88:
  if ((bVar18 & 1) == 0) {
    *param_1 = 1;
    param_1[1] = local_68;
    return;
  }
  if (param_6 <= local_68 * 2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(local_68 << 1,param_6,&DAT_01d08a28);
  }
  iVar9 = param_5[local_68 * 2];
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d08a38);
  }
  uVar27 = local_68 << 1 | 1;
  if (param_6 <= uVar27) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar27,param_6,&DAT_01d08a48);
  }
  if (param_5[uVar27] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d08a58);
  }
  if (iVar9 == param_5[uVar27]) {
    uVar27 = iVar9 - 1;
    if (uVar27 < (uint)param_4[3]) {
      if (*(char *)(param_4[2] + uVar27) < -0x40) goto LAB_016b5f04;
    }
    else if (uVar27 != param_4[3]) {
LAB_016b5f04:
      *param_1 = 0;
      goto LAB_016b5f10;
    }
  }
  *param_1 = 1;
  param_1[1] = local_68;
LAB_016b5f10:
  return;
}

