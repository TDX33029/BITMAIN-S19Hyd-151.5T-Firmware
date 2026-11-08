// FUN_00d49d10 @ 00d49d10 size=3648 calls_out=20 calls_in=2
// strings: a Display implementation returned an error unexpectedly

/* WARNING: Removing unreachable block (ram,0x00d4aa5c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00d49d10(int param_1,int param_2,undefined4 param_3,undefined4 *param_4,int param_5)

{
  byte bVar1;
  bool bVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint ***pppuVar9;
  int *piVar10;
  uint ***pppuVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  int *piVar16;
  uint uVar17;
  undefined4 *puVar18;
  uint uVar19;
  int iVar20;
  code *pcVar21;
  uint *puVar22;
  uint ***pppuVar23;
  uint uVar24;
  undefined4 ****ppppuVar25;
  uint ***pppuVar26;
  byte *pbVar27;
  uint uVar28;
  uint ***pppuVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  int *piVar33;
  uint ***pppuVar34;
  uint *puVar35;
  uint ***pppuVar36;
  int *piVar37;
  int *piVar38;
  undefined4 *puVar39;
  int local_1cc;
  int local_1c8;
  uint ***local_1c4;
  undefined4 *local_1c0;
  undefined2 *local_180;
  undefined2 *local_17c;
  uint ***local_100;
  int *piStack_fc;
  undefined4 uStack_f8;
  int iStack_f4;
  uint ***local_f0;
  int *piStack_ec;
  undefined4 uStack_e8;
  int iStack_e4;
  uint ***pppuStack_e0;
  int *local_dc;
  undefined4 uStack_d8;
  int iStack_d4;
  uint ***pppuStack_d0;
  int *piStack_cc;
  undefined4 ****local_c8;
  int *local_c4;
  uint ***local_c0;
  int *local_bc;
  undefined4 local_b8;
  int iStack_b4;
  uint ***local_b0;
  int *piStack_ac;
  undefined4 local_a8;
  int iStack_a4;
  uint ***local_a0;
  int *piStack_9c;
  undefined4 uStack_98;
  int local_94;
  uint ***local_90;
  int *local_8c;
  undefined4 uStack_88;
  int iStack_84;
  uint ***pppuStack_80;
  int *piStack_7c;
  int *local_78;
  uint ***local_74;
  int *local_70;
  undefined1 local_6c;
  uint ***local_68;
  int *local_64;
  uint ***local_60;
  int *piStack_5c;
  undefined4 local_58;
  int iStack_54;
  uint ***local_50;
  int *piStack_4c;
  undefined4 local_48;
  int iStack_44;
  uint ***pppuStack_40;
  int *local_3c;
  undefined4 uStack_38;
  int local_34;
  uint ***local_30;
  int *local_2c;
  
  (*(code *)param_4[0xe])(&local_c8,param_3);
  if (local_c8 == (undefined4 ****)0x80000000) {
    piVar12 = (int *)thunk_FUN_016d4a50(3);
    if (piVar12 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)((int)piVar12 + 2) = 0x41;
    *(undefined2 *)piVar12 = 0x2f4e;
    bVar4 = false;
    pppuVar34 = (uint ***)3;
  }
  else {
    bVar4 = local_c8 == (undefined4 ****)0x0;
    piVar12 = local_c4;
    pppuVar34 = local_c0;
  }
  (*(code *)param_4[0xf])(&local_c8,param_3);
  if (local_c8 == (undefined4 ****)0x80000000) {
    piVar13 = (int *)thunk_FUN_016d4a50(3);
    if (piVar13 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)((int)piVar13 + 2) = 0x41;
    *(undefined2 *)piVar13 = 0x2f4e;
    bVar5 = false;
    pppuVar36 = (uint ***)3;
  }
  else {
    bVar5 = local_c8 == (undefined4 ****)0x0;
    piVar13 = local_c4;
    pppuVar36 = local_c0;
  }
  (*(code *)param_4[0xc])(&local_c8,param_3);
  if (local_c8 == (undefined4 ****)0x80000000) {
    local_17c = (undefined2 *)thunk_FUN_016d4a50(3);
    if (local_17c == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *(undefined1 *)(local_17c + 1) = 0x41;
    *local_17c = 0x2f4e;
    bVar6 = false;
    pppuVar29 = (uint ***)3;
  }
  else {
    local_17c = (undefined2 *)local_c4;
    bVar6 = local_c8 == (undefined4 ****)0x0;
    pppuVar29 = local_c0;
  }
  (*(code *)param_4[0xd])(&local_c8,param_3);
  if (local_c8 == (undefined4 ****)0x80000000) {
    local_180 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (local_180 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *(undefined1 *)(local_180 + 1) = 0x41;
    *local_180 = 0x2f4e;
    bVar7 = false;
    pppuVar26 = (uint ***)3;
  }
  else {
    local_180 = (undefined2 *)local_c4;
    bVar7 = local_c8 == (undefined4 ****)0x0;
    pppuVar26 = local_c0;
  }
  (*(code *)param_4[10])(&local_c8,param_3);
  if (local_c8 == (undefined4 ****)0x80000000) {
    piVar14 = (int *)thunk_FUN_016d4a50(3);
    if (piVar14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *(undefined1 *)((int)piVar14 + 2) = 0x41;
    *(undefined2 *)piVar14 = 0x2f4e;
    bVar8 = false;
    pppuVar23 = (uint ***)3;
  }
  else {
    bVar8 = local_c8 == (undefined4 ****)0x0;
    piVar14 = local_c4;
    pppuVar23 = local_c0;
  }
  local_c8 = &local_68;
  local_60 = (uint ***)0x0;
  local_68 = (uint ***)0x0;
  local_bc = (int *)0x0;
  local_64 = (int *)&DAT_00000001;
  local_c0 = (uint ***)&DAT_60000020;
  local_c4 = (int *)&DAT_01877754;
  iVar15 = FUN_00faace8(&local_c8,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  pppuVar11 = local_60;
  piVar10 = local_64;
  pppuVar9 = local_68;
  if (iVar15 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_100,
                 &DAT_0187776c,&DAT_018af130);
  }
  piVar16 = (int *)thunk_FUN_016d4a50(0x30);
  if (piVar16 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,0x30);
  }
  *piVar16 = (int)piVar12;
  piVar16[1] = (int)pppuVar34;
  piVar16[2] = (int)piVar13;
  piVar16[3] = (int)pppuVar36;
  piVar16[4] = (int)local_17c;
  piVar16[5] = (int)pppuVar29;
  piVar16[6] = (int)local_180;
  piVar16[7] = (int)pppuVar26;
  piVar16[8] = (int)piVar14;
  piVar16[9] = (int)pppuVar23;
  local_c0 = (uint ***)0x5;
  local_c8 = (undefined4 ****)0x6;
  local_1c4 = (uint ***)0x6;
  piVar16[10] = (int)piVar10;
  piVar16[0xb] = (int)pppuVar11;
  piVar38 = *(int **)(param_1 + 0xcc);
  if (piVar38 != (int *)&DAT_00000006) {
    piVar37 = (int *)0x0;
    ppppuVar25 = (undefined4 ****)0x1;
    goto LAB_00d4ab10;
  }
  local_1c0 = &local_b8;
  puVar39 = (undefined4 *)(param_1 + 0x20);
  puVar35 = (uint *)(param_1 + 8);
  uVar24 = 0xcbf29ce4;
  piVar33 = (int *)0x84222325;
  piVar38 = piVar16;
  do {
    iVar15 = piVar38[1];
    if (iVar15 != 0) {
      pbVar27 = (byte *)*piVar38;
      do {
        iVar15 = iVar15 + -1;
        uVar30 = (uint)piVar33 ^ (uint)*pbVar27;
        lVar3 = (ulonglong)uVar30 * 0x1b3;
        piVar33 = (int *)lVar3;
        uVar24 = uVar24 * 0x1b3 + (int)((ulonglong)lVar3 >> 0x20) + uVar30 * 0x100;
        pbVar27 = pbVar27 + 1;
      } while (iVar15 != 0);
    }
    piVar38 = piVar38 + 2;
  } while (piVar38 != piVar16 + 0xc);
  uVar30 = *puVar35;
  local_c4 = piVar16;
  if ((uVar30 < 0xfffffff0) && ((uVar30 & 8) == 0)) {
    if (*puVar35 != uVar30) {
      ClearExclusiveLocal();
      goto LAB_00d4a158;
    }
    bVar2 = (bool)hasExclusiveAccess(puVar35);
    if (!bVar2) goto LAB_00d4a158;
    *puVar35 = uVar30 + 0x10;
    DataMemoryBarrier(0xb);
  }
  else {
LAB_00d4a158:
    FUN_0127d66c(puVar35);
  }
  FUN_0128236c(puVar35);
  uVar30 = (uint)puVar35 | 1;
  FUN_0128236c();
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar17 = FUN_00c5abb0(*puVar39,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                          *(undefined4 *)(param_1 + 0x2c),piVar33,uVar24);
    uVar19 = uVar17 >> 0x19;
    iVar15 = *(int *)(param_1 + 0x10);
    local_1c8 = 0;
    while( true ) {
      uVar17 = *(uint *)(param_1 + 0x14) & uVar17;
      uVar31 = *(uint *)(iVar15 + uVar17);
      uVar28 = uVar31 ^ uVar19 * 0x1010101;
      uVar28 = ~uVar28 & 0x80808080 & uVar28 + 0xfefefeff;
      while (uVar28 != 0) {
        uVar32 = uVar17 + ((uint)LZCOUNT(uVar28 << 0x18 | (uVar28 >> 8 & 0xff) << 0x10 |
                                         (uVar28 >> 0x10 & 0xff) << 8 | uVar28 >> 0x18) >> 3) &
                 *(uint *)(param_1 + 0x14);
        puVar18 = (undefined4 *)(iVar15 + -0x10 + uVar32 * -0x10);
        uVar28 = uVar28 - 1 & uVar28;
        if (piVar33 == (int *)*puVar18 && uVar24 == puVar18[1]) {
          piVar38 = *(int **)(iVar15 + uVar32 * -0x10 + -8);
          do {
            iVar15 = *piVar38;
            bVar2 = (bool)hasExclusiveAccess(piVar38);
          } while (!bVar2);
          *piVar38 = iVar15 + 1;
          if (iVar15 < 0) goto LAB_00d4ab48;
          FUN_01282570(puVar35);
          FUN_01282570(uVar30);
          DataMemoryBarrier(0xb);
          do {
            uVar24 = *puVar35;
            bVar2 = (bool)hasExclusiveAccess(puVar35);
          } while (!bVar2);
          *puVar35 = uVar24 - 0x10;
          if ((uVar24 & 0xfffffff2) == 0x12) {
            FUN_0127d34c(puVar35);
          }
          goto LAB_00d4a87c;
        }
      }
      if ((uVar31 & 0x80808080 & uVar31 << 1) != 0) break;
      local_1c8 = local_1c8 + 4;
      uVar17 = uVar17 + local_1c8;
    }
  }
  FUN_01282570(puVar35);
  FUN_01282570(uVar30);
  DataMemoryBarrier(0xb);
  do {
    uVar19 = *puVar35;
    bVar2 = (bool)hasExclusiveAccess(puVar35);
  } while (!bVar2);
  *puVar35 = uVar19 - 0x10;
  if ((uVar19 & 0xfffffff2) == 0x12) {
    FUN_0127d34c(puVar35);
  }
  if (*puVar35 == 0) {
    bVar2 = (bool)hasExclusiveAccess(puVar35);
    if (!bVar2) goto LAB_00d4a338;
    *puVar35 = 8;
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_00d4a338:
    FUN_0127e06c(puVar35);
  }
  FUN_0128236c(puVar35);
  FUN_0128236c(uVar30);
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar19 = FUN_00c5abb0(*puVar39,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                          *(undefined4 *)(param_1 + 0x2c),piVar33,uVar24);
    local_1c4 = (uint ***)((uVar19 >> 0x19) * 0x1010101);
    iVar15 = *(int *)(param_1 + 0x10);
    local_1cc = 0;
    while( true ) {
      uVar19 = *(uint *)(param_1 + 0x14) & uVar19;
      uVar28 = *(uint *)(iVar15 + uVar19);
      uVar17 = ~(uVar28 ^ (uint)local_1c4) & 0x80808080 & (uVar28 ^ (uint)local_1c4) + 0xfefefeff;
      while (uVar17 != 0) {
        uVar31 = uVar19 + ((uint)LZCOUNT(uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                                         (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18) >> 3) &
                 *(uint *)(param_1 + 0x14);
        puVar18 = (undefined4 *)(iVar15 + -0x10 + uVar31 * -0x10);
        piVar37 = (int *)*puVar18;
        uVar17 = uVar17 - 1 & uVar17;
        if (piVar33 == piVar37 && uVar24 == puVar18[1]) {
          piVar38 = *(int **)(iVar15 + uVar31 * -0x10 + -8);
          do {
            iVar15 = *piVar38;
            bVar2 = (bool)hasExclusiveAccess(piVar38);
          } while (!bVar2);
          *piVar38 = iVar15 + 1;
          if (iVar15 < 0) goto LAB_00d4ab48;
          ppppuVar25 = (undefined4 ****)(uint ***)0x5;
          goto LAB_00d4a478;
        }
      }
      if ((uVar28 & 0x80808080 & uVar28 << 1) != 0) break;
      local_1cc = local_1cc + 4;
      uVar19 = uVar19 + local_1cc;
    }
  }
  FUN_012cd8c4(&local_c8,param_1 + 0x30);
  local_1c4 = local_c0;
  if (local_94 == -0x80000000) {
    ppppuVar25 = local_c8;
    piVar37 = local_bc;
    piVar38 = local_c4;
    if (local_c8 == (undefined4 ****)0x5) {
LAB_00d4a6a4:
      do {
        iVar15 = *piVar38;
        bVar2 = (bool)hasExclusiveAccess(piVar38);
      } while (!bVar2);
      *piVar38 = iVar15 + 1;
      if (iVar15 < 0) {
LAB_00d4ab48:
                    /* WARNING: Does not return */
        pcVar21 = (code *)software_udf(0xfdee,0xd4ab48);
        (*pcVar21)();
      }
      uVar19 = FUN_00c5abb0(*puVar39,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28)
                            ,*(undefined4 *)(param_1 + 0x2c),piVar33,uVar24);
      if (*(int *)(param_1 + 0x18) == 0) {
        FUN_0074a98c(param_1 + 0x10,puVar39);
      }
      local_1c4 = (uint ***)(uVar19 >> 0x19);
      puVar22 = *(uint **)(param_1 + 0x10);
      uVar28 = *(uint *)(param_1 + 0x14);
      iVar15 = 0;
      bVar2 = false;
      uVar17 = uVar19;
      do {
        uVar17 = uVar28 & uVar17;
        piVar37 = *(int **)((int)puVar22 + uVar17);
        uVar31 = (uint)piVar37 ^ (int)local_1c4 * 0x1010101;
        uVar31 = ~uVar31 & 0x80808080 & uVar31 + 0xfefefeff;
        while (uVar31 != 0) {
          uVar32 = uVar17 + ((uint)LZCOUNT(uVar31 << 0x18 | (uVar31 >> 8 & 0xff) << 0x10 |
                                           (uVar31 >> 0x10 & 0xff) << 8 | uVar31 >> 0x18) >> 3) &
                   uVar28;
          uVar31 = uVar31 - 1 & uVar31;
          if (piVar33 == (int *)puVar22[uVar32 * -4 + -4] && uVar24 == puVar22[uVar32 * -4 + -3]) {
            piVar33 = (int *)puVar22[uVar32 * -4 + -2];
            puVar22[uVar32 * -4 + -2] = (uint)piVar38;
            DataMemoryBarrier(0xb);
            do {
              iVar15 = *piVar33;
              bVar2 = (bool)hasExclusiveAccess(piVar33);
            } while (!bVar2);
            *piVar33 = iVar15 + -1;
            local_1c4 = (uint ***)0x80808080;
            if (iVar15 == 1) {
              DataMemoryBarrier(0xb);
              FUN_012c0df4();
            }
            goto LAB_00d4a828;
          }
        }
        uVar31 = (uint)piVar37 & 0x80808080;
        if (bVar2) {
LAB_00d4a7b8:
          if ((uVar31 & (int)piVar37 << 1) != 0) goto LAB_00d4a9cc;
          bVar2 = true;
        }
        else {
          if (uVar31 != 0) {
            local_1c0 = (undefined4 *)
                        (uVar17 + ((uint)LZCOUNT(uVar31 << 0x18 | (uVar31 >> 8 & 0xff) << 0x10 |
                                                 (uVar31 >> 0x10 & 0xff) << 8 | uVar31 >> 0x18) >> 3
                                  ) & uVar28);
            goto LAB_00d4a7b8;
          }
          bVar2 = false;
        }
        iVar15 = iVar15 + 4;
        uVar17 = iVar15 + uVar17;
      } while( true );
    }
  }
  else {
    local_58 = local_b8;
    iStack_54 = iStack_b4;
    local_50 = local_b0;
    piStack_4c = piStack_ac;
    local_48 = local_a8;
    iStack_44 = iStack_a4;
    pppuStack_40 = local_a0;
    local_3c = piStack_9c;
    uStack_38 = uStack_98;
    local_30 = local_90;
    local_60 = local_c0;
    piStack_5c = local_bc;
    local_2c = local_8c;
    local_64 = local_c4;
    local_68 = (uint ***)local_c8;
    local_34 = local_94;
    FUN_012be0e4(&local_c8,&local_68,piVar16,6);
    piVar37 = local_bc;
    piVar38 = local_c4;
    ppppuVar25 = local_c8;
    local_1c4 = local_c0;
    if (local_c8 == (undefined4 ****)0x5) {
      local_100 = local_60;
      piStack_fc = piStack_5c;
      uStack_f8 = local_58;
      iStack_f4 = iStack_54;
      local_f0 = local_50;
      piStack_ec = piStack_4c;
      uStack_e8 = local_48;
      iStack_e4 = iStack_44;
      pppuStack_e0 = pppuStack_40;
      local_dc = local_3c;
      uStack_d8 = uStack_38;
      iStack_d4 = local_34;
      pppuStack_d0 = local_30;
      piStack_cc = local_2c;
      if (local_c4 != (int *)&DAT_80000000) {
        local_74 = local_c0;
        local_70 = local_bc;
        local_6c = 1;
        local_bc = (int *)0x0;
        local_c0 = (uint ***)0x0;
        local_78 = local_c4;
        local_c4 = (int *)&DAT_00000001;
        local_c8 = (undefined4 ****)0x1;
        local_b0 = local_100;
        piStack_ac = piStack_fc;
        local_a8 = uStack_f8;
        iStack_a4 = iStack_f4;
        local_a0 = local_f0;
        piStack_9c = piStack_ec;
        uStack_98 = uStack_e8;
        local_94 = iStack_e4;
        local_90 = pppuStack_e0;
        local_8c = local_dc;
        uStack_88 = uStack_d8;
        iStack_84 = iStack_d4;
        pppuStack_80 = pppuStack_d0;
        piStack_7c = piStack_cc;
        piVar38 = (int *)thunk_FUN_016d4a50(0x60);
        if (piVar38 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x60);
        }
        FUN_016dd1aa(piVar38,&local_c8,0x60);
        goto LAB_00d4a6a4;
      }
      local_1c4 = local_68;
      ppppuVar25 = (undefined4 ****)(uint ***)0x0;
      piVar37 = local_64;
      piVar38 = (int *)0x0;
    }
    else {
      FUN_00cecc3c(&local_68);
    }
  }
LAB_00d4a478:
  FUN_01282570(puVar35);
  FUN_01282570(uVar30);
  if (*puVar35 == 8) {
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(puVar35);
      if (bVar2) {
        *puVar35 = 0;
        goto LAB_00d4a874;
      }
    } while (*puVar35 == 8);
  }
  goto LAB_00d4a868;
LAB_00d4a9cc:
  uVar17 = (uint)*(char *)((int)puVar22 + (int)local_1c0);
  if (-1 < (int)uVar17) {
    uVar17 = *puVar22 & 0x80808080;
    uVar31 = LZCOUNT((*puVar22 & 0x80) << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                     (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18);
    uVar17 = (uint)*(byte *)((int)puVar22 + (uVar31 >> 3));
    local_1c0 = (undefined4 *)(uVar31 >> 3);
  }
  iVar15 = *(int *)(param_1 + 0x18);
  iVar20 = *(int *)(param_1 + 0x1c);
  bVar1 = (byte)(uVar19 >> 0x19);
  *(byte *)((int)puVar22 + (int)local_1c0) = bVar1;
  *(uint *)(param_1 + 0x18) = iVar15 - (uVar17 & 1);
  *(int *)(param_1 + 0x1c) = iVar20 + 1;
  *(byte *)((int)puVar22 + (uVar28 & (uint)(local_1c0 + -1)) + 4) = bVar1;
  puVar22[(int)local_1c0 * -4 + -4] = (uint)piVar33;
  puVar22[(int)local_1c0 * -4 + -3] = uVar24;
  puVar22[(int)local_1c0 * -4 + -2] = (uint)piVar38;
LAB_00d4a828:
  FUN_01282570(puVar35);
  FUN_01282570(uVar30);
  ppppuVar25 = (undefined4 ****)0x5;
  if (*puVar35 == 8) {
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(puVar35);
      if (bVar2) {
        *puVar35 = 0;
        goto LAB_00d4a87c;
      }
    } while (*puVar35 == 8);
  }
LAB_00d4a868:
  ClearExclusiveLocal();
  FUN_0127db4c(puVar35);
LAB_00d4a874:
  if (ppppuVar25 == (undefined4 ****)0x5) {
LAB_00d4a87c:
    do {
      iVar15 = piVar38[3];
      bVar2 = (bool)hasExclusiveAccess(piVar38 + 2);
    } while (!bVar2);
    piVar38[2] = param_5;
    piVar38[3] = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar20 = *piVar38;
      bVar2 = (bool)hasExclusiveAccess(piVar38);
    } while (!bVar2);
    *piVar38 = iVar20 + -1;
    if (iVar20 == 1) {
      DataMemoryBarrier(0xb);
      FUN_012c0df4(piVar38,0,0,iVar15);
    }
    thunk_FUN_016d3fb4(piVar16);
    if (pppuVar9 != (uint ***)0x0) {
      thunk_FUN_016d3fb4(piVar10);
    }
    if (!bVar8) {
      thunk_FUN_016d3fb4(piVar14);
    }
    if (!bVar7) {
      thunk_FUN_016d3fb4(local_180);
    }
    if (!bVar6) {
      thunk_FUN_016d3fb4(local_17c);
    }
    if (!bVar5) {
      thunk_FUN_016d3fb4(piVar13);
    }
    if (bVar4) {
      pcVar21 = (code *)*param_4;
    }
    else {
      thunk_FUN_016d3fb4(piVar12);
      pcVar21 = (code *)*param_4;
    }
    if (pcVar21 != (code *)0x0) {
      (*pcVar21)(param_3);
    }
    if (param_4[1] != 0) {
      thunk_FUN_016d3fb4(param_3);
    }
    return;
  }
LAB_00d4ab10:
  local_c8 = ppppuVar25;
  local_c4 = piVar38;
  local_c0 = local_1c4;
  local_bc = piVar37;
                    /* WARNING: Subroutine does not return */
  FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_c8,&DAT_01877574,&DAT_01886b2c);
}

