// FUN_00a16528 @ 00a16528 size=1448 calls_out=8 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00a16528(uint *param_1,uint *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined4 *unaff_r4;
  uint unaff_r6;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint local_148;
  undefined4 *local_144;
  undefined2 local_13c;
  undefined1 local_13a;
  undefined4 *local_138;
  uint local_134;
  undefined2 local_12c;
  undefined1 local_12a;
  undefined4 *local_128;
  uint local_124;
  uint local_120;
  uint local_11c;
  undefined4 *local_118;
  uint local_114;
  uint *local_110;
  undefined4 *local_10c;
  undefined4 *local_108;
  undefined4 *local_104;
  uint local_100;
  uint local_fc;
  undefined1 auStack_f8 [72];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  uint local_90;
  uint local_8c;
  uint local_88;
  undefined *local_2c;
  undefined2 *local_28;
  
  uVar10 = param_2[2];
  uVar15 = *param_2;
  puVar16 = (uint *)param_2[1];
  if (uVar10 < 0x1f) {
    if (uVar10 == 0) {
      uVar13 = 0;
      local_8c = 8;
      local_90 = 0;
    }
    else {
      local_8c = FUN_01298504(uVar10 * 0x68,8);
      if (local_8c == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(8,uVar10 * 0x68);
      }
      iVar9 = uVar10 * 100;
      unaff_r4 = (undefined4 *)(local_8c + 4);
      local_88 = 0;
      uVar13 = (iVar9 - 100U) / 100 + 1;
      puVar11 = puVar16;
      local_90 = uVar10;
      do {
        FUN_01bed4e2(&local_120,puVar11,100);
        unaff_r4[-1] = 0;
        FUN_01bed4e2(unaff_r4,&local_120,100);
        unaff_r4 = unaff_r4 + 0x1a;
        puVar11 = puVar11 + 0x19;
        iVar9 = iVar9 + -100;
      } while (iVar9 != 0);
      unaff_r6 = 0;
    }
    local_144 = (undefined4 *)0xa169d0;
    local_88 = uVar13;
    FUN_0132b958(uVar15,puVar16,4,100);
    local_148 = local_88;
    local_120 = local_90;
    local_11c = local_8c;
    local_118 = (undefined4 *)local_88;
    if (local_88 < local_90) {
      local_144 = (undefined4 *)0xa16a04;
      iVar9 = FUN_0189bb64(&local_120,local_88,8,0x68);
      if (iVar9 != -0x7fffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620();
      }
    }
    uVar10 = 0x80000000;
    uVar13 = local_11c;
    puVar2 = local_118;
    uVar6 = uVar15;
    puVar11 = puVar16;
LAB_00a16a1c:
    *(char *)(param_1 + 6) = (char)local_148;
    param_1[2] = (uint)local_138;
    param_1[3] = local_134;
    param_1[4] = (uint)puVar11;
    param_1[5] = (uint)local_144;
    *param_1 = uVar13;
    param_1[1] = (uint)puVar2;
    *(undefined2 *)((int)param_1 + 0x19) = local_13c;
    *(undefined1 *)((int)param_1 + 0x1b) = local_13a;
    param_1[7] = (uint)unaff_r4;
    param_1[8] = uVar6;
    param_1[9] = unaff_r6;
    param_1[10] = uVar10;
    param_1[0xb] = 8;
    param_1[0xc] = 0;
    return;
  }
  local_a4 = 0;
  local_a8 = 0;
  local_ac = 0;
  local_b0 = 0;
  puVar2 = (undefined4 *)thunk_FUN_01be5118(0x98);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x98);
  }
  puVar2[3] = 0;
  *puVar2 = 1;
  puVar2[1] = 1;
  puVar4 = puVar2 + 2;
  *puVar4 = 0;
  FUN_01bed4e2(puVar2 + 4,&local_120,0x80);
  *(undefined2 *)(puVar2 + 0x25) = 1;
  puVar2[0x24] = 0xffffffff;
  local_10c = (undefined4 *)0x0;
  local_114 = 0;
  local_11c = 1;
  local_120 = 1;
  local_118 = puVar2;
  local_108 = puVar4;
  local_104 = puVar4;
  puVar3 = (uint *)thunk_FUN_01be5118(0x20);
  if (puVar3 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x20);
  }
  *puVar3 = local_120;
  puVar3[1] = local_11c;
  puVar3[2] = (uint)local_118;
  puVar3[3] = local_114;
  puVar3[4] = (uint)local_110;
  puVar3[5] = (uint)local_10c;
  puVar3[6] = (uint)local_108;
  puVar3[7] = (uint)local_104;
  local_124 = 0;
  local_128 = (undefined4 *)0x0;
  local_144 = (undefined4 *)0x0;
  puVar5 = puVar16;
  puVar4 = (undefined4 *)0x0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar6 = 8;
  do {
    FUN_01bed4e2(auStack_f8,puVar5,100);
    local_118 = local_128;
    local_114 = local_124;
    local_10c = local_144;
    local_120 = uVar13;
    local_11c = uVar14;
    local_110 = puVar3;
    local_104 = puVar4;
    local_100 = uVar6;
    local_fc = uVar12;
    FUN_01bed4e2(&local_90,puVar5,100);
    local_120 = uVar13 + 1;
    uVar12 = puVar3[2];
    puVar11 = puVar3 + 1;
    puVar5 = puVar5 + 0x19;
    local_11c = uVar14 + (0xfffffffe < uVar13);
LAB_00a1679c:
    uVar6 = *puVar11;
    do {
      if (uVar6 == 0xffffffff) goto LAB_00a167f0;
      if ((int)uVar6 < 0) {
        local_28 = &DAT_0132b6a0;
        local_2c = &DAT_01d2e878;
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_00590e5f,&local_2c,&DAT_01d2e880);
      }
      uVar7 = *puVar11;
      if (uVar7 == uVar6) {
        bVar1 = (bool)hasExclusiveAccess(puVar11);
        if (bVar1) {
          *puVar11 = uVar6 + 1;
        }
        bVar8 = false;
        if (bVar1) {
          DataMemoryBarrier(0xb);
          bVar8 = true;
        }
      }
      else {
        bVar8 = false;
        ClearExclusiveLocal();
      }
      uVar6 = uVar7;
    } while (!bVar8);
    puVar4 = (undefined4 *)thunk_FUN_01be5118(0x98);
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x98);
    }
    local_144 = puVar4 + 2;
    *puVar4 = 1;
    puVar4[1] = 1;
    puVar4[4] = uVar13;
    puVar4[5] = uVar14;
    *local_144 = 1;
    puVar4[3] = 0;
    FUN_01bed4e2(puVar4 + 6,&local_90,100);
    unaff_r6 = local_fc;
    uVar6 = local_100;
    unaff_r4 = local_104;
    puVar11 = local_110;
    puVar2 = (undefined4 *)local_11c;
    uVar13 = local_120;
    *(undefined2 *)(puVar4 + 0x25) = 1;
    puVar4[0x20] = uVar12 + 8;
    puVar4[0x21] = 0;
    puVar4[0x22] = 0;
    puVar4[0x23] = 0;
    puVar4[0x24] = puVar3;
    local_108 = (undefined4 *)((uint)CONCAT12(local_12a,local_12c) << 8);
    DataMemoryBarrier(0xb);
    do {
      bVar8 = (bool)hasExclusiveAccess(&local_10c);
    } while (!bVar8);
    DataMemoryBarrier(0xb);
    if (local_10c == (undefined4 *)0x0) {
      puVar4[0x22] = 1;
      DataMemoryBarrier(0xb);
      puVar4[0x20] = 0;
    }
    else {
      do {
        DataMemoryBarrier(0xb);
      } while (local_10c[0x1e] == local_110[2] + 8);
      puVar4[0x22] = local_10c[0x20] + 1;
      DataMemoryBarrier(0xb);
      puVar4[0x20] = local_10c;
      local_10c[0x1f] = local_144;
    }
    puVar4[0x23] = 0;
    puVar3 = local_110 + 6;
    DataMemoryBarrier(0xb);
    do {
      uVar12 = *puVar3;
      bVar8 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar8);
    *puVar3 = (uint)local_144;
    DataMemoryBarrier(0xb);
    *(undefined4 **)(uVar12 + 0x84) = local_144;
    local_13a = local_12a;
    local_138 = local_118;
    local_134 = local_114;
    local_13c = local_12c;
    local_148 = 0;
    puVar4 = local_104;
    uVar12 = local_fc;
    uVar14 = local_11c;
    puVar3 = local_110;
    local_128 = local_138;
    local_124 = local_134;
    local_10c = local_144;
    if (puVar5 == puVar16 + uVar10 * 0x19) {
      FUN_0132b958(uVar15,puVar16,4,100);
      uVar10 = 0;
      goto LAB_00a16a1c;
    }
  } while( true );
LAB_00a167f0:
  HintYield();
  goto LAB_00a1679c;
}

