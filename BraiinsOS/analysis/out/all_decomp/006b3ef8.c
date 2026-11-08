// FUN_006b3ef8 @ 006b3ef8 size=1028 calls_out=6 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006b3ef8(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 local_134;
  int local_130;
  uint local_12c;
  int local_128;
  undefined2 local_124;
  undefined2 local_120;
  undefined4 *local_11c;
  uint local_118;
  ushort local_114;
  uint local_110;
  uint local_10c;
  uint local_108;
  undefined1 local_104;
  undefined4 local_100;
  uint local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  int iStack_d8;
  int iStack_d4;
  undefined4 local_d0;
  int iStack_cc;
  int iStack_c8;
  undefined4 local_c4;
  uint local_c0;
  undefined4 local_bc;
  undefined2 local_b8;
  undefined1 local_b6;
  undefined2 local_b4;
  undefined1 local_b2;
  undefined1 local_b1;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_50;
  int iStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined2 local_2a;
  
  FUN_007b400c(&local_80,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  FUN_007b4114(&local_70,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14));
  FUN_007b4114(&local_60,*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20));
  FUN_007b4114(&local_98,*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c));
  local_11c = &local_50;
  FUN_007b4114(local_11c,*(undefined4 *)(param_2 + 0x34),*(undefined4 *)(param_2 + 0x38));
  if (*(int *)(param_2 + 0x3c) == -0x80000000) {
    local_c4 = 0x80000000;
    local_bc = 0x6b3f70;
    local_b6 = local_104;
  }
  else {
    uVar1 = *(undefined1 *)(param_2 + 0x4a);
    local_110 = (uint)*(byte *)(param_2 + 0x4e);
    local_114 = (ushort)*(byte *)(param_2 + 0x4f);
    local_10c = (uint)*(ushort *)(param_2 + 0x4c);
    local_108 = (uint)*(ushort *)(param_2 + 0x48);
    FUN_01055fc0(&local_100,*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44));
    local_118 = local_fc;
    local_c4 = local_100;
    local_bc = local_f8;
    local_b6 = uVar1;
  }
  local_b0 = *(undefined4 *)(param_2 + 0x50);
  uStack_ac = *(undefined4 *)(param_2 + 0x54);
  uStack_a8 = *(undefined4 *)(param_2 + 0x58);
  uStack_a4 = *(undefined4 *)(param_2 + 0x5c);
  uStack_a0 = *(undefined4 *)(param_2 + 0x60);
  uStack_9c = *(undefined4 *)(param_2 + 100);
  local_f8 = uStack_78;
  local_fc = uStack_7c;
  local_f4 = local_70;
  local_f0 = local_6c;
  local_100 = local_80;
  local_ec = local_68;
  local_b1 = (undefined1)local_114;
  local_e8 = local_60;
  uStack_e4 = uStack_5c;
  uStack_e0 = uStack_58;
  local_b2 = (undefined1)local_110;
  local_b4 = (undefined2)local_10c;
  local_b8 = (undefined2)local_108;
  local_dc = local_98;
  iStack_d8 = iStack_94;
  iStack_d4 = iStack_90;
  local_c0 = local_118;
  local_d0 = local_50;
  iStack_cc = iStack_4c;
  iStack_c8 = iStack_48;
  if (*(ushort *)(param_2 + 0x68) == 2) {
    local_134 = 2;
    local_128 = iStack_94;
    local_130 = iStack_90;
    local_12c = local_118;
    uVar1 = local_b6;
    goto LAB_006b4258;
  }
  uVar1 = *(undefined1 *)(param_2 + 0xa8);
  if ((*(ushort *)(param_2 + 0x68) & 1) == 0) {
    local_128 = *(int *)(param_2 + 0x6c);
    local_12c = *(uint *)(param_2 + 0x70);
    local_130 = *(int *)(param_2 + 0x74);
    local_60 = CONCAT22(local_60._2_2_,*(undefined2 *)(param_2 + 0x6a));
    local_50 = *(undefined4 *)(param_2 + 0x78);
    iStack_4c = *(int *)(param_2 + 0x7c);
    iStack_48 = *(int *)(param_2 + 0x80);
    uStack_44 = *(undefined4 *)(param_2 + 0x84);
    uStack_40 = *(undefined4 *)(param_2 + 0x88);
    local_134 = 0;
    if (*(short *)(param_2 + 0x8c) != 1) goto LAB_006b41a4;
LAB_006b4104:
    local_108 = *(uint *)(param_2 + 0x98);
    uVar2 = 0;
    if ((int)local_108 < 0) {
LAB_006b4114:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar2,local_108);
    }
    uVar2 = *(undefined4 *)(param_2 + 0x94);
    if (local_108 == 0) {
      local_110 = 0;
      local_10c = 1;
    }
    else {
      local_10c = thunk_FUN_016d4a50(local_108);
      local_110 = local_108;
      if (local_10c == 0) {
        uVar2 = 1;
        goto LAB_006b4114;
      }
    }
    local_114 = 1;
    FUN_016dd1aa(local_10c,uVar2);
  }
  else {
    local_130 = *(int *)(param_2 + 0x74);
    uVar2 = 0;
    if (local_130 < 0) {
LAB_006b40b0:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar2,local_130);
    }
    uVar2 = *(undefined4 *)(param_2 + 0x70);
    local_134 = 1;
    if (local_130 == 0) {
      local_128 = 0;
      local_12c = 1;
    }
    else {
      local_12c = thunk_FUN_016d4a50(local_130);
      local_128 = local_130;
      if (local_12c == 0) {
        uVar2 = 1;
        goto LAB_006b40b0;
      }
    }
    FUN_016dd1aa(local_12c,uVar2,local_130);
    if (*(short *)(param_2 + 0x8c) == 1) goto LAB_006b4104;
LAB_006b41a4:
    local_110 = *(uint *)(param_2 + 0x90);
    local_10c = *(uint *)(param_2 + 0x94);
    local_108 = *(uint *)(param_2 + 0x98);
    local_38 = *(undefined4 *)(param_2 + 0x9c);
    uStack_34 = *(undefined4 *)(param_2 + 0xa0);
    uStack_30 = *(undefined4 *)(param_2 + 0xa4);
    local_2a = *(undefined2 *)(param_2 + 0x8e);
    local_114 = 0;
  }
  local_70 = CONCAT22(local_70._2_2_,(undefined2)local_60);
  local_98 = local_50;
  iStack_94 = iStack_4c;
  iStack_90 = iStack_48;
  uStack_8c = uStack_44;
  uStack_88 = uStack_40;
  local_11c = (undefined4 *)(uint)*(ushort *)(param_2 + 0xae);
  local_118 = (uint)*(ushort *)(param_2 + 0xac);
  local_124 = *(undefined2 *)(param_2 + 0xb2);
  local_120 = *(undefined2 *)(param_2 + 0xb0);
LAB_006b4258:
  FUN_016dd1aa(param_1,&local_100,0x68);
  *(undefined2 *)(param_1 + 0x68) = local_134;
  uVar2 = *(undefined4 *)(param_2 + 0xb4);
  uVar3 = *(undefined4 *)(param_2 + 0xb8);
  uVar4 = *(undefined4 *)(param_2 + 0xbc);
  *(int *)(param_1 + 0x6c) = local_128;
  *(undefined4 *)(param_1 + 0xb4) = uVar2;
  *(undefined4 *)(param_1 + 0xb8) = uVar3;
  *(undefined4 *)(param_1 + 0xbc) = uVar4;
  *(uint *)(param_1 + 0x70) = local_12c;
  *(int *)(param_1 + 0x74) = local_130;
  *(undefined2 *)(param_1 + 0x6a) = (undefined2)local_70;
  *(undefined4 *)(param_1 + 0x78) = local_98;
  *(int *)(param_1 + 0x7c) = iStack_94;
  *(int *)(param_1 + 0x80) = iStack_90;
  *(undefined4 *)(param_1 + 0x84) = uStack_8c;
  *(undefined4 *)(param_1 + 0x88) = uStack_88;
  *(ushort *)(param_1 + 0x8c) = local_114;
  *(undefined2 *)(param_1 + 0xb2) = local_124;
  *(undefined2 *)(param_1 + 0xb0) = local_120;
  *(short *)(param_1 + 0xae) = (short)local_11c;
  *(short *)(param_1 + 0xac) = (short)local_118;
  *(undefined2 *)(param_1 + 0x8e) = local_2a;
  *(uint *)(param_1 + 0x90) = local_110;
  *(uint *)(param_1 + 0x94) = local_10c;
  *(uint *)(param_1 + 0x98) = local_108;
  *(undefined1 *)(param_1 + 0xa8) = uVar1;
  *(undefined4 *)(param_1 + 0x9c) = local_38;
  *(undefined4 *)(param_1 + 0xa0) = uStack_34;
  *(undefined4 *)(param_1 + 0xa4) = uStack_30;
  return;
}

