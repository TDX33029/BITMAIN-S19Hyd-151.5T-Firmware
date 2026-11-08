// FUN_00c0d95c @ 00c0d95c size=2108 calls_out=9 calls_in=1
// strings: 

void FUN_00c0d95c(uint *param_1,undefined4 *param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  char cVar10;
  ushort uVar11;
  ushort uVar12;
  int iVar13;
  byte bVar14;
  ushort uVar15;
  char *pcVar16;
  int iVar17;
  int *piVar18;
  code *pcVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  uint *puVar23;
  byte bVar24;
  uint uVar25;
  byte bVar26;
  uint extraout_r3;
  uint uVar27;
  char *pcVar28;
  undefined *puVar29;
  char *pcVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  byte bVar34;
  ushort uVar35;
  byte bVar36;
  byte bVar37;
  bool bVar38;
  bool bVar39;
  uint local_60;
  char *local_5c;
  uint local_58;
  uint local_50;
  uint local_4c;
  uint local_48;
  char *local_44;
  char *local_40;
  uint *local_3c;
  uint local_38;
  undefined4 local_34;
  uint local_30;
  byte local_2c;
  undefined2 uStack_2b;
  uint uStack_29;
  undefined1 uStack_25;
  
  puVar29 = &DAT_004c4b40 + param_4;
  uVar33 = (uint)puVar29 / 1000000 + 1;
  local_5c = (char *)thunk_FUN_016d4a50(uVar33 * 0x14,param_3 * 0x431bde83);
  if (local_5c == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,uVar33 * 0x14);
  }
  uVar1 = (uint)puVar29 / 1000000;
  uStack_25 = 0;
  local_2c = (byte)local_5c;
  uStack_2b = (undefined2)((uint)local_5c >> 8);
  uStack_29 = (uint)local_5c >> 0x18;
  pcVar16 = local_5c;
  uVar25 = uVar1;
  local_58 = 1;
  if ((undefined *)0xf423f < puVar29) {
    do {
      pcVar16[0x12] = '\x02';
      pcVar16 = pcVar16 + 0x14;
      uVar25 = uVar25 - 1;
    } while (uVar25 != 0);
    local_58 = uVar33;
  }
  builtin_strncpy(pcVar16,
                  "\x02\x02\x02\x02\x02\x02\x02\x02\x02\x02\x02\x02\x02\x02\x02\x02\x02\x02\x02",
                  0x13);
  local_60 = uVar33;
  local_30 = uVar33;
  if ((*(byte *)((int)param_2 + 0xb) & 1) == 0) {
    bVar37 = *(byte *)(param_2 + 3);
    bVar3 = *(byte *)((int)param_2 + 0xd);
    if (bVar37 <= bVar3) {
      bVar4 = *(byte *)((int)param_2 + 0x16);
      bVar26 = *(byte *)((int)param_2 + 0x15);
      bVar5 = *(byte *)(param_2 + 4);
      bVar6 = *(byte *)((int)param_2 + 0xf);
      if ((bVar5 < bVar6) || ((*(byte *)((int)param_2 + 0xe) & 1) != 0)) {
        do {
          if (bVar3 <= bVar37) break;
          bVar37 = bVar37 + 1;
        } while (bVar37 <= bVar3);
      }
      else {
        uVar11 = *(ushort *)((int)param_2 + 6);
        uVar12 = *(ushort *)(param_2 + 1);
        bVar7 = *(byte *)((int)param_2 + 0x13);
        bVar8 = *(byte *)((int)param_2 + 0x12);
        bVar14 = bVar6;
        if (*(char *)(param_2 + 2) == '\0' && uVar12 <= uVar11) {
          if ((*(byte *)(param_2 + 5) & 1) == 0 && bVar26 <= bVar4) {
            bVar14 = *(byte *)((int)param_2 + 10);
            pcVar19 = (code *)*param_2;
            do {
              bVar20 = bVar37 + (bVar37 < bVar3);
              bVar36 = bVar6;
              do {
                bVar24 = bVar7;
                if (bVar36 < bVar7) {
                  bVar24 = bVar36;
                }
                if (bVar8 <= bVar24) {
                  bVar21 = bVar8;
                  do {
                    bVar22 = bVar21 + (bVar21 < bVar24);
                    uVar35 = uVar12;
                    do {
                      uVar15 = uVar35 + (uVar35 < uVar11);
                      bVar34 = bVar26;
                      do {
                        uStack_29 = 0;
                        uStack_2b = 0x100;
                        local_30 = CONCAT22(CONCAT11(bVar36,bVar37),uVar35) & 0x73f0fff;
                        local_2c = bVar21 & 7;
                        uVar33 = (*pcVar19)(&local_30,(uint)bVar14 * 0x10101 | (uint)bVar34 << 0x18,
                                            25000000);
                        uVar25 = uVar33 + 500000;
                        if (0xfff85edf < uVar33) {
                          uVar25 = 0xffffffff;
                        }
                        bVar39 = uVar25 / 1000000 <= param_3 / 1000000;
                        bVar38 = param_3 / 1000000 == uVar25 / 1000000;
                        uVar2 = extraout_r3;
                        if (!bVar39 || bVar38) {
                          uVar2 = uVar25 / 1000000;
                          bVar39 = uVar1 <= uVar2;
                          bVar38 = uVar2 == uVar1;
                        }
                        if (!bVar39 || bVar38) {
                          if (local_58 <= uVar2) {
                    /* WARNING: Subroutine does not return */
                            FUN_00faa4a4(uVar2,local_58,&DAT_01872db8);
                          }
                          puVar23 = (uint *)(local_5c + uVar2 * 0x14);
                          if (*(char *)((int)puVar23 + 0x12) != '\x02') {
                            uVar25 = uVar2 * 1000000;
                            uVar27 = *puVar23;
                            uVar31 = uVar25 - uVar33;
                            if (uVar25 < uVar33 || uVar31 == 0) {
                              uVar31 = uVar33 + uVar2 * -1000000;
                            }
                            uVar32 = uVar25 - uVar27;
                            if (uVar25 < uVar27 || uVar32 == 0) {
                              uVar32 = uVar27 + uVar2 * -1000000;
                            }
                            if (uVar32 <= uVar31) goto LAB_00c0e000;
                          }
                          *(byte *)(puVar23 + 3) = bVar21 & 7;
                          pcVar16 = (char *)((int)puVar23 + 0xf);
                          pcVar16[0] = '\0';
                          pcVar16[1] = '\0';
                          pcVar16[2] = '\0';
                          pcVar16[3] = '\0';
                          ((char *)((int)puVar23 + 0xd))[0] = '\0';
                          ((char *)((int)puVar23 + 0xd))[1] = '\x01';
                          *(byte *)((int)puVar23 + 0xb) = bVar36 & 7;
                          *(byte *)((int)puVar23 + 10) = bVar37 & 0x3f;
                          *(ushort *)(puVar23 + 2) = uVar35 & 0xfff;
                          *(byte *)((int)puVar23 + 7) = bVar34;
                          *(byte *)((int)puVar23 + 6) = bVar14;
                          *(byte *)((int)puVar23 + 5) = bVar14;
                          *(byte *)(puVar23 + 1) = bVar14;
                          *puVar23 = uVar33;
                        }
LAB_00c0e000:
                      } while ((bVar34 < bVar4) &&
                              (bVar34 = bVar34 + (bVar34 < bVar4), bVar34 <= bVar4));
                    } while ((uVar35 < uVar11) && (uVar35 = uVar15, uVar15 <= uVar11));
                  } while ((bVar21 < bVar24) && (bVar21 = bVar22, bVar22 <= bVar24));
                }
              } while ((bVar36 < bVar5) && (bVar36 = bVar36 + (bVar36 < bVar5), bVar36 <= bVar5));
            } while ((bVar37 < bVar3) && (bVar37 = bVar20, bVar20 <= bVar3));
          }
          else {
            do {
              bVar4 = bVar8;
              bVar26 = bVar7;
              if (bVar14 < bVar7) {
                bVar26 = bVar14;
              }
              for (; uVar35 = uVar12, bVar4 <= bVar26; bVar4 = bVar4 + 1) {
                do {
                  if (uVar11 <= uVar35) break;
                  uVar35 = uVar35 + 1;
                } while (uVar35 <= uVar11);
                if (bVar26 <= bVar4) break;
              }
            } while (((bVar14 < bVar5) && (bVar14 = bVar14 + (bVar14 < bVar5), bVar14 <= bVar5)) ||
                    ((bVar37 < bVar3 && (bVar37 = bVar37 + 1, bVar14 = bVar6, bVar37 <= bVar3))));
          }
        }
        else {
          do {
            bVar4 = bVar8;
            bVar26 = bVar7;
            if (bVar14 < bVar7) {
              bVar26 = bVar14;
            }
            for (; (bVar4 <= bVar26 && (bVar4 < bVar26)); bVar4 = bVar4 + 1) {
            }
          } while (((bVar14 < bVar5) && (bVar14 = bVar14 + (bVar14 < bVar5), bVar14 <= bVar5)) ||
                  ((bVar37 < bVar3 && (bVar37 = bVar37 + 1, bVar14 = bVar6, bVar37 <= bVar3))));
        }
      }
    }
  }
  local_38 = local_58;
  local_3c = &local_60;
  bVar38 = local_58 != 0;
  local_58 = 0;
  local_34 = 0;
  pcVar16 = local_5c + local_38 * 0x14;
  local_44 = local_5c;
  local_40 = pcVar16;
  if (bVar38) {
    pcVar30 = local_5c + 0x12;
    iVar17 = local_38 * 0x14;
    do {
      cVar9 = *pcVar30;
      if (cVar9 != '\x02') {
        if (cVar9 == '\x03') {
          local_44 = pcVar30 + 2;
        }
        else {
          pcVar28 = pcVar30 + 2;
          cVar10 = pcVar30[1];
          local_44 = pcVar28;
          iVar17 = thunk_FUN_016d4a50(0x14);
          if (iVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0x14);
          }
          FUN_016dd52c(iVar17,pcVar30 + -0x12,0x12);
          *(char *)(iVar17 + 0x13) = cVar10;
          *(char *)(iVar17 + 0x12) = cVar9;
          if (iVar17 != 0) {
            piVar18 = (int *)thunk_FUN_016d4a50(0x20);
            if (piVar18 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(4,0x20);
            }
            *piVar18 = iVar17;
            piVar18[1] = (int)&DAT_01872dd8;
            uVar33 = 1;
            local_2c = (byte)piVar18;
            uStack_2b = (undefined2)((uint)piVar18 >> 8);
            uStack_29 = (uint)piVar18 >> 0x18;
            local_30 = 4;
            goto LAB_00c0dc2c;
          }
        }
        break;
      }
      pcVar30 = pcVar30 + 0x14;
      iVar17 = iVar17 + -0x14;
      local_44 = pcVar16;
    } while (iVar17 != 0);
  }
  local_48 = 0;
  local_4c = 4;
  local_50 = 0;
LAB_00c0dd80:
  *param_1 = local_50;
  param_1[1] = local_4c;
  param_1[2] = local_48;
  param_1[3] = 25000000;
  if (local_60 != 0) {
    thunk_FUN_016d3fb4(local_5c);
  }
  return;
LAB_00c0dc2c:
  uStack_29._1_3_ = (undefined3)uVar33;
  uStack_25 = (undefined1)(uVar33 >> 0x18);
  pcVar30 = pcVar28;
  while( true ) {
    if (pcVar30 == pcVar16) goto LAB_00c0dcf8;
    cVar9 = pcVar30[0x12];
    if (cVar9 != '\x02') break;
    pcVar30 = pcVar30 + 0x14;
  }
  if (cVar9 == '\x03') goto LAB_00c0dcf8;
  cVar10 = pcVar30[0x13];
  iVar17 = thunk_FUN_016d4a50(0x14);
  if (iVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x14);
  }
  pcVar28 = pcVar30 + 0x14;
  FUN_016dd52c(iVar17,pcVar30,0x12);
  *(char *)(iVar17 + 0x13) = cVar10;
  *(char *)(iVar17 + 0x12) = cVar9;
  if (iVar17 == 0) goto LAB_00c0dcf8;
  if (uVar33 == local_30) {
    FUN_00d653ec(&local_30,uVar33,1,4,8);
    piVar18 = (int *)CONCAT13((undefined1)uStack_29,CONCAT21(uStack_2b,local_2c));
  }
  iVar13 = uVar33 * 2;
  piVar18[iVar13] = iVar17;
  uVar33 = uVar33 + 1;
  (piVar18 + iVar13)[1] = (int)&DAT_01872dd8;
  goto LAB_00c0dc2c;
LAB_00c0dcf8:
  local_48 = CONCAT13(uStack_25,uStack_29._1_3_);
  local_4c = CONCAT13((undefined1)uStack_29,CONCAT21(uStack_2b,local_2c));
  local_50 = local_30;
  if (1 < local_48) {
    if (local_48 < 0x15) {
      FUN_009ce06c();
    }
    else {
      FUN_009b68fc();
    }
  }
  goto LAB_00c0dd80;
}

