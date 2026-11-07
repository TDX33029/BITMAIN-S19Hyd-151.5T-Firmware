// FUN_016362a8 @ 016362a8 size=3848 calls_out=23 calls_in=0
// strings: 

void FUN_016362a8(undefined4 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int *piVar9;
  uint **ppuVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  uint *puVar15;
  code *pcVar16;
  undefined4 extraout_r1;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  undefined4 *puVar21;
  undefined1 *puVar22;
  uint uVar23;
  uint uVar24;
  undefined4 uVar25;
  uint uVar26;
  undefined1 *puVar27;
  uint uVar28;
  uint *puVar29;
  char *pcVar30;
  uint uVar31;
  uint *puVar32;
  int iVar33;
  uint uVar34;
  undefined4 *puVar35;
  int iVar36;
  uint *puVar37;
  undefined1 *puVar38;
  uint *puVar39;
  uint *puVar40;
  uint uVar41;
  bool bVar42;
  int local_2e0;
  char local_2b0;
  int local_2ac;
  uint *local_29c;
  uint *local_298;
  uint *local_294;
  int local_290;
  int local_28c;
  int local_288;
  int iStack_284;
  int local_280;
  int iStack_27c;
  int iStack_278;
  int local_274;
  int iStack_270;
  int iStack_26c;
  undefined1 auStack_268 [136];
  undefined4 local_1e0;
  code *local_1dc;
  int local_1d8;
  int local_1d4;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  code *local_140;
  undefined1 auStack_13c [128];
  undefined4 local_bc;
  uint *local_b0;
  uint *local_ac;
  uint *local_a8;
  undefined4 local_a4;
  
  param_1 = (undefined4 *)*param_1;
  pcVar30 = (char *)*param_1;
  iVar36 = param_1[3];
  *param_1 = 0;
  if (pcVar30 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac42c);
  }
  puVar29 = *(uint **)param_1[1];
  iVar19 = *(int *)param_1[2];
  local_29c = puVar29;
  if ((puVar29 < &DAT_00000014) && ((1 << ((uint)puVar29 & 0xff) & 0x80b10U) != 0)) {
    local_1e0 = &local_29c;
    local_1dc = FUN_00fac2b8;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_0057597d,&local_1e0,&DAT_018ac3e0);
  }
  DataMemoryBarrier(0xb);
  if (DAT_018d8ab8 != 0) {
    local_b0 = (uint *)CONCAT31(local_b0._1_3_,1);
    local_1e0 = &local_b0;
    FUN_015eedc4(&DAT_018d8ab8,0,&local_1e0,&DAT_018a9fe0,&DAT_018a9fd0);
  }
  if ((DAT_018dd9f0 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018a9fc0);
  }
  piVar9 = (int *)thunk_FUN_016d4a50(0x10);
  if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  piVar9[1] = 1;
  piVar9[2] = iVar19;
  piVar9[3] = (int)puVar29;
  *piVar9 = 1;
  do {
    if (DAT_018dd9fc != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(&DAT_018dd9fc);
      goto LAB_01636368;
    }
    bVar42 = (bool)hasExclusiveAccess(0x18dd9fc);
  } while (!bVar42);
  DAT_018dd9fc = 1;
  DataMemoryBarrier(0xb);
LAB_01636368:
  uVar26 = 0;
  if ((DAT_018dd988 & 0x7fffffff) != 0) {
    uVar26 = FUN_015bf3f8();
    uVar26 = uVar26 ^ 1;
  }
  piVar13 = DAT_018dda04;
  DataMemoryBarrier(0xb);
  puVar37 = (uint *)DAT_018dda04[1];
  iVar19 = DAT_018dda04[4];
  iVar14 = DAT_018dda04[5];
  iVar17 = DAT_018dda04[6];
  iVar18 = DAT_018dda04[7];
  if (puVar37 == (uint *)0x0) {
    local_1dc = (code *)0x0;
    local_1d8 = 0;
    local_1d4 = 0;
    local_1e0 = (uint **)&DAT_005674cc;
  }
  else {
    puVar22 = (undefined1 *)((int)puVar37 + 1);
    uVar31 = (uint)(ZEXT48(puVar22) * 0xa0);
    if ((int)(ZEXT48(puVar22) * 0xa0 >> 0x20) != 0) {
LAB_01636444:
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
    }
    puVar27 = (undefined1 *)((int)puVar37 + 5);
    puVar38 = puVar27 + uVar31;
    if ((CARRY4(uVar31,(uint)puVar27)) || ((undefined1 *)0x7ffffffc < puVar38)) goto LAB_01636444;
    if (puVar38 == (undefined1 *)0x0) {
      ppuVar10 = (uint **)&DAT_00000004;
    }
    else {
      if (puVar38 < (undefined1 *)0x4) {
        local_1e0 = (uint **)0x0;
        iVar11 = FUN_016d51b0(&local_1e0,4,puVar38);
        if (iVar11 != 0) goto LAB_016371b4;
        ppuVar10 = local_1e0;
      }
      else {
        ppuVar10 = (uint **)thunk_FUN_016d4a50(puVar38);
      }
      if (ppuVar10 == (uint **)0x0) {
LAB_016371b4:
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,puVar38);
      }
    }
    puVar32 = (uint *)((int)ppuVar10 + uVar31);
    local_a4 = 0;
    puVar15 = (uint *)*piVar13;
    local_a8 = puVar37;
    if (&DAT_00000007 < puVar37) {
      local_a8 = (uint *)(((uint)puVar22 & 0xfffffff8) - ((uint)puVar22 >> 3));
    }
    local_b0 = puVar32;
    local_ac = puVar37;
    FUN_016dd1aa(puVar32,puVar15,puVar27);
    iVar11 = piVar13[3];
    if (iVar11 != 0) {
      puVar40 = puVar15 + 1;
      uVar31 = ~*puVar15 & 0x80808080;
      puVar37 = puVar15;
      iVar33 = iVar11;
      do {
        puVar39 = puVar40;
        if (uVar31 == 0) {
          do {
            puVar40 = puVar39 + 1;
            uVar31 = *puVar39;
            puVar37 = puVar37 + -0xa0;
            puVar39 = puVar40;
          } while ((uVar31 & 0x80808080) == 0x80808080);
          uVar31 = uVar31 & 0x80808080 ^ 0x80808080;
        }
        puVar39 = puVar37 + ((uint)LZCOUNT(uVar31 << 0x18 | (uVar31 >> 8 & 0xff) << 0x10 |
                                           (uVar31 >> 0x10 & 0xff) << 8 | uVar31 >> 0x18) >> 3) *
                            -0x28;
        local_1e0 = (uint **)puVar39[-0x28];
        if (puVar39[-1] == 0) {
          local_144 = 0;
          local_14c = 0;
        }
        else {
          if (puVar39[-3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_018ac52c);
          }
          FUN_01638b7c(&local_14c,puVar39[-3],puVar39[-2]);
        }
        FUN_016dd1aa((uint)&local_1e0 | 4,puVar39 + -0x27,0x90);
        FUN_016dd1aa(puVar32 + ((int)puVar15 - (int)puVar39 >> 5) * -8 + -0x28,&local_1e0,0xa0);
        uVar31 = uVar31 - 1 & uVar31;
        iVar33 = iVar33 + -1;
      } while (iVar33 != 0);
    }
    local_1e0 = (uint **)local_b0;
    local_1d8 = piVar13[2];
    local_1dc = (code *)local_ac;
    local_1d4 = iVar11;
  }
  local_294 = (uint *)local_1dc;
  uVar34 = piVar13[8];
  local_298 = (uint *)local_1e0;
  iStack_278 = uVar34 + 1;
  local_28c = local_1d4;
  local_290 = local_1d8;
  uVar20 = piVar13[9];
  uVar28 = piVar13[10];
  iVar11 = piVar13[0xb];
  bVar42 = CARRY4(uVar20,(uint)(0xfffffffe < uVar34));
  local_274 = uVar20 + (0xfffffffe < uVar34);
  iStack_270 = uVar28 + bVar42;
  iStack_26c = iVar11 + (uint)CARRY4(uVar28,(uint)bVar42);
  puVar37 = puVar29;
  local_288 = iVar19;
  iStack_284 = iVar14;
  local_280 = iVar17;
  iStack_27c = iVar18;
  uVar12 = FUN_0163cf6c();
  local_2e0 = 0;
  uVar31 = uVar12;
  while( true ) {
    uVar31 = (uint)local_294 & uVar31;
    uVar41 = *(uint *)((int)local_298 + uVar31);
    uVar23 = uVar41 ^ (uVar12 >> 0x19) * 0x1010101;
    uVar23 = ~uVar23 & 0x80808080 & uVar23 + 0xfefefeff;
    puVar15 = (uint *)0xfefefeff;
    while (uVar23 != 0) {
      uVar24 = uVar23 >> 8;
      uVar2 = uVar23 >> 0x10;
      uVar3 = uVar23 >> 0x18;
      uVar4 = uVar23 << 0x18;
      uVar23 = uVar23 - 1 & uVar23;
      uVar24 = uVar31 + ((uint)LZCOUNT(uVar4 | (uVar24 & 0xff) << 0x10 | (uVar2 & 0xff) << 8 | uVar3
                                      ) >> 3) & (uint)local_294;
      puVar15 = puVar29;
      if ((uint *)local_298[uVar24 * -0x28 + -0x28] == puVar29) {
        piVar9 = (int *)FUN_01637414(local_298 + uVar24 * -0x28 + -3,local_298,uVar34,uVar20,uVar28,
                                     iVar11,piVar9);
        if (piVar9 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar36 = *piVar9;
            bVar42 = (bool)hasExclusiveAccess(piVar9);
          } while (!bVar42);
          *piVar9 = iVar36 + -1;
          if (iVar36 == 1) {
            DataMemoryBarrier(0xb);
            FUN_0089ddfc();
          }
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_004130cc,0x49,&DAT_018ac408);
        }
        piVar9 = (int *)thunk_FUN_016d4a50(0x30);
        if (piVar9 != (int *)0x0) goto LAB_01636784;
        goto LAB_01636f98;
      }
    }
    if ((uVar41 & 0x80808080 & uVar41 << 1) != 0) break;
    local_2e0 = local_2e0 + 4;
    uVar31 = uVar31 + local_2e0;
  }
  if (local_290 == 0) {
    FUN_01643740(&local_298,&local_288,puVar15,uVar41 & 0x80808080,puVar37);
  }
  do {
    if (DAT_018dda14 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(&DAT_018dda14);
      goto LAB_01636a58;
    }
    bVar42 = (bool)hasExclusiveAccess(0x18dda14);
  } while (!bVar42);
  DAT_018dda14 = 1;
  DataMemoryBarrier(0xb);
LAB_01636a58:
  uVar31 = 0;
  if ((DAT_018dd988 & 0x7fffffff) != 0) {
    uVar31 = FUN_015bf3f8();
    uVar31 = uVar31 ^ 1;
  }
  DataMemoryBarrier(0xb);
  FUN_016dd606(&local_1e0,0,0x8c);
  iVar19 = FUN_016da630(puVar29,0,&local_1e0);
  puVar37 = (uint *)local_1e0;
  if (iVar19 == 0) {
    FUN_016dd1aa(&local_b0,(uint)&local_1e0 | 4,0x88);
    FUN_016dd1aa(&local_140,&local_b0,0x88);
    puVar21 = (undefined4 *)thunk_FUN_016d4a50(0x94);
    if (puVar21 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x94);
    }
    *puVar21 = 1;
    puVar21[1] = puVar29;
    puVar21[2] = puVar37;
    FUN_016dd1aa(puVar21 + 3,&local_140,0x88);
    puVar35 = DAT_018dda1c;
    DataMemoryBarrier(0xb);
    do {
      bVar42 = (bool)hasExclusiveAccess(0x18dda1c);
    } while (!bVar42);
    DataMemoryBarrier(0xb);
    DataMemoryBarrier(0xb);
    DataMemoryBarrier(0xb);
    bVar42 = DAT_018dda0c == 0;
    bVar8 = DAT_018dda10 == 0;
    do {
      iVar19 = DAT_018dda20 + 1;
      bVar6 = (bool)hasExclusiveAccess(0x18dda20);
    } while (!bVar6);
    DataMemoryBarrier(0xb);
    DAT_018dda1c = puVar21;
    DAT_018dda20 = iVar19;
    if (DAT_018dda0c != 0 || DAT_018dda10 != 0) {
      uVar23 = 1;
      do {
        if ((uVar23 & 0xf) == 0) {
          FUN_016da3a8();
        }
        else {
          HintYield();
        }
        if (!bVar42) {
          DataMemoryBarrier(0xb);
        }
        bVar6 = bVar42;
        bVar42 = bVar6 || DAT_018dda0c == 0;
        if (!bVar8) {
          DataMemoryBarrier(0xb);
        }
        bVar7 = bVar8;
        bVar8 = bVar7 || DAT_018dda10 == 0;
        uVar23 = uVar23 + 1;
      } while (!bVar6 && DAT_018dda0c != 0 || !bVar7 && DAT_018dda10 != 0);
    }
    thunk_FUN_016d3fb4(puVar35);
    if (((uVar31 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar19 = FUN_015bf3f8(), iVar19 == 0)) {
      DAT_018dda18._0_1_ = 1;
    }
    iVar19 = DAT_018dda14;
    DataMemoryBarrier(0xb);
    do {
      bVar42 = (bool)hasExclusiveAccess(0x18dda14);
    } while (!bVar42);
    DAT_018dda14 = 0;
    if (iVar19 == 2) {
      FUN_016d6968(0xf0,&DAT_018dda14,0x81,1);
    }
    FUN_016dd606(auStack_13c,0,0x88);
    local_bc = 0x10000004;
    local_140 = FUN_0159ccd8;
    FUN_016dd606(&local_b0,0,0x8c);
    iVar19 = FUN_016da630(puVar29,&local_140,&local_b0);
    puVar37 = local_b0;
    if (iVar19 == 0) {
      FUN_016dd1aa(auStack_268,(uint)&local_b0 | 4,0x88);
      FUN_016dd1aa(&local_1d8,auStack_268,0x88);
      local_148 = 0;
      local_150 = 0;
      local_1dc = (code *)puVar37;
      local_1e0 = (uint **)puVar29;
      piVar9 = (int *)FUN_01637414(&local_150,extraout_r1,uVar34,uVar20,uVar28,iVar11,piVar9);
      if (piVar9 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar19 = *piVar9;
          bVar42 = (bool)hasExclusiveAccess(piVar9);
        } while (!bVar42);
        *piVar9 = iVar19 + -1;
        if (iVar19 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0089ddfc();
        }
      }
      uVar31 = (uint)local_294 & uVar12;
      uVar20 = *(uint *)((int)local_298 + uVar31) & 0x80808080;
      if (uVar20 == 0) {
        iVar19 = 4;
        do {
          uVar31 = uVar31 + iVar19;
          iVar19 = iVar19 + 4;
          uVar31 = uVar31 & (uint)local_294;
          uVar20 = *(uint *)((int)local_298 + uVar31) & 0x80808080;
        } while (uVar20 == 0);
      }
      uVar31 = uVar31 + ((uint)LZCOUNT(uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 |
                                       (uVar20 >> 0x10 & 0xff) << 8 | uVar20 >> 0x18) >> 3) &
               (uint)local_294;
      uVar20 = (uint)*(char *)((int)local_298 + uVar31);
      if (-1 < (int)uVar20) {
        uVar31 = *local_298 & 0x80808080;
        uVar31 = LZCOUNT((*local_298 & 0x80) << 0x18 | (uVar31 >> 8 & 0xff) << 0x10 |
                         (uVar31 >> 0x10 & 0xff) << 8 | uVar31 >> 0x18);
        uVar20 = (uint)*(byte *)((int)local_298 + (uVar31 >> 3));
        uVar31 = uVar31 >> 3;
      }
      bVar5 = (byte)(uVar12 >> 0x19);
      *(byte *)((int)local_298 + uVar31) = bVar5;
      *(byte *)((int)local_298 + (uVar31 - 4 & (uint)local_294) + 4) = bVar5;
      local_298[uVar31 * -0x28 + -0x28] = (uint)puVar29;
      local_290 = local_290 - (uVar20 & 1);
      FUN_016dd1aa(local_298 + uVar31 * -0x28 + -0x27,&local_1e0,0x9c);
      local_28c = local_28c + 1;
      piVar9 = (int *)thunk_FUN_016d4a50(0x30);
      if (piVar9 == (int *)0x0) {
LAB_01636f98:
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x30);
      }
LAB_01636784:
      *piVar9 = (int)local_298;
      piVar9[1] = (int)local_294;
      piVar9[2] = local_290;
      piVar9[3] = local_28c;
      piVar9[4] = local_288;
      piVar9[5] = iStack_284;
      piVar9[6] = local_280;
      piVar9[7] = iStack_27c;
      piVar9[8] = iStack_278;
      piVar9[9] = local_274;
      piVar9[10] = iStack_270;
      piVar9[0xb] = iStack_26c;
      piVar13 = DAT_018dda04;
      DataMemoryBarrier(0xb);
      do {
        bVar42 = (bool)hasExclusiveAccess(0x18dda04);
      } while (!bVar42);
      DataMemoryBarrier(0xb);
      DataMemoryBarrier(0xb);
      DataMemoryBarrier(0xb);
      bVar42 = DAT_018dd9f4 == 0;
      bVar8 = DAT_018dd9f8 == 0;
      do {
        iVar19 = DAT_018dda08 + 1;
        bVar6 = (bool)hasExclusiveAccess(0x18dda08);
      } while (!bVar6);
      DataMemoryBarrier(0xb);
      DAT_018dda04 = piVar9;
      DAT_018dda08 = iVar19;
      if (DAT_018dd9f4 != 0 || DAT_018dd9f8 != 0) {
        uVar31 = 1;
        do {
          if ((uVar31 & 0xf) == 0) {
            FUN_016da3a8();
          }
          else {
            HintYield();
          }
          if (!bVar42) {
            DataMemoryBarrier(0xb);
          }
          bVar6 = bVar42;
          bVar42 = bVar6 || DAT_018dd9f4 == 0;
          if (!bVar8) {
            DataMemoryBarrier(0xb);
          }
          bVar7 = bVar8;
          bVar8 = bVar7 || DAT_018dd9f8 == 0;
          uVar31 = uVar31 + 1;
        } while (!bVar6 && DAT_018dd9f4 != 0 || !bVar7 && DAT_018dd9f8 != 0);
      }
      iVar19 = piVar13[1];
      if (iVar19 != 0) {
        iVar14 = piVar13[3];
        if (iVar14 != 0) {
          puVar29 = (uint *)*piVar13;
          puVar37 = puVar29 + 1;
          uVar31 = ~*puVar29 & 0x80808080;
          do {
            puVar15 = puVar37;
            if (uVar31 == 0) {
              do {
                puVar37 = puVar15 + 1;
                uVar31 = *puVar15;
                puVar29 = puVar29 + -0xa0;
                puVar15 = puVar37;
              } while ((uVar31 & 0x80808080) == 0x80808080);
              uVar31 = uVar31 & 0x80808080 ^ 0x80808080;
            }
            FUN_01638078(puVar29 + ((uint)LZCOUNT(uVar31 << 0x18 | (uVar31 >> 8 & 0xff) << 0x10 |
                                                  (uVar31 >> 0x10 & 0xff) << 8 | uVar31 >> 0x18) >>
                                   3) * -0x28 + -3);
            iVar14 = iVar14 + -1;
            uVar31 = uVar31 - 1 & uVar31;
          } while (iVar14 != 0);
        }
        if (iVar19 * 0xa1 != -0xa5) {
          thunk_FUN_016d3fb4(*piVar13 + iVar19 * -0xa0 + -0xa0);
        }
      }
      thunk_FUN_016d3fb4(piVar13);
      if (((uVar26 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar19 = FUN_015bf3f8(), iVar19 == 0)) {
        DAT_018dda00._0_1_ = 1;
      }
      iVar19 = DAT_018dd9fc;
      DataMemoryBarrier(0xb);
      do {
        bVar42 = (bool)hasExclusiveAccess(0x18dd9fc);
      } while (!bVar42);
      DAT_018dd9fc = 0;
      if (iVar19 == 2) {
        FUN_016d6968(0xf0,&DAT_018dd9fc,0x81,1);
      }
      local_2b0 = '\x04';
      cVar1 = *pcVar30;
      goto joined_r0x01636918;
    }
    piVar13 = (int *)FUN_016d2bc8();
    local_2ac = *piVar13;
  }
  else {
    piVar13 = (int *)FUN_016d2bc8();
    local_2ac = *piVar13;
    if (((uVar31 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar19 = FUN_015bf3f8(), iVar19 == 0)) {
      DAT_018dda18._0_1_ = 1;
    }
    iVar19 = DAT_018dda14;
    DataMemoryBarrier(0xb);
    do {
      bVar42 = (bool)hasExclusiveAccess(0x18dda14);
    } while (!bVar42);
    DAT_018dda14 = 0;
    if (iVar19 == 2) {
      FUN_016d6968(0xf0,&DAT_018dda14,0x81,1);
    }
  }
  puVar29 = local_294;
  if (local_294 != (uint *)0x0) {
    if (local_28c != 0) {
      puVar15 = local_298 + 1;
      uVar31 = ~*local_298 & 0x80808080;
      puVar37 = local_298;
      iVar19 = local_28c;
      do {
        puVar32 = puVar15;
        if (uVar31 == 0) {
          do {
            puVar15 = puVar32 + 1;
            uVar31 = *puVar32;
            puVar37 = puVar37 + -0xa0;
            puVar32 = puVar15;
          } while ((uVar31 & 0x80808080) == 0x80808080);
          uVar31 = uVar31 & 0x80808080 ^ 0x80808080;
        }
        FUN_01638078(puVar37 + ((uint)LZCOUNT(uVar31 << 0x18 | (uVar31 >> 8 & 0xff) << 0x10 |
                                              (uVar31 >> 0x10 & 0xff) << 8 | uVar31 >> 0x18) >> 3) *
                               -0x28 + -3);
        iVar19 = iVar19 + -1;
        uVar31 = uVar31 - 1 & uVar31;
      } while (iVar19 != 0);
    }
    if ((int)puVar29 * 0xa1 != -0xa5) {
      thunk_FUN_016d3fb4(local_298 + (int)puVar29 * -0x28 + -0x28);
    }
  }
  if (((uVar26 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
     (iVar19 = FUN_015bf3f8(), iVar19 == 0)) {
    DAT_018dda00._0_1_ = 1;
  }
  iVar19 = DAT_018dd9fc;
  DataMemoryBarrier(0xb);
  do {
    bVar42 = (bool)hasExclusiveAccess(0x18dd9fc);
  } while (!bVar42);
  DAT_018dd9fc = 0;
  if (iVar19 == 2) {
    FUN_016d6968(0xf0,&DAT_018dd9fc,0x81,1);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar19 = *piVar9;
    bVar42 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar42);
  *piVar9 = iVar19 + -1;
  if (iVar19 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(piVar9);
  }
  local_2b0 = '\0';
  local_1e0 = (uint **)(local_2ac << 0x18);
  local_1dc._0_3_ = (undefined3)((uint)local_2ac >> 8);
  cVar1 = *pcVar30;
joined_r0x01636918:
  if ((cVar1 != '\x04') && (cVar1 == '\x03')) {
    puVar21 = *(undefined4 **)(pcVar30 + 4);
    uVar25 = *puVar21;
    puVar35 = (undefined4 *)puVar21[1];
    pcVar16 = (code *)*puVar35;
    if (pcVar16 != (code *)0x0) {
      (*pcVar16)(uVar25);
    }
    if (puVar35[1] != 0) {
      thunk_FUN_016d3fb4(uVar25);
    }
    thunk_FUN_016d3fb4(puVar21);
  }
  bVar42 = local_2b0 == '\x04';
  iVar19 = CONCAT31(local_1dc._0_3_,local_1e0._3_1_);
  *(uint ***)(pcVar30 + 1) = local_1e0;
  if (bVar42) {
    local_1e0 = (uint **)&DAT_00000001;
  }
  *(int *)(pcVar30 + 4) = iVar19;
  if (bVar42) {
    iVar19 = iVar36;
  }
  *pcVar30 = local_2b0;
  if (bVar42) {
    *(char *)(iVar19 + 0xc) = (char)local_1e0;
  }
  return;
}

