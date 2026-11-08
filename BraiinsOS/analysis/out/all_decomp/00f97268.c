// FUN_00f97268 @ 00f97268 size=1108 calls_out=11 calls_in=1
// strings: `Extensions` tracks values by type

int FUN_00f97268(int param_1,int *param_2,undefined4 *param_3,int *param_4,int param_5,int *param_6)

{
  int *piVar1;
  int *piVar2;
  undefined3 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  undefined4 *puVar12;
  bool bVar13;
  int *piVar14;
  undefined4 **local_140;
  undefined4 *local_13c;
  int *local_138;
  int local_134 [2];
  undefined4 *local_12c;
  uint local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined3 uStack_118;
  undefined1 local_115;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined3 uStack_10c;
  undefined3 uStack_108;
  undefined1 local_105;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined3 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined3 uStack_ec;
  undefined4 ***local_e8;
  undefined *local_e4;
  int *local_e0;
  undefined4 *local_dc;
  int **local_d8;
  undefined *local_d4;
  int *local_d0;
  undefined4 *local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined4 local_bb;
  uint uStack_b7;
  undefined4 uStack_b3;
  undefined3 uStack_af;
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
  
  piVar10 = *(int **)(param_1 + 0x78);
  iVar9 = *(int *)(param_1 + 0x7c) << 4;
  uVar7 = 0xffffffff;
  do {
    if (iVar9 == 0) {
      puVar12 = (undefined4 *)0x0;
      goto LAB_00f97394;
    }
    iVar11 = *piVar10;
    piVar14 = piVar10 + 1;
    iVar9 = iVar9 + -0x10;
    piVar1 = piVar10 + 2;
    piVar2 = piVar10 + 3;
    uVar7 = uVar7 + 1;
    piVar10 = piVar10 + 4;
  } while ((iVar11 != -0x7e2dea42 || *piVar1 != -0x2f8246a2) ||
           (*piVar14 != 0x4c65521b || *piVar2 != 0x76f4a2ad));
  if (*(uint *)(param_1 + 0x88) <= uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar7,*(uint *)(param_1 + 0x88),&DAT_01880824);
  }
  piVar10 = (int *)(*(int *)(param_1 + 0x84) + uVar7 * 0x18);
  iVar9 = piVar10[1];
  puVar12 = (undefined4 *)(*piVar10 + (*(int *)(iVar9 + 8) - 1U & 0xfffffff8) + 8);
  (**(code **)(iVar9 + 0xc))(&local_e8,puVar12);
  if ((local_e8 != (undefined4 ***)0x81d215be || local_e0 != (int *)0xd07db95e) ||
      (local_e4 != (undefined *)0x4c65521b || local_dc != (undefined4 *)0x76f4a2ad)) {
    puVar12 = (undefined4 *)0x0;
  }
  if (puVar12 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("`Extensions` tracks values by type",0x22,&DAT_0188076c);
  }
LAB_00f97394:
  local_140 = &local_13c;
  local_c4 = 0;
  puVar8 = &DAT_0035dc52;
  if (puVar12 != (undefined4 *)0x0) {
    puVar8 = puVar12;
  }
  local_13c = puVar8 + 0x15;
  local_134[0] = (int)puVar8 + 0x46;
  local_138 = local_134;
  local_c8 = 4;
  local_3c = 4;
  local_d4 = (undefined *)0x1;
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
  local_c0 = 0x80000001;
  local_2b = 2;
  local_e8 = (undefined4 ***)&SUB_00000002;
  local_cc = (undefined4 *)0x0;
  local_d0 = (int *)0x0;
  local_d8 = (int **)0x0;
  uStack_b7 = uStack_b7 & 0xffffff;
  uStack_b3 = (uint)uStack_b3._3_1_ << 0x18;
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
  iVar9 = thunk_FUN_016d4a50(0xc0);
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc0);
  }
  FUN_016dd1aa(iVar9,&local_e8,0xc0);
  FUN_00f9545c(iVar9,param_1);
  local_12c = (undefined4 *)&DAT_00000004;
  local_128 = 0;
  bVar13 = param_5 != 0;
  local_134[1] = 0;
  if (bVar13) {
    local_cc = &DAT_006043a8;
    local_dc = &DAT_006043a8;
    local_e8 = &local_140;
    local_120 = 1;
    local_d8 = &local_138;
    local_11c = 0;
    local_124 = 0;
    local_d4 = &DAT_00fa02fc;
    local_e4 = &DAT_00fa02fc;
    local_e0 = param_2;
    local_d0 = param_4;
    FUN_00fa948c(&local_124,&DAT_01880754,&DAT_0035da8a,&local_e8);
    uVar6 = local_11c;
    uVar5 = local_120;
    uVar4 = local_124;
    FUN_00f98de8(local_134 + 1);
    *local_12c = uVar4;
    local_12c[1] = uVar5;
    local_12c[2] = uVar6;
  }
  local_128 = (uint)bVar13;
  local_dc = (undefined4 *)param_2[1];
  local_cc = (undefined4 *)*param_3;
  uStack_f8._3_1_ = (undefined1)local_134[1];
  local_e0 = (int *)*param_2;
  local_c8 = param_3[1];
  local_c4 = param_3[2];
  local_d8 = (int **)param_2[2];
  local_115 = SUB41(local_e0,0);
  local_105 = SUB41(local_cc,0);
  uStack_114._3_1_ = SUB41(local_dc,0);
  uStack_114 = CONCAT13(uStack_114._3_1_,(int3)((uint)local_e0 >> 8));
  uStack_110._3_1_ = SUB41(local_d8,0);
  uStack_110 = CONCAT13(uStack_110._3_1_,(int3)((uint)local_dc >> 8));
  uStack_10c = (undefined3)((uint)local_d8 >> 8);
  local_d4 = (undefined *)CONCAT31(local_d4._1_3_,10);
  uStack_f4._3_1_ = SUB41(local_12c,0);
  uStack_f4 = CONCAT13(uStack_f4._3_1_,(int3)((uint)local_134[1] >> 8));
  uVar3 = (undefined3)((uint)local_12c >> 8);
  uStack_f0 = CONCAT13(bVar13,uVar3);
  uStack_ec = 0;
  uStack_104._3_1_ = (undefined1)local_c8;
  uStack_104 = CONCAT13(uStack_104._3_1_,(int3)((uint)local_cc >> 8));
  uStack_100._3_1_ = (undefined1)local_c4;
  uStack_100 = CONCAT13(uStack_100._3_1_,(int3)((uint)local_c8 >> 8));
  uStack_fc = (undefined3)((uint)local_c4 >> 8);
  local_d0 = (int *)CONCAT31(uStack_108,3);
  local_bc = 5;
  local_e4 = (undefined *)CONCAT31(uStack_118,2);
  local_e8 = (undefined4 ***)((uint)local_e8 & 0xffffff00);
  local_c0 = CONCAT31(local_c0._1_3_,0xe);
  local_bb = uStack_f8;
  uStack_b3 = CONCAT13(bVar13,uVar3);
  uStack_af = 0;
  uStack_b7 = uStack_f4;
  FUN_00f95814(iVar9,&local_e8);
  if (*param_6 != -0x80000000) {
    local_e4 = (undefined *)*param_6;
    local_e0 = (int *)param_6[1];
    local_dc = (undefined4 *)param_6[2];
    local_e8 = (undefined4 ***)CONCAT31(local_e8._1_3_,4);
    FUN_00f959b8(iVar9,0xf,&local_e8);
  }
  if (*param_4 != 0) {
    thunk_FUN_016d3fb4(param_4[1]);
  }
  return iVar9;
}

