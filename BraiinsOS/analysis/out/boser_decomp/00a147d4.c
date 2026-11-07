// FUN_00a147d4 @ 00a147d4 size=1460 calls_out=8 calls_in=5
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00a147d4(uint *param_1,int *param_2)

{
  bool bVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 **ppuVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  uint *puVar18;
  uint *puVar19;
  uint uVar20;
  undefined1 uVar21;
  uint local_118;
  undefined2 local_114;
  undefined1 local_112;
  undefined4 *local_110;
  uint local_10c;
  undefined2 local_104;
  undefined1 local_102;
  undefined4 *local_100;
  uint local_fc;
  undefined4 *local_f8;
  undefined4 *local_f4;
  undefined4 *local_f0;
  uint local_ec;
  uint *local_e8;
  undefined4 *local_e4;
  undefined4 *local_e0;
  undefined4 *local_dc;
  uint local_d8;
  undefined4 **local_d4;
  undefined1 auStack_d0 [48];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 *local_80;
  undefined4 *local_7c;
  undefined4 *local_78;
  undefined *local_2c;
  undefined2 *local_28;
  
  puVar8 = (undefined4 *)param_2[2];
  puVar18 = (uint *)*param_2;
  iVar11 = param_2[1];
  if (puVar8 < &DAT_0000001f) {
    if (puVar8 == (undefined4 *)0x0) {
      puVar13 = (undefined4 *)0x0;
      local_7c = (undefined4 *)0x8;
      local_80 = (undefined4 *)0x0;
      ppuVar9 = (undefined4 **)0x0;
    }
    else {
      local_7c = (undefined4 *)FUN_01298504((int)puVar8 * 0x58,8);
      if (local_7c == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(8,(int)puVar8 * 0x58);
      }
      iVar10 = (int)puVar8 * 0x50;
      puVar7 = local_7c + 1;
      ppuVar9 = &local_f8;
      local_78 = (undefined4 *)0x0;
      puVar13 = (undefined4 *)((iVar10 - 0x50U) / 0x50 + 1);
      iVar12 = iVar11;
      local_80 = puVar8;
      do {
        FUN_01bed4e2(ppuVar9,iVar12,0x50);
        puVar7[-1] = 0;
        FUN_01bed4e2(puVar7,ppuVar9,0x50);
        puVar7 = puVar7 + 0x16;
        iVar12 = iVar12 + 0x50;
        iVar10 = iVar10 + -0x50;
      } while (iVar10 != 0);
    }
    uVar21 = 0x78;
    local_78 = puVar13;
    FUN_0132b958(puVar18,iVar11,4,0x50);
    puVar7 = local_78;
    local_f8 = local_80;
    local_f4 = local_7c;
    local_f0 = local_78;
    if (local_78 < local_80) {
      uVar21 = 0xac;
      iVar11 = FUN_0189bb64(&local_f8,local_78,8,0x58);
      if (iVar11 != -0x7fffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620();
      }
    }
    uVar20 = 0x80000000;
    puVar15 = local_f0;
    puVar17 = local_f4;
    puVar19 = puVar18;
LAB_00a14cc0:
    *(undefined1 *)((int)param_1 + 0x1b) = local_112;
    *(undefined1 *)(param_1 + 6) = uVar21;
    param_1[3] = local_10c;
    *param_1 = (uint)puVar17;
    param_1[1] = (uint)puVar15;
    param_1[2] = (uint)local_110;
    param_1[4] = (uint)puVar19;
    param_1[5] = (uint)puVar13;
    *(undefined2 *)((int)param_1 + 0x19) = local_114;
    param_1[7] = (uint)puVar7;
    param_1[8] = local_118;
    param_1[9] = (uint)ppuVar9;
    param_1[10] = uVar20;
    param_1[0xb] = 8;
    param_1[0xc] = 0;
    return;
  }
  local_94 = 0;
  local_98 = 0;
  local_9c = 0;
  local_a0 = 0;
  puVar13 = (undefined4 *)thunk_FUN_01be5118(0x80);
  if (puVar13 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x80);
  }
  puVar13[3] = 0;
  *puVar13 = 1;
  puVar13[1] = 1;
  puVar7 = puVar13 + 2;
  *puVar7 = 0;
  FUN_01bed4e2(puVar13 + 4,&local_f8,0x68);
  *(undefined2 *)(puVar13 + 0x1f) = 1;
  puVar13[0x1e] = 0xffffffff;
  local_e4 = (undefined4 *)0x0;
  local_ec = 0;
  local_f4 = (undefined4 *)&DAT_00000001;
  local_f8 = (undefined4 *)0x1;
  local_f0 = puVar13;
  local_e0 = puVar7;
  local_dc = puVar7;
  puVar2 = (uint *)thunk_FUN_01be5118(0x20);
  if (puVar2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x20);
  }
  *puVar2 = (uint)local_f8;
  puVar2[1] = (uint)local_f4;
  puVar2[2] = (uint)local_f0;
  puVar2[3] = local_ec;
  puVar13 = (undefined4 *)0x0;
  puVar2[4] = (uint)local_e8;
  puVar2[5] = (uint)local_e4;
  puVar2[6] = (uint)local_e0;
  puVar2[7] = (uint)local_dc;
  local_fc = 0;
  local_100 = (undefined4 *)0x0;
  local_118 = 8;
  iVar10 = iVar11;
  ppuVar9 = (undefined4 **)0x0;
  puVar7 = (undefined4 *)0x0;
  puVar14 = (undefined4 *)0x0;
  puVar16 = (undefined4 *)0x0;
  do {
    FUN_01bed4e2(auStack_d0,iVar10,0x50);
    local_f0 = local_100;
    local_ec = local_fc;
    local_d8 = local_118;
    local_f8 = puVar16;
    local_f4 = puVar14;
    local_e8 = puVar2;
    local_e4 = puVar13;
    local_dc = puVar7;
    local_d4 = ppuVar9;
    FUN_01bed4e2(&local_80,iVar10,0x50);
    local_f8 = (undefined4 *)((int)puVar16 + 1);
    uVar20 = puVar2[2];
    iVar10 = iVar10 + 0x50;
    puVar19 = puVar2 + 1;
    local_f4 = (undefined4 *)((int)puVar14 + (uint)((undefined4 *)0xfffffffe < puVar16));
LAB_00a14a50:
    uVar4 = *puVar19;
    do {
      if (uVar4 == 0xffffffff) goto LAB_00a14aa4;
      if ((int)uVar4 < 0) {
        local_28 = &DAT_0132b6a0;
        local_2c = &DAT_01d2e878;
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_00590e5f,&local_2c,&DAT_01d2e880);
      }
      uVar5 = *puVar19;
      if (uVar5 == uVar4) {
        bVar1 = (bool)hasExclusiveAccess(puVar19);
        if (bVar1) {
          *puVar19 = uVar4 + 1;
        }
        bVar6 = false;
        if (bVar1) {
          DataMemoryBarrier(0xb);
          bVar6 = true;
        }
      }
      else {
        bVar6 = false;
        ClearExclusiveLocal();
      }
      uVar4 = uVar5;
    } while (!bVar6);
    puVar3 = (undefined4 *)thunk_FUN_01be5118(0x80);
    if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x80);
    }
    puVar13 = puVar3 + 2;
    *puVar13 = 1;
    puVar3[3] = 0;
    *puVar3 = 1;
    puVar3[1] = 1;
    FUN_01bed4e2(puVar3 + 4,&local_80,0x50);
    ppuVar9 = local_d4;
    puVar7 = local_dc;
    puVar19 = local_e8;
    puVar15 = local_f4;
    puVar17 = local_f8;
    puVar3[0x18] = puVar16;
    puVar3[0x19] = puVar14;
    *(undefined2 *)(puVar3 + 0x1f) = 1;
    puVar3[0x1a] = uVar20 + 8;
    puVar3[0x1b] = 0;
    puVar3[0x1c] = 0;
    puVar3[0x1d] = 0;
    puVar3[0x1e] = puVar2;
    local_e0 = (undefined4 *)((uint)CONCAT12(local_102,local_104) << 8);
    DataMemoryBarrier(0xb);
    do {
      bVar6 = (bool)hasExclusiveAccess(&local_e4);
    } while (!bVar6);
    DataMemoryBarrier(0xb);
    if (local_e4 == (undefined4 *)0x0) {
      puVar3[0x1c] = 1;
      DataMemoryBarrier(0xb);
      puVar3[0x1a] = 0;
    }
    else {
      do {
        DataMemoryBarrier(0xb);
      } while (local_e4[0x18] == local_e8[2] + 8);
      puVar3[0x1c] = local_e4[0x1a] + 1;
      DataMemoryBarrier(0xb);
      puVar3[0x1a] = local_e4;
      local_e4[0x19] = puVar13;
    }
    puVar3[0x1d] = 0;
    puVar2 = local_e8 + 6;
    DataMemoryBarrier(0xb);
    do {
      uVar20 = *puVar2;
      bVar6 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar6);
    *puVar2 = (uint)puVar13;
    DataMemoryBarrier(0xb);
    *(undefined4 **)(uVar20 + 0x6c) = puVar13;
    local_110 = local_f0;
    local_10c = local_ec;
    local_118 = local_d8;
    local_114 = local_104;
    local_112 = local_102;
    puVar14 = local_f4;
    puVar16 = local_f8;
    puVar2 = local_e8;
    local_100 = local_110;
    local_fc = local_10c;
    local_e4 = puVar13;
    if (iVar10 == iVar11 + (int)puVar8 * 0x50) {
      FUN_0132b958(puVar18,iVar11,4,0x50);
      uVar21 = 0;
      uVar20 = 0;
      goto LAB_00a14cc0;
    }
  } while( true );
LAB_00a14aa4:
  HintYield();
  goto LAB_00a14a50;
}

