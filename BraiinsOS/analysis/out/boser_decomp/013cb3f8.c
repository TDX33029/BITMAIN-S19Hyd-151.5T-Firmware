// FUN_013cb3f8 @ 013cb3f8 size=612 calls_out=2 calls_in=1
// strings: 

void FUN_013cb3f8(int param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  int local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  sVar1 = *param_2;
  sVar2 = param_2[0x20];
  if (sVar1 != 1) {
    puVar6 = (undefined4 *)((uint)&local_b0 | 4);
    uVar4 = *(undefined4 *)(param_2 + 4);
    uVar5 = *(undefined4 *)(param_2 + 6);
    uVar7 = *(undefined4 *)(param_2 + 8);
    *puVar6 = *(undefined4 *)(param_2 + 2);
    puVar6[1] = uVar4;
    puVar6[2] = uVar5;
    puVar6[3] = uVar7;
    uVar4 = *(undefined4 *)(param_2 + 0xc);
    uVar5 = *(undefined4 *)(param_2 + 0xe);
    uVar7 = *(undefined4 *)(param_2 + 0x10);
    puVar6[4] = *(undefined4 *)(param_2 + 10);
    puVar6[5] = uVar4;
    puVar6[6] = uVar5;
    puVar6[7] = uVar7;
    local_b0._2_2_ = param_2[1];
  }
  else {
    FUN_015e8ad4((uint)&local_b0 | 4,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 6));
  }
  local_b0 = CONCAT22(local_b0._2_2_,(ushort)(sVar1 == 1));
  sVar1 = param_2[0x12];
  if (sVar1 != 1) {
    puVar6 = (undefined4 *)((uint)&local_70 | 4);
    uVar4 = *(undefined4 *)(param_2 + 0x16);
    uVar5 = *(undefined4 *)(param_2 + 0x18);
    uVar7 = *(undefined4 *)(param_2 + 0x1a);
    uVar8 = *(undefined4 *)(param_2 + 0x1c);
    uVar9 = *(undefined4 *)(param_2 + 0x1e);
    *puVar6 = *(undefined4 *)(param_2 + 0x14);
    puVar6[1] = uVar4;
    puVar6[2] = uVar5;
    puVar6[3] = uVar7;
    puVar6[4] = uVar8;
    puVar6[5] = uVar9;
    local_70._2_2_ = param_2[0x13];
  }
  else {
    FUN_015e8ad4((uint)&local_70 | 4,*(undefined4 *)(param_2 + 0x16),*(undefined4 *)(param_2 + 0x18)
                );
  }
  local_70 = CONCAT22(local_70._2_2_,(ushort)(sVar1 == 1));
  local_f8 = local_b0;
  uStack_f4 = uStack_ac;
  uStack_f0 = uStack_a8;
  uStack_ec = uStack_a4;
  local_e8 = local_a0;
  uStack_e4 = local_9c;
  uStack_e0 = uStack_98;
  uStack_dc = uStack_94;
  uStack_d8 = uStack_90;
  local_d4 = local_70;
  uStack_d0 = uStack_6c;
  uStack_cc = uStack_68;
  local_c8 = local_64;
  uStack_c4 = local_60;
  uStack_c0 = uStack_5c;
  uStack_bc = uStack_58;
  sVar1 = param_2[0x22];
  sVar3 = param_2[0x42];
  local_b8 = (char)sVar2;
  if (sVar1 != 1) {
    puVar6 = (undefined4 *)((uint)&local_70 | 4);
    uVar4 = *(undefined4 *)(param_2 + 0x26);
    uVar5 = *(undefined4 *)(param_2 + 0x28);
    uVar7 = *(undefined4 *)(param_2 + 0x2a);
    *puVar6 = *(undefined4 *)(param_2 + 0x24);
    puVar6[1] = uVar4;
    puVar6[2] = uVar5;
    puVar6[3] = uVar7;
    uVar4 = *(undefined4 *)(param_2 + 0x2e);
    uVar5 = *(undefined4 *)(param_2 + 0x30);
    uVar7 = *(undefined4 *)(param_2 + 0x32);
    puVar6[4] = *(undefined4 *)(param_2 + 0x2c);
    puVar6[5] = uVar4;
    puVar6[6] = uVar5;
    puVar6[7] = uVar7;
    local_70 = (uint)(ushort)param_2[0x23] << 0x10;
  }
  else {
    FUN_015e8ad4((uint)&local_70 | 4,*(undefined4 *)(param_2 + 0x26),*(undefined4 *)(param_2 + 0x28)
                );
  }
  sVar2 = param_2[0x34];
  local_70 = CONCAT22(local_70._2_2_,(ushort)(sVar1 == 1));
  if (sVar2 != 1) {
    puVar6 = (undefined4 *)((uint)&local_48 | 4);
    uVar4 = *(undefined4 *)(param_2 + 0x38);
    uVar5 = *(undefined4 *)(param_2 + 0x3a);
    uVar7 = *(undefined4 *)(param_2 + 0x3c);
    uVar8 = *(undefined4 *)(param_2 + 0x3e);
    uVar9 = *(undefined4 *)(param_2 + 0x40);
    *puVar6 = *(undefined4 *)(param_2 + 0x36);
    puVar6[1] = uVar4;
    puVar6[2] = uVar5;
    puVar6[3] = uVar7;
    puVar6[4] = uVar8;
    puVar6[5] = uVar9;
    local_48._2_2_ = param_2[0x35];
  }
  else {
    FUN_015e8ad4((uint)&local_48 | 4,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3a)
                );
  }
  local_48 = CONCAT22(local_48._2_2_,(ushort)(sVar2 == 1));
  local_b0 = local_70;
  uStack_ac = uStack_6c;
  uStack_a8 = uStack_68;
  uStack_a4 = local_64;
  local_a0 = local_60;
  local_9c = uStack_5c;
  uStack_98 = uStack_58;
  uStack_94 = uStack_54;
  uStack_90 = uStack_50;
  local_8c = local_48;
  local_88 = uStack_44;
  uStack_84 = uStack_40;
  local_80 = local_3c;
  uStack_7c = uStack_38;
  uStack_78 = uStack_34;
  uStack_74 = uStack_30;
  uVar4 = *(undefined4 *)(param_2 + 0x46);
  uVar5 = *(undefined4 *)(param_2 + 0x48);
  uVar8 = *(undefined4 *)(param_2 + 0x44);
  uVar7 = *(undefined4 *)(param_2 + 0x4a);
  uVar9 = *(undefined4 *)(param_2 + 0x4c);
  FUN_01bed4e2(param_1,&local_f8,0x44);
  *(undefined4 *)(param_1 + 0x44) = local_b0;
  *(undefined4 *)(param_1 + 0x48) = uStack_ac;
  *(undefined4 *)(param_1 + 0x4c) = uStack_a8;
  *(undefined4 *)(param_1 + 0x50) = uStack_a4;
  *(undefined4 *)(param_1 + 0x54) = local_a0;
  *(undefined4 *)(param_1 + 0x58) = local_9c;
  *(undefined4 *)(param_1 + 0x5c) = uStack_98;
  *(undefined4 *)(param_1 + 0x60) = uStack_94;
  *(undefined4 *)(param_1 + 100) = uStack_90;
  *(undefined4 *)(param_1 + 0x68) = local_8c;
  *(undefined4 *)(param_1 + 0x6c) = local_88;
  *(undefined4 *)(param_1 + 0x70) = uStack_84;
  *(undefined4 *)(param_1 + 0x74) = local_80;
  *(undefined4 *)(param_1 + 0x78) = uStack_7c;
  *(undefined4 *)(param_1 + 0x7c) = uStack_78;
  *(undefined4 *)(param_1 + 0x80) = uStack_74;
  *(undefined4 *)(param_1 + 0x8c) = uVar4;
  *(undefined4 *)(param_1 + 0x88) = uVar8;
  *(undefined4 *)(param_1 + 0x90) = uVar5;
  *(undefined4 *)(param_1 + 0x94) = uVar7;
  *(undefined4 *)(param_1 + 0x98) = uVar9;
  *(char *)(param_1 + 0x84) = (char)sVar3;
  return;
}

