// FUN_00fd2844 @ 00fd2844 size=1496 calls_out=1 calls_in=2
// strings: 

void FUN_00fd2844(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
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
  uint uVar14;
  uint uVar15;
  uint local_f0;
  int local_ec;
  uint local_e8;
  int local_e4;
  uint local_e0;
  int local_dc;
  uint local_d8;
  int local_d4;
  uint local_d0;
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
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  uint local_50;
  int local_4c;
  uint local_48;
  int local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  int local_2c;
  
  FUN_00fd203c(&local_f0,param_2,1);
  FUN_00fd203c(&local_c8,param_2 + 10,1);
  FUN_00fd203c(&local_a0,param_2 + 0x14,1);
  local_9c = local_9c << 1 | local_a0 >> 0x1f;
  local_94 = local_94 << 1 | local_98 >> 0x1f;
  local_8c = local_8c << 1 | local_90 >> 0x1f;
  local_84 = local_84 << 1 | local_88 >> 0x1f;
  local_a0 = local_a0 << 1;
  local_98 = local_98 << 1;
  local_90 = local_90 << 1;
  local_88 = local_88 << 1;
  local_7c = local_7c << 1 | local_80 >> 0x1f;
  local_80 = local_80 << 1;
  local_70 = param_2[0xc] + param_2[2];
  local_6c = param_2[0xd] + param_2[3] + (uint)CARRY4(param_2[0xc],param_2[2]);
  local_68 = param_2[0xe] + param_2[4];
  local_64 = param_2[0xf] + param_2[5] + (uint)CARRY4(param_2[0xe],param_2[4]);
  local_60 = param_2[0x10] + param_2[6];
  local_5c = param_2[0x11] + param_2[7] + (uint)CARRY4(param_2[0x10],param_2[6]);
  local_58 = param_2[0x12] + param_2[8];
  local_54 = param_2[0x13] + param_2[9] + (uint)CARRY4(param_2[0x12],param_2[8]);
  local_78 = param_2[10] + *param_2;
  local_74 = param_2[0xb] + param_2[1] + (uint)CARRY4(param_2[10],*param_2);
  FUN_00fd203c(&local_50,&local_78,1);
  uVar5 = local_d0 + local_a8;
  iVar3 = local_cc + local_a4 + (uint)CARRY4(local_d0,local_a8);
  *(int *)((int)param_1 + 0x4c) = iVar3;
  uVar2 = (local_30 - uVar5) - 0x10;
  *(uint *)(param_1 + 9) = uVar5;
  uVar6 = (local_2c - (iVar3 + (uint)(local_30 < uVar5))) + 0x7fffff +
          (uint)(0xf < local_30 - uVar5);
  uVar5 = local_d8 + local_b0;
  iVar3 = local_d4 + local_ac + (uint)CARRY4(local_d8,local_b0);
  *(uint *)(param_1 + 8) = uVar5;
  *(int *)((int)param_1 + 0x44) = iVar3;
  uVar12 = (local_38 - uVar5) - 0x10;
  uVar7 = (local_34 - (iVar3 + (uint)(local_38 < uVar5))) + 0x7fffff +
          (uint)(0xf < local_38 - uVar5);
  uVar5 = uVar7 >> 0x13;
  *(uint *)(param_1 + 4) = uVar2 + uVar5;
  *(uint *)((int)param_1 + 0x24) = (uVar6 & 0x7ffff) + (uint)CARRY4(uVar2,uVar5);
  uVar5 = local_e0 + local_b8;
  iVar3 = local_dc + local_b4 + (uint)CARRY4(local_e0,local_b8);
  *(uint *)(param_1 + 7) = uVar5;
  *(int *)((int)param_1 + 0x3c) = iVar3;
  uVar2 = (local_40 - uVar5) - 0x10;
  uVar4 = (local_3c - (iVar3 + (uint)(local_40 < uVar5))) + 0x7fffff +
          (uint)(0xf < local_40 - uVar5);
  uVar5 = uVar4 >> 0x13;
  *(uint *)((int)param_1 + 0x1c) = (uVar7 & 0x7ffff) + (uint)CARRY4(uVar12,uVar5);
  *(uint *)(param_1 + 3) = uVar12 + uVar5;
  uVar5 = local_e8 + local_c0;
  *(uint *)(param_1 + 6) = uVar5;
  iVar3 = local_e4 + local_bc + (uint)CARRY4(local_e8,local_c0);
  *(int *)((int)param_1 + 0x34) = iVar3;
  uVar14 = (local_48 - uVar5) - 0x10;
  uVar7 = (local_44 - (iVar3 + (uint)(local_48 < uVar5))) + 0x7fffff +
          (uint)(0xf < local_48 - uVar5);
  uVar5 = uVar7 >> 0x13;
  *(uint *)(param_1 + 2) = uVar2 + uVar5;
  *(uint *)((int)param_1 + 0x14) = (uVar4 & 0x7ffff) + (uint)CARRY4(uVar2,uVar5);
  uVar12 = local_f0 + local_c8;
  *(uint *)(param_1 + 5) = uVar12;
  iVar3 = local_ec + local_c4 + (uint)CARRY4(local_f0,local_c8);
  *(int *)((int)param_1 + 0x2c) = iVar3;
  uVar2 = (local_4c + 0x7fffff + (uint)(0x12f < local_50)) -
          (iVar3 + (uint)(local_50 - 0x130 < uVar12));
  uVar5 = uVar2 >> 0x13;
  *(uint *)(param_1 + 1) = uVar14 + uVar5;
  *(uint *)((int)param_1 + 0xc) = (uVar7 & 0x7ffff) + (uint)CARRY4(uVar14,uVar5);
  uVar8 = (local_b0 - local_d8) - 0x10;
  uVar14 = (local_ac - (local_d4 + (uint)(local_b0 < local_d8))) + 0x7fffff +
           (uint)(0xf < local_b0 - local_d8);
  uVar4 = (local_a8 - local_d0) - 0x10;
  uVar13 = (local_a4 - (local_cc + (uint)(local_a8 < local_d0))) + 0x7fffff +
           (uint)(0xf < local_a8 - local_d0);
  uVar5 = uVar14 >> 0x13;
  uVar7 = uVar4 + uVar5;
  *(uint *)(param_1 + 0xe) = uVar7;
  iVar3 = (uVar13 & 0x7ffff) + (uint)CARRY4(uVar4,uVar5);
  *(int *)((int)param_1 + 0x74) = iVar3;
  uVar4 = (local_80 - uVar7) - 0x10;
  uVar15 = (local_7c - (iVar3 + (uint)(local_80 < uVar7))) + 0x7fffff +
           (uint)(0xf < local_80 - uVar7);
  uVar11 = (local_b8 - local_e0) - 0x10;
  uVar7 = (local_b4 - (local_dc + (uint)(local_b8 < local_e0))) + 0x7fffff +
          (uint)(0xf < local_b8 - local_e0);
  uVar5 = uVar7 >> 0x13;
  uVar9 = uVar8 + uVar5;
  *(uint *)(param_1 + 0xd) = uVar9;
  iVar3 = (uVar14 & 0x7ffff) + (uint)CARRY4(uVar8,uVar5);
  *(int *)((int)param_1 + 0x6c) = iVar3;
  uVar10 = (local_88 - uVar9) - 0x10;
  uVar14 = (local_84 - (iVar3 + (uint)(local_88 < uVar9))) + 0x7fffff +
           (uint)(0xf < local_88 - uVar9);
  uVar5 = uVar14 >> 0x13;
  *(uint *)(param_1 + 0x13) = uVar4 + uVar5;
  *(uint *)((int)param_1 + 0x9c) = (uVar15 & 0x7ffff) + (uint)CARRY4(uVar4,uVar5);
  uVar9 = (local_c0 - local_e8) - 0x10;
  uVar4 = (local_bc - (local_e4 + (uint)(local_c0 < local_e8))) + 0x7fffff +
          (uint)(0xf < local_c0 - local_e8);
  uVar5 = uVar4 >> 0x13;
  uVar8 = uVar11 + uVar5;
  *(uint *)(param_1 + 0xc) = uVar8;
  iVar3 = (uVar7 & 0x7ffff) + (uint)CARRY4(uVar11,uVar5);
  *(int *)((int)param_1 + 100) = iVar3;
  uVar11 = (local_90 - uVar8) - 0x10;
  uVar7 = (local_8c - (iVar3 + (uint)(local_90 < uVar8))) + 0x7fffff +
          (uint)(0xf < local_90 - uVar8);
  uVar5 = uVar7 >> 0x13;
  *(uint *)(param_1 + 0x12) = uVar10 + uVar5;
  *(uint *)((int)param_1 + 0x94) = (uVar14 & 0x7ffff) + (uint)CARRY4(uVar10,uVar5);
  uVar8 = (local_c4 + 0x7fffff + (uint)(0x12f < local_c8)) -
          (local_ec + (uint)(local_c8 - 0x130 < local_f0));
  uVar5 = uVar8 >> 0x13;
  uVar14 = uVar9 + uVar5;
  *(uint *)(param_1 + 0xb) = uVar14;
  iVar3 = (uVar4 & 0x7ffff) + (uint)CARRY4(uVar9,uVar5);
  *(int *)((int)param_1 + 0x5c) = iVar3;
  uVar9 = (local_98 - uVar14) - 0x10;
  uVar14 = (local_94 - (iVar3 + (uint)(local_98 < uVar14))) + 0x7fffff +
           (uint)(0xf < local_98 - uVar14);
  uVar5 = uVar14 >> 0x13;
  *(uint *)(param_1 + 0x11) = uVar11 + uVar5;
  *(uint *)((int)param_1 + 0x8c) = (uVar7 & 0x7ffff) + (uint)CARRY4(uVar11,uVar5);
  lVar1 = (ulonglong)(uVar13 >> 0x13) * 0x13 +
          (CONCAT44(uVar8,(local_c8 - 0x130) - local_f0) & 0x7ffffffffffff);
  uVar4 = local_a0 - (uint)lVar1;
  param_1[10] = lVar1;
  uVar7 = (local_9c - ((int)((ulonglong)lVar1 >> 0x20) + (uint)(local_a0 < (uint)lVar1))) + 0x7fffff
          + (uint)(0x12f < uVar4);
  uVar5 = uVar7 >> 0x13;
  *(uint *)(param_1 + 0x10) = uVar9 + uVar5;
  param_1[0xf] = (ulonglong)(uVar15 >> 0x13) * 0x13 +
                 (CONCAT44(uVar7,uVar4 - 0x130) & 0x7ffffffffffff);
  *param_1 = (ulonglong)(uVar6 >> 0x13) * 0x13 +
             (CONCAT44(uVar2,(local_50 - 0x130) - uVar12) & 0x7ffffffffffff);
  *(uint *)((int)param_1 + 0x84) = (uVar14 & 0x7ffff) + (uint)CARRY4(uVar9,uVar5);
  return;
}

