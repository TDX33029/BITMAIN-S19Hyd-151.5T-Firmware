// FUN_01671830 @ 01671830 size=1492 calls_out=11 calls_in=5
// strings: 

/* WARNING: Removing unreachable block (ram,0x016719e0) */
/* WARNING: Removing unreachable block (ram,0x016719ec) */
/* WARNING: Removing unreachable block (ram,0x016719f4) */
/* WARNING: Removing unreachable block (ram,0x01671a00) */

void FUN_01671830(uint *param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  uint local_120;
  uint *local_11c;
  uint local_118;
  uint local_114;
  uint *local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  uint *local_100;
  uint local_fc;
  undefined4 *local_f8;
  undefined *puStack_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  uint local_e8;
  uint *local_e4;
  uint local_e0;
  int local_dc;
  undefined4 *local_d8;
  int local_d0 [18];
  uint local_88;
  uint *local_84;
  uint *local_80;
  uint local_7c;
  undefined4 *local_78;
  undefined *local_74;
  int local_70;
  int local_6c;
  int local_68;
  undefined4 local_64;
  uint *local_5c;
  undefined4 *local_58;
  
  uVar11 = *(undefined4 *)(param_2 + 8);
  uVar7 = *(undefined4 *)(param_2 + 0xc);
  local_e0 = 0;
  local_e4 = (uint *)&DAT_00000004;
  local_e8 = 0;
  local_f0 = uVar11;
  local_ec = uVar7;
  FUN_016699f8(local_d0,param_2);
  if (local_d0[0] != -0x80000000) {
    FUN_0166e3e8(&local_e8);
    puVar2 = local_e4;
    iVar12 = 0x48;
    FUN_016dd1aa(local_e4,local_d0,0x48);
    local_e0 = 1;
LAB_0167192c:
    uVar9 = local_e0;
    puVar6 = *(uint **)(param_2 + 8);
    iVar8 = *(int *)(param_2 + 0xc);
    if ((iVar8 == 0) || ((char)*puVar6 != '.')) {
      local_80 = (uint *)&DAT_00000004;
      local_88 = 1;
      local_104 = local_e8;
      local_100 = local_e4;
      local_fc = local_e0;
      *(uint **)(param_2 + 8) = puVar6;
      *(int *)(param_2 + 0xc) = iVar8;
      local_78 = (undefined4 *)0x0;
      local_7c = 0;
      local_84 = (uint *)0x0;
      local_108 = 3;
    }
    else {
      local_88 = 3;
      *(char **)(param_2 + 8) = (char *)((int)puVar6 + 1);
      *(int *)(param_2 + 0xc) = iVar8 + -1;
      local_84 = (uint *)CONCAT31(local_84._1_3_,0x2e);
      FUN_016699f8(&local_70,param_2);
      if (local_70 != -0x80000000) goto code_r0x01671974;
      if (local_6c != 1) {
        puVar6 = (uint *)((uint)&local_70 | 4);
        local_108 = *puVar6;
        local_104 = puVar6[1];
        local_100 = (uint *)puVar6[2];
        local_fc = puVar6[3];
        local_f8 = (undefined4 *)puVar6[4];
        puStack_f4 = (undefined *)puVar6[5];
        puVar6 = puVar2;
        for (; local_5c = puVar2, uVar9 != 0; uVar9 = uVar9 - 1) {
          FUN_01666b88(puVar6);
          puVar6 = puVar6 + 0x12;
        }
        goto LAB_016718c0;
      }
      *(uint **)(param_2 + 8) = puVar6;
      *(int *)(param_2 + 0xc) = iVar8;
      local_104 = local_e8;
      local_100 = local_e4;
      local_fc = local_e0;
      local_108 = 3;
      if (local_68 != 0) {
        thunk_FUN_016d3fb4(local_64);
      }
      if (local_5c == (uint *)0x0) goto LAB_01671a08;
      if ((code *)*local_58 != (code *)0x0) {
        (*(code *)*local_58)(local_5c);
      }
      if (local_58[1] != 0) goto LAB_01671a04;
    }
    goto LAB_01671a08;
  }
  puVar2 = (uint *)((uint)local_d0 | 4);
  local_108 = *puVar2;
  local_104 = puVar2[1];
  local_100 = (uint *)puVar2[2];
  local_fc = puVar2[3];
  local_f8 = (undefined4 *)puVar2[4];
  puStack_f4 = (undefined *)puVar2[5];
  puVar6 = (uint *)&DAT_00000004;
  local_5c = (uint *)&DAT_00000004;
LAB_016718c0:
  if (local_e8 != 0) {
LAB_01671a04:
    thunk_FUN_016d3fb4(local_5c);
  }
LAB_01671a08:
  if (local_108 != 3) {
    local_d8 = &local_f0;
    puVar6 = &local_88;
    local_e4 = (uint *)&DAT_004145fc;
    local_e0 = 3;
    local_e8 = 3;
    local_dc = param_2;
    FUN_00953084(puVar6,&local_108,&local_e8);
    local_108 = local_88;
    local_104 = (uint)local_84;
    local_100 = local_80;
    local_fc = local_7c;
    local_f8 = local_78;
    puStack_f4 = local_74;
    if (local_88 != 3) goto LAB_01671b98;
  }
  uVar9 = local_fc;
  puVar1 = local_100;
  uVar10 = local_104;
  puVar2 = local_100;
  if (0x4f < local_fc) {
    for (; uVar9 != 0; uVar9 = uVar9 - 1) {
      FUN_01666b88(puVar2);
      puVar2 = puVar2 + 0x12;
    }
    if (uVar10 != 0) {
      thunk_FUN_016d3fb4(puVar1);
    }
    *(undefined4 *)(param_2 + 8) = uVar11;
    *(undefined4 *)(param_2 + 0xc) = uVar7;
    local_88 = 0x80000002;
    local_fc = 0;
    local_100 = (uint *)0x0;
    local_104 = 4;
    local_108 = 0;
    puVar3 = (undefined4 *)thunk_FUN_016d4a50(0x18);
    if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x18);
    }
    local_74 = &DAT_018ad858;
    local_7c = 0;
    *puVar3 = 0x80000002;
    local_88 = 1;
    local_78 = puVar3;
    local_84 = (uint *)0;
    local_80 = (uint *)&DAT_00000004;
LAB_01671b98:
    *param_1 = local_88;
    param_1[1] = (uint)local_84;
    param_1[2] = (uint)local_80;
    param_1[3] = local_7c;
    param_1[4] = (uint)local_78;
    param_1[5] = (uint)local_74;
    return;
  }
  local_88 = local_104;
  local_84 = local_100;
  local_80 = (uint *)local_fc;
  local_10c = 0;
  local_114 = 0x80000000;
  local_118 = 0;
  local_120 = 0x80000000;
  if (local_fc == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_004144ff,0x17,&DAT_018ad884);
  }
  uVar4 = local_100[0xc];
  if (uVar4 != 0x80000003) {
    uVar5 = 1;
    if ((int)uVar4 < 0) {
      uVar5 = uVar4 ^ 0x80000000;
    }
    if (uVar5 == 0) {
      uVar4 = 0x80000000;
    }
    else if (uVar5 == 1) {
      uVar4 = local_100[0xe];
      uVar10 = local_100[0xd];
      if (uVar4 == 0) {
        puVar6 = (uint *)&DAT_00000001;
      }
      else {
        puVar6 = (uint *)thunk_FUN_016d4a50(uVar4);
        if (puVar6 == (uint *)0x0) goto LAB_01671e00;
      }
      FUN_016dd1aa(puVar6,uVar10,uVar4);
      uVar10 = uVar4;
    }
    else {
      puVar6 = (uint *)local_100[0xd];
      uVar4 = 0x80000002;
      uVar10 = local_100[0xe];
    }
    if ((puVar1[0xc] != 0x80000003) && (0 < (int)puVar1[0xc])) {
      thunk_FUN_016d3fb4(puVar1[0xd]);
    }
    puVar1[0xe] = 0;
    puVar1[0xc] = 0x80000000;
    local_120 = uVar4;
    local_11c = puVar6;
    local_118 = uVar10;
  }
  uVar4 = puVar1[uVar9 * 0x12 + -3];
  if (uVar4 != 0x80000003) {
    uVar5 = 1;
    if ((int)uVar4 < 0) {
      uVar5 = uVar4 ^ 0x80000000;
    }
    if (uVar5 == 0) {
      uVar4 = 0x80000000;
      local_110 = puVar1;
    }
    else if (uVar5 == 1) {
      uVar4 = puVar1[uVar9 * 0x12 + -1];
      uVar10 = puVar1[uVar9 * 0x12 + -2];
      if (uVar4 == 0) {
        local_110 = (uint *)&DAT_00000001;
      }
      else {
        local_110 = (uint *)thunk_FUN_016d4a50(uVar4);
        if (local_110 == (uint *)0x0) {
LAB_01671e00:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,uVar4);
        }
      }
      FUN_016dd1aa(local_110,uVar10,uVar4);
      uVar10 = uVar4;
    }
    else {
      uVar4 = 0x80000002;
      uVar10 = puVar1[uVar9 * 0x12 + -1];
      local_110 = (uint *)puVar1[uVar9 * 0x12 + -2];
    }
    if ((puVar1[uVar9 * 0x12 + -3] != 0x80000003) && (0 < (int)puVar1[uVar9 * 0x12 + -3])) {
      thunk_FUN_016d3fb4(puVar1[uVar9 * 0x12 + -2]);
    }
    puVar1[uVar9 * 0x12 + -1] = 0;
    puVar1[uVar9 * 0x12 + -3] = 0x80000000;
    local_114 = uVar4;
    local_10c = uVar10;
  }
  uVar10 = puVar1[uVar9 * 0x12 + -0xc];
  if ((uVar10 != 0x80000003) && (0 < (int)uVar10)) {
    thunk_FUN_016d3fb4(puVar1[uVar9 * 0x12 + -0xb]);
  }
  if ((puVar1[uVar9 * 0x12 + -9] != 0x80000003) && (0 < (int)puVar1[uVar9 * 0x12 + -9])) {
    thunk_FUN_016d3fb4(puVar1[uVar9 * 0x12 + -8]);
  }
  puVar1[uVar9 * 0x12 + -0xc] = local_120;
  puVar1[uVar9 * 0x12 + -0xb] = (uint)local_11c;
  puVar1[uVar9 * 0x12 + -10] = local_118;
  puVar1[uVar9 * 0x12 + -9] = local_114;
  puVar1[uVar9 * 0x12 + -8] = (uint)local_110;
  puVar1[uVar9 * 0x12 + -7] = local_10c;
  *param_1 = 3;
  param_1[1] = local_88;
  param_1[2] = (uint)local_84;
  param_1[3] = (uint)local_80;
  return;
code_r0x01671974:
  if (uVar9 == local_e8) {
    FUN_0166e3e8(&local_e8);
    puVar2 = local_e4;
  }
  FUN_016dd52c((char *)((int)puVar2 + iVar12),&local_70,0x48);
  local_e0 = uVar9 + 1;
  iVar12 = iVar12 + 0x48;
  goto LAB_0167192c;
}

