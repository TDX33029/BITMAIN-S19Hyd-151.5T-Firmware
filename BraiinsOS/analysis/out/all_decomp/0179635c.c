// FUN_0179635c @ 0179635c size=2716 calls_out=3 calls_in=3
// strings: 

void FUN_0179635c(uint *param_1,int param_2,uint param_3,undefined **param_4,int param_5,
                 uint param_6)

{
  int iVar1;
  byte *pbVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  int iVar7;
  undefined **extraout_r1;
  undefined **ppuVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ushort *puVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  ushort *puVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  uint *puVar26;
  uint *puVar27;
  int iVar28;
  bool bVar29;
  int local_98;
  uint local_84;
  uint local_80 [6];
  undefined2 local_68;
  undefined4 local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  undefined *puStack_28;
  
  ppuVar6 = &PTR_018bc3f4;
  uVar25 = -param_5 & 3;
  local_2c = DAT_018ddaf8;
  if ((param_6 < uVar25) || (param_6 - uVar25 < 0x1300)) {
    ppuVar5 = (undefined **)0xffffffbe;
    goto LAB_01796630;
  }
  if (param_4 == (undefined **)0x0) {
    param_4 = (undefined **)&DAT_0000000b;
  }
  if (0xff < param_3) {
    ppuVar5 = (undefined **)0xffffffd2;
    goto LAB_01796630;
  }
  iVar20 = param_5 + uVar25;
  iVar19 = iVar20 + 8;
  iVar21 = iVar20 + 0x1000;
  FUN_016dd606(iVar20,0,0x1000);
  FUN_016dd606(iVar21,0,0x300);
  puVar27 = (uint *)(param_2 + -4);
  puVar26 = (uint *)(param_2 + param_3 * 4);
  puVar14 = puVar27;
  do {
    while( true ) {
      puVar14 = puVar14 + 1;
      uVar15 = *puVar14;
      if (uVar15 < 0xa5) break;
      iVar17 = (0xbd - LZCOUNT(uVar15)) * 4;
      *(short *)(iVar21 + iVar17) = *(short *)(iVar21 + iVar17) + 1;
      if (puVar26 == puVar14) goto LAB_01796448;
    }
    *(short *)(iVar21 + uVar15 * 4) = *(short *)(iVar21 + uVar15 * 4) + 1;
  } while (puVar26 != puVar14);
LAB_01796448:
  uVar15 = (uint)*(ushort *)(iVar20 + 0x12fc);
  puVar14 = (uint *)(iVar20 + 0x12f8);
  do {
    uVar16 = uVar15 + (ushort)*puVar14;
    uVar15 = uVar16 & 0xffff;
    puVar26 = puVar14 + -1;
    *puVar14 = uVar15 | uVar16 * 0x10000;
    puVar14 = puVar26;
  } while ((uint *)(iVar20 + 0xffc) != puVar26);
  uVar15 = 0;
  while( true ) {
    puVar27 = puVar27 + 1;
    uVar10 = *puVar27;
    uVar16 = uVar10;
    if (0xa4 < uVar10) {
      uVar16 = 0xbd - LZCOUNT(uVar10);
    }
    iVar17 = iVar21 + (uVar16 + 1) * 4;
    uVar3 = *(ushort *)(iVar17 + 2);
    *(ushort *)(iVar17 + 2) = uVar3 + 1;
    *(uint *)(iVar19 + (uint)uVar3 * 8) = uVar10;
    *(char *)(iVar19 + (uint)uVar3 * 8 + 6) = (char)uVar15;
    if (param_3 == uVar15) break;
    uVar15 = uVar15 + 1;
  }
  puVar22 = (ushort *)(iVar20 + 0x1294);
  do {
    iVar21 = (uint)puVar22[1] - (uint)*puVar22;
    if (1 < iVar21) {
      FUN_0179508c(iVar19 + (uint)*puVar22 * 8,0,iVar21 + -1);
    }
    puVar22 = puVar22 + 2;
  } while ((ushort *)(iVar20 + 0x12fc) != puVar22);
  iVar17 = *(int *)(iVar19 + param_3 * 8);
  iVar21 = param_3 * 8;
  iVar18 = iVar19 + iVar21;
  uVar15 = param_3;
  if (iVar17 == 0) {
    iVar28 = iVar20 + iVar21;
    do {
      iVar18 = iVar28;
      uVar15 = uVar15 - 1;
      iVar17 = *(int *)(iVar19 + uVar15 * 8);
      iVar28 = iVar18 + -8;
    } while (iVar17 == 0);
  }
  local_98 = uVar15 + 0xff;
  *(int *)(iVar20 + 0x808) = *(int *)(iVar19 + (uVar15 + 0x1fffffff) * 8) + iVar17;
  *(undefined2 *)(iVar19 + (uVar15 + 0x1fffffff) * 8 + 4) = 0x100;
  *(undefined2 *)(iVar18 + 4) = 0x100;
  if (local_98 < 0x101) {
    local_98 = local_98 * 8;
    ppuVar6 = (undefined **)(iVar19 + local_98);
    *(undefined4 *)(param_5 + uVar25) = 0x80000000;
    *(undefined1 *)((int)ppuVar6 + 7) = 0;
    if (0xff < (int)(uVar15 + 0xfe)) {
      local_98 = 0;
      goto LAB_017966f4;
    }
    if (-1 < (int)uVar15) {
      iVar17 = local_98 + -0x7f8;
      goto LAB_01796738;
    }
  }
  else {
    iVar28 = uVar15 - 2;
    iVar17 = iVar20;
    do {
      *(undefined4 *)(iVar17 + 0x810) = 0x40000000;
      iVar17 = iVar17 + 8;
    } while (iVar20 + -8 + uVar15 * 8 != iVar17);
    iVar17 = 0x100;
    *(undefined4 *)(param_5 + uVar25) = 0x80000000;
    iVar11 = 0x101;
    while( true ) {
      while( true ) {
        uVar16 = *(uint *)(iVar19 + iVar28 * 8);
        iVar1 = iVar28 * 8;
        uVar25 = *(uint *)(iVar19 + iVar17 * 8);
        iVar24 = iVar19 + iVar17 * 8;
        if (uVar16 < uVar25) {
          iVar28 = iVar28 + -1;
          iVar7 = iVar20 + iVar1;
          uVar10 = uVar25;
          iVar23 = iVar24;
          uVar9 = *(uint *)(iVar20 + iVar1);
          iVar24 = iVar19 + iVar1;
          uVar25 = uVar16;
        }
        else {
          iVar23 = iVar17 * 8 + 8;
          iVar17 = iVar17 + 1;
          uVar10 = *(uint *)(iVar19 + iVar23);
          iVar23 = iVar19 + iVar23;
          iVar7 = iVar19 + iVar1;
          uVar9 = uVar16;
        }
        uVar4 = (undefined2)iVar11;
        if (uVar10 <= uVar9) break;
        *(uint *)(iVar19 + iVar11 * 8) = uVar9 + uVar25;
        *(undefined2 *)(iVar7 + 4) = uVar4;
        *(undefined2 *)(iVar24 + 4) = uVar4;
        iVar11 = iVar11 + 1;
        if (uVar15 + 0x100 == iVar11) goto LAB_017966d0;
        iVar28 = iVar28 + -1;
      }
      *(uint *)(iVar19 + iVar11 * 8) = uVar10 + uVar25;
      *(undefined2 *)(iVar23 + 4) = uVar4;
      *(undefined2 *)(iVar24 + 4) = uVar4;
      iVar11 = iVar11 + 1;
      if (iVar11 == uVar15 + 0x100) break;
      iVar17 = iVar17 + 1;
    }
LAB_017966d0:
    local_98 = local_98 * 8;
    *(undefined1 *)(iVar19 + local_98 + 7) = 0;
LAB_017966f4:
    iVar17 = local_98 + -0x7f8;
    puVar22 = (ushort *)(iVar20 + 0x7fc + iVar17);
    do {
      puVar12 = puVar22 + -4;
      *(char *)((int)puVar22 + 3) = *(char *)(iVar19 + (uint)*puVar22 * 8 + 7) + '\x01';
      puVar22 = puVar12;
    } while ((ushort *)(iVar20 + 0x804) != puVar12);
LAB_01796738:
    iVar28 = iVar20;
    do {
      iVar11 = iVar28 + 8;
      ppuVar6 = (undefined **)(*(byte *)(iVar19 + (uint)*(ushort *)(iVar28 + 0xc) * 8 + 7) + 1);
      *(char *)(iVar28 + 0xf) = (char)ppuVar6;
      iVar28 = iVar11;
    } while (iVar19 + iVar17 != iVar11);
  }
  ppuVar5 = (undefined **)(uint)*(byte *)(iVar18 + 7);
  if (param_4 < ppuVar5) {
    iVar17 = iVar19 + local_98 + -0x7f8;
    ppuVar6 = (undefined **)(uint)*(byte *)(iVar17 + 7);
    uVar25 = uVar15;
    if (param_4 < ppuVar6) {
      iVar18 = 0;
      do {
        *(char *)(iVar17 + uVar15 * -8 + 7 + uVar25 * 8) = (char)param_4;
        uVar25 = uVar25 - 1;
        iVar18 = (iVar18 + (1 << ((int)ppuVar5 - (int)param_4 & 0xffU))) -
                 (1 << ((int)ppuVar5 - (int)ppuVar6 & 0xffU));
        ppuVar6 = (undefined **)(uint)*(byte *)(iVar20 + 0xf + uVar25 * 8);
      } while (param_4 < ppuVar6);
      iVar18 = iVar18 >> ((int)ppuVar5 - (int)param_4 & 0xffU);
    }
    else {
      iVar18 = 0;
    }
    if (param_4 == ppuVar6) {
      do {
        uVar25 = uVar25 - 1;
      } while (param_4 == (undefined **)(uint)*(byte *)(iVar20 + 0xf + uVar25 * 8));
    }
    FUN_016dd606(&local_64,0xf0,0x38);
    ppuVar6 = extraout_r1;
    if (-1 < (int)uVar25) {
      ppuVar5 = param_4;
      uVar16 = uVar25;
      do {
        ppuVar8 = (undefined **)(uint)*(byte *)(iVar20 + 0xf + uVar16 * 8);
        ppuVar6 = ppuVar8;
        if (ppuVar8 < ppuVar5) {
          ppuVar6 = &puStack_28 + ((int)param_4 - (int)ppuVar8);
          local_80[((int)param_4 - (int)ppuVar8) + 7] = uVar16;
          ppuVar5 = ppuVar8;
        }
        bVar29 = uVar16 != 0;
        uVar16 = uVar16 - 1;
      } while (bVar29);
    }
    while (0 < iVar18) {
      if (iVar18 == 1) {
        if (local_60 == 0xf0f0f0f0) {
          if (local_5c == 0xf0f0f0f0) goto LAB_017968ec;
LAB_01796d40:
          uVar16 = local_5c;
          uVar10 = 2;
        }
        else {
          uVar16 = local_60;
          uVar10 = 1;
        }
LAB_01796c7c:
        uVar13 = uVar10 - 1;
LAB_01796c80:
        ppuVar6 = (undefined **)(uVar13 * 4);
        iVar18 = iVar18 - (1 << (uVar13 & 0xff));
        iVar17 = (&local_64)[uVar13];
        iVar28 = iVar19 + uVar16 * 8;
        *(char *)(iVar28 + 7) = *(char *)(iVar28 + 7) + '\x01';
        if (iVar17 == -0xf0f0f10) goto LAB_01796984;
        iVar17 = uVar10 << 2;
        if (uVar16 != 0) goto LAB_01796cb8;
LAB_017969a0:
        *(undefined4 *)((int)local_80 + iVar17 + 0x1c) = 0xf0f0f0f0;
      }
      else {
        uVar10 = -LZCOUNT(iVar18) + 0x20;
        puVar14 = &local_64 + uVar10;
        uVar16 = local_80[-LZCOUNT(iVar18) + 0x27];
        do {
          puVar14 = puVar14 + -1;
          uVar9 = *puVar14;
          uVar13 = uVar10 - 1;
          if ((uVar16 != 0xf0f0f0f0) &&
             ((uVar9 == 0xf0f0f0f0 ||
              (*(uint *)(iVar19 + uVar16 * 8) <= (uint)(*(int *)(iVar19 + uVar9 * 8) * 2))))) {
            if (0xc < uVar10) goto LAB_01796c80;
            goto LAB_01796c7c;
          }
          uVar16 = uVar9;
          uVar10 = uVar13;
        } while (uVar13 != 1);
        uVar16 = local_60;
        if (local_60 != 0xf0f0f0f0) goto LAB_01796c7c;
        if (local_5c != 0xf0f0f0f0) goto LAB_01796d40;
LAB_017968ec:
        if (local_58 != 0xf0f0f0f0) {
          uVar16 = local_58;
          uVar10 = 3;
          goto LAB_01796c7c;
        }
        if (local_54 != 0xf0f0f0f0) {
          uVar16 = local_54;
          uVar10 = 4;
          goto LAB_01796c7c;
        }
        if (local_50 != 0xf0f0f0f0) {
          uVar16 = local_50;
          uVar10 = 5;
          goto LAB_01796c7c;
        }
        if (local_4c != 0xf0f0f0f0) {
          uVar16 = local_4c;
          uVar10 = 6;
          goto LAB_01796c7c;
        }
        if (local_48 != 0xf0f0f0f0) {
          uVar16 = local_48;
          uVar10 = 7;
          goto LAB_01796c7c;
        }
        if (local_44 != 0xf0f0f0f0) {
          uVar16 = local_44;
          uVar10 = 8;
          goto LAB_01796c7c;
        }
        if (local_40 != 0xf0f0f0f0) {
          uVar16 = local_40;
          uVar10 = 9;
          goto LAB_01796c7c;
        }
        if (local_3c != 0xf0f0f0f0) {
          uVar16 = local_3c;
          uVar10 = 10;
          goto LAB_01796c7c;
        }
        if (local_38 != 0xf0f0f0f0) {
          uVar16 = local_38;
          uVar10 = 0xb;
          goto LAB_01796c7c;
        }
        if (local_34 != 0xf0f0f0f0) {
          uVar16 = local_34;
          uVar10 = 0xc;
          goto LAB_01796c7c;
        }
        iVar18 = iVar18 + -0x1000;
        uVar10 = 0xd;
        ppuVar6 = (undefined **)&DAT_00000030;
        iVar17 = iVar19 + local_30 * 8;
        *(char *)(iVar17 + 7) = *(char *)(iVar17 + 7) + '\x01';
        uVar16 = local_30;
LAB_01796984:
        iVar17 = uVar10 * 4;
        *(uint *)((int)&local_64 + (int)ppuVar6) = uVar16;
        uVar16 = local_80[uVar10 + 7];
        ppuVar6 = (undefined **)((int)ppuVar6 + (int)(local_80 + 0x1f));
        if (uVar16 == 0) goto LAB_017969a0;
LAB_01796cb8:
        iVar28 = uVar16 - 1;
        ppuVar6 = (undefined **)(uint)*(byte *)(iVar19 + iVar28 * 8 + 7);
        if (ppuVar6 != (undefined **)((int)param_4 - uVar10)) {
          iVar28 = -0xf0f0f10;
        }
        *(int *)((int)local_80 + iVar17 + 0x1c) = iVar28;
      }
    }
    if (iVar18 != 0) {
      uVar16 = local_60;
      do {
        iVar18 = iVar18 + 1;
        if (uVar16 == 0xf0f0f0f0) {
          if (param_4 == (undefined **)(uint)*(byte *)(iVar19 + uVar25 * 8 + 7)) {
            do {
              uVar25 = uVar25 - 1;
            } while (param_4 == (undefined **)(uint)*(byte *)(iVar20 + 0xf + uVar25 * 8));
          }
          uVar16 = uVar25 + 1;
          ppuVar6 = (undefined **)(iVar19 + uVar16 * 8);
          *(char *)((int)ppuVar6 + 7) = *(char *)((int)ppuVar6 + 7) + -1;
        }
        else {
          uVar16 = uVar16 + 1;
          ppuVar6 = (undefined **)(iVar19 + uVar16 * 8);
          *(char *)((int)ppuVar6 + 7) = *(char *)((int)ppuVar6 + 7) + -1;
        }
      } while (iVar18 != 0);
    }
    ppuVar5 = param_4;
  }
  if (&DAT_0000000c < ppuVar5) {
    ppuVar5 = (undefined **)0xffffffff;
  }
  else {
    local_80[0] = 0;
    local_80[1] = 0;
    local_80[2] = 0;
    local_80[3] = 0;
    local_80[4] = 0;
    local_80[5] = 0;
    local_68 = 0;
    local_64 = 0;
    local_60 = 0;
    local_5c = 0;
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    local_4c = local_4c & 0xffff0000;
    if (-1 < (int)uVar15) {
      iVar17 = iVar20;
      do {
        pbVar2 = (byte *)(iVar17 + 0xf);
        iVar17 = iVar17 + 8;
        *(short *)((int)local_80 + (uint)*pbVar2 * 2) =
             *(short *)((int)local_80 + (uint)*pbVar2 * 2) + 1;
      } while (local_98 + -0x7f8 + iVar19 != iVar17);
    }
    if ((ppuVar5 != (undefined **)0x0) && ((undefined1 *)((int)ppuVar5 + -1) != (undefined1 *)0x0))
    {
      uVar3 = *(ushort *)((int)local_80 + (int)ppuVar5 * 2) >> 1;
      *(ushort *)((int)local_80 + (int)((int)ppuVar5 + 0xd) * 2) = uVar3;
      if ((undefined1 *)((int)ppuVar5 + -2) != (undefined1 *)0x0) {
        uVar25 = ((uint)uVar3 + (uint)*(ushort *)((int)local_80 + ((int)ppuVar5 + -1) * 2) & 0xffff)
                 >> 1;
        *(short *)((int)local_80 + (int)(ppuVar5 + 3) * 2) = (short)uVar25;
        if ((undefined1 *)((int)ppuVar5 + -3) != (undefined1 *)0x0) {
          ppuVar6 = ppuVar5 + -1;
          uVar25 = (uVar25 + *(ushort *)((int)local_80 + ((int)ppuVar5 + -2) * 2) & 0xffff) >> 1;
          *(short *)((int)local_80 + (int)((int)ppuVar5 + 0xb) * 2) = (short)uVar25;
          if (ppuVar6 != (undefined **)0x0) {
            uVar25 = (uVar25 + *(ushort *)((int)local_80 + ((int)ppuVar5 + -3) * 2) & 0xffff) >> 1;
            *(short *)((int)local_80 + (int)((int)ppuVar6 + 0xe) * 2) = (short)uVar25;
            if ((undefined1 *)((int)ppuVar5 + -5) != (undefined1 *)0x0) {
              uVar25 = (uVar25 + *(ushort *)((int)local_80 + (int)ppuVar6 * 2) & 0xffff) >> 1;
              *(short *)((int)local_80 + (int)((int)ppuVar5 + 9) * 2) = (short)uVar25;
              if ((undefined1 *)((int)ppuVar5 + -6) != (undefined1 *)0x0) {
                uVar25 = (uVar25 + *(ushort *)((int)local_80 + ((int)ppuVar5 + -5) * 2) & 0xffff) >>
                         1;
                *(short *)((int)local_80 + (int)(ppuVar5 + 2) * 2) = (short)uVar25;
                if ((undefined1 *)((int)ppuVar5 + -7) != (undefined1 *)0x0) {
                  ppuVar6 = ppuVar5 + -2;
                  uVar25 = (uVar25 + *(ushort *)((int)local_80 + ((int)ppuVar5 + -6) * 2) & 0xffff)
                           >> 1;
                  *(short *)((int)local_80 + (int)((int)ppuVar5 + 7) * 2) = (short)uVar25;
                  if (ppuVar6 != (undefined **)0x0) {
                    uVar25 = (uVar25 + *(ushort *)((int)local_80 + ((int)ppuVar5 + -7) * 2) & 0xffff
                             ) >> 1;
                    *(short *)((int)local_80 + (int)((int)ppuVar6 + 0xe) * 2) = (short)uVar25;
                    if ((undefined1 *)((int)ppuVar5 + -9) != (undefined1 *)0x0) {
                      uVar25 = (uVar25 + *(ushort *)((int)local_80 + (int)ppuVar6 * 2) & 0xffff) >>
                               1;
                      *(short *)((int)local_80 + (int)((int)ppuVar5 + 5) * 2) = (short)uVar25;
                      if ((undefined1 *)((int)ppuVar5 + -10) != (undefined1 *)0x0) {
                        uVar25 = (uVar25 + *(ushort *)((int)local_80 + ((int)ppuVar5 + -9) * 2) &
                                 0xffff) >> 1;
                        *(short *)((int)local_80 + (int)(ppuVar5 + 1) * 2) = (short)uVar25;
                        if (ppuVar5 != (undefined **)&DAT_0000000b) {
                          local_64 = CONCAT22((short)((uVar25 + *(ushort *)
                                                                 ((int)local_80 +
                                                                 ((int)ppuVar5 + -10) * 2) & 0xffff)
                                                     >> 1),(undefined2)local_64);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    iVar19 = iVar20;
    do {
      iVar17 = iVar19 + 8;
      param_1[*(byte *)(iVar19 + 0xe) + 1] = (uint)*(byte *)(iVar19 + 0xf);
      iVar19 = iVar17;
    } while (iVar20 + iVar21 + 8 != iVar17);
    puVar14 = param_1;
    do {
      puVar14 = puVar14 + 1;
      ppuVar6 = (undefined **)*puVar14;
      uVar15 = (uint)ppuVar6 & 0xff;
      uVar25 = 0;
      if (uVar15 != 0) {
        uVar25 = 0x20 - uVar15;
      }
      uVar3 = *(ushort *)((int)local_80 + (uVar15 + 0xe) * 2);
      *(ushort *)((int)local_80 + (uVar15 + 0xe) * 2) = uVar3 + 1;
      if (uVar15 != 0) {
        ppuVar6 = (undefined **)((uint)ppuVar6 | (uint)uVar3 << (uVar25 & 0xff));
        *puVar14 = (uint)ppuVar6;
      }
    } while (param_1 + param_3 + 1 != puVar14);
    local_84 = (uint)CONCAT11((char)param_3,(char)ppuVar5);
    *param_1 = local_84;
  }
LAB_01796630:
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(ppuVar5,ppuVar6,local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

