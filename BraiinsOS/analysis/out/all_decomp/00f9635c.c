// FUN_00f9635c @ 00f9635c size=1368 calls_out=11 calls_in=1
// strings: `Extensions` tracks values by type

int FUN_00f9635c(int param_1,int *param_2,int *param_3,int param_4,int *param_5)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  bool bVar11;
  int *piVar12;
  undefined4 **local_138;
  undefined4 *local_134;
  undefined4 **local_130;
  undefined4 *local_12c;
  uint local_128;
  undefined4 *local_124;
  uint local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined3 uStack_10c;
  int local_108;
  int local_104;
  int iStack_100;
  int local_f8;
  int local_f4;
  int local_f0;
  undefined4 ***local_e8;
  undefined *local_e4;
  int *local_e0;
  undefined4 *local_dc;
  undefined4 ***local_d8;
  undefined4 *local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_b4;
  undefined1 local_ac;
  undefined1 local_a8;
  undefined1 local_a4;
  undefined2 local_a0;
  undefined1 local_9e;
  undefined1 local_9a;
  undefined1 local_96;
  undefined2 local_92;
  undefined1 local_90;
  undefined1 local_8c;
  undefined1 local_88;
  undefined2 local_84;
  undefined1 local_82;
  undefined1 local_7e;
  undefined1 local_7a;
  undefined2 local_76;
  undefined1 local_74;
  undefined1 local_70;
  undefined1 local_6c;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_62;
  undefined1 local_5e;
  undefined2 local_5a;
  undefined1 local_58;
  undefined1 local_54;
  undefined1 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  undefined1 local_46;
  undefined1 local_42;
  undefined2 local_3e;
  undefined1 local_3c;
  undefined1 local_2e;
  undefined2 local_2d;
  undefined1 local_2b;
  
  piVar8 = *(int **)(param_1 + 0x78);
  iVar7 = *(int *)(param_1 + 0x7c) << 4;
  uVar6 = 0xffffffff;
  do {
    if (iVar7 == 0) {
      puVar10 = (undefined4 *)0x0;
      goto LAB_00f96488;
    }
    iVar9 = *piVar8;
    piVar12 = piVar8 + 1;
    iVar7 = iVar7 + -0x10;
    piVar1 = piVar8 + 2;
    piVar2 = piVar8 + 3;
    uVar6 = uVar6 + 1;
    piVar8 = piVar8 + 4;
  } while ((iVar9 != -0x7e2dea42 || *piVar1 != -0x2f8246a2) ||
           (*piVar12 != 0x4c65521b || *piVar2 != 0x76f4a2ad));
  if (*(uint *)(param_1 + 0x88) <= uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar6,*(uint *)(param_1 + 0x88),&DAT_01880824);
  }
  piVar8 = (int *)(*(int *)(param_1 + 0x84) + uVar6 * 0x18);
  iVar7 = piVar8[1];
  puVar10 = (undefined4 *)(*piVar8 + (*(int *)(iVar7 + 8) - 1U & 0xfffffff8) + 8);
  (**(code **)(iVar7 + 0xc))(&local_e8,puVar10);
  if ((local_e8 != (undefined4 ***)0x81d215be || local_e0 != (int *)0xd07db95e) ||
      (local_e4 != (undefined *)0x4c65521b || local_dc != (undefined4 *)0x76f4a2ad)) {
    puVar10 = (undefined4 *)0x0;
  }
  if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("`Extensions` tracks values by type",0x22,&DAT_0188076c);
  }
LAB_00f96488:
  local_138 = &local_134;
  local_c4 = 0;
  local_12c = &DAT_0035dc52;
  if (puVar10 != (undefined4 *)0x0) {
    local_12c = puVar10;
  }
  local_134 = local_12c + 0x15;
  local_12c = (undefined4 *)((int)local_12c + 0x46);
  local_130 = &local_12c;
  local_c8 = 4;
  local_3c = 4;
  local_d4 = (undefined4 *)0x1;
  local_2b = 1;
  local_42 = 3;
  local_46 = 3;
  local_4a = 3;
  local_50 = 3;
  local_54 = 3;
  local_58 = 3;
  local_5e = 3;
  local_62 = 3;
  local_66 = 3;
  local_6c = 3;
  local_70 = 3;
  local_74 = 3;
  local_7a = 3;
  local_7e = 3;
  local_82 = 3;
  local_88 = 3;
  local_8c = 3;
  local_90 = 3;
  local_96 = 3;
  local_9a = 3;
  local_9e = 3;
  local_a4 = 3;
  local_a8 = 3;
  local_ac = 3;
  local_e8 = (undefined4 ***)&SUB_00000002;
  local_c0 = 0x80000001;
  local_cc = 0;
  local_d0 = 0;
  local_d8 = (undefined4 ***)0x0;
  local_b4 = 0;
  local_2d = 0x202;
  local_3e = 0;
  local_4c = 0;
  local_5a = 0;
  local_68 = 0;
  local_76 = 0;
  local_84 = 0;
  local_92 = 0;
  local_a0 = 0;
  local_2e = 0;
  iVar7 = thunk_FUN_016d4a50(0xc0);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc0);
  }
  FUN_016dd1aa(iVar7,&local_e8,0xc0);
  FUN_00f9545c(iVar7,param_1);
  local_120 = 0;
  bVar11 = param_4 != 0;
  local_124 = (undefined4 *)&DAT_00000004;
  local_128 = 0;
  if (bVar11) {
    local_d4 = (undefined4 *)&DAT_00fa02fc;
    local_e4 = &DAT_00fa02fc;
    local_e8 = &local_138;
    local_dc = &DAT_006043a8;
    local_110 = 0;
    local_118 = 0;
    local_d8 = &local_130;
    local_114 = 1;
    local_e0 = param_2;
    FUN_00fa948c(&local_118,&DAT_01880754,&DAT_0035da39,&local_e8);
    uVar5 = local_110;
    uVar4 = local_114;
    uVar3 = local_118;
    FUN_00f98de8(&local_128);
    *local_124 = uVar3;
    local_124[1] = uVar4;
    local_124[2] = uVar5;
  }
  puVar10 = local_124;
  local_120 = (uint)bVar11;
  uVar6 = (uint)bVar11;
  local_e8 = (undefined4 ***)CONCAT31(local_e8._1_3_,1);
  local_e0 = (int *)*param_2;
  local_dc = (undefined4 *)param_2[1];
  local_d8 = (undefined4 ***)param_2[2];
  local_118._3_1_ = SUB41(local_e0,0);
  local_114._0_3_ = (undefined3)((uint)local_e0 >> 8);
  local_114 = CONCAT13((char)local_dc,(undefined3)local_114);
  local_110._3_1_ = SUB41(local_d8,0);
  local_110 = CONCAT13(local_110._3_1_,(int3)((uint)local_dc >> 8));
  uStack_10c = (undefined3)((uint)local_d8 >> 8);
  local_e4 = (undefined *)CONCAT31((undefined3)local_118,2);
  FUN_00f96a9c(iVar7,&local_e8);
  if (*param_5 != -0x80000000) {
    local_e8 = (undefined4 ***)CONCAT31(local_e8._1_3_,4);
    local_e4 = (undefined *)*param_5;
    local_e0 = (int *)param_5[1];
    local_dc = (undefined4 *)param_5[2];
    FUN_00f959b8(iVar7,0xf,&local_e8);
  }
  if (*param_3 != -0x80000000) {
    if (param_3[3] != -0x80000000) {
      local_108 = *param_3;
      local_104 = param_3[1];
      iStack_100 = param_3[2];
      local_f8 = param_3[3];
      local_f4 = param_3[4];
      local_f0 = param_3[5];
      local_110 = 0;
      local_118 = 0;
      local_d8 = (undefined4 ***)&local_108;
      local_e0 = &local_f8;
      local_e8 = &local_130;
      local_114 = 1;
      local_d4 = &DAT_006043a8;
      local_dc = &DAT_006043a8;
      local_e4 = &DAT_00fa02fc;
      FUN_00fa948c(&local_118,&DAT_01880754,&DAT_0035da72,&local_e8);
      uVar5 = local_110;
      uVar4 = local_114;
      uVar3 = local_118;
      if (uVar6 == local_128) {
        FUN_00f98de8(&local_128);
        puVar10 = local_124;
      }
      local_120 = uVar6 + 1;
      puVar10 = puVar10 + uVar6 * 3;
      *puVar10 = uVar3;
      puVar10[1] = uVar4;
      puVar10[2] = uVar5;
      if (local_f8 != 0) {
        thunk_FUN_016d3fb4(local_f4);
      }
      if (local_108 != 0) {
        thunk_FUN_016d3fb4(local_104);
      }
      goto LAB_00f96860;
    }
    local_e4 = (undefined *)*param_3;
    local_e0 = (int *)param_3[1];
    local_dc = (undefined4 *)param_3[2];
    local_e8 = (undefined4 ***)CONCAT31(local_e8._1_3_,2);
    FUN_00f959b8(iVar7,0xb,&local_e8);
  }
  if (uVar6 == 0) {
    if (local_128 == 0) {
      return iVar7;
    }
    thunk_FUN_016d3fb4(local_124);
    return iVar7;
  }
LAB_00f96860:
  local_e4 = (undefined *)local_128;
  local_e0 = local_124;
  local_dc = (undefined4 *)local_120;
  local_e8 = (undefined4 ***)CONCAT31(local_e8._1_3_,5);
  FUN_00f959b8(iVar7,0xe,&local_e8);
  return iVar7;
}

