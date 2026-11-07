// FUN_013b8ef4 @ 013b8ef4 size=3172 calls_out=14 calls_in=1
// strings: 

void FUN_013b8ef4(undefined4 *param_1,int param_2,int param_3,int *param_4,int *param_5,uint param_6
                 )

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  byte bVar22;
  uint uVar23;
  uint uVar24;
  int *piVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  int iVar33;
  byte *pbVar34;
  uint uVar35;
  uint uVar36;
  int iVar37;
  bool bVar38;
  bool bVar39;
  bool bVar40;
  undefined8 uVar41;
  uint local_80;
  
  iVar32 = *(int *)(param_2 + 0x24);
  bVar22 = 0;
  uVar26 = param_4[4];
  if (*(char *)(iVar32 + 0x15a) == '\x01') {
    bVar22 = *(byte *)(iVar32 + 0x15b);
  }
  uVar23 = param_4[5];
  if (uVar23 < uVar26) goto LAB_013b9a18;
  uVar30 = *(uint *)(param_2 + 0x138);
  uVar35 = param_6 - uVar30;
  if (param_6 < uVar30) {
    uVar35 = 0;
  }
  uVar36 = uVar35;
  if (0x1f < uVar35) {
    uVar36 = 0x20;
  }
  *(uint *)(param_3 + 0xc) = uVar36;
  if (*(uint *)(param_3 + 8) < uVar36) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar36,*(uint *)(param_3 + 8),&DAT_01893c80);
  }
  iVar33 = *(int *)(param_3 + 4);
  if (uVar30 < param_6) {
    FUN_016dd606(iVar33,0,uVar36 << 2);
LAB_013b8fa0:
    FUN_016dd606(param_5,0,param_6 << 2);
  }
  else if (param_6 != 0) goto LAB_013b8fa0;
  iVar7 = *(int *)(iVar32 + 0x154);
  if (iVar7 != 0) {
    uVar24 = param_6 + 1 >> 1;
    piVar25 = param_5;
    do {
      bVar38 = uVar24 == 0;
      if (!bVar38) {
        *piVar25 = uVar26 + 1;
        uVar24 = uVar24 - 1;
        iVar7 = iVar7 + -1;
        bVar38 = iVar7 == 0;
        piVar25 = piVar25 + 2;
      }
    } while (!bVar38);
  }
  if (*param_4 == 0) {
    if (*(int *)(iVar32 + 0x128) != *(int *)(iVar32 + 300)) {
      puVar8 = (undefined1 *)thunk_FUN_016d4a50(0xc);
      if (puVar8 == (undefined1 *)0x0) {
LAB_013b9a70:
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      *(undefined4 *)(puVar8 + 4) = 0;
LAB_013b96f0:
      *puVar8 = 3;
      *param_1 = 2;
      param_1[1] = puVar8;
      return;
    }
LAB_013b9044:
    if (*(int *)(param_2 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(0,0,&DAT_01893bd0);
    }
    uVar24 = **(uint **)(param_2 + 0x1c);
    if (uVar23 <= uVar26) goto LAB_013b9734;
LAB_013b9068:
    bVar1 = *(byte *)(param_2 + 8);
    iVar37 = *(int *)(param_2 + 0x10);
    iVar9 = param_4[2];
    uVar15 = param_4[3];
    uVar28 = param_6 - uVar30;
    iVar7 = param_4[6];
    uVar14 = uVar28;
    if (0x1f < uVar28) {
      uVar14 = 0x20;
    }
    uVar16 = uVar15;
    if (uVar15 < uVar26) {
      uVar16 = uVar26;
    }
    iVar17 = *(int *)(param_2 + 0x134);
    uVar18 = *(uint *)(param_2 + 0x14);
    uVar10 = *(uint *)(param_2 + 0x130) & 0x1f;
    uVar19 = *(uint *)(param_2 + 0x28);
    bVar38 = false;
    do {
      if (uVar26 == uVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar16,uVar15,&DAT_01893be0);
      }
      pbVar34 = (byte *)(iVar9 + uVar26);
      uVar20 = (uint)*pbVar34;
      uVar11 = (uint)*(byte *)(param_2 + 0x2c + uVar20) + (uVar24 << uVar10);
      if (uVar18 <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar11,uVar18,&DAT_01893bf0);
      }
      uVar27 = uVar26 + 1;
      puVar21 = (uint *)(iVar37 + uVar11 * 8);
      uVar11 = *puVar21;
      uVar31 = puVar21[1];
      if (uVar19 <= uVar24) {
        uVar12 = (uVar24 << uVar10) + iVar17;
        if (uVar18 <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar12,uVar18,&DAT_01893b20);
        }
        puVar21 = (uint *)(iVar37 + uVar12 * 8);
        uVar12 = *puVar21;
        uVar29 = puVar21[1];
        if ((uVar12 & 0x3ff) == 0) {
LAB_013b93b8:
          uVar20 = uVar29 >> 9 | 1;
          if (uVar20 < param_6) {
            param_5[uVar20] = uVar27;
          }
          if (uVar30 < param_6) {
            if (uVar28 != uVar36) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb7204(uVar28,uVar36,&DAT_01893bc0);
            }
            FUN_016dd1aa(param_5 + uVar30,iVar33,uVar28 * 4);
            uVar12 = uVar12 >> 10;
            uVar20 = uVar12 | uVar29 << 0x16;
            if (uVar20 != 0) {
              bVar4 = (byte)uVar12;
              bVar5 = (byte)(uVar12 >> 8);
              bVar3 = (byte)(uVar20 >> 0x10);
              bVar2 = (byte)((uVar29 & 0x3ff) >> 2);
              uVar12 = LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
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
              if (uVar12 < uVar35) {
                do {
                  uVar20 = uVar20 & ~(1 << uVar12);
                  (param_5 + uVar30)[uVar12] = uVar27;
                  bVar3 = (byte)uVar20;
                  bVar4 = (byte)(uVar20 >> 8);
                  bVar5 = (byte)(uVar20 >> 0x10);
                  bVar2 = (byte)(uVar20 >> 0x18);
                  uVar12 = LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
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
                } while (uVar12 < uVar14);
              }
            }
          }
          local_80 = uVar29 >> 10;
          if (((char)iVar7 != '\0') ||
             (bVar38 = true, ((uint)(bVar1 == 2 | bVar1) & (uVar31 & 0x400) >> 10) != 0))
          goto LAB_013b999c;
        }
        else if (((uVar12 & 2) == 0) && (uVar13 = (uint)(uVar26 == 0) | ~uVar12 & 1, uVar13 != 0)) {
          if (uVar26 != 0) {
            uVar13 = uVar12;
          }
          if (((uVar26 == 0 || (uVar13 & 4) == 0) || (pbVar34[-1] == *(byte *)(iVar32 + 0x158))) &&
             (((uVar12 & 8) == 0 || (uVar20 == *(byte *)(iVar32 + 0x158))))) {
            if (uVar26 != 0) {
              bVar39 = (uVar12 & 0x10) != 0;
              bVar2 = 0;
              if (bVar39) {
                bVar2 = pbVar34[-1];
              }
              if ((bVar39 && bVar2 != 10) && ((bVar2 != 0xd || (uVar20 == 10)))) goto LAB_013b9490;
            }
            if ((uVar12 & 0x20) == 0 || uVar20 == 0xd) {
              if ((uVar12 & 0x40) != 0) {
                if (uVar26 == 0) {
LAB_013b9314:
                  if (""[uVar20] != '\0') goto LAB_013b932c;
                  goto LAB_013b9490;
                }
LAB_013b9260:
                if (uVar15 <= uVar26 - 1) goto LAB_013b9b00;
                if (""[*(byte *)(iVar9 + (uVar26 - 1))] == ""[uVar20]) goto LAB_013b9490;
              }
LAB_013b929c:
              if ((uVar12 & 0x80) != 0) {
                if (uVar26 == 0) {
LAB_013b9334:
                  bVar39 = ""[uVar20] == '\0';
                }
                else {
                  bVar39 = ""[pbVar34[-1]] == ""[uVar20];
                }
                if (!bVar39) goto LAB_013b9490;
              }
LAB_013b934c:
              if ((((uVar12 & 0x100) == 0) ||
                  (cVar6 = FUN_0138430c(iVar9,uVar15,uVar26), cVar6 != '\0')) &&
                 (((uVar12 & 0x3ff) < 0x200 ||
                  (cVar6 = FUN_013845b4(iVar9,uVar15,uVar26), cVar6 != '\0')))) goto LAB_013b93b8;
            }
            else if (uVar20 == 10) {
              if (uVar26 == 0) {
                if ((uVar12 & 0x40) != 0) goto LAB_013b9314;
LAB_013b932c:
                if ((uVar12 & 0x80) != 0) goto LAB_013b9334;
                goto LAB_013b934c;
              }
              if (pbVar34[-1] != 0xd) {
                if ((uVar12 & 0x40) != 0) goto LAB_013b9260;
                goto LAB_013b929c;
              }
            }
          }
        }
      }
LAB_013b9490:
      if (uVar24 == 0) goto LAB_013b9994;
      if ((uVar11 & 0x3ff) != 0) {
        if (((uVar11 & 2) != 0) || (uVar24 = (uint)(uVar26 == 0) | ~uVar11 & 1, uVar24 == 0))
        goto LAB_013b9994;
        bVar39 = uVar26 == 0;
        if (!bVar39) {
          uVar24 = uVar11 & 4;
          bVar39 = uVar24 == 0;
        }
        if (((!bVar39) && (uVar24 = (uint)*(byte *)(iVar32 + 0x158), pbVar34[-1] != uVar24)) ||
           (((uVar11 & 8) != 0 && (uVar24 = (uint)*(byte *)(iVar32 + 0x158), *pbVar34 != uVar24))))
        goto LAB_013b9994;
        if (uVar26 != 0) {
          bVar39 = (uVar11 & 0x10) != 0;
          uVar24 = 0;
          if (bVar39) {
            uVar24 = (uint)pbVar34[-1];
          }
          if ((bVar39 && uVar24 != 10) &&
             ((uVar24 != 0xd || (uVar24 = (uint)*pbVar34, uVar24 == 10)))) goto LAB_013b9994;
        }
        bVar39 = (uVar11 & 0x20) != 0;
        if (bVar39) {
          uVar24 = (uint)*pbVar34;
        }
        if (bVar39 && uVar24 != 0xd) {
          if (uVar24 != 10) goto LAB_013b9994;
          if (uVar26 != 0) {
            if (pbVar34[-1] != 0xd) {
              if ((uVar11 & 0x40) != 0) goto LAB_013b9540;
              goto LAB_013b9574;
            }
            goto LAB_013b9994;
          }
          uVar24 = 10;
          if ((uVar11 & 0x40) != 0) goto LAB_013b95ec;
LAB_013b9600:
          if ((uVar11 & 0x80) != 0) goto LAB_013b9608;
        }
        else {
          if ((uVar11 & 0x40) != 0) {
            if (uVar26 == 0) {
              uVar24 = (uint)*pbVar34;
LAB_013b95ec:
              if (""[uVar24] != '\0') goto LAB_013b9600;
              goto LAB_013b9994;
            }
LAB_013b9540:
            if (uVar15 <= uVar26 - 1) {
LAB_013b9b00:
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar26 - 1,uVar15,&DAT_01893cd0);
            }
            if (""[*(byte *)(iVar9 + (uVar26 - 1))] == ""[*pbVar34]) goto LAB_013b9994;
          }
LAB_013b9574:
          if ((uVar11 & 0x80) != 0) {
            uVar24 = (uint)*pbVar34;
            if (uVar26 == 0) {
LAB_013b9608:
              if (""[uVar24] != '\0') goto LAB_013b9994;
            }
            else if (""[pbVar34[-1]] != ""[uVar24]) goto LAB_013b9994;
          }
        }
        if ((((uVar11 & 0x100) != 0) && (cVar6 = FUN_0138430c(iVar9,uVar15,uVar26), cVar6 == '\0'))
           || ((0x1ff < (uVar11 & 0x3ff) &&
               (cVar6 = FUN_013845b4(iVar9,uVar15,uVar26), cVar6 == '\0')))) goto LAB_013b9994;
      }
      uVar11 = uVar11 >> 10;
      uVar26 = uVar11 | uVar31 << 0x16;
      if (uVar26 != 0) {
        bVar4 = (byte)uVar11;
        bVar5 = (byte)(uVar11 >> 8);
        bVar3 = (byte)(uVar26 >> 0x10);
        bVar2 = (byte)((uVar31 & 0x3ff) >> 2);
        uVar24 = LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1
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
        if (uVar24 < uVar35) {
          do {
            uVar26 = uVar26 & ~(1 << uVar24);
            *(uint *)(iVar33 + uVar24 * 4) = uVar27;
            bVar3 = (byte)uVar26;
            bVar4 = (byte)(uVar26 >> 8);
            bVar5 = (byte)(uVar26 >> 0x10);
            bVar2 = (byte)(uVar26 >> 0x18);
            uVar24 = LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
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
          } while (uVar24 < uVar36);
        }
      }
      uVar24 = uVar31 >> 0xb;
      uVar26 = uVar27;
    } while (uVar27 != uVar23);
    if (uVar19 <= uVar24) goto LAB_013b9744;
LAB_013b9994:
    if (!bVar38) goto LAB_013b9a18;
  }
  else {
    if (*param_4 == 1) goto LAB_013b9044;
    iVar7 = param_4[1];
    if ((*(byte *)(param_2 + 9) & 1) == 0) {
      puVar8 = (undefined1 *)thunk_FUN_016d4a50(0xc);
      if (puVar8 == (undefined1 *)0x0) goto LAB_013b9a70;
      *(undefined4 *)(puVar8 + 4) = 2;
      *(int *)(puVar8 + 8) = iVar7;
      goto LAB_013b96f0;
    }
    uVar14 = iVar7 + 1;
    uVar24 = 0;
    if (uVar14 < *(uint *)(param_2 + 0x20)) {
      uVar24 = *(uint *)(*(int *)(param_2 + 0x1c) + uVar14 * 4);
    }
    if (uVar26 < uVar23) goto LAB_013b9068;
LAB_013b9734:
    bVar38 = false;
    if (uVar24 < *(uint *)(param_2 + 0x28)) goto LAB_013b9994;
LAB_013b9744:
    uVar26 = *(int *)(param_2 + 0x134) + (uVar24 << (*(uint *)(param_2 + 0x130) & 0x1f));
    if (*(uint *)(param_2 + 0x14) <= uVar26) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar26,*(uint *)(param_2 + 0x14),&DAT_01893b20);
    }
    puVar21 = (uint *)(*(int *)(param_2 + 0x10) + uVar26 * 8);
    uVar26 = *puVar21;
    uVar35 = puVar21[1];
    if ((uVar26 & 0x3ff) != 0) {
      iVar33 = param_4[2];
      uVar24 = param_4[3];
      bVar39 = uVar23 == 0;
      uVar36 = uVar23;
      if (!bVar39) {
        uVar36 = uVar26 & 1;
        bVar39 = uVar36 == 0;
      }
      if (bVar39) {
        bVar39 = (uVar26 & 2) != 0;
        if (bVar39) {
          uVar36 = uVar23;
        }
        if (!bVar39 || uVar36 == uVar24) {
          bVar39 = uVar23 == 0;
          uVar36 = uVar23;
          if (!bVar39) {
            uVar36 = uVar26 & 4;
            bVar39 = uVar36 == 0;
          }
          bVar40 = true;
          if (!bVar39) {
            uVar36 = uVar23 - 1;
            if (uVar24 <= uVar36) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar36,uVar24,&DAT_01893cf0);
            }
            uVar36 = (uint)*(byte *)(iVar33 + uVar36);
            bVar40 = *(byte *)(iVar32 + 0x158) <= uVar36;
            if (uVar36 != *(byte *)(iVar32 + 0x158)) goto LAB_013b9994;
          }
          bVar39 = (uVar26 & 8) != 0;
          if (bVar39) {
            bVar40 = uVar24 <= uVar23;
            uVar36 = uVar23;
          }
          if (bVar39 && uVar36 != uVar24) {
            if (bVar40) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar23,uVar24,&DAT_01893d00);
            }
            if (*(char *)(iVar33 + uVar23) != *(char *)(iVar32 + 0x158)) goto LAB_013b9994;
          }
          if (((((((uVar26 & 0x10) == 0) ||
                 (iVar32 = FUN_013b9bb4(iVar33,uVar24,uVar23), iVar32 != 0)) &&
                (((uVar26 & 0x20) == 0 || (iVar32 = FUN_013b9c18(iVar33,uVar24,uVar23), iVar32 != 0)
                 ))) && (((uVar26 & 0x40) == 0 ||
                         (iVar32 = FUN_013b9c7c(iVar33,uVar24,uVar23), iVar32 != 0)))) &&
              (((uVar26 & 0x80) == 0 || (iVar32 = FUN_013b9c7c(iVar33,uVar24,uVar23), iVar32 == 0)))
              ) && ((((uVar26 & 0x100) == 0 ||
                     (cVar6 = FUN_0138430c(iVar33,uVar24,uVar23), cVar6 != '\0')) &&
                    (((uVar26 & 0x3ff) < 0x200 ||
                     (cVar6 = FUN_013845b4(iVar33,uVar24,uVar23), cVar6 != '\0'))))))
          goto LAB_013b98d0;
        }
      }
      goto LAB_013b9994;
    }
LAB_013b98d0:
    uVar36 = uVar35 >> 9 | 1;
    if (uVar36 < param_6) {
      param_5[uVar36] = uVar23 + 1;
    }
    local_80 = uVar35 >> 10;
    if (uVar30 < param_6) {
      uVar24 = param_6 - uVar30;
      uVar41 = FUN_013b9cdc(param_3);
      uVar36 = (uint)((ulonglong)uVar41 >> 0x20);
      if (uVar24 != uVar36) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb7204(uVar24,uVar36,&DAT_01893bc0);
      }
      FUN_016dd1aa(param_5 + uVar30,(int)uVar41,uVar24 * 4);
      uVar26 = uVar26 >> 10;
      uVar36 = uVar26 | uVar35 << 0x16;
      if (uVar36 != 0) {
        bVar3 = (byte)uVar26;
        bVar4 = (byte)(uVar26 >> 8);
        bVar2 = (byte)(uVar36 >> 0x10);
        bVar1 = (byte)((uVar35 & 0x3ff) >> 2);
        uVar35 = LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1
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
        uVar26 = uVar24;
        if (0x1f < uVar24) {
          uVar26 = 0x20;
        }
        if (uVar35 < uVar24) {
          do {
            uVar36 = uVar36 & ~(1 << uVar35);
            (param_5 + uVar30)[uVar35] = uVar23 + 1;
            bVar2 = (byte)uVar36;
            bVar3 = (byte)(uVar36 >> 8);
            bVar4 = (byte)(uVar36 >> 0x10);
            bVar1 = (byte)(uVar36 >> 0x18);
            uVar35 = LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 |
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
          } while (uVar35 < uVar26);
        }
      }
    }
  }
LAB_013b999c:
  if ((bVar22 & 1) == 0) {
    *param_1 = 1;
    param_1[1] = local_80;
    return;
  }
  if (param_6 <= local_80 * 2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(local_80 << 1,param_6,&DAT_01893c30);
  }
  iVar32 = param_5[local_80 * 2];
  if (iVar32 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_01893c40);
  }
  uVar26 = local_80 << 1 | 1;
  if (param_6 <= uVar26) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar26,param_6,&DAT_01893c50);
  }
  if (param_5[uVar26] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_01893c60);
  }
  if (iVar32 == param_5[uVar26]) {
    uVar26 = iVar32 - 1;
    if (uVar26 < (uint)param_4[3]) {
      if (*(char *)(param_4[2] + uVar26) < -0x40) {
LAB_013b9a18:
        *param_1 = 0;
        return;
      }
    }
    else if (uVar26 != param_4[3]) goto LAB_013b9a18;
  }
  *param_1 = 1;
  param_1[1] = local_80;
  return;
}

