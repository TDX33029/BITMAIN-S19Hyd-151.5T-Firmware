// FUN_009f9320 @ 009f9320 size=2960 calls_out=22 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_009f9320(int *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  int *piVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint **ppuVar10;
  char cVar11;
  bool bVar12;
  char cVar13;
  byte bVar14;
  undefined4 uVar15;
  uint **ppuVar16;
  byte *pbVar17;
  undefined4 *puVar18;
  uint uVar19;
  uint uVar20;
  byte *pbVar21;
  uint uVar22;
  uint **ppuVar23;
  uint *puVar24;
  uint **ppuVar25;
  uint uVar26;
  int iVar27;
  uint **ppuVar28;
  uint *puVar29;
  uint uVar30;
  int *piVar31;
  int iVar32;
  undefined4 unaff_r10;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  undefined8 uVar36;
  uint **local_e8;
  uint **local_e4;
  uint *local_dc;
  uint **local_d4;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  int *local_a0;
  undefined1 local_9c;
  uint *local_98;
  int *local_94;
  undefined1 *local_90;
  int local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  undefined4 local_7c;
  int *piStack_78;
  undefined4 uStack_74;
  undefined1 *local_70;
  uint local_6c;
  uint **local_68;
  uint local_64;
  uint uStack_60;
  uint uStack_5c;
  int *local_58;
  undefined4 uStack_54;
  uint **local_50;
  uint **local_4c;
  uint **local_48;
  undefined4 local_44;
  uint local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  puVar29 = *(uint **)(param_2 + 4);
  piVar31 = *(int **)(param_2 + 8);
  cVar11 = '\0';
  if (piVar31 != (int *)0x0) {
    cVar11 = (char)*puVar29;
  }
  iVar27 = 0;
  if (piVar31 != (int *)0x0) {
    cVar11 = cVar11 == '/';
  }
  local_90 = (undefined1 *)CONCAT31(local_90._1_3_,6);
  local_7c = CONCAT22(CONCAT11(local_7c._3_1_,cVar11),0x201);
  local_98 = puVar29;
  local_94 = piVar31;
  FUN_015c7164(&local_70,&local_98);
  if (((uint)local_70 & 0xff) - 7 < 3) {
    uVar36 = FUN_015c7664(&local_98);
    unaff_r10 = (undefined4)((ulonglong)uVar36 >> 0x20);
    iVar27 = (int)uVar36;
  }
  if (piVar31 == (int *)0x0) {
    bVar12 = false;
  }
  else {
    bVar12 = (char)*puVar29 == '/';
  }
  local_90 = (undefined1 *)CONCAT31(local_90._1_3_,6);
  local_7c = CONCAT22(CONCAT11(local_7c._3_1_,bVar12),0x201);
  local_98 = puVar29;
  local_94 = piVar31;
  FUN_015c7164(&local_70,&local_98);
  if ((iVar27 == 0) || ((char)local_70 != '\t')) {
    *(undefined1 *)param_1 = 4;
    return;
  }
  bVar1 = *(byte *)(param_2 + 0xc);
  cVar11 = *(char *)(param_2 + 0xd);
  FUN_006008c8(&local_98,local_6c,local_68);
  local_4c = (uint **)&LAB_016cf57c;
  local_50 = &local_98;
  FUN_00600d2c(&local_70,&DAT_00584e10,&local_50);
  if (((uint)local_98 & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(local_94);
  }
  ppuVar10 = local_68;
  uVar9 = local_6c;
  puVar8 = local_70;
  local_a4 = 0;
  local_a8 = 4;
  local_ac = 0;
  FUN_015f5c04(&local_98,iVar27,unaff_r10);
  if (local_98 != (uint *)0x0) {
    *param_1 = (int)local_94;
    *(short *)((int)param_1 + 5) = (short)((uint)local_90 >> 8);
    *(undefined1 *)(param_1 + 1) = local_90._0_1_;
    *(char *)((int)param_1 + 7) = (char)((uint)local_90 >> 0x18);
    uVar34 = 4;
    uVar26 = 0;
LAB_009f94d0:
    piVar31 = (int *)(uVar34 + 0x10);
    for (; uVar26 != 0; uVar26 = uVar26 - 1) {
      if (piVar31[-4] != 0) {
        thunk_FUN_016d3fb4(piVar31[-3]);
      }
      if (*piVar31 != 0) {
        thunk_FUN_016d3fb4(piVar31[1]);
      }
      piVar31 = piVar31 + 7;
    }
    goto LAB_009f9ddc;
  }
  local_a0 = local_94;
  local_dc = &local_40;
  piVar31 = (int *)((uint)&local_70 | 4);
  local_9c = local_90._0_1_;
  while( true ) {
    FUN_016056c8(&local_98,&local_a0);
    piVar7 = piStack_78;
    puVar6 = local_90;
    if (((uint)local_98 & 1) == 0) break;
    if (local_90 == (undefined1 *)0x0) {
      *param_1 = local_8c;
      param_1[1] = local_88;
      DataMemoryBarrier(0xb);
      do {
        iVar27 = *local_a0;
        bVar12 = (bool)hasExclusiveAccess(local_a0);
      } while (!bVar12);
      *local_a0 = iVar27 + -1;
      if (iVar27 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015f4880(local_a0);
      }
      uVar34 = local_a8;
      uVar26 = local_a4;
      goto LAB_009f94d0;
    }
    iVar32 = local_8c + -1;
    local_64 = local_84;
    uStack_60 = local_80;
    uStack_5c = local_7c;
    local_58 = piStack_78;
    uStack_54 = uStack_74;
    local_70 = local_90;
    *piVar31 = local_8c;
    piVar31[1] = local_88;
    FUN_015ed628(&local_50,piStack_78[3],piStack_78[4],local_90,iVar32);
    ppuVar23 = local_4c;
    iVar27 = FUN_015c7ac8(local_4c,local_48);
    if (iVar27 == 0) {
      if (local_50 != (uint **)0x0) {
        thunk_FUN_016d3fb4(ppuVar23);
      }
LAB_009f96f8:
      DataMemoryBarrier(0xb);
      do {
        iVar27 = *piVar7;
        bVar12 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar12);
      *piVar7 = iVar27 + -1;
      if (iVar27 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015f4880(local_58);
      }
    }
    else {
      if (local_50 != (uint **)0x0) {
        thunk_FUN_016d3fb4(ppuVar23);
      }
      if (iVar32 == 0) {
        iVar27 = 1;
      }
      else {
        iVar27 = thunk_FUN_016d4a50(iVar32);
        if (iVar27 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar32);
        }
      }
      FUN_016dd1aa(iVar27,puVar6,iVar32);
      FUN_006008c8(&local_50,iVar27,iVar32);
      ppuVar28 = local_48;
      ppuVar23 = local_4c;
      ppuVar25 = local_50;
      ppuVar16 = local_4c;
      if (local_50 == (uint **)&DAT_80000000) {
        uVar15 = 0;
        if ((int)local_48 < 0) {
LAB_009f9e14:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar15,local_d4);
        }
        if (local_48 == (uint **)0x0) {
          ppuVar16 = (uint **)&DAT_00000001;
          ppuVar25 = (uint **)0x0;
        }
        else {
          ppuVar16 = (uint **)thunk_FUN_016d4a50(local_48);
          if (ppuVar16 == (uint **)0x0) {
            uVar15 = 1;
            local_d4 = ppuVar28;
            goto LAB_009f9e14;
          }
          ppuVar25 = ppuVar28;
        }
        FUN_016dd1aa(ppuVar16,ppuVar23,ppuVar28);
        local_d4 = ppuVar16;
      }
      if (iVar32 != 0) {
        thunk_FUN_016d3fb4(iVar27);
      }
      if ((ppuVar28 < ppuVar10) ||
         (iVar27 = thunk_FUN_016dd50a(uVar9,ppuVar16,ppuVar10), iVar27 != 0)) {
LAB_009f96e4:
        if (ppuVar25 != (uint **)0x0) {
          thunk_FUN_016d3fb4(ppuVar16);
        }
        goto LAB_009f96f8;
      }
      ppuVar23 = (uint **)((int)ppuVar28 - (int)ppuVar10);
      pbVar21 = (byte *)((int)ppuVar16 + (int)ppuVar10);
      if (&SUB_00000002 < ppuVar23) {
        iVar27 = thunk_FUN_016dd50a(&DAT_00378071,(undefined1 *)((int)ppuVar16 + (int)ppuVar28) + -3
                                    ,3);
        if (iVar27 == 0) {
          ppuVar23 = (uint **)((int)ppuVar23 + -3);
          cVar13 = '\0';
          goto joined_r0x009f97f0;
        }
        if (ppuVar23 != (uint **)0x3) {
          iVar27 = thunk_FUN_016dd50a(&DAT_005687a0,
                                      (undefined1 *)((int)ppuVar16 + (int)ppuVar28) + -4,4);
          cVar13 = '\x02';
          if (iVar27 == 0) {
            ppuVar23 = ppuVar23 + -1;
            cVar13 = '\x01';
          }
          goto joined_r0x009f97f0;
        }
        cVar13 = '\x02';
LAB_009f9814:
        bVar14 = *pbVar21;
      }
      else {
        cVar13 = '\x02';
joined_r0x009f97f0:
        if (ppuVar23 == (uint **)0x0) goto LAB_009f96e4;
        if (ppuVar23 != (uint **)&DAT_00000001) goto LAB_009f9814;
        bVar14 = *pbVar21;
        if (bVar14 == 0x2b || bVar14 == 0x2d) goto LAB_009f96e4;
        ppuVar23 = (uint **)&DAT_00000001;
      }
      ppuVar28 = ppuVar23;
      pbVar17 = pbVar21;
      if (bVar14 == 0x2b) {
        pbVar17 = pbVar21 + 1;
        ppuVar28 = (uint **)((int)ppuVar23 + -1);
      }
      if (&DAT_00000008 < ppuVar28) {
        uVar34 = 0;
        do {
          if (ppuVar28 == (uint **)0x0) goto LAB_009f9858;
          uVar26 = (uint)((ulonglong)uVar34 * 10);
          if ((int)((ulonglong)uVar34 * 10 >> 0x20) != 0) break;
          uVar35 = *pbVar17 - 0x30;
          uVar34 = uVar35 + uVar26;
          if (9 < uVar35) break;
          ppuVar28 = (uint **)((int)ppuVar28 + -1);
          pbVar17 = pbVar17 + 1;
        } while (!CARRY4(uVar35,uVar26));
        goto LAB_009f96e4;
      }
      for (; ppuVar28 != (uint **)0x0; ppuVar28 = (uint **)((int)ppuVar28 + -1)) {
        if (*pbVar17 - 0x3a < 0xfffffff6) goto LAB_009f96e4;
        pbVar17 = pbVar17 + 1;
      }
LAB_009f9858:
      uVar15 = 0;
      if ((int)ppuVar23 < 0) {
LAB_009f9e84:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar15,local_e8);
      }
      if (ppuVar23 == (uint **)0x0) {
        local_e4 = (uint **)0x0;
        local_e8 = (uint **)&DAT_00000001;
      }
      else {
        local_e8 = (uint **)thunk_FUN_016d4a50(ppuVar23);
        if (local_e8 == (uint **)0x0) {
          uVar15 = 1;
          local_e8 = ppuVar23;
          goto LAB_009f9e84;
        }
        local_e4 = ppuVar23;
      }
      FUN_016dd1aa(local_e8,pbVar21);
      FUN_015ed628(&local_30,piVar7[3],piVar7[4],puVar6,iVar32);
      uVar34 = local_a4;
      local_40 = local_30;
      uStack_3c = uStack_2c;
      uStack_38 = uStack_28;
      local_50 = local_e4;
      bVar14 = bVar1 & cVar13 == cVar11;
      if (cVar13 == '\x02') {
        bVar14 = bVar1 ^ 1;
      }
      local_44 = CONCAT31(local_44._1_3_,bVar14);
      local_4c = local_e8;
      local_48 = ppuVar23;
      if (local_a4 == local_ac) {
        FUN_009f4bf4(&local_ac);
      }
      puVar18 = (undefined4 *)(local_a8 + uVar34 * 0x1c);
      *puVar18 = local_50;
      puVar18[1] = local_4c;
      puVar18[2] = local_48;
      puVar18[3] = local_44;
      puVar18[4] = local_40;
      puVar18[5] = uStack_3c;
      puVar18[6] = uStack_38;
      local_a4 = uVar34 + 1;
      if (ppuVar25 != (uint **)0x0) {
        thunk_FUN_016d3fb4(ppuVar16);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar27 = *piVar7;
        bVar12 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar12);
      *piVar7 = iVar27 + -1;
      if (iVar27 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015f4880(local_58);
      }
    }
    *puVar6 = 0;
    if (local_6c != 0) {
      thunk_FUN_016d3fb4(puVar6);
    }
  }
  DataMemoryBarrier(0xb);
  do {
    iVar27 = *local_a0;
    bVar12 = (bool)hasExclusiveAccess(local_a0);
  } while (!bVar12);
  *local_a0 = iVar27 + -1;
  piVar31 = local_a0;
  if (iVar27 == 1) {
    DataMemoryBarrier(0xb);
    piVar31 = (int *)FUN_015f4880(local_a0);
  }
  uVar26 = local_a4;
  uVar34 = local_a8;
  if (1 < local_a4) {
    if (local_a4 < 0x15) {
      iVar32 = 0x1c;
      iVar27 = local_a4 * 0x1c;
      do {
        piVar31 = (int *)FUN_009f78d4(uVar34,uVar34 + iVar32);
        iVar32 = iVar32 + 0x1c;
      } while (iVar27 != iVar32);
    }
    else {
      piVar31 = (int *)FUN_009ff284(local_a8,local_a4);
    }
  }
  uVar36 = thunk_FUN_016de0ee(piVar31,0x2c0);
  puVar29 = (uint *)((int)uVar36 + (int)((ulonglong)uVar36 >> 0x20));
  if ((char)puVar29[4] == '\0') {
    FUN_015f62e4(&local_70);
    *puVar29 = (uint)local_70;
    puVar29[1] = local_6c;
    puVar29[2] = (uint)local_68;
    puVar29[3] = local_64;
    *(undefined1 *)(puVar29 + 4) = 1;
  }
  local_88 = *puVar29;
  local_84 = puVar29[1];
  local_80 = puVar29[2];
  local_7c = puVar29[3];
  *puVar29 = local_88 + 1;
  puVar29[1] = local_84 + (0xfffffffe < local_88);
  local_94 = (int *)0x0;
  local_90 = (undefined1 *)0x0;
  local_98 = &DAT_005674cc;
  local_8c = 0;
  if (uVar26 != 0) {
    uVar35 = uVar34 + uVar26 * 0x1c;
LAB_009f9aa0:
    uVar30 = local_7c;
    uVar20 = local_80;
    uVar19 = local_84;
    uVar22 = local_88;
    uVar36 = FUN_01333c64(local_88,local_84,local_80,local_7c,*(undefined4 *)(uVar35 - 0x18),
                          *(undefined4 *)(uVar35 - 0x14));
    uVar33 = (uint)uVar36;
    if (local_90 == (undefined1 *)0x0) {
      FUN_009ff780(&local_98,(int)((ulonglong)uVar36 >> 0x20),uVar22,uVar19,uVar20,uVar30);
    }
    piVar31 = local_94;
    puVar29 = local_98;
    uVar19 = uVar35 - 0x1c;
    uVar22 = uVar33 >> 0x19;
    iVar27 = 0;
    bVar12 = false;
    do {
      uVar33 = (uint)piVar31 & uVar33;
      uVar30 = *(uint *)((int)puVar29 + uVar33);
      uVar20 = uVar30 ^ uVar22 * 0x1010101;
      uVar20 = ~uVar20 & 0x80808080 & uVar20 + 0xfefefeff;
      while (uVar20 != 0) {
        uVar2 = uVar20 >> 8;
        uVar3 = uVar20 >> 0x10;
        uVar4 = uVar20 >> 0x18;
        uVar5 = uVar20 << 0x18;
        uVar20 = uVar20 - 1 & uVar20;
        if ((*(int *)(uVar35 - 0x14) ==
             *(int *)(puVar29[-1 - (uVar33 + ((uint)LZCOUNT(uVar5 | (uVar2 & 0xff) << 0x10 |
                                                            (uVar3 & 0xff) << 8 | uVar4) >> 3) &
                                   (uint)piVar31)] + 8)) &&
           (iVar32 = thunk_FUN_016dd50a(*(undefined4 *)(uVar35 - 0x18),
                                        *(undefined4 *)
                                         (puVar29[-1 - (uVar33 + ((uint)LZCOUNT(uVar5 | (uVar2 & 
                                                  0xff) << 0x10 | (uVar3 & 0xff) << 8 | uVar4) >> 3)
                                                  & (uint)piVar31)] + 4)), iVar32 == 0)) {
          FUN_015f438c(&local_70,*(undefined4 *)(uVar35 - 8),*(undefined4 *)(uVar35 - 4));
          if ((char)local_70 == '\x04') goto joined_r0x009f9c24;
          *param_1 = (int)local_70;
          param_1[1] = local_6c;
          puVar6 = local_70;
          if (local_94 != (int *)0x0) {
            puVar6 = (undefined1 *)((int)local_94 * 5);
          }
          if (local_94 != (int *)0x0 && puVar6 != (undefined1 *)0xfffffff7) {
            thunk_FUN_016d3fb4(local_98 + (-1 - (int)local_94));
          }
          goto LAB_009f94d0;
        }
      }
      uVar20 = uVar30 & 0x80808080;
      puVar24 = local_dc;
      if (bVar12) {
LAB_009f9bc4:
        if ((uVar20 & uVar30 << 1) != 0) goto LAB_009f9c2c;
        bVar12 = true;
        local_dc = puVar24;
      }
      else {
        if (uVar20 != 0) {
          puVar24 = (uint *)(uVar33 + ((uint)LZCOUNT((uVar30 & 0x80) << 0x18 |
                                                     (uVar20 >> 8 & 0xff) << 0x10 |
                                                     (uVar20 >> 0x10 & 0xff) << 8 | uVar20 >> 0x18)
                                      >> 3) & (uint)piVar31);
          goto LAB_009f9bc4;
        }
        bVar12 = false;
      }
      iVar27 = iVar27 + 4;
      uVar33 = iVar27 + uVar33;
    } while( true );
  }
  *(undefined1 *)param_1 = 4;
LAB_009f9d98:
  piVar31 = (int *)(uVar34 + 0x10);
  for (; uVar26 != 0; uVar26 = uVar26 - 1) {
    if (piVar31[-4] != 0) {
      thunk_FUN_016d3fb4(piVar31[-3]);
    }
    if (*piVar31 != 0) {
      thunk_FUN_016d3fb4(piVar31[1]);
    }
    piVar31 = piVar31 + 7;
  }
LAB_009f9ddc:
  if (local_ac != 0) {
    thunk_FUN_016d3fb4(uVar34);
  }
  if (puVar8 != (undefined1 *)0x0) {
    thunk_FUN_016d3fb4(uVar9);
  }
  return;
LAB_009f9c2c:
  uVar35 = (uint)*(char *)((int)puVar29 + (int)puVar24);
  if (-1 < (int)uVar35) {
    uVar35 = *puVar29 & 0x80808080;
    uVar22 = LZCOUNT((*puVar29 & 0x80) << 0x18 | (uVar35 >> 8 & 0xff) << 0x10 |
                     (uVar35 >> 0x10 & 0xff) << 8 | uVar35 >> 0x18);
    uVar35 = (uint)*(byte *)((int)puVar29 + (uVar22 >> 3));
    puVar24 = (uint *)(uVar22 >> 3);
  }
  bVar1 = (byte)((ulonglong)uVar36 >> 0x18) >> 1;
  *(byte *)((int)puVar29 + (int)puVar24) = bVar1;
  local_90 = local_90 + -(uVar35 & 1);
  *(byte *)((int)puVar29 + ((uint)piVar31 & (uint)(puVar24 + -1)) + 4) = bVar1;
  puVar29[-1 - (int)puVar24] = uVar19;
  local_8c = local_8c + 1;
joined_r0x009f9c24:
  uVar35 = uVar19;
  if (uVar34 == uVar19) goto LAB_009f9d60;
  goto LAB_009f9aa0;
LAB_009f9d60:
  iVar27 = 4;
  *(undefined1 *)param_1 = 4;
  if (local_94 != (int *)0x0) {
    iVar27 = (int)local_94 * 5;
  }
  if (local_94 != (int *)0x0 && iVar27 != -9) {
    thunk_FUN_016d3fb4(local_98 + (-1 - (int)local_94));
  }
  goto LAB_009f9d98;
}

