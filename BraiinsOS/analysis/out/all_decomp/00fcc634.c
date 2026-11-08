// FUN_00fcc634 @ 00fcc634 size=1612 calls_out=1 calls_in=1
// strings: 

void FUN_00fcc634(longlong *param_1,uint *param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  longlong local_f0;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  uint local_c8;
  int local_c4;
  uint local_c0;
  int local_bc;
  uint local_b8;
  int local_b4;
  uint local_b0;
  int local_ac;
  uint local_a8;
  int local_a4;
  uint local_a0;
  int local_9c;
  uint local_98;
  int local_94;
  uint local_90;
  int local_8c;
  uint local_88;
  int local_84;
  uint local_80;
  int local_7c;
  uint local_78;
  int local_74;
  uint local_70;
  int local_6c;
  uint local_68;
  int local_64;
  uint local_60;
  int local_5c;
  uint local_58;
  int local_54;
  uint local_50;
  int local_4c;
  uint local_48;
  int local_44;
  uint uStack_40;
  int iStack_3c;
  uint uStack_38;
  int local_34;
  uint local_30;
  int local_2c;
  
  uVar2 = param_2[0x12];
  uVar9 = param_2[8];
  uVar5 = param_2[0x10];
  local_f8 = uVar9 + uVar2;
  uVar7 = param_2[6];
  local_f4 = param_2[9] + param_2[0x13] + (uint)CARRY4(uVar9,uVar2);
  local_100 = uVar7 + uVar5;
  uVar3 = param_2[4];
  local_fc = param_2[7] + param_2[0x11] + (uint)CARRY4(uVar7,uVar5);
  uVar11 = param_2[0xe];
  local_108 = uVar3 + uVar11;
  local_104 = param_2[5] + param_2[0xf] + (uint)CARRY4(uVar3,uVar11);
  uVar12 = param_2[2];
  uVar4 = param_2[0xc];
  uVar6 = *param_2;
  local_110 = uVar12 + uVar4;
  uVar13 = param_2[10];
  local_10c = param_2[3] + param_2[0xd] + (uint)CARRY4(uVar12,uVar4);
  local_118 = uVar6 + uVar13;
  local_114 = param_2[1] + param_2[0xb] + (uint)CARRY4(uVar6,uVar13);
  uVar10 = (uVar2 - uVar9) - 0x10;
  uVar9 = (param_2[0x13] - (param_2[9] + (uint)(uVar2 < uVar9))) + 0x7fffff +
          (uint)(0xf < uVar2 - uVar9);
  uVar8 = (uVar5 - uVar7) - 0x10;
  uVar7 = (param_2[0x11] - (param_2[7] + (uint)(uVar5 < uVar7))) + 0x7fffff +
          (uint)(0xf < uVar5 - uVar7);
  uVar2 = uVar7 >> 0x13;
  local_d0 = uVar10 + uVar2;
  local_cc = (uVar9 & 0x7ffff) + (uint)CARRY4(uVar10,uVar2);
  uVar10 = (uVar11 - uVar3) - 0x10;
  uVar5 = (param_2[0xf] - (param_2[5] + (uint)(uVar11 < uVar3))) + 0x7fffff +
          (uint)(0xf < uVar11 - uVar3);
  uVar2 = uVar5 >> 0x13;
  local_d8 = uVar8 + uVar2;
  local_d4 = (uVar7 & 0x7ffff) + (uint)CARRY4(uVar8,uVar2);
  uVar3 = (param_2[0xb] + 0x7fffff + (uint)(0x12f < uVar13)) -
          (param_2[1] + (uint)(uVar13 - 0x130 < uVar6));
  local_f0 = (ulonglong)(uVar9 >> 0x13) * 0x13 +
             (CONCAT44(uVar3,(uVar13 - 0x130) - uVar6) & 0x7ffffffffffff);
  uVar6 = (uVar4 - uVar12) - 0x10;
  uVar7 = (param_2[0xd] - (param_2[3] + (uint)(uVar4 < uVar12))) + 0x7fffff +
          (uint)(0xf < uVar4 - uVar12);
  uVar2 = uVar7 >> 0x13;
  local_e0 = uVar10 + uVar2;
  local_dc = (uVar5 & 0x7ffff) + (uint)CARRY4(uVar10,uVar2);
  uVar3 = uVar3 >> 0x13;
  local_e8 = uVar6 + uVar3;
  local_e4 = (uVar7 & 0x7ffff) + (uint)CARRY4(uVar6,uVar3);
  FUN_00fd1800(&local_c8,&local_118,param_3);
  FUN_00fd1800(&local_a0,&local_f0,param_3 + 0x28);
  FUN_00fd1800(&local_78,param_2 + 0x1e,param_3 + 0x78);
  FUN_00fd1800(&local_50,param_2 + 0x14,param_3 + 0x50);
  *(uint *)(param_1 + 9) = local_80 + local_a8;
  *(uint *)((int)param_1 + 0x4c) = local_7c + local_a4 + (uint)CARRY4(local_80,local_a8);
  *(uint *)(param_1 + 8) = local_88 + local_b0;
  *(uint *)((int)param_1 + 0x44) = local_84 + local_ac + (uint)CARRY4(local_88,local_b0);
  *(uint *)(param_1 + 7) = local_90 + local_b8;
  *(uint *)((int)param_1 + 0x3c) = local_8c + local_b4 + (uint)CARRY4(local_90,local_b8);
  *(uint *)(param_1 + 6) = local_98 + local_c0;
  *(uint *)((int)param_1 + 0x34) = local_94 + local_bc + (uint)CARRY4(local_98,local_c0);
  *(uint *)(param_1 + 5) = local_a0 + local_c8;
  *(uint *)((int)param_1 + 0x2c) = local_9c + local_c4 + (uint)CARRY4(local_a0,local_c8);
  uVar4 = local_2c << 1 | local_30 >> 0x1f;
  *(uint *)(param_1 + 0xe) = local_58 + local_30 * 2;
  uVar3 = local_34 << 1 | uStack_38 >> 0x1f;
  *(uint *)((int)param_1 + 0x74) = local_54 + uVar4 + (uint)CARRY4(local_58,local_30 * 2);
  *(uint *)(param_1 + 0xd) = local_60 + uStack_38 * 2;
  *(uint *)((int)param_1 + 0x6c) = local_5c + uVar3 + (uint)CARRY4(local_60,uStack_38 * 2);
  uVar6 = iStack_3c << 1 | uStack_40 >> 0x1f;
  uVar9 = local_44 << 1 | local_48 >> 0x1f;
  *(uint *)(param_1 + 0xc) = local_68 + uStack_40 * 2;
  *(uint *)((int)param_1 + 100) = local_64 + uVar6 + (uint)CARRY4(local_68,uStack_40 * 2);
  *(uint *)(param_1 + 0xb) = local_70 + local_48 * 2;
  *(uint *)((int)param_1 + 0x5c) = local_6c + uVar9 + (uint)CARRY4(local_70,local_48 * 2);
  uVar5 = local_4c << 1 | local_50 >> 0x1f;
  *(uint *)(param_1 + 10) = local_78 + local_50 * 2;
  *(uint *)((int)param_1 + 0x54) = local_74 + uVar5 + (uint)CARRY4(local_78,local_50 * 2);
  uVar12 = (local_b0 - local_88) - 0x10;
  uVar8 = (local_ac - (local_84 + (uint)(local_b0 < local_88))) + 0x7fffff +
          (uint)(0xf < local_b0 - local_88);
  uVar7 = (local_a8 - local_80) - 0x10;
  uVar13 = (local_a4 - (local_7c + (uint)(local_a8 < local_80))) + 0x7fffff +
           (uint)(0xf < local_a8 - local_80);
  uVar2 = uVar8 >> 0x13;
  *(uint *)(param_1 + 4) = uVar7 + uVar2;
  *(uint *)((int)param_1 + 0x24) = (uVar13 & 0x7ffff) + (uint)CARRY4(uVar7,uVar2);
  uVar11 = (local_b8 - local_90) - 0x10;
  uVar10 = (local_b4 - (local_8c + (uint)(local_b8 < local_90))) + 0x7fffff +
           (uint)(0xf < local_b8 - local_90);
  uVar2 = uVar10 >> 0x13;
  *(uint *)(param_1 + 3) = uVar12 + uVar2;
  *(uint *)((int)param_1 + 0x1c) = (uVar8 & 0x7ffff) + (uint)CARRY4(uVar12,uVar2);
  uVar8 = (local_c0 - local_98) - 0x10;
  uVar7 = (local_bc - (local_94 + (uint)(local_c0 < local_98))) + 0x7fffff +
          (uint)(0xf < local_c0 - local_98);
  uVar2 = uVar7 >> 0x13;
  *(uint *)(param_1 + 2) = uVar11 + uVar2;
  *(uint *)((int)param_1 + 0x14) = (uVar10 & 0x7ffff) + (uint)CARRY4(uVar11,uVar2);
  uVar10 = (local_c4 + 0x7fffff + (uint)(0x12f < local_c8)) -
           (local_9c + (uint)(local_c8 - 0x130 < local_a0));
  uVar2 = uVar10 >> 0x13;
  *(uint *)(param_1 + 1) = uVar8 + uVar2;
  *(uint *)((int)param_1 + 0xc) = (uVar7 & 0x7ffff) + (uint)CARRY4(uVar8,uVar2);
  uVar2 = local_30 * 2 - local_58;
  uVar7 = uVar2 - 0x10;
  uVar4 = (uVar4 - (local_54 + (uint)(local_30 * 2 < local_58))) + 0x7fffff + (uint)(0xf < uVar2);
  uVar2 = uStack_38 * 2 - local_60;
  uVar8 = uVar2 - 0x10;
  uVar3 = (uVar3 - (local_5c + (uint)(uStack_38 * 2 < local_60))) + 0x7fffff + (uint)(0xf < uVar2);
  uVar2 = uVar3 >> 0x13;
  *(uint *)(param_1 + 0x13) = uVar7 + uVar2;
  *(uint *)((int)param_1 + 0x9c) = (uVar4 & 0x7ffff) + (uint)CARRY4(uVar7,uVar2);
  uVar2 = uStack_40 * 2 - local_68;
  uVar11 = uVar2 - 0x10;
  uVar7 = (uVar6 - (local_64 + (uint)(uStack_40 * 2 < local_68))) + 0x7fffff + (uint)(0xf < uVar2);
  uVar2 = uVar7 >> 0x13;
  *(uint *)(param_1 + 0x12) = uVar8 + uVar2;
  *(uint *)((int)param_1 + 0x94) = (uVar3 & 0x7ffff) + (uint)CARRY4(uVar8,uVar2);
  uVar2 = local_50 * 2 - 0x130;
  uVar3 = (uVar5 + 0x7fffff + (uint)(0x12f < local_50 * 2)) - (local_74 + (uint)(uVar2 < local_78));
  lVar1 = (ulonglong)(uVar4 >> 0x13) * 0x13 + (CONCAT44(uVar3,uVar2 - local_78) & 0x7ffffffffffff);
  *(int *)((int)param_1 + 0x7c) = (int)((ulonglong)lVar1 >> 0x20);
  uVar2 = local_48 * 2 - local_70;
  uVar5 = uVar2 - 0x10;
  uVar4 = (uVar9 - (local_6c + (uint)(local_48 * 2 < local_70))) + 0x7fffff + (uint)(0xf < uVar2);
  *param_1 = (ulonglong)(uVar13 >> 0x13) * 0x13 +
             (CONCAT44(uVar10,(local_c8 - 0x130) - local_a0) & 0x7ffffffffffff);
  *(int *)(param_1 + 0xf) = (int)lVar1;
  uVar2 = uVar4 >> 0x13;
  uVar3 = uVar3 >> 0x13;
  *(uint *)((int)param_1 + 0x8c) = (uVar7 & 0x7ffff) + (uint)CARRY4(uVar11,uVar2);
  *(uint *)(param_1 + 0x11) = uVar11 + uVar2;
  *(uint *)(param_1 + 0x10) = uVar5 + uVar3;
  *(uint *)((int)param_1 + 0x84) = (uVar4 & 0x7ffff) + (uint)CARRY4(uVar5,uVar3);
  return;
}

