// FUN_0074ca74 @ 0074ca74 size=888 calls_out=5 calls_in=4
// strings: `Extensions` tracks values by type

int FUN_0074ca74(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar7;
  int *piVar6;
  int local_118;
  int local_114;
  int local_110;
  undefined2 local_10c;
  undefined2 local_10a;
  undefined2 uStack_108;
  undefined4 local_106;
  undefined4 local_102;
  undefined2 local_fe;
  int local_fc;
  int iStack_f8;
  int iStack_f4;
  undefined2 local_f0;
  undefined4 local_ee;
  undefined4 local_ea;
  undefined4 local_e6;
  undefined2 local_e2;
  int local_e0;
  int local_dc;
  int local_d8;
  undefined2 local_d4;
  undefined4 local_d2;
  undefined4 local_ce;
  undefined4 local_ca;
  undefined2 local_c6;
  int local_c4;
  int iStack_c0;
  int iStack_bc;
  undefined2 local_b8;
  undefined4 local_b6;
  undefined4 local_b2;
  undefined4 local_ae;
  undefined2 local_aa;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined2 local_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  undefined2 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined2 local_7c;
  int local_78;
  int local_74;
  int local_70;
  undefined2 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined2 local_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  undefined2 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 local_2c;
  
  piVar4 = *(int **)(param_2 + 0x78);
  iVar3 = *(int *)(param_2 + 0x7c) << 4;
  uVar1 = 0xffffffff;
  do {
    if (iVar3 == 0) {
      piVar4 = (int *)0x0;
      goto LAB_0074cb88;
    }
    iVar5 = *piVar4;
    piVar6 = piVar4 + 1;
    piVar7 = piVar4 + 2;
    iVar3 = iVar3 + -0x10;
    piVar2 = piVar4 + 3;
    uVar1 = uVar1 + 1;
    piVar4 = piVar4 + 4;
  } while ((iVar5 != -0x7e2dea42 || *piVar7 != -0x2f8246a2) ||
           (*piVar6 != 0x4c65521b || *piVar2 != 0x76f4a2ad));
  if (*(uint *)(param_2 + 0x88) <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar1,*(uint *)(param_2 + 0x88),&DAT_01880824);
  }
  piVar4 = (int *)(*(int *)(param_2 + 0x84) + uVar1 * 0x18);
  iVar3 = piVar4[1];
  piVar4 = (int *)(*piVar4 + (*(int *)(iVar3 + 8) - 1U & 0xfffffff8) + 8);
  (**(code **)(iVar3 + 0xc))(&local_118,piVar4);
  if ((local_118 != -0x7e2dea42 || local_110 != -0x2f8246a2) ||
      (local_114 != 0x4c65521b || CONCAT22(local_10a,local_10c) != 0x76f4a2ad)) {
    piVar4 = (int *)0x0;
  }
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("`Extensions` tracks values by type",0x22,&DAT_0188076c);
  }
LAB_0074cb88:
  piVar2 = &DAT_0035dc52;
  if (piVar4 != (int *)0x0) {
    piVar2 = piVar4;
  }
  local_fe = *(undefined2 *)((int)piVar2 + 0x1a);
  local_a8 = *(undefined4 *)((int)piVar2 + 0xe);
  local_106 = *(undefined4 *)((int)piVar2 + 0x12);
  local_102 = *(undefined4 *)((int)piVar2 + 0x16);
  local_f0 = (undefined2)piVar2[10];
  local_fc = piVar2[7];
  iStack_f8 = piVar2[8];
  iStack_f4 = piVar2[9];
  local_e2 = *(undefined2 *)((int)piVar2 + 0x36);
  local_ee = *(undefined4 *)((int)piVar2 + 0x2a);
  local_ea = *(undefined4 *)((int)piVar2 + 0x2e);
  local_e6 = *(undefined4 *)((int)piVar2 + 0x32);
  local_d4 = (undefined2)piVar2[0x11];
  local_e0 = piVar2[0xe];
  local_dc = piVar2[0xf];
  local_d8 = piVar2[0x10];
  local_c6 = *(undefined2 *)((int)piVar2 + 0x52);
  local_d2 = *(undefined4 *)((int)piVar2 + 0x46);
  local_ce = *(undefined4 *)((int)piVar2 + 0x4a);
  local_ca = *(undefined4 *)((int)piVar2 + 0x4e);
  local_b8 = (undefined2)piVar2[0x18];
  local_c4 = piVar2[0x15];
  iVar3 = piVar2[0x1c];
  iStack_c0 = piVar2[0x16];
  iStack_bc = piVar2[0x17];
  local_aa = *(undefined2 *)((int)piVar2 + 0x6e);
  local_b6 = *(undefined4 *)((int)piVar2 + 0x62);
  local_b2 = *(undefined4 *)((int)piVar2 + 0x66);
  local_ae = *(undefined4 *)((int)piVar2 + 0x6a);
  if ((char)iVar3 != '\x04') {
    local_2c = *(undefined1 *)((int)piVar2 + 0x7d);
    local_38 = *(undefined4 *)((int)piVar2 + 0x71);
    uStack_34 = *(undefined4 *)((int)piVar2 + 0x75);
    uStack_30 = *(undefined4 *)((int)piVar2 + 0x79);
  }
  local_10c = (undefined2)piVar2[3];
  local_10a = (undefined2)local_a8;
  uStack_108 = (undefined2)((uint)local_a8 >> 0x10);
  local_118 = *piVar2;
  local_114 = piVar2[1];
  local_110 = piVar2[2];
  uStack_a4 = local_106;
  uStack_a0 = local_102;
  local_9c = local_fe;
  local_98 = local_fc;
  iStack_94 = iStack_f8;
  iStack_90 = iStack_f4;
  local_8c = local_f0;
  local_88 = local_ee;
  uStack_84 = local_ea;
  uStack_80 = local_e6;
  local_7c = local_e2;
  local_78 = local_e0;
  local_74 = local_dc;
  local_70 = local_d8;
  local_6c = local_d4;
  local_68 = local_d2;
  uStack_64 = local_ce;
  uStack_60 = local_ca;
  local_5c = local_c6;
  local_58 = local_c4;
  iStack_54 = iStack_c0;
  iStack_50 = iStack_bc;
  local_4c = local_b8;
  local_48 = local_b6;
  uStack_44 = local_b2;
  uStack_40 = local_ae;
  local_3c = local_aa;
  FUN_016dd1aa(param_1 + 0x3c,&local_118,0x70);
  *(char *)(param_1 + 0xac) = (char)iVar3;
  *(undefined4 *)(param_1 + 0xad) = local_38;
  *(undefined4 *)(param_1 + 0xb1) = uStack_34;
  *(undefined4 *)(param_1 + 0xb5) = uStack_30;
  *(undefined1 *)(param_1 + 0xb9) = local_2c;
  *(undefined2 *)(param_1 + 0xbb) = 0x202;
  FUN_00fa3d10(&local_118,param_2);
  iVar3 = *(int *)(param_1 + 0x28);
  if ((-0x7fffffff < iVar3) && (iVar3 != 0)) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2c));
  }
  *(int *)(param_1 + 0x28) = local_118;
  *(int *)(param_1 + 0x2c) = local_114;
  *(int *)(param_1 + 0x30) = local_110;
  return param_1;
}

