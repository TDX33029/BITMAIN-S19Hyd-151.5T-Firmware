// FUN_00f29228 @ 00f29228 size=1928 calls_out=13 calls_in=0
// strings: a Display implementation returned an error unexpectedly

/* WARNING: Type propagation algorithm not settling */

void FUN_00f29228(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  bool bVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  int *piVar15;
  code *pcVar16;
  int iVar17;
  undefined1 uVar18;
  uint uVar19;
  undefined2 *puVar20;
  uint uVar21;
  uint *puVar22;
  byte *pbVar23;
  uint uVar24;
  undefined2 *puVar25;
  undefined2 *puVar26;
  int *piVar27;
  uint uVar28;
  undefined2 *puVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  int local_d0;
  undefined2 *local_a4;
  undefined2 *local_9c;
  undefined2 *local_98;
  undefined2 **local_90;
  undefined4 local_8c;
  undefined4 **local_88;
  undefined4 local_84;
  undefined2 *local_80;
  undefined2 *local_7c;
  undefined2 *local_78;
  undefined4 local_74;
  undefined2 *local_70;
  undefined4 local_6c;
  undefined2 *local_68;
  undefined4 local_64;
  undefined2 *local_60;
  undefined4 local_5c;
  undefined4 *local_58;
  int local_54;
  int local_50;
  undefined4 *local_4c;
  int local_48;
  int *local_44;
  undefined2 *local_40;
  undefined1 *local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  int local_30;
  undefined4 **local_2c;
  code *local_28;
  
  (*(code *)param_5[0xe])(&local_80,param_4);
  if (local_80 == (undefined2 *)0x80000000) {
    puVar10 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar10 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)(puVar10 + 1) = 0x41;
    *puVar10 = 0x2f4e;
    bVar3 = false;
    puVar25 = (undefined2 *)3;
  }
  else {
    bVar3 = local_80 == (undefined2 *)0x0;
    puVar10 = local_7c;
    puVar25 = local_78;
  }
  (*(code *)param_5[0xf])(&local_80,param_4);
  if (local_80 == (undefined2 *)0x80000000) {
    local_98 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (local_98 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *(undefined1 *)(local_98 + 1) = 0x41;
    *local_98 = 0x2f4e;
    bVar4 = false;
    puVar29 = (undefined2 *)3;
  }
  else {
    local_98 = local_7c;
    bVar4 = local_80 == (undefined2 *)0x0;
    puVar29 = local_78;
  }
  (*(code *)param_5[0xc])(&local_80,param_4);
  if (local_80 == (undefined2 *)0x80000000) {
    local_9c = (undefined2 *)thunk_FUN_016d4a50(3);
    if (local_9c == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *(undefined1 *)(local_9c + 1) = 0x41;
    *local_9c = 0x2f4e;
    bVar5 = false;
    puVar26 = (undefined2 *)3;
  }
  else {
    local_9c = local_7c;
    bVar5 = local_80 == (undefined2 *)0x0;
    puVar26 = local_78;
  }
  (*(code *)param_5[0xd])(&local_80,param_4);
  if (local_80 == (undefined2 *)0x80000000) {
    local_a4 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (local_a4 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *(undefined1 *)(local_a4 + 1) = 0x41;
    *local_a4 = 0x2f4e;
    bVar6 = false;
    puVar20 = (undefined2 *)3;
  }
  else {
    local_a4 = local_7c;
    bVar6 = local_80 == (undefined2 *)0x0;
    puVar20 = local_78;
  }
  (*(code *)param_5[10])(&local_44,param_4);
  if (local_44 == (int *)0x80000000) {
    puVar11 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar11 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *(undefined1 *)(puVar11 + 1) = 0x41;
    *puVar11 = 0x2f4e;
    bVar7 = false;
    local_5c = (undefined1 *)3;
  }
  else {
    bVar7 = local_44 == (int *)0x0;
    puVar11 = local_40;
    local_5c = local_3c;
  }
  local_68 = local_a4;
  local_70 = local_9c;
  local_40 = (undefined2 *)&DAT_0187d0c8;
  local_44 = &local_50;
  local_48 = 0;
  local_50 = 0;
  local_38 = 0;
  local_78 = local_98;
  local_4c = (undefined4 *)&DAT_00000001;
  local_3c = &DAT_60000020;
  local_80 = puVar10;
  local_7c = puVar25;
  local_74 = puVar29;
  local_6c = puVar26;
  local_64 = puVar20;
  local_60 = puVar11;
  iVar12 = FUN_00faace8(&local_44,param_2,param_3);
  puVar9 = local_4c;
  iVar8 = local_50;
  if (iVar12 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_90,
                 &DAT_0187d0e0,&DAT_018af130);
  }
  local_88 = &local_58;
  local_90 = &local_80;
  local_54 = local_48;
  local_84 = 1;
  local_58 = local_4c;
  local_8c = 5;
  FUN_00ec0200(&local_50,&local_90);
  local_30 = local_48;
  local_34 = local_4c;
  if (local_48 != *(int *)(param_1 + 0xcc)) goto LAB_00f297a4;
  piVar27 = (int *)(param_1 + 8);
  uVar30 = 0xcbf29ce4;
  uVar28 = 0x84222325;
  if (local_48 != 0) {
    puVar13 = local_4c;
    do {
      iVar12 = puVar13[1];
      if (iVar12 != 0) {
        pbVar23 = (byte *)*puVar13;
        do {
          iVar12 = iVar12 + -1;
          uVar21 = uVar28 ^ *pbVar23;
          lVar2 = (ulonglong)uVar21 * 0x1b3;
          uVar28 = (uint)lVar2;
          uVar30 = uVar30 * 0x1b3 + (int)((ulonglong)lVar2 >> 0x20) + uVar21 * 0x100;
          pbVar23 = pbVar23 + 1;
        } while (iVar12 != 0);
      }
      puVar13 = puVar13 + 2;
    } while (puVar13 != local_4c + local_48 * 2);
  }
  if (*piVar27 == 0) {
    bVar1 = (bool)hasExclusiveAccess(piVar27);
    if (!bVar1) goto LAB_00f295dc;
    *piVar27 = 8;
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_00f295dc:
    FUN_0127e06c(piVar27);
  }
  FUN_0128236c(piVar27);
  FUN_0128236c();
  uVar14 = FUN_00c5abb0(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                        *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),uVar28,
                        uVar30);
  uVar21 = uVar14 >> 0x19;
  iVar12 = *(int *)(param_1 + 0x10);
  uVar19 = *(uint *)(param_1 + 0x14);
  local_d0 = 0;
  while( true ) {
    uVar14 = uVar19 & uVar14;
    uVar32 = *(uint *)(iVar12 + uVar14);
    uVar24 = uVar32 ^ uVar21 * 0x1010101;
    uVar24 = ~uVar24 & 0x80808080 & uVar24 + 0xfefefeff;
    while (uVar24 != 0) {
      uVar31 = uVar14 + ((uint)LZCOUNT(uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 |
                                       (uVar24 >> 0x10 & 0xff) << 8 | uVar24 >> 0x18) >> 3) & uVar19
      ;
      puVar22 = (uint *)(iVar12 + -0x10 + uVar31 * -0x10);
      uVar24 = uVar24 - 1 & uVar24;
      if (uVar28 == *puVar22 && uVar30 == puVar22[1]) {
        puVar22 = (uint *)(iVar12 + (uVar31 - 4 & uVar19));
        uVar28 = *puVar22;
        uVar30 = *(uint *)(iVar12 + uVar31) & 0x80808080 & *(uint *)(iVar12 + uVar31) << 1;
        uVar18 = 0x80;
        if (((uint)LZCOUNT(uVar30 << 0x18 | (uVar30 >> 8 & 0xff) << 0x10 |
                           (uVar30 >> 0x10 & 0xff) << 8 | uVar30 >> 0x18) >> 3) +
            ((uint)LZCOUNT(uVar28 & 0x80808080 & uVar28 << 1) >> 3) < 4) {
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
          uVar18 = 0xff;
        }
        *(undefined1 *)(iVar12 + uVar31) = uVar18;
        iVar17 = *(int *)(param_1 + 0x1c);
        *(undefined1 *)(puVar22 + 1) = uVar18;
        piVar15 = *(int **)(iVar12 + uVar31 * -0x10 + -8);
        *(int *)(param_1 + 0x1c) = iVar17 + -1;
        DataMemoryBarrier(0xb);
        do {
          iVar12 = *piVar15;
          bVar1 = (bool)hasExclusiveAccess(piVar15);
        } while (!bVar1);
        *piVar15 = iVar12 + -1;
        if (iVar12 == 1) {
          DataMemoryBarrier(0xb);
          FUN_012c0df4();
        }
        FUN_01282570(piVar27);
        FUN_01282570((uint)piVar27 | 1);
        if (*piVar27 == 8) {
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(piVar27);
            if (bVar1) {
              *piVar27 = 0;
              goto LAB_00f297a4;
            }
          } while (*piVar27 == 8);
        }
        ClearExclusiveLocal();
        FUN_0127db4c(piVar27);
        goto LAB_00f297a4;
      }
    }
    if ((uVar32 & 0x80808080 & uVar32 << 1) != 0) break;
    local_d0 = local_d0 + 4;
    uVar14 = uVar14 + local_d0;
  }
  local_2c = &local_34;
  local_28 = FUN_00aaf12c;
  FUN_00600d2c(&local_44,&DAT_0057d685,&local_2c);
  puVar25 = local_40;
  piVar15 = local_44;
  FUN_01282570(piVar27);
  FUN_01282570((uint)piVar27 | 1);
  if (*piVar27 == 8) {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar27);
      if (bVar1) {
        *piVar27 = 0;
        goto LAB_00f29930;
      }
    } while (*piVar27 == 8);
  }
  ClearExclusiveLocal();
  FUN_0127db4c(piVar27);
LAB_00f29930:
  if (((uint)piVar15 & 0xff) != 0 || (uint)piVar15 >> 8 != 0) {
    thunk_FUN_016d3fb4(puVar25);
  }
LAB_00f297a4:
  if (local_50 != 0) {
    thunk_FUN_016d3fb4(local_4c);
  }
  if (iVar8 != 0) {
    thunk_FUN_016d3fb4(puVar9);
  }
  if (!bVar7) {
    thunk_FUN_016d3fb4(puVar11);
  }
  if (!bVar6) {
    thunk_FUN_016d3fb4(local_a4);
  }
  if (!bVar5) {
    thunk_FUN_016d3fb4(local_9c);
  }
  if (!bVar4) {
    thunk_FUN_016d3fb4(local_98);
  }
  if (bVar3) {
    pcVar16 = (code *)*param_5;
  }
  else {
    thunk_FUN_016d3fb4(puVar10);
    pcVar16 = (code *)*param_5;
  }
  if (pcVar16 != (code *)0x0) {
    (*pcVar16)(param_4);
  }
  if (param_5[1] != 0) {
    thunk_FUN_016d3fb4(param_4);
  }
  return;
}

