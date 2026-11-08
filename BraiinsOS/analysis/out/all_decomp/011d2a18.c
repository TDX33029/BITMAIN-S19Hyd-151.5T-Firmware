// FUN_011d2a18 @ 011d2a18 size=1792 calls_out=17 calls_in=0
// strings: $ref~! | a Display implementation returned an error unexpectedly

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_011d2a18(undefined4 *param_1,int param_2,char *param_3,undefined4 param_4,int param_5,
                 undefined4 param_6)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  bool bVar16;
  int local_14c;
  uint local_148;
  int local_144;
  uint local_140;
  uint local_13c;
  int local_138;
  uint local_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 local_f4;
  uint local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  int local_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint uStack_98;
  uint uStack_94;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined1 local_50;
  char *local_4c;
  undefined8 local_38;
  int *local_30;
  undefined4 local_2c;
  
  if (*param_3 != '\x04') {
    uStack_bc = 0;
    uStack_c4 = 0;
    local_b8 = 0;
    uStack_94 = 0;
    local_9c = 0;
    uStack_c8 = 0x80000000;
    local_a4 = 1;
    local_a8 = 1;
    uStack_c0 = 4;
    uStack_98 = 8;
    local_a0 = CONCAT31(local_a0._1_3_,4);
    puVar7 = (uint *)thunk_FUN_016d4a50(0x20);
    if (puVar7 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x20);
    }
    *puVar7 = local_a8;
    puVar7[1] = local_a4;
    puVar7[2] = local_a0;
    puVar7[3] = local_9c;
    puVar7[4] = uStack_98;
    puVar7[5] = uStack_94;
    puVar7[6] = (uint)uStack_90;
    puVar7[7] = uStack_90._4_4_;
    *param_1 = uStack_c8;
    param_1[1] = uStack_c4;
    param_1[2] = uStack_c0;
    param_1[3] = uStack_bc;
    param_1[4] = puVar7;
    param_1[5] = uStack_b4;
    param_1[6] = uStack_b0;
    return;
  }
  uVar9 = *(uint *)(param_3 + 0xc);
  bVar16 = 0x3fffffe < uVar9;
  bVar15 = uVar9 == 0x3ffffff;
  uVar10 = uVar9 * 0x40;
  if (uVar9 < 0x4000000) {
    bVar16 = 0x7ffffffb < uVar10;
    bVar15 = uVar10 == 0x7ffffffc;
  }
  if (bVar16 && !bVar15) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  if (uVar10 == 0) {
    local_144 = 4;
    local_148 = 0;
  }
  else {
    local_144 = thunk_FUN_016d4a50(uVar10);
    local_148 = uVar9;
    if (local_144 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar10);
    }
  }
  local_140 = 0;
  if (uVar9 == 0) {
    local_134 = 0;
    local_138 = 4;
    local_13c = 0;
  }
  else {
    local_14c = thunk_FUN_016d4a50(uVar9 << 2);
    if (local_14c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar9 << 2);
    }
    uVar10 = 0;
    iVar12 = *(int *)(param_3 + 8);
    iVar14 = 0;
    iVar13 = uVar9 * 0x18;
    local_134 = 0;
    local_13c = uVar9;
    local_138 = local_14c;
    do {
      local_a8 = 0x80000001;
      local_a4 = iVar14;
      local_9c = param_4;
      FUN_011c9534(&local_130,param_2,iVar12,&local_a8,param_5,param_6);
      if ((char)local_f4 == '\0') {
        FUN_011644f8(&local_130);
      }
      else {
        if (uVar10 == local_13c) {
          FUN_01286e0c(&local_13c);
          local_14c = local_138;
        }
        uVar9 = local_140;
        *(int *)(local_14c + uVar10 * 4) = iVar14;
        uVar10 = uVar10 + 1;
        local_134 = uVar10;
        if (local_140 == local_148) {
          FUN_011ca644(&local_148);
        }
        puVar3 = (undefined4 *)(local_144 + uVar9 * 0x40);
        *puVar3 = local_130;
        puVar3[1] = uStack_12c;
        puVar3[2] = uStack_128;
        puVar3[3] = uStack_124;
        puVar3[4] = uStack_120;
        puVar3[5] = local_11c;
        puVar3[6] = uStack_118;
        puVar3[7] = uStack_114;
        puVar3[8] = uStack_110;
        puVar3[9] = uStack_10c;
        puVar3[10] = local_108;
        puVar3[0xb] = uStack_104;
        puVar3[0xc] = uStack_100;
        puVar3[0xd] = uStack_fc;
        puVar3[0xe] = uStack_f8;
        puVar3[0xf] = local_f4;
        local_140 = uVar9 + 1;
      }
      iVar2 = local_138;
      uVar9 = local_13c;
      iVar12 = iVar12 + 0x18;
      iVar14 = iVar14 + 1;
      iVar13 = iVar13 + -0x18;
    } while (iVar13 != 0);
    if (uVar10 != 0) {
      iVar13 = uVar10 * 0x18;
      uVar4 = 0;
      if (0x5555555 < uVar10) {
LAB_011d2cb0:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar4,iVar13);
      }
      if (iVar13 == 0) {
        uVar6 = 8;
        uVar8 = 0;
      }
      else {
        uVar6 = thunk_FUN_016d4a50(iVar13);
        uVar8 = uVar10;
        if (uVar6 == 0) {
          uVar4 = 8;
          goto LAB_011d2cb0;
        }
      }
      puVar3 = (undefined4 *)(uVar6 + 8);
      iVar13 = uVar10 << 2;
      local_a0 = 0;
      do {
        uVar4 = *(undefined4 *)(iVar2 + local_a0 * 4);
        local_a0 = local_a0 + 1;
        *(undefined1 *)(puVar3 + -2) = 2;
        *puVar3 = 0;
        iVar13 = iVar13 + -4;
        puVar3[1] = 0;
        puVar3[2] = uVar4;
        puVar3[3] = 0;
        puVar3 = puVar3 + 6;
      } while (iVar13 != 0);
      local_a8 = uVar8;
      local_a4 = uVar6;
      if (uVar9 != 0) {
        thunk_FUN_016d3fb4(iVar2);
      }
      uStack_94 = local_a0;
      local_9c = local_a8;
      uStack_c0._3_1_ = (undefined1)local_a0;
      uStack_bc._0_3_ = (undefined3)(local_a0 >> 8);
      uStack_c4._3_1_ = (undefined1)local_a4;
      uStack_c0._0_3_ = (undefined3)(local_a4 >> 8);
      uStack_c8._3_1_ = (undefined1)local_a8;
      uStack_c4._0_3_ = (undefined3)(local_a8 >> 8);
      uStack_98 = local_a4;
      local_a4 = 1;
      local_a8 = 1;
      local_a0 = CONCAT31((undefined3)uStack_c8,4);
      puVar7 = (uint *)thunk_FUN_016d4a50(0x20);
      if (puVar7 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x20);
      }
      *puVar7 = local_a8;
      puVar7[1] = local_a4;
      puVar7[2] = local_a0;
      puVar7[3] = local_9c;
      puVar7[4] = uStack_98;
      puVar7[5] = uStack_94;
      puVar7[6] = (uint)uStack_90;
      puVar7[7] = uStack_90._4_4_;
      *param_1 = 0x80000000;
      param_1[1] = local_148;
      param_1[2] = local_144;
      param_1[3] = local_140;
      param_1[4] = puVar7;
      return;
    }
  }
  if (param_5 == 0) {
    local_f0 = 0;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_5 + 0x14) != 0) {
      FUN_011f6248((undefined4 *)(param_5 + 0xc),param_5);
    }
    piVar5 = *(int **)(param_5 + 0xc);
    do {
      iVar13 = *piVar5;
      bVar15 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar15);
    *piVar5 = iVar13 + 1;
    if (iVar13 < 0) goto LAB_011d3394;
    uVar8 = *(uint *)(param_2 + 8);
    uVar4 = *(undefined4 *)(param_5 + 0x10);
    uVar9 = (*(int **)(param_5 + 4))[1];
    iVar13 = *(int *)(param_2 + 4) + 8;
    uVar11 = *(undefined4 *)(param_5 + 0xc);
    uVar10 = 0;
    if (uVar9 <= uVar8) {
      iVar12 = thunk_FUN_016dd50a(**(int **)(param_5 + 4) + 8,iVar13,uVar9);
      uVar10 = uVar9;
      if (iVar12 != 0) {
        uVar10 = 0;
      }
    }
    local_d8 = FUN_011e1508(iVar13 + uVar10,uVar8 - uVar10);
    local_e4 = 3;
    local_f0 = 2;
    local_e0 = uVar11;
    local_dc = uVar4;
  }
  iVar13 = thunk_FUN_016d4a50(0x18);
  if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x18);
  }
  piVar5 = *(int **)(param_2 + 4);
  uVar4 = *(undefined4 *)(param_2 + 8);
  do {
    iVar13 = *piVar5;
    bVar15 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar15);
  *piVar5 = iVar13 + 1;
  if (-1 < iVar13) {
    local_38 = FUN_01238114(param_4);
    local_88 = 0x8000000f;
    local_50 = 6;
    local_a8 = local_f0;
    local_a4 = uStack_ec;
    local_a0 = uStack_e8;
    local_9c = local_e4;
    uStack_98 = local_e0;
    uStack_94 = local_dc;
    local_4c = param_3;
    local_30 = piVar5;
    local_2c = uVar4;
    uStack_90 = local_d8;
    iVar13 = thunk_FUN_016d4a50(0x80);
    if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x80);
    }
    FUN_016dd1aa(iVar13,&local_a8,0x80);
    iVar12 = 0x22;
    if (0x80000009 < *(uint *)(iVar13 + 0x20)) {
      iVar12 = *(uint *)(iVar13 + 0x20) + 0x7ffffff6;
    }
                    /* WARNING: Could not recover jumptable at 0x011d2e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    local_cc = iVar13;
    (*(code *)(&DAT_011d2e5c + *(int *)(&DAT_011d2e5c + iVar12 * 4)))();
    return;
  }
LAB_011d3394:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x11d3394);
  (*pcVar1)();
}

