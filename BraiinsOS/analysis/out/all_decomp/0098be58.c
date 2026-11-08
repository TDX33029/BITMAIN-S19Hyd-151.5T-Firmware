// FUN_0098be58 @ 0098be58 size=5944 calls_out=19 calls_in=3
// strings: a Display implementation returned an error unexpectedly

/* WARNING: Removing unreachable block (ram,0x0098d4b4) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0098be58(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5,int param_6)

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
  undefined4 ****ppppuVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  uint ***pppuVar16;
  uint uVar17;
  int *piVar18;
  uint *puVar19;
  uint uVar20;
  code *pcVar21;
  uint uVar22;
  uint *puVar23;
  uint ***pppuVar24;
  uint ***pppuVar25;
  uint uVar26;
  uint uVar27;
  int *piVar28;
  uint ***pppuVar29;
  uint uVar30;
  uint *puVar31;
  uint uVar32;
  uint ***pppuVar33;
  byte *pbVar34;
  uint uVar35;
  undefined4 ****ppppuVar36;
  int iVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  int *piVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  int *local_1c4;
  int local_1b4;
  undefined2 *local_188;
  undefined2 *local_184;
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
  int *local_5c;
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
  int *piStack_2c;
  
  (*(code *)param_5[0xe])(&local_c8,param_4);
  if (local_c8 == (undefined4 ****)0x80000000) {
    local_17c = (undefined2 *)thunk_FUN_016d4a50(3);
    if (local_17c == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *(undefined1 *)(local_17c + 1) = 0x41;
    *local_17c = 0x2f4e;
    bVar4 = false;
    pppuVar16 = (uint ***)3;
  }
  else {
    local_17c = (undefined2 *)local_c4;
    bVar4 = local_c8 == (undefined4 ****)0x0;
    pppuVar16 = local_c0;
  }
  (*(code *)param_5[0xf])(&local_c8,param_4);
  if (local_c8 == (undefined4 ****)0x80000000) {
    local_180 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (local_180 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *(undefined1 *)(local_180 + 1) = 0x41;
    *local_180 = 0x2f4e;
    bVar5 = false;
    pppuVar33 = (uint ***)3;
  }
  else {
    local_180 = (undefined2 *)local_c4;
    bVar5 = local_c8 == (undefined4 ****)0x0;
    pppuVar33 = local_c0;
  }
  (*(code *)param_5[0xc])(&local_c8,param_4);
  if (local_c8 == (undefined4 ****)0x80000000) {
    local_184 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (local_184 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *(undefined1 *)(local_184 + 1) = 0x41;
    *local_184 = 0x2f4e;
    bVar6 = false;
    pppuVar25 = (uint ***)3;
  }
  else {
    local_184 = (undefined2 *)local_c4;
    bVar6 = local_c8 == (undefined4 ****)0x0;
    pppuVar25 = local_c0;
  }
  (*(code *)param_5[0xd])(&local_c8,param_4);
  if (local_c8 == (undefined4 ****)0x80000000) {
    local_188 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (local_188 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *(undefined1 *)(local_188 + 1) = 0x41;
    *local_188 = 0x2f4e;
    bVar7 = false;
    pppuVar29 = (uint ***)3;
  }
  else {
    local_188 = (undefined2 *)local_c4;
    bVar7 = local_c8 == (undefined4 ****)0x0;
    pppuVar29 = local_c0;
  }
  (*(code *)param_5[10])(&local_c8,param_4);
  if (local_c8 == (undefined4 ****)0x80000000) {
    piVar13 = (int *)thunk_FUN_016d4a50(3);
    if (piVar13 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *(undefined1 *)((int)piVar13 + 2) = 0x41;
    *(undefined2 *)piVar13 = 0x2f4e;
    bVar8 = false;
    pppuVar24 = (uint ***)3;
  }
  else {
    bVar8 = local_c8 == (undefined4 ****)0x0;
    piVar13 = local_c4;
    pppuVar24 = local_c0;
  }
  local_c8 = &local_68;
  local_60 = (uint ***)0x0;
  local_68 = (uint ***)0x0;
  local_bc = (int *)0x0;
  local_64 = (int *)&DAT_00000001;
  local_c0 = (uint ***)&DAT_60000020;
  local_c4 = (int *)&DAT_01868bac;
  iVar14 = FUN_00faace8(&local_c8,param_2,param_3);
  pppuVar11 = local_60;
  piVar10 = local_64;
  pppuVar9 = local_68;
  if (iVar14 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_100,
                 &DAT_01868bc4,&DAT_018af130);
  }
  piVar15 = (int *)thunk_FUN_016d4a50(0x30);
  if (piVar15 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,0x30);
  }
  *piVar15 = (int)local_17c;
  piVar15[1] = (int)pppuVar16;
  piVar15[2] = (int)local_180;
  piVar15[3] = (int)pppuVar33;
  piVar15[4] = (int)local_184;
  piVar15[5] = (int)pppuVar25;
  piVar15[6] = (int)local_188;
  piVar15[7] = (int)pppuVar29;
  piVar15[8] = (int)piVar13;
  piVar15[9] = (int)pppuVar24;
  local_c0 = (uint ***)0x5;
  local_c8 = (undefined4 ****)0x6;
  piVar15[10] = (int)piVar10;
  piVar15[0xb] = (int)pppuVar11;
  pppuVar16 = (uint ***)0x6;
  piVar41 = *(int **)(param_1 + 0xcc);
  if (piVar41 != (int *)&DAT_00000006) {
    local_bc = (int *)0x0;
    local_c8 = (undefined4 ****)0x1;
    goto LAB_0098d55c;
  }
  pppuVar16 = (uint ***)0xcbf29ce4;
  uVar39 = 0x84222325;
  puVar19 = (uint *)(param_1 + 8);
  piVar41 = piVar15;
  do {
    iVar14 = piVar41[1];
    if (iVar14 != 0) {
      pbVar34 = (byte *)*piVar41;
      do {
        iVar14 = iVar14 + -1;
        uVar30 = uVar39 ^ *pbVar34;
        lVar3 = (ulonglong)uVar30 * 0x1b3;
        uVar39 = (uint)lVar3;
        pppuVar16 = (uint ***)
                    ((int)pppuVar16 * 0x1b3 + (int)((ulonglong)lVar3 >> 0x20) + uVar30 * 0x100);
        pbVar34 = pbVar34 + 1;
      } while (iVar14 != 0);
    }
    piVar41 = piVar41 + 2;
  } while (piVar41 != piVar15 + 0xc);
  uVar30 = *puVar19;
  local_c4 = piVar15;
  if ((uVar30 < 0xfffffff0) && ((uVar30 & 8) == 0)) {
    if (*puVar19 != uVar30) {
      ClearExclusiveLocal();
      goto LAB_0098c280;
    }
    bVar2 = (bool)hasExclusiveAccess(puVar19);
    if (!bVar2) goto LAB_0098c280;
    *puVar19 = uVar30 + 0x10;
    DataMemoryBarrier(0xb);
  }
  else {
LAB_0098c280:
    FUN_0127d66c(puVar19);
  }
  FUN_0128236c(puVar19);
  uVar30 = (uint)puVar19 | 1;
  FUN_0128236c();
  puVar31 = (uint *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar17 = *puVar31 ^ 0x70736575;
    uVar26 = *(uint *)(param_1 + 0x2c) ^ 0x646f7261;
    uVar22 = *(uint *)(param_1 + 0x28) ^ 0x6e646f6d;
    uVar42 = uVar22 + uVar17;
    uVar44 = uVar26 + (*(uint *)(param_1 + 0x24) ^ 0x736f6d65) + (uint)CARRY4(uVar22,uVar17);
    uVar20 = uVar42 ^ (uVar22 << 0xd | uVar26 >> 0x13);
    uVar26 = uVar44 ^ (uVar26 << 0xd | uVar22 >> 0x13);
    uVar27 = *(uint *)(param_1 + 0x2c) ^ (uint)pppuVar16 ^ 0x74656462;
    uVar17 = *puVar31 ^ 0x6e657261;
    uVar35 = *(uint *)(param_1 + 0x28) ^ uVar39 ^ 0x79746573;
    uVar32 = uVar35 + uVar17;
    uVar22 = uVar27 + (*(uint *)(param_1 + 0x24) ^ 0x6c796765) + (uint)CARRY4(uVar35,uVar17);
    uVar17 = uVar26 + uVar22 + (uint)CARRY4(uVar20,uVar32);
    uVar38 = uVar17 ^ (uVar26 << 0x11 | uVar20 >> 0xf);
    uVar22 = uVar22 ^ (uVar27 << 0x10 | uVar35 >> 0x10);
    uVar35 = uVar32 ^ (uVar35 << 0x10 | uVar27 >> 0x10);
    uVar26 = uVar20 + uVar32 ^ (uVar20 << 0x11 | uVar26 >> 0xf);
    uVar42 = uVar22 + uVar42 + (uint)CARRY4(uVar35,uVar44);
    uVar27 = uVar35 + uVar44 ^ uVar39;
    uVar40 = uVar27 + uVar26;
    uVar45 = (uVar42 ^ (uint)pppuVar16) + uVar38 + (uint)CARRY4(uVar27,uVar26);
    uVar43 = uVar45 ^ (uVar38 << 0xd | uVar26 >> 0x13);
    uVar26 = uVar40 ^ (uVar26 << 0xd | uVar38 >> 0x13);
    uVar42 = (uVar22 << 0x15 | uVar35 >> 0xb) ^ uVar42;
    uVar22 = (uVar35 << 0x15 | uVar22 >> 0xb) ^ uVar35 + uVar44;
    uVar27 = uVar42 ^ 0x8000000;
    uVar38 = uVar22 + uVar17;
    uVar32 = uVar27 + uVar20 + uVar32 + (uint)CARRY4(uVar22,uVar17);
    uVar44 = uVar32 + uVar43 + (uint)CARRY4(uVar38,uVar26);
    uVar32 = (uVar42 << 0x10 | uVar22 >> 0x10) ^ uVar32;
    uVar42 = (uVar22 << 0x10 | uVar27 >> 0x10) ^ uVar38;
    uVar46 = uVar42 + uVar45;
    uVar35 = uVar44 ^ (uVar43 << 0x11 | uVar26 >> 0xf);
    uVar20 = uVar32 + uVar40 + (uint)CARRY4(uVar42,uVar45);
    uVar22 = uVar38 + uVar26 ^ (uVar26 << 0x11 | uVar43 >> 0xf);
    uVar27 = (uVar20 ^ 0x8000000) + uVar35 + (uint)CARRY4(uVar46,uVar22);
    uVar17 = uVar27 ^ (uVar35 << 0xd | uVar22 >> 0x13);
    uVar35 = uVar46 + uVar22 ^ (uVar22 << 0xd | uVar35 >> 0x13);
    uVar20 = (uVar32 << 0x15 | uVar42 >> 0xb) ^ uVar20;
    uVar32 = (uVar42 << 0x15 | uVar32 >> 0xb) ^ uVar46;
    uVar44 = uVar44 ^ 0xff;
    uVar40 = uVar32 + uVar44;
    uVar42 = uVar20 + uVar38 + uVar26 + (uint)CARRY4(uVar32,uVar44);
    uVar44 = uVar17 + uVar42 + (uint)CARRY4(uVar35,uVar40);
    uVar38 = uVar44 ^ (uVar17 << 0x11 | uVar35 >> 0xf);
    uVar26 = uVar35 + uVar40 ^ (uVar35 << 0x11 | uVar17 >> 0xf);
    uVar42 = (uVar20 << 0x10 | uVar32 >> 0x10) ^ uVar42;
    uVar20 = (uVar32 << 0x10 | uVar20 >> 0x10) ^ uVar40;
    uVar45 = uVar20 + uVar27;
    uVar32 = uVar42 + uVar46 + uVar22 + (uint)CARRY4(uVar20,uVar27);
    uVar17 = uVar38 + uVar32 + (uint)CARRY4(uVar26,uVar45);
    uVar22 = (uVar38 << 0xd | uVar26 >> 0x13) ^ uVar17;
    uVar27 = (uVar26 << 0xd | uVar38 >> 0x13) ^ uVar26 + uVar45;
    uVar32 = (uVar42 << 0x15 | uVar20 >> 0xb) ^ uVar32;
    uVar20 = (uVar20 << 0x15 | uVar42 >> 0xb) ^ uVar45;
    uVar42 = uVar20 + uVar44;
    uVar35 = uVar32 + uVar35 + uVar40 + (uint)CARRY4(uVar20,uVar44);
    uVar44 = (uVar32 << 0x10 | uVar20 >> 0x10) ^ uVar35;
    uVar20 = (uVar20 << 0x10 | uVar32 >> 0x10) ^ uVar42;
    uVar43 = uVar22 + uVar35 + (uint)CARRY4(uVar27,uVar42);
    uVar35 = uVar20 + uVar17;
    uVar38 = uVar44 + uVar26 + uVar45 + (uint)CARRY4(uVar20,uVar17);
    uVar26 = (uVar20 << 0x15 | uVar44 >> 0xb) ^ uVar35;
    uVar40 = (uVar22 << 0x11 | uVar27 >> 0xf) ^ uVar43;
    uVar32 = (uVar44 << 0x15 | uVar20 >> 0xb) ^ uVar38;
    uVar20 = uVar26 + uVar43;
    uVar17 = (uVar27 << 0x11 | uVar22 >> 0xf) ^ uVar27 + uVar42;
    uVar27 = uVar32 + uVar27 + uVar42 + (uint)CARRY4(uVar26,uVar43);
    uVar22 = (uVar40 << 0xd | uVar17 >> 0x13) ^ uVar40 + uVar38 + (uint)CARRY4(uVar17,uVar35);
    uVar17 = (uVar17 << 0xd | uVar40 >> 0x13) ^ uVar17 + uVar35;
    uVar22 = ((uVar20 ^ uVar32 >> 0x10) << 0x15 |
             ((uVar32 << 0x10 | uVar26 >> 0x10) ^ uVar27) >> 0xb) ^ (uVar17 << 0x11 | uVar22 >> 0xf)
             ^ uVar22 + uVar27 + (uint)CARRY4(uVar17,uVar20) ^ uVar17 + uVar20;
    iVar14 = *(int *)(param_1 + 0x10);
    uVar17 = uVar22 >> 0x19;
    local_1b4 = 0;
    while( true ) {
      uVar22 = *(uint *)(param_1 + 0x14) & uVar22;
      uVar26 = *(uint *)(iVar14 + uVar22);
      uVar20 = uVar26 ^ uVar17 * 0x1010101;
      uVar20 = ~uVar20 & 0x80808080 & uVar20 + 0xfefefeff;
      while (uVar20 != 0) {
        uVar27 = uVar22 + ((uint)LZCOUNT(uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 |
                                         (uVar20 >> 0x10 & 0xff) << 8 | uVar20 >> 0x18) >> 3) &
                 *(uint *)(param_1 + 0x14);
        puVar23 = (uint *)(iVar14 + -0x10 + uVar27 * -0x10);
        uVar20 = uVar20 - 1 & uVar20;
        if (uVar39 == *puVar23 && pppuVar16 == (uint ***)puVar23[1]) {
          piVar41 = *(int **)(iVar14 + uVar27 * -0x10 + -8);
          do {
            iVar14 = *piVar41;
            bVar2 = (bool)hasExclusiveAccess(piVar41);
          } while (!bVar2);
          *piVar41 = iVar14 + 1;
          if (iVar14 < 0) goto LAB_0098d594;
          FUN_01282570(puVar19);
          FUN_01282570(uVar30);
          DataMemoryBarrier(0xb);
          do {
            uVar39 = *puVar19;
            bVar2 = (bool)hasExclusiveAccess(puVar19);
          } while (!bVar2);
          *puVar19 = uVar39 - 0x10;
          ppppuVar12 = local_c8;
          piVar18 = local_bc;
          if ((uVar39 & 0xfffffff2) == 0x12) {
            FUN_0127d34c();
            ppppuVar12 = local_c8;
            piVar18 = local_bc;
          }
          goto LAB_0098cbe8;
        }
      }
      if ((uVar26 & 0x80808080 & uVar26 << 1) != 0) break;
      local_1b4 = local_1b4 + 4;
      uVar22 = uVar22 + local_1b4;
    }
  }
  FUN_01282570(puVar19);
  FUN_01282570(uVar30);
  DataMemoryBarrier(0xb);
  do {
    uVar17 = *puVar19;
    bVar2 = (bool)hasExclusiveAccess(puVar19);
  } while (!bVar2);
  *puVar19 = uVar17 - 0x10;
  if ((uVar17 & 0xfffffff2) == 0x12) {
    FUN_0127d34c(puVar19);
  }
  if (*puVar19 == 0) {
    bVar2 = (bool)hasExclusiveAccess(puVar19);
    if (!bVar2) goto LAB_0098c764;
    *puVar19 = 8;
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0098c764:
    FUN_0127e06c();
  }
  FUN_0128236c(puVar19);
  FUN_0128236c(uVar30);
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar17 = *puVar31 ^ 0x70736575;
    uVar26 = *(uint *)(param_1 + 0x2c) ^ 0x646f7261;
    uVar22 = *(uint *)(param_1 + 0x28) ^ 0x6e646f6d;
    uVar42 = uVar22 + uVar17;
    uVar44 = uVar26 + (*(uint *)(param_1 + 0x24) ^ 0x736f6d65) + (uint)CARRY4(uVar22,uVar17);
    uVar20 = uVar42 ^ (uVar22 << 0xd | uVar26 >> 0x13);
    uVar26 = uVar44 ^ (uVar26 << 0xd | uVar22 >> 0x13);
    uVar27 = *(uint *)(param_1 + 0x2c) ^ (uint)pppuVar16 ^ 0x74656462;
    uVar17 = *puVar31 ^ 0x6e657261;
    uVar35 = *(uint *)(param_1 + 0x28) ^ uVar39 ^ 0x79746573;
    uVar32 = uVar35 + uVar17;
    uVar22 = uVar27 + (*(uint *)(param_1 + 0x24) ^ 0x6c796765) + (uint)CARRY4(uVar35,uVar17);
    uVar17 = uVar26 + uVar22 + (uint)CARRY4(uVar20,uVar32);
    uVar38 = uVar17 ^ (uVar26 << 0x11 | uVar20 >> 0xf);
    uVar22 = uVar22 ^ (uVar27 << 0x10 | uVar35 >> 0x10);
    uVar35 = uVar32 ^ (uVar35 << 0x10 | uVar27 >> 0x10);
    uVar26 = uVar20 + uVar32 ^ (uVar20 << 0x11 | uVar26 >> 0xf);
    uVar42 = uVar22 + uVar42 + (uint)CARRY4(uVar35,uVar44);
    uVar27 = uVar35 + uVar44 ^ uVar39;
    uVar40 = uVar27 + uVar26;
    uVar45 = (uVar42 ^ (uint)pppuVar16) + uVar38 + (uint)CARRY4(uVar27,uVar26);
    uVar43 = uVar45 ^ (uVar38 << 0xd | uVar26 >> 0x13);
    uVar26 = uVar40 ^ (uVar26 << 0xd | uVar38 >> 0x13);
    uVar42 = (uVar22 << 0x15 | uVar35 >> 0xb) ^ uVar42;
    uVar22 = (uVar35 << 0x15 | uVar22 >> 0xb) ^ uVar35 + uVar44;
    uVar27 = uVar42 ^ 0x8000000;
    uVar38 = uVar22 + uVar17;
    uVar32 = uVar27 + uVar20 + uVar32 + (uint)CARRY4(uVar22,uVar17);
    uVar44 = uVar32 + uVar43 + (uint)CARRY4(uVar38,uVar26);
    uVar32 = (uVar42 << 0x10 | uVar22 >> 0x10) ^ uVar32;
    uVar42 = (uVar22 << 0x10 | uVar27 >> 0x10) ^ uVar38;
    uVar46 = uVar42 + uVar45;
    uVar35 = uVar44 ^ (uVar43 << 0x11 | uVar26 >> 0xf);
    uVar20 = uVar32 + uVar40 + (uint)CARRY4(uVar42,uVar45);
    uVar22 = uVar38 + uVar26 ^ (uVar26 << 0x11 | uVar43 >> 0xf);
    uVar27 = (uVar20 ^ 0x8000000) + uVar35 + (uint)CARRY4(uVar46,uVar22);
    uVar17 = uVar27 ^ (uVar35 << 0xd | uVar22 >> 0x13);
    uVar35 = uVar46 + uVar22 ^ (uVar22 << 0xd | uVar35 >> 0x13);
    uVar20 = (uVar32 << 0x15 | uVar42 >> 0xb) ^ uVar20;
    uVar32 = (uVar42 << 0x15 | uVar32 >> 0xb) ^ uVar46;
    uVar44 = uVar44 ^ 0xff;
    uVar40 = uVar32 + uVar44;
    uVar42 = uVar20 + uVar38 + uVar26 + (uint)CARRY4(uVar32,uVar44);
    uVar44 = uVar17 + uVar42 + (uint)CARRY4(uVar35,uVar40);
    uVar38 = uVar44 ^ (uVar17 << 0x11 | uVar35 >> 0xf);
    uVar26 = uVar35 + uVar40 ^ (uVar35 << 0x11 | uVar17 >> 0xf);
    uVar42 = (uVar20 << 0x10 | uVar32 >> 0x10) ^ uVar42;
    uVar20 = (uVar32 << 0x10 | uVar20 >> 0x10) ^ uVar40;
    uVar45 = uVar20 + uVar27;
    uVar32 = uVar42 + uVar46 + uVar22 + (uint)CARRY4(uVar20,uVar27);
    uVar17 = uVar38 + uVar32 + (uint)CARRY4(uVar26,uVar45);
    uVar22 = (uVar38 << 0xd | uVar26 >> 0x13) ^ uVar17;
    uVar27 = (uVar26 << 0xd | uVar38 >> 0x13) ^ uVar26 + uVar45;
    uVar32 = (uVar42 << 0x15 | uVar20 >> 0xb) ^ uVar32;
    uVar20 = (uVar20 << 0x15 | uVar42 >> 0xb) ^ uVar45;
    uVar42 = uVar20 + uVar44;
    uVar35 = uVar32 + uVar35 + uVar40 + (uint)CARRY4(uVar20,uVar44);
    uVar44 = (uVar32 << 0x10 | uVar20 >> 0x10) ^ uVar35;
    uVar20 = (uVar20 << 0x10 | uVar32 >> 0x10) ^ uVar42;
    uVar43 = uVar22 + uVar35 + (uint)CARRY4(uVar27,uVar42);
    uVar35 = uVar20 + uVar17;
    uVar38 = uVar44 + uVar26 + uVar45 + (uint)CARRY4(uVar20,uVar17);
    uVar26 = (uVar20 << 0x15 | uVar44 >> 0xb) ^ uVar35;
    uVar40 = (uVar22 << 0x11 | uVar27 >> 0xf) ^ uVar43;
    uVar32 = (uVar44 << 0x15 | uVar20 >> 0xb) ^ uVar38;
    uVar20 = uVar26 + uVar43;
    uVar17 = (uVar27 << 0x11 | uVar22 >> 0xf) ^ uVar27 + uVar42;
    uVar27 = uVar32 + uVar27 + uVar42 + (uint)CARRY4(uVar26,uVar43);
    uVar22 = (uVar40 << 0xd | uVar17 >> 0x13) ^ uVar40 + uVar38 + (uint)CARRY4(uVar17,uVar35);
    uVar17 = (uVar17 << 0xd | uVar40 >> 0x13) ^ uVar17 + uVar35;
    uVar22 = ((uVar20 ^ uVar32 >> 0x10) << 0x15 |
             ((uVar32 << 0x10 | uVar26 >> 0x10) ^ uVar27) >> 0xb) ^ (uVar17 << 0x11 | uVar22 >> 0xf)
             ^ uVar22 + uVar27 + (uint)CARRY4(uVar17,uVar20) ^ uVar17 + uVar20;
    iVar14 = *(int *)(param_1 + 0x10);
    uVar17 = uVar22 >> 0x19;
    local_1c4 = (int *)0x0;
    while( true ) {
      uVar22 = *(uint *)(param_1 + 0x14) & uVar22;
      pppuVar33 = *(uint ****)(iVar14 + uVar22);
      uVar20 = (uint)pppuVar33 ^ uVar17 * 0x1010101;
      piVar28 = (int *)(~uVar20 & 0x80808080 & uVar20 + 0xfefefeff);
      while (piVar28 != (int *)0x0) {
        uVar20 = uVar22 + ((uint)LZCOUNT((int)piVar28 << 0x18 | ((uint)piVar28 >> 8 & 0xff) << 0x10
                                         | ((uint)piVar28 >> 0x10 & 0xff) << 8 |
                                         (uint)piVar28 >> 0x18) >> 3) & *(uint *)(param_1 + 0x14);
        puVar23 = (uint *)(iVar14 + -0x10 + uVar20 * -0x10);
        piVar28 = (int *)((uint)((int)piVar28 + -1) & (uint)piVar28);
        if (uVar39 == *puVar23 && pppuVar16 == (uint ***)puVar23[1]) {
          piVar41 = *(int **)(iVar14 + uVar20 * -0x10 + -8);
          do {
            iVar14 = *piVar41;
            bVar2 = (bool)hasExclusiveAccess(piVar41);
          } while (!bVar2);
          *piVar41 = iVar14 + 1;
          if (iVar14 < 0) goto LAB_0098d594;
          ppppuVar36 = (undefined4 ****)(uint ***)0x5;
          goto LAB_0098cb98;
        }
      }
      if (((uint)pppuVar33 & 0x80808080 & (int)pppuVar33 << 1) != 0) break;
      local_1c4 = (int *)((int)local_1c4 + 4);
      uVar22 = uVar22 + (int)local_1c4;
    }
  }
  FUN_012cd8c4(&local_c8,param_1 + 0x30);
  if (local_94 == -0x80000000) {
    piVar28 = local_bc;
    pppuVar33 = local_c0;
    ppppuVar36 = local_c8;
    piVar41 = local_c4;
    if (local_c8 == (undefined4 ****)0x5) {
LAB_0098cf10:
      do {
        iVar14 = *piVar41;
        bVar2 = (bool)hasExclusiveAccess(piVar41);
      } while (!bVar2);
      *piVar41 = iVar14 + 1;
      if (iVar14 < 0) {
LAB_0098d594:
                    /* WARNING: Does not return */
        pcVar21 = (code *)software_udf(0xfdee,0x98d594);
        (*pcVar21)();
      }
      uVar20 = *(uint *)(param_1 + 0x2c) ^ 0x646f7261;
      uVar17 = *(uint *)(param_1 + 0x28) ^ 0x6e646f6d;
      uVar22 = *puVar31 ^ 0x70736575;
      uVar42 = uVar17 + uVar22;
      uVar43 = uVar42 ^ (uVar17 << 0xd | uVar20 >> 0x13);
      uVar22 = uVar20 + (*(uint *)(param_1 + 0x24) ^ 0x736f6d65) + (uint)CARRY4(uVar17,uVar22);
      uVar27 = uVar22 ^ (uVar20 << 0xd | uVar17 >> 0x13);
      uVar35 = *(uint *)(param_1 + 0x2c) ^ (uint)pppuVar16 ^ 0x74656462;
      uVar20 = *puVar31 ^ 0x6e657261;
      uVar17 = *(uint *)(param_1 + 0x28) ^ uVar39 ^ 0x79746573;
      uVar38 = uVar17 + uVar20;
      uVar32 = uVar35 + (*(uint *)(param_1 + 0x24) ^ 0x6c796765) + (uint)CARRY4(uVar17,uVar20);
      uVar20 = uVar27 + uVar32 + (uint)CARRY4(uVar43,uVar38);
      uVar26 = uVar20 ^ (uVar27 << 0x11 | uVar43 >> 0xf);
      uVar32 = uVar32 ^ (uVar35 << 0x10 | uVar17 >> 0x10);
      uVar17 = uVar38 ^ (uVar17 << 0x10 | uVar35 >> 0x10);
      uVar35 = uVar32 + uVar42 + (uint)CARRY4(uVar17,uVar22);
      uVar42 = uVar43 + uVar38 ^ (uVar43 << 0x11 | uVar27 >> 0xf);
      uVar27 = uVar17 + uVar22 ^ uVar39;
      uVar46 = uVar27 + uVar42;
      uVar40 = (uVar35 ^ (uint)pppuVar16) + uVar26 + (uint)CARRY4(uVar27,uVar42);
      uVar45 = uVar40 ^ (uVar26 << 0xd | uVar42 >> 0x13);
      uVar42 = uVar46 ^ (uVar42 << 0xd | uVar26 >> 0x13);
      uVar35 = (uVar32 << 0x15 | uVar17 >> 0xb) ^ uVar35;
      uVar17 = (uVar17 << 0x15 | uVar32 >> 0xb) ^ uVar17 + uVar22;
      uVar22 = uVar35 ^ 0x8000000;
      uVar44 = uVar17 + uVar20;
      uVar38 = uVar22 + uVar43 + uVar38 + (uint)CARRY4(uVar17,uVar20);
      uVar27 = (uVar17 << 0x10 | uVar22 >> 0x10) ^ uVar44;
      uVar26 = uVar38 + uVar45 + (uint)CARRY4(uVar44,uVar42);
      uVar38 = (uVar35 << 0x10 | uVar17 >> 0x10) ^ uVar38;
      uVar43 = uVar27 + uVar40;
      uVar20 = uVar38 + uVar46 + (uint)CARRY4(uVar27,uVar40);
      uVar22 = uVar26 ^ (uVar45 << 0x11 | uVar42 >> 0xf);
      uVar35 = uVar44 + uVar42 ^ (uVar42 << 0x11 | uVar45 >> 0xf);
      uVar45 = (uVar20 ^ 0x8000000) + uVar22 + (uint)CARRY4(uVar43,uVar35);
      uVar17 = uVar45 ^ (uVar22 << 0xd | uVar35 >> 0x13);
      uVar32 = uVar43 + uVar35 ^ (uVar35 << 0xd | uVar22 >> 0x13);
      uVar20 = (uVar38 << 0x15 | uVar27 >> 0xb) ^ uVar20;
      uVar26 = uVar26 ^ 0xff;
      uVar22 = (uVar27 << 0x15 | uVar38 >> 0xb) ^ uVar43;
      uVar40 = uVar22 + uVar26;
      uVar27 = uVar20 + uVar44 + uVar42 + (uint)CARRY4(uVar22,uVar26);
      uVar26 = uVar17 + uVar27 + (uint)CARRY4(uVar32,uVar40);
      uVar46 = uVar26 ^ (uVar17 << 0x11 | uVar32 >> 0xf);
      uVar42 = uVar32 + uVar40 ^ (uVar32 << 0x11 | uVar17 >> 0xf);
      uVar27 = (uVar20 << 0x10 | uVar22 >> 0x10) ^ uVar27;
      uVar22 = (uVar22 << 0x10 | uVar20 >> 0x10) ^ uVar40;
      uVar38 = uVar22 + uVar45;
      uVar17 = uVar27 + uVar43 + uVar35 + (uint)CARRY4(uVar22,uVar45);
      uVar20 = uVar46 + uVar17 + (uint)CARRY4(uVar42,uVar38);
      uVar44 = (uVar46 << 0xd | uVar42 >> 0x13) ^ uVar20;
      uVar43 = (uVar42 << 0xd | uVar46 >> 0x13) ^ uVar42 + uVar38;
      uVar17 = (uVar27 << 0x15 | uVar22 >> 0xb) ^ uVar17;
      uVar22 = (uVar22 << 0x15 | uVar27 >> 0xb) ^ uVar38;
      uVar27 = uVar22 + uVar26;
      uVar35 = uVar17 + uVar32 + uVar40 + (uint)CARRY4(uVar22,uVar26);
      uVar40 = uVar44 + uVar35 + (uint)CARRY4(uVar43,uVar27);
      uVar26 = (uVar44 << 0x11 | uVar43 >> 0xf) ^ uVar40;
      uVar35 = (uVar17 << 0x10 | uVar22 >> 0x10) ^ uVar35;
      uVar17 = (uVar22 << 0x10 | uVar17 >> 0x10) ^ uVar27;
      uVar22 = uVar17 + uVar20;
      uVar20 = uVar35 + uVar42 + uVar38 + (uint)CARRY4(uVar17,uVar20);
      uVar42 = (uVar17 << 0x15 | uVar35 >> 0xb) ^ uVar22;
      uVar32 = (uVar35 << 0x15 | uVar17 >> 0xb) ^ uVar20;
      uVar35 = uVar42 + uVar40;
      uVar17 = (uVar43 << 0x11 | uVar44 >> 0xf) ^ uVar43 + uVar27;
      uVar27 = uVar32 + uVar43 + uVar27 + (uint)CARRY4(uVar42,uVar40);
      uVar20 = (uVar26 << 0xd | uVar17 >> 0x13) ^ uVar26 + uVar20 + (uint)CARRY4(uVar17,uVar22);
      uVar17 = (uVar17 << 0xd | uVar26 >> 0x13) ^ uVar17 + uVar22;
      local_1c4 = (int *)(uVar17 + uVar35);
      if (*(int *)(param_1 + 0x18) == 0) {
        FUN_0074a98c(param_1 + 0x10,puVar31);
      }
      iVar14 = 0;
      uVar20 = ((uVar32 >> 0x10 ^ uVar35) << 0x15 |
               ((uVar32 << 0x10 | uVar42 >> 0x10) ^ uVar27) >> 0xb) ^
               (uVar17 << 0x11 | uVar20 >> 0xf) ^ uVar20 + uVar27 + (uint)CARRY4(uVar17,uVar35) ^
               (uint)local_1c4;
      puVar31 = *(uint **)(param_1 + 0x10);
      uVar22 = *(uint *)(param_1 + 0x14);
      bVar2 = false;
      uVar17 = uVar20;
      do {
        uVar17 = uVar22 & uVar17;
        uVar27 = *(uint *)((int)puVar31 + uVar17);
        uVar26 = uVar27 ^ (uVar20 >> 0x19) * 0x1010101;
        uVar26 = ~uVar26 & 0x80808080 & uVar26 + 0xfefefeff;
        while (uVar26 != 0) {
          uVar35 = uVar17 + ((uint)LZCOUNT(uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 |
                                           (uVar26 >> 0x10 & 0xff) << 8 | uVar26 >> 0x18) >> 3) &
                   uVar22;
          piVar28 = (int *)(uVar39 ^ puVar31[uVar35 * -4 + -4]);
          uVar26 = uVar26 - 1 & uVar26;
          if (piVar28 == (int *)0x0 && pppuVar16 == (uint ***)(puVar31 + uVar35 * -4 + -4)[1]) {
            piVar18 = (int *)puVar31[uVar35 * -4 + -2];
            puVar31[uVar35 * -4 + -2] = (uint)piVar41;
            DataMemoryBarrier(0xb);
            do {
              iVar14 = *piVar18;
              bVar2 = (bool)hasExclusiveAccess(piVar18);
            } while (!bVar2);
            *piVar18 = iVar14 + -1;
            if (iVar14 == 1) {
              DataMemoryBarrier(0xb);
              FUN_012c0df4();
            }
            goto LAB_0098d3e8;
          }
        }
        uVar26 = uVar27 & 0x80808080;
        piVar28 = local_1c4;
        if (bVar2) {
LAB_0098d378:
          if ((uVar26 & uVar27 << 1) != 0) goto LAB_0098d430;
          bVar2 = true;
          local_1c4 = piVar28;
        }
        else {
          if (uVar26 != 0) {
            piVar28 = (int *)(uVar17 + ((uint)LZCOUNT(uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10
                                                      | (uVar26 >> 0x10 & 0xff) << 8 |
                                                      uVar26 >> 0x18) >> 3) & uVar22);
            goto LAB_0098d378;
          }
          bVar2 = false;
        }
        iVar14 = iVar14 + 4;
        uVar17 = iVar14 + uVar17;
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
    local_64 = local_c4;
    local_60 = local_c0;
    local_5c = local_bc;
    local_30 = local_90;
    piStack_2c = local_8c;
    local_68 = (uint ***)local_c8;
    local_34 = local_94;
    FUN_012be0e4(&local_c8,&local_68,piVar15,6);
    piVar28 = local_bc;
    pppuVar33 = local_c0;
    piVar41 = local_c4;
    ppppuVar36 = local_c8;
    if (local_c8 == (undefined4 ****)0x5) {
      local_100 = local_60;
      piStack_fc = local_5c;
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
      piStack_cc = piStack_2c;
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
        piVar41 = (int *)thunk_FUN_016d4a50(0x60);
        if (piVar41 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x60);
        }
        FUN_016dd1aa(piVar41,&local_c8,0x60);
        goto LAB_0098cf10;
      }
      piVar28 = local_64;
      pppuVar33 = local_68;
      ppppuVar36 = (undefined4 ****)(uint ***)0x0;
      piVar41 = (int *)0x0;
    }
    else {
      FUN_00989c5c(&local_68);
    }
  }
LAB_0098cb98:
  pppuVar16 = pppuVar33;
  FUN_01282570(puVar19);
  FUN_01282570(uVar30);
  if (*puVar19 == 8) {
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(puVar19);
      if (bVar2) {
        *puVar19 = 0;
        ppppuVar12 = local_c8;
        piVar18 = local_bc;
        goto joined_r0x0098cd8c;
      }
    } while (*puVar19 == 8);
  }
  goto LAB_0098cbd8;
LAB_0098d430:
  uVar17 = (uint)*(char *)((int)puVar31 + (int)piVar28);
  if (-1 < (int)uVar17) {
    uVar17 = *puVar31 & 0x80808080;
    uVar26 = LZCOUNT(uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
                     uVar17 >> 0x18);
    uVar17 = (uint)*(byte *)((int)puVar31 + (uVar26 >> 3));
    piVar28 = (int *)(uVar26 >> 3);
  }
  iVar14 = *(int *)(param_1 + 0x18);
  iVar37 = *(int *)(param_1 + 0x1c);
  bVar1 = (byte)(uVar20 >> 0x19);
  *(byte *)((int)puVar31 + (int)piVar28) = bVar1;
  *(uint *)(param_1 + 0x18) = iVar14 - (uVar17 & 1);
  *(int *)(param_1 + 0x1c) = iVar37 + 1;
  *(byte *)((int)puVar31 + ((uint)(piVar28 + -1) & uVar22) + 4) = bVar1;
  puVar31[(int)piVar28 * -4 + -4] = uVar39;
  puVar31[(int)piVar28 * -4 + -3] = (uint)pppuVar16;
  puVar31[(int)piVar28 * -4 + -2] = (uint)piVar41;
LAB_0098d3e8:
  FUN_01282570(puVar19);
  FUN_01282570(uVar30);
  ppppuVar36 = (undefined4 ****)0x5;
  if (*puVar19 == 8) {
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(puVar19);
      if (bVar2) {
        *puVar19 = 0;
        ppppuVar12 = local_c8;
        piVar18 = local_bc;
        goto LAB_0098cbe8;
      }
    } while (*puVar19 == 8);
  }
LAB_0098cbd8:
  ClearExclusiveLocal();
  FUN_0127db4c();
  ppppuVar12 = local_c8;
  piVar18 = local_bc;
joined_r0x0098cd8c:
  local_c8 = ppppuVar36;
  local_bc = piVar28;
  if (local_c8 == (undefined4 ****)0x5) {
LAB_0098cbe8:
    local_bc = piVar18;
    local_c8 = ppppuVar12;
    do {
      bVar2 = (bool)hasExclusiveAccess(piVar41 + 2);
    } while (!bVar2);
    piVar41[2] = param_6;
    piVar41[3] = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar14 = *piVar41;
      bVar2 = (bool)hasExclusiveAccess(piVar41);
    } while (!bVar2);
    *piVar41 = iVar14 + -1;
    if (iVar14 == 1) {
      DataMemoryBarrier(0xb);
      FUN_012c0df4(piVar41);
    }
    thunk_FUN_016d3fb4(piVar15);
    if (pppuVar9 != (uint ***)0x0) {
      thunk_FUN_016d3fb4(piVar10);
    }
    if (!bVar8) {
      thunk_FUN_016d3fb4(piVar13);
    }
    if (!bVar7) {
      thunk_FUN_016d3fb4(local_188);
    }
    if (!bVar6) {
      thunk_FUN_016d3fb4(local_184);
    }
    if (!bVar5) {
      thunk_FUN_016d3fb4(local_180);
    }
    if (bVar4) {
      pcVar21 = (code *)*param_5;
    }
    else {
      thunk_FUN_016d3fb4(local_17c);
      pcVar21 = (code *)*param_5;
    }
    if (pcVar21 != (code *)0x0) {
      (*pcVar21)(param_4);
    }
    if (param_5[1] != 0) {
      thunk_FUN_016d3fb4(param_4);
    }
    return;
  }
LAB_0098d55c:
  local_c4 = piVar41;
  local_c0 = pppuVar16;
                    /* WARNING: Subroutine does not return */
  FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_c8,&DAT_01868ed8,&DAT_01886b2c);
}

