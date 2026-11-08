// FUN_00761ec0 @ 00761ec0 size=692 calls_out=5 calls_in=4
// strings: 

void FUN_00761ec0(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  ushort uVar10;
  undefined4 *puVar11;
  bool bVar12;
  undefined1 *local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 uStack_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  uint uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined1 local_d0 [16];
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined1 auStack_b0 [34];
  undefined1 auStack_8e [30];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  puVar9 = &local_f0;
  FUN_0077eb80(puVar9,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  FUN_013def48(&local_e0,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14));
  local_15c = local_d0;
  FUN_013def48(local_15c,*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20));
  FUN_013def48(&local_c0,*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c));
  FUN_013def48(&local_48,*(undefined4 *)(param_2 + 0x34),*(undefined4 *)(param_2 + 0x38));
  local_11c = 0x80000000;
  if (*(int *)(param_2 + 0x3c) != -0x80000000) {
    uVar1 = *(undefined1 *)(param_2 + 0x4a);
    uVar5 = *(undefined2 *)(param_2 + 0x48);
    uVar8 = *(uint *)(param_2 + 0x4c);
    FUN_013de7b8(&local_158,*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44));
    local_14c = CONCAT22(CONCAT11(local_14c._3_1_,uVar1),uVar5);
    local_70 = local_154;
    local_6c = uStack_150;
    uStack_68 = local_14c;
    local_11c = local_158;
    uStack_64 = uVar8;
  }
  local_108 = *(undefined4 *)(param_2 + 0x50);
  uStack_104 = *(undefined4 *)(param_2 + 0x54);
  uStack_100 = *(undefined4 *)(param_2 + 0x58);
  uStack_fc = *(undefined4 *)(param_2 + 0x5c);
  uStack_f8 = *(undefined4 *)(param_2 + 0x60);
  uStack_f4 = *(undefined4 *)(param_2 + 100);
  local_158 = local_f0;
  local_154 = uStack_ec;
  uStack_150 = uStack_e8;
  puVar11 = &local_70;
  local_14c = local_e0;
  local_148 = uStack_dc;
  uStack_144 = uStack_d8;
  local_134 = local_c0;
  uStack_130 = uStack_bc;
  uStack_12c = uStack_b8;
  local_128 = local_48;
  uStack_124 = uStack_44;
  uStack_120 = uStack_40;
  local_118 = local_70;
  uStack_114 = local_6c;
  uStack_110 = uStack_68;
  uStack_10c = uStack_64;
  if (*(ushort *)(param_2 + 0x68) == 2) {
    uVar10 = 2;
    uVar5 = 2;
    uVar8 = uStack_64;
  }
  else {
    local_15c = (undefined1 *)(uint)*(byte *)(param_2 + 0xa8);
    bVar12 = (*(ushort *)(param_2 + 0x68) & 1) == 0;
    if (bVar12) {
      local_6c = *(undefined4 *)(param_2 + 0x6c);
      uStack_68 = *(undefined4 *)(param_2 + 0x70);
      uStack_64 = *(uint *)(param_2 + 0x74);
      uStack_60 = *(undefined4 *)(param_2 + 0x78);
      local_5c = *(undefined4 *)(param_2 + 0x7c);
      uStack_58 = *(undefined4 *)(param_2 + 0x80);
      uStack_54 = *(undefined4 *)(param_2 + 0x84);
      uStack_50 = *(undefined4 *)(param_2 + 0x88);
      local_70 = CONCAT22(*(undefined2 *)(param_2 + 0x6a),(undefined2)local_70);
    }
    else {
      FUN_015e8ad4(&local_6c,*(undefined4 *)(param_2 + 0x70),*(undefined4 *)(param_2 + 0x74));
    }
    uVar10 = (ushort)!bVar12;
    bVar12 = *(short *)(param_2 + 0x8c) != 1;
    if (bVar12) {
      puVar9 = (undefined4 *)((uint)&local_48 | 4);
      uVar2 = *(undefined4 *)(param_2 + 0x94);
      uVar4 = *(undefined4 *)(param_2 + 0x98);
      uVar3 = *(undefined4 *)(param_2 + 0x9c);
      uVar6 = *(undefined4 *)(param_2 + 0xa0);
      uVar7 = *(undefined4 *)(param_2 + 0xa4);
      *puVar9 = *(undefined4 *)(param_2 + 0x90);
      puVar9[1] = uVar2;
      puVar9[2] = uVar4;
      puVar9[3] = uVar3;
      puVar9[4] = uVar6;
      puVar9[5] = uVar7;
      local_48._2_2_ = *(undefined2 *)(param_2 + 0x8e);
    }
    else {
      FUN_015e8ad4((uint)&local_48 | 4,*(undefined4 *)(param_2 + 0x94),
                   *(undefined4 *)(param_2 + 0x98));
    }
    local_48 = CONCAT22(local_48._2_2_,(ushort)!bVar12);
    FUN_01bed4e2(auStack_b0,(uint)puVar11 | 2,0x22);
    FUN_01bed4e2(auStack_8e,&local_48,0x1c);
    puVar9 = (undefined4 *)(uint)*(ushort *)(param_2 + 0xae);
    puVar11 = (undefined4 *)(uint)*(ushort *)(param_2 + 0xac);
    uVar5 = *(undefined2 *)(param_2 + 0xb2);
    uVar8 = (uint)*(ushort *)(param_2 + 0xb0);
  }
  FUN_01bed4e2(param_1,&local_158,0x68);
  uVar2 = *(undefined4 *)(param_2 + 0xb8);
  uVar4 = *(undefined4 *)(param_2 + 0xbc);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0xb8) = uVar2;
  *(undefined4 *)(param_1 + 0xbc) = uVar4;
  *(ushort *)(param_1 + 0x68) = uVar10;
  FUN_01bed4e2(param_1 + 0x6a,auStack_b0,0x3e);
  *(undefined2 *)(param_1 + 0xb2) = uVar5;
  *(short *)(param_1 + 0xb0) = (short)uVar8;
  *(short *)(param_1 + 0xae) = (short)puVar9;
  *(short *)(param_1 + 0xac) = (short)puVar11;
  *(char *)(param_1 + 0xa8) = (char)local_15c;
  return;
}

