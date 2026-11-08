// FUN_00f97d64 @ 00f97d64 size=940 calls_out=9 calls_in=1
// strings: `Extensions` tracks values by type

int FUN_00f97d64(int param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar9;
  int *piVar8;
  undefined4 **local_120;
  undefined4 *local_11c;
  int *local_118;
  int local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined1 local_100;
  undefined3 uStack_ff;
  undefined1 local_fc;
  undefined3 local_fb;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined1 local_e8;
  undefined2 uStack_e7;
  uint uStack_e5;
  int iStack_e1;
  undefined4 uStack_dd;
  undefined1 uStack_d9;
  undefined4 ***local_d8;
  undefined *local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 *local_c8;
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
  
  piVar5 = *(int **)(param_1 + 0x78);
  iVar4 = *(int *)(param_1 + 0x7c) << 4;
  uVar2 = 0xffffffff;
  do {
    if (iVar4 == 0) {
      puVar7 = (undefined4 *)0x0;
      goto LAB_00f97e88;
    }
    iVar6 = *piVar5;
    piVar8 = piVar5 + 1;
    piVar9 = piVar5 + 2;
    iVar4 = iVar4 + -0x10;
    piVar1 = piVar5 + 3;
    uVar2 = uVar2 + 1;
    piVar5 = piVar5 + 4;
  } while ((iVar6 != -0x7e2dea42 || *piVar9 != -0x2f8246a2) ||
           (*piVar8 != 0x4c65521b || *piVar1 != 0x76f4a2ad));
  if (*(uint *)(param_1 + 0x88) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar2,*(uint *)(param_1 + 0x88),&DAT_01880824);
  }
  piVar5 = (int *)(*(int *)(param_1 + 0x84) + uVar2 * 0x18);
  iVar4 = piVar5[1];
  puVar7 = (undefined4 *)(*piVar5 + (*(int *)(iVar4 + 8) - 1U & 0xfffffff8) + 8);
  (**(code **)(iVar4 + 0xc))(&local_e8,puVar7);
  if ((CONCAT13((undefined1)uStack_e5,CONCAT21(uStack_e7,local_e8)) != -0x7e2dea42 ||
      CONCAT13((undefined1)uStack_dd,iStack_e1._1_3_) != -0x2f8246a2) ||
      (CONCAT13((undefined1)iStack_e1,uStack_e5._1_3_) != 0x4c65521b ||
      CONCAT13(uStack_d9,uStack_dd._1_3_) != 0x76f4a2ad)) {
    puVar7 = (undefined4 *)0x0;
  }
  if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("`Extensions` tracks values by type",0x22,&DAT_0188076c);
  }
LAB_00f97e88:
  local_120 = &local_11c;
  local_c4 = 0;
  puVar3 = &DAT_0035dc52;
  if (puVar7 != (undefined4 *)0x0) {
    puVar3 = puVar7;
  }
  local_11c = puVar3 + 0x15;
  local_114 = (int)puVar3 + 0x46;
  local_118 = &local_114;
  local_c8 = (undefined4 *)0x4;
  local_3c = 4;
  local_d4 = (undefined *)0x1;
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
  local_e8 = 2;
  uStack_e7 = 0;
  uStack_e5 = uStack_e5 & 0xffffff00;
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
  iVar4 = thunk_FUN_016d4a50(0xc0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc0);
  }
  FUN_016dd1aa(iVar4,&local_e8,0xc0);
  FUN_00f9545c(iVar4,param_1);
  local_d4 = &DAT_00fa02fc;
  local_108 = 0;
  local_110 = 0;
  local_d8 = &local_120;
  local_10c = 1;
  uStack_d9 = 0;
  iStack_e1 = (int)param_2 << 8;
  uStack_dd._0_1_ = (undefined1)((uint)param_2 >> 0x18);
  uStack_dd = CONCAT31(0x6043a8,(undefined1)uStack_dd);
  local_e8 = SUB41(&local_118,0);
  uStack_e7 = (undefined2)((uint)&local_118 >> 8);
  uStack_e5._0_1_ = (undefined1)((uint)&local_118 >> 0x18);
  uStack_e5 = CONCAT31(0xfa02fc,(undefined1)uStack_e5);
  FUN_00fa948c(&local_110,&DAT_01880754,&DAT_0035dac5,&local_e8);
  local_f0 = param_2[2];
  uStack_f8 = *param_2;
  uStack_f4 = param_2[1];
  _local_100 = CONCAT31(uStack_ff,1);
  _local_fc = CONCAT31(CONCAT21(uStack_e7,local_e8),2);
  uStack_e5 = uStack_f8;
  iStack_e1 = uStack_f4;
  uStack_dd = local_f0;
  puVar7 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *puVar7 = local_110;
  puVar7[1] = local_10c;
  puVar7[2] = local_108;
  local_e8 = (undefined1)_local_100;
  uStack_e7 = (undefined2)((uint)_local_100 >> 8);
  uStack_e5._1_3_ = (undefined3)_local_fc;
  uStack_e5 = CONCAT31(uStack_e5._1_3_,(char)((uint)_local_100 >> 0x18));
  iStack_e1._1_3_ = (undefined3)uStack_f8;
  iStack_e1 = CONCAT31(iStack_e1._1_3_,(char)((uint)_local_fc >> 0x18));
  uStack_dd._1_3_ = (undefined3)uStack_f4;
  uStack_dd = CONCAT31(uStack_dd._1_3_,(char)((uint)uStack_f8 >> 0x18));
  uStack_d9 = (undefined1)((uint)uStack_f4 >> 0x18);
  local_d8 = (undefined4 ***)local_f0;
  local_d0 = CONCAT31(local_d0._1_3_,5);
  local_c4 = 1;
  local_cc = 1;
  local_d4 = (undefined *)CONCAT31(local_d4._1_3_,0xe);
  local_c8 = puVar7;
  FUN_00f96218(iVar4,&local_e8);
  if (*param_3 != -0x80000000) {
    local_e8 = 4;
    uStack_e5._1_3_ = (undefined3)*param_3;
    iStack_e1._1_3_ = (undefined3)param_3[1];
    iStack_e1 = CONCAT31(iStack_e1._1_3_,(char)((uint)*param_3 >> 0x18));
    uStack_dd._1_3_ = (undefined3)param_3[2];
    uStack_dd = CONCAT31(uStack_dd._1_3_,(char)((uint)param_3[1] >> 0x18));
    uStack_d9 = (undefined1)((uint)param_3[2] >> 0x18);
    FUN_00f959b8(iVar4,0xf,&local_e8);
  }
  return iVar4;
}

