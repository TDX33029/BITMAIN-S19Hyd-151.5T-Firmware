// FUN_01341760 @ 01341760 size=5868 calls_out=10 calls_in=5
// strings: assertion failed: lookahead_size >= len_to_move | assertion failed: lookahead_size >= len_to_move

uint FUN_01341760(uint *param_1,int param_2,uint param_3,int param_4,uint param_5,undefined1 param_6
                 )

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  bool bVar11;
  uint uVar12;
  int *piVar13;
  uint uVar14;
  byte *pbVar15;
  short *psVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  ushort *puVar21;
  uint *puVar22;
  undefined2 *puVar23;
  int iVar24;
  uint uVar25;
  char cVar26;
  uint *puVar27;
  uint *puVar28;
  uint uVar29;
  undefined *puVar30;
  int *piVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  int iVar35;
  uint uVar36;
  int *piVar37;
  uint uVar38;
  uint uVar39;
  uint *puVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  int iVar44;
  uint uVar45;
  uint uVar46;
  short sVar47;
  int iVar48;
  bool bVar49;
  bool bVar50;
  ulonglong uVar51;
  undefined8 uVar52;
  uint local_a8;
  uint local_94;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_5c;
  uint local_54;
  int local_4c;
  uint local_48;
  uint local_44;
  undefined4 local_40;
  int local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  bVar11 = true;
  bVar50 = false;
  uVar20 = 0;
  uVar12 = 0xfffffffe;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_6) {
  case 0:
    break;
  default:
    uVar12 = 0;
    uVar20 = 1;
    bVar50 = false;
    bVar11 = false;
    break;
  case 3:
    uVar20 = 1;
    bVar50 = false;
    bVar11 = false;
    uVar12 = 1;
    break;
  case 4:
    bVar11 = false;
    uVar20 = 1;
    uVar12 = 2;
    bVar50 = true;
  }
  if (param_5 == 0) {
    bVar11 = true;
    local_78 = 0;
    uVar12 = 0xfffffffb;
    local_74 = 0;
  }
  else {
    piVar37 = (int *)param_1[4];
    if (*piVar37 != 1) {
      puVar27 = (uint *)(piVar37 + 0x4019);
      piVar31 = piVar37 + 0xf;
      puVar28 = (uint *)(piVar37 + 0x401a);
      cVar26 = '\0';
      if (uVar20 != 0) {
        cVar26 = (char)uVar12 + '\x02';
      }
      piVar13 = piVar37 + 0x19;
      local_78 = 0;
      local_74 = 0;
      iVar35 = *piVar37;
LAB_013418a0:
      cVar1 = *(char *)((int)piVar37 + 0x36);
      *(char *)((int)piVar37 + 0x36) = cVar26;
      piVar37[9] = 0;
      piVar37[10] = 0;
      local_28 = 0;
      local_2c = 0;
      local_40 = 1;
      local_3c = param_4;
      local_38 = param_5;
      local_34 = param_2;
      local_30 = param_3;
      if (cVar1 == '\x04') {
        if ((uVar20 & 4U >> (uVar12 & 7) & (uint)(iVar35 == 0)) == 0) goto LAB_0134192c;
LAB_013418f4:
        uVar29 = piVar37[7];
        bVar49 = uVar29 == 0;
        if (bVar49) {
          uVar29 = (uint)*(byte *)((int)piVar37 + 0x35);
        }
        if (bVar49 && (uVar29 & 1) == 0) {
          if ((piVar37[2] & 0x80000U) != 0) {
            if (param_2 != 0) {
              uVar46 = 0;
              iVar17 = piVar37[0x16];
              uVar34 = piVar37[0x15];
              uVar43 = piVar37[0x401b];
              uVar29 = 0x7fff;
              iVar24 = iVar17 + 0x7fff;
              iVar35 = iVar17 + -2;
              piVar37[5] = 0;
              do {
                if (param_3 <= uVar46) {
                  if (uVar34 != 0) {
                    uVar29 = (uint)*(byte *)((int)piVar37 + 0x36);
                  }
                  if (uVar34 != 0 && uVar29 != 0) goto LAB_01341fe4;
LAB_01342a88:
                  piVar37[0x15] = uVar34;
                  piVar37[0x16] = iVar17;
                  piVar37[9] = uVar46;
                  piVar37[0x401b] = uVar43;
                  goto LAB_01342ae4;
                }
LAB_01341fe4:
                uVar42 = piVar37[0x17];
                iVar18 = uVar42 + uVar34;
                uVar29 = param_3 - uVar46;
                if (0x102 - uVar34 < param_3 - uVar46) {
                  uVar29 = 0x102 - uVar34;
                }
                if ((uVar29 == 0 || iVar18 != 0) && (uVar29 != 0 && iVar18 != 1)) {
                  if ((CARRY4(uVar29,uVar46)) || (param_3 < uVar29 + uVar46)) {
                    puVar30 = &DAT_01d05d60;
                    goto LAB_01342de0;
                  }
                  iVar18 = piVar37[0xf];
                  iVar44 = piVar37[0x10];
                  iVar48 = piVar37[0x11];
                  uVar14 = uVar34 + iVar17;
                  uVar41 = uVar14 - 2;
                  uVar36 = (uint)*(byte *)(iVar18 + (uVar14 - 1 & 0x7fff)) ^
                           (uint)*(byte *)(iVar18 + (uVar41 & 0x7fff)) << 5;
                  uVar38 = uVar29;
                  pbVar15 = (byte *)(param_2 + uVar46);
                  do {
                    uVar14 = uVar14 & 0x7fff;
                    bVar2 = *pbVar15;
                    *(byte *)(iVar18 + uVar14) = bVar2;
                    if (uVar14 < 0x101) {
                      ((byte *)(iVar18 + uVar14))[0x8000] = bVar2;
                    }
                    uVar14 = uVar14 + 1;
                    uVar36 = (uVar36 & 0x3ff) << 5 ^ (uint)bVar2;
                    uVar38 = uVar38 - 1;
                    puVar23 = (undefined2 *)(iVar48 + uVar36 * 2);
                    *(undefined2 *)(iVar44 + (uVar41 & 0x7fff) * 2) = *puVar23;
                    *puVar23 = (short)uVar41;
                    uVar41 = uVar41 + 1;
                    pbVar15 = pbVar15 + 1;
                    uVar25 = uVar29;
                  } while (uVar38 != 0);
LAB_013421e8:
                  uVar34 = uVar34 + uVar25;
                }
                else {
                  if ((CARRY4(uVar29,uVar46)) || (param_3 < uVar29 + uVar46)) {
                    puVar30 = &DAT_01d05d50;
LAB_01342de0:
                    /* WARNING: Subroutine does not return */
                    FUN_012faff4(uVar46,uVar29 + uVar46,param_3,puVar30);
                  }
                  if (uVar29 != 0) {
                    iVar44 = *piVar31;
                    uVar25 = 0;
                    puVar23 = (undefined2 *)(iVar44 + 0x8000);
                    do {
                      bVar2 = *(byte *)(param_2 + uVar46 + uVar25);
                      uVar14 = uVar34 + iVar17 + uVar25 & 0x7fff;
                      if (uVar14 < 0x101) {
                        puVar23 = (undefined2 *)(iVar44 + 0x8000);
                      }
                      *(byte *)(iVar44 + uVar14) = bVar2;
                      if (uVar14 < 0x101) {
                        *(byte *)((int)puVar23 + uVar14) = bVar2;
                      }
                      if (2 < iVar18 + 1 + uVar25) {
                        uVar38 = uVar34 + iVar35 + uVar25;
                        uVar14 = uVar38 & 0x7fff;
                        puVar23 = (undefined2 *)
                                  (piVar37[0x11] +
                                  ((uint)bVar2 ^
                                   (uint)*(byte *)(iVar44 + (uVar34 + iVar24 + uVar25 & 0x7fff)) <<
                                   5 ^ (*(byte *)(iVar44 + uVar14) & 0x1f) << 10) * 2);
                        *(undefined2 *)(piVar37[0x10] + uVar14 * 2) = *puVar23;
                        *puVar23 = (short)uVar38;
                      }
                      uVar25 = uVar25 + 1;
                    } while (uVar29 != uVar25);
                    goto LAB_013421e8;
                  }
                }
                uVar46 = uVar29 + uVar46;
                uVar29 = 0x8000 - uVar34;
                if (uVar42 < 0x8000 - uVar34) {
                  uVar29 = uVar42;
                }
                piVar37[0x17] = uVar29;
                if ((uVar34 >> 1 < 0x81) && (*(char *)((int)piVar37 + 0x36) == '\0'))
                goto LAB_01342a88;
                if (uVar34 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_012fb0ec("assertion failed: lookahead_size >= len_to_move",0x2f,&DAT_01d05d70)
                  ;
                }
                uVar29 = uVar29 + 1;
                iVar17 = iVar17 + 1;
                uVar43 = uVar43 + 1;
                uVar34 = uVar34 - 1;
                if (0x7fff < uVar29) {
                  uVar29 = 0x8000;
                }
                piVar37[0x17] = uVar29;
                if (0x7c00 < uVar43) {
                  piVar37[0x15] = uVar34;
                  piVar37[0x16] = iVar17;
                  piVar37[9] = uVar46;
                  piVar37[0x401b] = uVar43;
                  uVar51 = FUN_01604788(piVar37,&local_40,0);
                  iVar18 = (int)(uVar51 >> 0x20);
                  uVar29 = (uint)uVar51;
                  if ((uVar51 & 1) != 0) {
                    iVar18 = -1;
                  }
                  if (iVar18 != 0) goto joined_r0x01342b8c;
                  uVar43 = piVar37[0x401b];
                }
                iVar35 = iVar35 + 1;
                iVar24 = iVar24 + 1;
              } while( true );
            }
            uVar29 = 0;
            goto LAB_01342b1c;
          }
          if ((piVar37[2] & 0x24fffU) == 0x4001) {
            local_54 = piVar37[0x16];
            local_5c = piVar37[0x15];
            uVar34 = local_54 & 0x7fff;
            uVar29 = 0;
            local_7c = 0;
            do {
              if (param_3 <= local_7c) {
                if (local_5c != 0) {
                  uVar29 = (uint)*(byte *)((int)piVar37 + 0x36);
                }
                if (local_5c == 0 || uVar29 == 0) goto LAB_01342c44;
              }
              uVar29 = param_3 - local_7c;
              if (0x1000 - local_5c < param_3 - local_7c) {
                uVar29 = 0x1000 - local_5c;
              }
              if (uVar29 != 0) {
                uVar42 = local_54 + local_5c;
                uVar43 = local_7c;
                uVar46 = uVar29;
                do {
                  uVar42 = uVar42 & 0x7fff;
                  uVar14 = 0x8000 - uVar42;
                  if (uVar46 < 0x8000 - uVar42) {
                    uVar14 = uVar46;
                  }
                  local_7c = uVar14 + uVar43;
                  if ((CARRY4(uVar14,uVar43)) || (param_3 < local_7c)) {
                    /* WARNING: Subroutine does not return */
                    FUN_012faff4(uVar43,local_7c,param_3,&DAT_01d05a70);
                  }
                  FUN_01bed4e2(*piVar31 + uVar42,param_2 + uVar43,uVar14);
                  if (uVar42 < 0x101) {
                    uVar38 = 0x101 - uVar42;
                    if (uVar14 <= 0x101 - uVar42) {
                      uVar38 = uVar14;
                    }
                    if ((CARRY4(uVar38,uVar43)) || (param_3 < uVar38 + uVar43)) {
                    /* WARNING: Subroutine does not return */
                      FUN_012faff4(uVar43,uVar38 + uVar43,param_3,&DAT_01d05a80);
                    }
                    FUN_01bed4e2(*piVar31 + uVar42 + 0x8000,param_2 + uVar43);
                  }
                  uVar42 = uVar14 + uVar42;
                  uVar46 = uVar46 - uVar14;
                  uVar43 = local_7c;
                } while (uVar46 != 0);
              }
              local_5c = uVar29 + local_5c;
              uVar29 = 0x8000 - local_5c;
              if ((uint)piVar37[0x17] < 0x8000 - local_5c) {
                uVar29 = piVar37[0x17];
              }
              piVar37[0x17] = uVar29;
              uVar43 = local_5c;
              if (local_5c >> 0xc == 0 && *(char *)((int)piVar37 + 0x36) == '\0') goto LAB_01342c44;
              while (3 < uVar43) {
                uVar42 = *(uint *)(piVar37[0xf] + uVar34);
                puVar21 = (ushort *)
                          (piVar37[0x11] + (uVar42 & 0xfff ^ (uVar42 & 0xffffff) >> 0x11) * 2);
                uVar46 = (uint)*puVar21;
                *puVar21 = (ushort)local_54;
                uVar29 = local_54 - uVar46;
                if ((uVar29 & 0xffff) <= (uint)piVar37[0x17]) {
                  uVar46 = uVar46 & 0x7fff;
                  iVar35 = *piVar31;
                  if ((uVar42 & 0xffffff) == (*(uint *)(iVar35 + uVar46) & 0xffffff)) {
                    iVar24 = 0;
                    do {
                      uVar14 = uVar34 + 3 + iVar24;
                      puVar40 = (uint *)(iVar35 + (uVar46 + 3 + iVar24 & 0x7fff));
                      puVar22 = (uint *)(iVar35 + (uVar14 & 0x7fff));
                      uVar38 = *puVar22 ^ *puVar40;
                      uVar41 = puVar22[1] ^ puVar40[1];
                      if (uVar38 != 0 || uVar41 != 0) {
                        bVar5 = (byte)uVar41;
                        bVar6 = (byte)(uVar41 >> 8);
                        bVar7 = (byte)(uVar41 >> 0x10);
                        bVar2 = (byte)(uVar41 >> 0x18);
                        bVar8 = (byte)uVar38;
                        bVar9 = (byte)(uVar38 >> 8);
                        bVar10 = (byte)(uVar38 >> 0x10);
                        bVar3 = (byte)(uVar38 >> 0x18);
                        uVar46 = LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1
                                                          | bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1)
                                                         << 1 | bVar5 >> 4 & 1) << 1 |
                                                       bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 |
                                                     bVar5 >> 7) << 0x18 |
                                         (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1
                                                          | bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1)
                                                         << 1 | bVar6 >> 4 & 1) << 1 |
                                                       bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1) << 1 |
                                                     bVar6 >> 7) << 0x10 |
                                         (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1
                                                          | bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1)
                                                         << 1 | bVar7 >> 4 & 1) << 1 |
                                                       bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1) << 1 |
                                                     bVar7 >> 7) << 8 |
                                         (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1
                                                          | bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1)
                                                         << 1 | bVar2 >> 4 & 1) << 1 |
                                                       bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1) << 1 |
                                                     bVar2 >> 7)) + 0x20;
                        if (uVar38 != 0) {
                          uVar46 = LZCOUNT((uint)(byte)((((((((bVar8 & 1) << 1 | bVar8 >> 1 & 1) <<
                                                             1 | bVar8 >> 2 & 1) << 1 |
                                                           bVar8 >> 3 & 1) << 1 | bVar8 >> 4 & 1) <<
                                                          1 | bVar8 >> 5 & 1) << 1 | bVar8 >> 6 & 1)
                                                        << 1 | bVar8 >> 7) << 0x18 |
                                           (uint)(byte)((((((((bVar9 & 1) << 1 | bVar9 >> 1 & 1) <<
                                                             1 | bVar9 >> 2 & 1) << 1 |
                                                           bVar9 >> 3 & 1) << 1 | bVar9 >> 4 & 1) <<
                                                          1 | bVar9 >> 5 & 1) << 1 | bVar9 >> 6 & 1)
                                                        << 1 | bVar9 >> 7) << 0x10 |
                                           (uint)(byte)((((((((bVar10 & 1) << 1 | bVar10 >> 1 & 1)
                                                             << 1 | bVar10 >> 2 & 1) << 1 |
                                                           bVar10 >> 3 & 1) << 1 | bVar10 >> 4 & 1)
                                                          << 1 | bVar10 >> 5 & 1) << 1 |
                                                        bVar10 >> 6 & 1) << 1 | bVar10 >> 7) << 8 |
                                           (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) <<
                                                             1 | bVar3 >> 2 & 1) << 1 |
                                                           bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) <<
                                                          1 | bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1)
                                                        << 1 | bVar3 >> 7));
                        }
                        uVar46 = (uVar14 - uVar34) + (uVar46 >> 3);
                        if ((uVar46 < 3) || ((0x1fff < (uVar29 & 0xffff) && (uVar46 == 3))))
                        goto LAB_01341d0c;
                        goto LAB_01341c04;
                      }
                      iVar24 = iVar24 + 8;
                    } while (iVar24 != 0x100);
                    uVar46 = 0x102;
                    if ((uVar29 & 0xffff) == 0) {
LAB_01341d0c:
                      uVar46 = *puVar27;
                      uVar29 = *puVar28;
                      *(char *)((int)piVar13 + (uVar46 & 0xffff)) = (char)uVar42;
                      bVar2 = *(byte *)((int)piVar13 + (uint)(ushort)uVar29);
                      *puVar27 = uVar46 + 1;
                      psVar16 = (short *)(piVar37[0xe] + (uVar42 & 0xff) * 2);
                      *(byte *)((int)piVar13 + (uint)(ushort)uVar29) = bVar2 >> 1;
                      goto LAB_01341d4c;
                    }
LAB_01341c04:
                    uVar42 = *puVar27;
                    if (uVar43 < uVar46) {
                      uVar46 = uVar43;
                    }
                    uVar29 = uVar29 - 1;
                    *(char *)((int)piVar13 + (uVar42 & 0xffff)) = (char)(uVar46 - 3);
                    uVar14 = uVar29 & 0xffff;
                    *(char *)((int)piVar13 + (uVar42 + 1 & 0xffff)) = (char)uVar29;
                    *(char *)((int)piVar13 + (uVar42 + 2 & 0xffff)) = (char)(uVar14 >> 8);
                    *puVar27 = uVar42 + 3;
                    *(byte *)((int)piVar13 + (uint)(ushort)*puVar28) =
                         *(byte *)((int)piVar13 + (uint)(ushort)*puVar28) >> 1 | 0x80;
                    if (uVar14 < 0x200) {
                      pbVar15 = &DAT_004ba70f + (uVar29 & 0xffff);
                    }
                    else {
                      if ((short)uVar29 < 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_012fb12c(uVar14 >> 8,0x80,&DAT_01d05a60);
                      }
                      pbVar15 = (byte *)("" + (uVar14 >> 8));
                    }
                    psVar16 = (short *)(piVar37[0xe] + (uint)*pbVar15 * 2 + 0x240);
                    bVar2 = (&DAT_004ba90f)[uVar46 - 3 & 0xff];
                    *psVar16 = *psVar16 + 1;
                    psVar16 = (short *)(piVar37[0xe] + (bVar2 & 0x1f) * 2 + 0x200);
                    *psVar16 = *psVar16 + 1;
                  }
                  else {
                    uVar46 = *puVar27;
                    uVar29 = *puVar28;
                    iVar35 = piVar37[0xe];
                    *(char *)((int)piVar13 + (uVar46 & 0xffff)) = (char)uVar42;
                    bVar2 = *(byte *)((int)piVar13 + (uint)(ushort)uVar29);
                    *puVar27 = uVar46 + 1;
                    *(byte *)((int)piVar13 + (uint)(ushort)uVar29) = bVar2 >> 1;
                    psVar16 = (short *)(iVar35 + (uVar42 & 0xff) * 2);
LAB_01341d4c:
                    *psVar16 = *psVar16 + 1;
                    uVar46 = 1;
                  }
                  uVar29 = *puVar27;
                  iVar35 = piVar37[0x401c];
                  piVar37[0x401c] = iVar35 + -1;
                  if (iVar35 + -1 == 0) {
                    *puVar28 = uVar29;
                    uVar29 = uVar29 + 1;
                    *puVar27 = uVar29;
                    piVar37[0x401c] = 8;
                  }
                  uVar43 = uVar43 - uVar46;
                  piVar37[0x401b] = piVar37[0x401b] + uVar46;
                  uVar42 = piVar37[0x17] + uVar46;
                  uVar34 = uVar46 + uVar34 & 0x7fff;
                  if (0x7fff < uVar42) {
                    uVar42 = 0x8000;
                  }
                  piVar37[0x17] = uVar42;
                  local_54 = uVar46 + local_54;
                  if (0xfff8 < uVar29) {
                    piVar37[0x15] = uVar43;
                    piVar37[0x16] = local_54;
                    uVar51 = FUN_01604788(piVar37,&local_40,0);
                    iVar18 = (int)(uVar51 >> 0x20);
                    if ((uVar51 & 1) != 0) {
                      *piVar37 = -1;
                      piVar37[9] = local_7c;
                      goto LAB_01342c34;
                    }
                    if (iVar18 != 0) goto LAB_01342b70;
                    local_54 = piVar37[0x16];
                    uVar43 = piVar37[0x15];
                  }
                }
              }
              uVar29 = 0;
              local_5c = 0;
              while (uVar43 != 0) {
                uVar46 = *puVar27;
                uVar29 = *puVar28;
                bVar2 = *(byte *)(*piVar31 + uVar34);
                piVar37[0x401b] = piVar37[0x401b] + 1;
                iVar35 = piVar37[0x401c];
                *(byte *)((int)piVar13 + (uVar46 & 0xffff)) = bVar2;
                bVar3 = *(byte *)((int)piVar13 + (uint)(ushort)uVar29);
                *puVar27 = uVar46 + 1;
                *(byte *)((int)piVar13 + (uint)(ushort)uVar29) = bVar3 >> 1;
                piVar37[0x401c] = iVar35 + -1;
                if (iVar35 + -1 == 0) {
                  *puVar28 = uVar46 + 1;
                  piVar37[0x401c] = 8;
                  *puVar27 = uVar46 + 2;
                }
                uVar43 = uVar43 - 1;
                local_54 = local_54 + 1;
                psVar16 = (short *)(piVar37[0xe] + (uint)bVar2 * 2);
                *psVar16 = *psVar16 + 1;
                uVar29 = piVar37[0x17] + 1;
                if (0x7fff < uVar29) {
                  uVar29 = 0x8000;
                }
                piVar37[0x17] = uVar29;
                uVar29 = *puVar27;
                if (0xfff8 < uVar29) {
                  piVar37[0x15] = uVar43;
                  piVar37[0x16] = local_54;
                  uVar51 = FUN_01604788(piVar37,&local_40,0);
                  iVar18 = (int)(uVar51 >> 0x20);
                  if ((uVar51 & 1) != 0) {
                    piVar37[9] = local_7c;
                    *piVar37 = -1;
                    goto LAB_01342c34;
                  }
                  if (iVar18 != 0) goto LAB_01342b70;
                  uVar29 = piVar37[0x16];
                  uVar43 = piVar37[0x15];
                  local_54 = uVar29;
                }
                uVar34 = uVar34 + 1 & 0x7fff;
              }
            } while( true );
          }
          local_94 = piVar37[4];
          uVar43 = piVar37[5];
          uVar46 = 0;
          uVar34 = piVar37[0x15];
          uVar4 = *(undefined1 *)((int)piVar37 + 0x37);
          uVar29 = piVar37[0x16];
          local_54 = uVar29;
LAB_013422ec:
          do {
            uVar42 = uVar34;
            if (param_3 <= uVar46) {
              if (uVar34 != 0) {
                uVar29 = (uint)*(byte *)((int)piVar37 + 0x36);
              }
              if (uVar34 != 0 && uVar29 != 0) goto LAB_01342304;
LAB_01342ab8:
              piVar37[0x15] = uVar42;
              piVar37[0x16] = local_54;
              *(undefined1 *)((int)piVar37 + 0x37) = uVar4;
              piVar37[9] = uVar46;
              piVar37[4] = local_94;
              piVar37[5] = uVar43;
              goto LAB_01342ae4;
            }
LAB_01342304:
            uVar14 = piVar37[0x17];
            iVar35 = uVar14 + uVar34;
            uVar29 = param_3 - uVar46;
            if (0x102 - uVar34 < param_3 - uVar46) {
              uVar29 = 0x102 - uVar34;
            }
            if ((uVar29 == 0 || iVar35 != 0) && (uVar29 != 0 && iVar35 != 1)) {
              if ((CARRY4(uVar29,uVar46)) || (param_3 < uVar29 + uVar46)) {
                    /* WARNING: Subroutine does not return */
                FUN_012faff4(uVar46,uVar29 + uVar46,param_3,&DAT_01d05ab0);
              }
              uVar42 = uVar29 + uVar34;
              iVar35 = piVar37[0x10];
              iVar17 = piVar37[0x11];
              iVar24 = *piVar31;
              uVar34 = uVar34 + local_54;
              uVar36 = uVar34 - 2;
              uVar41 = (uint)*(byte *)(iVar24 + (uVar34 - 1 & 0x7fff)) ^
                       (uint)*(byte *)(iVar24 + (uVar36 & 0x7fff)) << 5;
              pbVar15 = (byte *)(param_2 + uVar46);
              uVar38 = uVar29;
              do {
                uVar34 = uVar34 & 0x7fff;
                bVar2 = *pbVar15;
                *(byte *)(iVar24 + uVar34) = bVar2;
                if (uVar34 < 0x101) {
                  ((byte *)(iVar24 + uVar34))[0x8000] = bVar2;
                }
                uVar34 = uVar34 + 1;
                uVar41 = (uVar41 & 0x3ff) << 5 ^ (uint)bVar2;
                uVar38 = uVar38 - 1;
                puVar23 = (undefined2 *)(iVar17 + uVar41 * 2);
                *(undefined2 *)(iVar35 + (uVar36 & 0x7fff) * 2) = *puVar23;
                *puVar23 = (short)uVar36;
                uVar36 = uVar36 + 1;
                pbVar15 = pbVar15 + 1;
              } while (uVar38 != 0);
            }
            else {
              if ((CARRY4(uVar29,uVar46)) || (param_3 < uVar29 + uVar46)) {
                    /* WARNING: Subroutine does not return */
                FUN_012faff4(uVar46,uVar29 + uVar46,param_3,&DAT_01d05aa0);
              }
              if (uVar29 != 0) {
                iVar44 = piVar37[0xf];
                iVar24 = piVar37[0x10];
                iVar17 = piVar37[0x11];
                uVar42 = 0;
                puVar23 = (undefined2 *)0x7fff;
                iVar18 = uVar34 + local_54;
                do {
                  bVar2 = *(byte *)(param_2 + uVar46 + uVar42);
                  uVar38 = iVar18 + uVar42 & 0x7fff;
                  *(byte *)(iVar44 + uVar38) = bVar2;
                  if (uVar38 < 0x101) {
                    puVar23 = (undefined2 *)0x8000;
                  }
                  if (uVar38 < 0x101) {
                    ((byte *)(iVar44 + uVar38))[(int)puVar23] = bVar2;
                  }
                  if (2 < iVar35 + 1 + uVar42) {
                    uVar41 = iVar18 + -2 + uVar42;
                    uVar38 = uVar41 & 0x7fff;
                    puVar23 = (undefined2 *)
                              (iVar17 + ((uint)bVar2 ^
                                         (uint)*(byte *)(iVar44 + (iVar18 + 0x7fff + uVar42 & 0x7fff
                                                                  )) << 5 ^
                                        (*(byte *)(iVar44 + uVar38) & 0x1f) << 10) * 2);
                    *(undefined2 *)(iVar24 + uVar38 * 2) = *puVar23;
                    *puVar23 = (short)uVar41;
                  }
                  uVar42 = uVar42 + 1;
                } while (uVar29 != uVar42);
                uVar42 = uVar34 + uVar42;
              }
            }
            uVar46 = uVar29 + uVar46;
            uVar29 = (uint)*(byte *)((int)piVar37 + 0x36);
            uVar34 = 0x8000 - uVar42;
            if (uVar14 < 0x8000 - uVar42) {
              uVar34 = uVar14;
            }
            piVar37[0x17] = uVar34;
            if ((uVar42 >> 1 < 0x81) && (uVar29 == 0)) goto LAB_01342ab8;
            uVar38 = piVar37[2];
            uVar14 = uVar43;
            if (uVar43 == 0) {
              uVar14 = 2;
            }
            uVar36 = local_54 & 0x7fff;
            uVar41 = param_5;
            if ((uVar38 & 0x10000) == 0) {
              uVar29 = 0x102;
              if (uVar42 < 0x102) {
                uVar29 = uVar42;
              }
              local_5c = 0;
              if (uVar14 < uVar29) {
                iVar35 = 0x10;
                if (uVar14 < 0x20) {
                  iVar35 = 0xc;
                }
                iVar35 = *(int *)((int)piVar31 + iVar35) + -1;
                if (iVar35 == 0) goto LAB_01342804;
                iVar24 = *piVar31;
                uVar41 = piVar37[0x10];
                sVar47 = *(short *)((int)(iVar24 + uVar36) + (uVar14 - 1));
                uVar25 = 0;
                uVar39 = uVar36;
                do {
LAB_013425f0:
                  iVar17 = 4;
                  do {
                    iVar17 = iVar17 + -1;
                    if (iVar17 == 0) goto LAB_01342658;
                    uVar39 = (uint)*(ushort *)(uVar41 + uVar39 * 2);
                    if (((uVar39 == 0) || (local_5c = local_54 - uVar39 & 0xffff, uVar34 < local_5c)
                        ) || (uVar14 == 0)) goto LAB_013427f8;
                    uVar39 = uVar39 & 0x7fff;
                  } while (*(short *)(iVar24 + uVar14 + uVar39 + -1) != sVar47);
                  if (local_5c == 0) goto LAB_013427f8;
                  if (*(short *)(iVar24 + uVar39) != *(short *)(iVar24 + uVar36)) goto LAB_01342658;
                  if (*(byte *)(piVar37 + 0x18) == 0) {
LAB_01342a60:
                    uVar14 = uVar29;
                    break;
                  }
                  uVar45 = uVar39 + 2;
                  uVar33 = (uint)*(byte *)(piVar37 + 0x18);
                  local_a8 = uVar36 + 2;
                  while( true ) {
                    puVar40 = (uint *)(iVar24 + (uVar45 & 0x7fff));
                    puVar22 = (uint *)(iVar24 + (local_a8 & 0x7fff));
                    uVar32 = *puVar22 ^ *puVar40;
                    uVar19 = puVar22[1] ^ puVar40[1];
                    if (uVar32 != 0 || uVar19 != 0) break;
                    uVar45 = uVar45 + 8;
                    uVar33 = uVar33 - 1;
                    local_a8 = local_a8 + 8;
                    if (uVar33 == 0) goto LAB_01342a60;
                  }
                  bVar5 = (byte)uVar19;
                  bVar6 = (byte)(uVar19 >> 8);
                  bVar7 = (byte)(uVar19 >> 0x10);
                  bVar2 = (byte)(uVar19 >> 0x18);
                  bVar8 = (byte)uVar32;
                  bVar9 = (byte)(uVar32 >> 8);
                  bVar10 = (byte)(uVar32 >> 0x10);
                  bVar3 = (byte)(uVar32 >> 0x18);
                  uVar33 = LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                    bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                                  bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                                bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x18 |
                                   (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 |
                                                    bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1) << 1 |
                                                  bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1 |
                                                bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 0x10 |
                                   (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1 |
                                                    bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1) << 1 |
                                                  bVar7 >> 4 & 1) << 1 | bVar7 >> 5 & 1) << 1 |
                                                bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 8 |
                                   (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 |
                                                    bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1) << 1 |
                                                  bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                                                bVar2 >> 6 & 1) << 1 | bVar2 >> 7)) + 0x20;
                  if (uVar32 != 0) {
                    uVar33 = LZCOUNT((uint)(byte)((((((((bVar8 & 1) << 1 | bVar8 >> 1 & 1) << 1 |
                                                      bVar8 >> 2 & 1) << 1 | bVar8 >> 3 & 1) << 1 |
                                                    bVar8 >> 4 & 1) << 1 | bVar8 >> 5 & 1) << 1 |
                                                  bVar8 >> 6 & 1) << 1 | bVar8 >> 7) << 0x18 |
                                     (uint)(byte)((((((((bVar9 & 1) << 1 | bVar9 >> 1 & 1) << 1 |
                                                      bVar9 >> 2 & 1) << 1 | bVar9 >> 3 & 1) << 1 |
                                                    bVar9 >> 4 & 1) << 1 | bVar9 >> 5 & 1) << 1 |
                                                  bVar9 >> 6 & 1) << 1 | bVar9 >> 7) << 0x10 |
                                     (uint)(byte)((((((((bVar10 & 1) << 1 | bVar10 >> 1 & 1) << 1 |
                                                      bVar10 >> 2 & 1) << 1 | bVar10 >> 3 & 1) << 1
                                                    | bVar10 >> 4 & 1) << 1 | bVar10 >> 5 & 1) << 1
                                                  | bVar10 >> 6 & 1) << 1 | bVar10 >> 7) << 8 |
                                     (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                                      bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                                    bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                                  bVar3 >> 6 & 1) << 1 | bVar3 >> 7));
                  }
                  uVar33 = (local_a8 - uVar36) + (uVar33 >> 3);
                  if (uVar14 < uVar33) {
                    if (uVar29 <= uVar33) {
                      uVar14 = uVar29;
                      break;
                    }
                    iVar17 = uVar33 + uVar36 + -1;
                    if (uVar33 + uVar36 == 0) {
                      iVar17 = 0;
                    }
                    sVar47 = *(short *)(iVar24 + iVar17);
                    uVar14 = uVar33;
                    uVar25 = local_5c;
                  }
                  local_5c = uVar25;
                  iVar35 = iVar35 + -1;
                  uVar25 = local_5c;
                } while (iVar35 != 0);
              }
LAB_01342808:
              if (uVar14 != 3) {
                uVar29 = uVar14;
                uVar41 = local_5c;
                goto LAB_01342830;
              }
              bVar49 = (uVar38 & 0x20000) == 0;
              if (bVar49) {
                uVar41 = local_5c;
              }
              if (bVar49 && local_5c >> 0xd == 0) {
                uVar29 = 3;
                goto LAB_01342844;
              }
LAB_013428a4:
              if (uVar43 == 0) {
LAB_013428f4:
                FUN_01606604(piVar37[0xe],piVar13,*(undefined1 *)(piVar37[0xf] + uVar36));
                uVar29 = 1;
LAB_0134290c:
                uVar14 = uVar29;
                uVar43 = 0;
              }
              else {
                iVar35 = piVar37[0xe];
LAB_01342924:
                FUN_01606510(iVar35,piVar13,uVar43,local_94);
                uVar14 = uVar43 - 1;
                uVar43 = 0;
              }
            }
            else {
              if (uVar34 == 0) {
LAB_01342804:
                local_5c = 0;
                goto LAB_01342808;
              }
              if (!CARRY4(uVar42,uVar36)) {
                uVar29 = 0x8103;
              }
              if (CARRY4(uVar42,uVar36) || uVar29 <= uVar42 + uVar36) {
                    /* WARNING: Subroutine does not return */
                FUN_012faff4(uVar36,uVar42 + uVar36,0x8102,&DAT_01d05ac0);
              }
              if (uVar42 == 0) {
                uVar41 = 0;
                uVar29 = 0;
              }
              else {
                uVar14 = 0;
                do {
                  if (*(char *)(*piVar31 + uVar36 + uVar14) !=
                      *(char *)(*piVar31 + (local_54 - 1 & 0x7fff))) goto LAB_013427d8;
                  uVar14 = uVar14 + 1;
                } while (uVar42 != uVar14);
                uVar14 = uVar42;
LAB_013427d8:
                local_5c = 1;
                uVar41 = 0;
                uVar29 = 0;
                if (2 < uVar14) goto LAB_01342808;
              }
LAB_01342830:
              if (((uint)(uVar29 < 6) & uVar38 >> 0x11) != 0) goto LAB_013428a4;
LAB_01342844:
              if (uVar36 == uVar41) goto LAB_013428a4;
              if (uVar43 == 0) {
                if (uVar41 == 0) goto LAB_013428f4;
                if (((char)piVar37[0xd] == '\0' && (uVar38 & 0x10000) == 0) && (uVar29 < 0x80)) {
                  iVar35 = *piVar31;
                  goto LAB_01342a48;
                }
                FUN_01606510(piVar37[0xe],piVar13,uVar29,uVar41);
                goto LAB_0134290c;
              }
              iVar35 = piVar37[0xe];
              if (uVar29 <= uVar43) goto LAB_01342924;
              FUN_01606604(iVar35,piVar13,uVar4);
              if (uVar29 < 0x80) {
                iVar35 = *piVar31;
LAB_01342a48:
                uVar4 = *(undefined1 *)(iVar35 + uVar36);
                uVar14 = 1;
                uVar43 = uVar29;
                local_94 = uVar41;
              }
              else {
                FUN_01606510(piVar37[0xe],piVar13,uVar29,uVar41);
                uVar14 = uVar29;
                uVar43 = 0;
              }
            }
            if (uVar42 < uVar14) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0ec("assertion failed: lookahead_size >= len_to_move",0x2f,&DAT_01d05ad0);
            }
            local_54 = uVar14 + local_54;
            uVar34 = uVar42 - uVar14;
            uVar14 = piVar37[0x17] + uVar14;
            uVar42 = *puVar27;
            if (0x7fff < uVar14) {
              uVar14 = 0x8000;
            }
            uVar29 = 0xfff8;
            piVar37[0x17] = uVar14;
            if ((uint)piVar37[0x401b] < 0x7c01) {
              if (uVar42 < 0xfff9) goto LAB_013422ec;
            }
            else {
              bVar49 = 0xfff7 < uVar42;
              if (uVar42 < 0xfff9) {
                uVar29 = uVar42 * 0x73 >> 7;
                bVar49 = (uint)piVar37[0x401b] <= uVar29;
              }
              if (!bVar49) goto LAB_013422ec;
            }
            piVar37[0x15] = uVar34;
            piVar37[0x16] = local_54;
            piVar37[9] = uVar46;
            uVar51 = FUN_01604788(piVar37,&local_40,0);
            iVar18 = (int)(uVar51 >> 0x20);
            uVar29 = (uint)uVar51;
            if ((uVar51 & 1) != 0) {
              iVar18 = -1;
            }
          } while (iVar18 == 0);
          piVar37[4] = local_94;
          piVar37[5] = uVar43;
          *(undefined1 *)((int)piVar37 + 0x37) = uVar4;
joined_r0x01342b8c:
          if (0 < iVar18) goto LAB_01342ae4;
          goto LAB_01342c34;
        }
        goto LAB_01341908;
      }
      if (iVar35 == 0) goto LAB_013418f4;
LAB_0134192c:
      local_4c = -2;
      local_48 = 0;
      *piVar37 = -2;
      local_44 = 0;
      goto LAB_01341944;
    }
    uVar12 = 0xfffffffb;
    local_78 = 0;
    local_74 = 0;
    bVar11 = (bool)(bVar50 ^ 1);
    if (bVar50) {
      uVar12 = 1;
    }
  }
LAB_01342cc4:
  uVar20 = *param_1;
  uVar29 = param_1[2];
  *param_1 = uVar20 + local_78;
  param_1[1] = param_1[1] + (uint)CARRY4(uVar20,local_78);
  param_1[2] = uVar29 + local_74;
  param_1[3] = param_1[3] + (uint)CARRY4(uVar29,local_74);
  uVar20 = 3;
  if (uVar12 == 0xfffffffb) {
    uVar20 = 1;
  }
  if (!bVar11) {
    uVar20 = 0x30200 >> ((uVar12 & 0x1f) << 3);
  }
  return uVar20;
LAB_01342c44:
  piVar37[0x15] = local_5c;
  piVar37[0x16] = local_54;
  piVar37[9] = local_7c;
LAB_01342ae4:
  uVar29 = param_3;
  if ((*(byte *)((int)piVar37 + 9) & 0x30) != 0) {
    if (param_3 < (uint)piVar37[9]) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,piVar37[9],param_3,&DAT_01d05a90);
    }
    uVar52 = FUN_019797b8(piVar37[8],(uint)piVar37[8] >> 0x10,param_2);
    piVar37[8] = ((uint)uVar52 & 0xffff) + (int)((ulonglong)uVar52 >> 0x20) * 0x10000;
  }
LAB_01342b1c:
  if (*(char *)((int)piVar37 + 0x36) != '\0') {
    uVar34 = piVar37[9];
    bVar49 = uVar29 == uVar34;
    if (bVar49) {
      uVar29 = piVar37[7];
      uVar34 = piVar37[0x15];
    }
    if (bVar49 && (uVar34 == 0 && uVar29 == 0)) {
      uVar51 = FUN_01604788(piVar37,&local_40);
      if ((uVar51 & 1) != 0) {
        local_48 = piVar37[9];
        local_44 = piVar37[10];
        *piVar37 = -1;
        local_4c = -1;
        goto LAB_01341944;
      }
      if ((longlong)uVar51 < 0) {
LAB_01342c34:
        local_48 = piVar37[9];
        local_44 = piVar37[10];
        local_4c = *piVar37;
        goto LAB_01341944;
      }
      *(bool *)((int)piVar37 + 0x35) = *(char *)((int)piVar37 + 0x36) == '\x04';
      if (*(char *)((int)piVar37 + 0x36) == '\x03') {
        FUN_01bed93e(piVar37[0x11],0,0x10000);
        FUN_01bed93e(piVar37[0x10],0,0x10000);
        piVar37[0x17] = 0;
      }
    }
  }
LAB_01341908:
  FUN_01606414(&local_4c,&local_40,piVar37);
  *piVar37 = local_4c;
LAB_01341944:
  if (param_3 < local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(local_48,param_3,param_3,&DAT_01d05d80);
  }
  if (param_5 < local_44) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(local_44,param_5,param_5,&DAT_01d05d90);
  }
  local_74 = local_44 + local_74;
  local_78 = local_48 + local_78;
  if (local_4c == -2) {
    bVar11 = true;
    uVar12 = 0xffffd8f0;
    goto LAB_01342cc4;
  }
  if (local_4c == -1) {
    bVar11 = true;
    uVar12 = 0xfffffffe;
    goto LAB_01342cc4;
  }
  if (local_4c == 1) {
    bVar11 = false;
    uVar12 = 1;
    goto LAB_01342cc4;
  }
  param_5 = param_5 - local_44;
  if (param_5 == 0) {
    uVar12 = 0;
    bVar11 = false;
    goto LAB_01342cc4;
  }
  param_3 = param_3 - local_48;
  param_2 = param_2 + local_48;
  param_4 = param_4 + local_44;
  iVar35 = local_4c;
  if (!bVar50 && param_3 == 0) goto LAB_01342d10;
  goto LAB_013418a0;
LAB_01342b70:
  piVar37[9] = local_7c;
  goto joined_r0x01342b8c;
LAB_01342658:
  iVar35 = iVar35 + -1;
  if (iVar35 == 0) {
LAB_013427f8:
    local_5c = uVar25;
    goto LAB_01342808;
  }
  goto LAB_013425f0;
LAB_01342d10:
  bVar50 = local_74 == 0 && bVar11;
  if (local_74 == 0 && bVar11) {
    bVar50 = local_78 == 0;
  }
  if (bVar50) {
    bVar11 = true;
    local_74 = 0;
    local_78 = 0;
    uVar12 = 0xfffffffb;
  }
  else {
    uVar12 = 0;
    bVar11 = false;
  }
  goto LAB_01342cc4;
}

