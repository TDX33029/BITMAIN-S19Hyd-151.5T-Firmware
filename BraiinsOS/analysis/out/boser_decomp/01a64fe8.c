// FUN_01a64fe8 @ 01a64fe8 size=368 calls_out=8 calls_in=6
// strings: 

int FUN_01a64fe8(undefined4 param_1)

{
  int iVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined4 *local_170;
  uint uStack_16c;
  undefined *puStack_168;
  uint uStack_164;
  uint uStack_160;
  uint uStack_15c;
  uint local_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 *local_110;
  undefined4 uStack_10c;
  undefined *puStack_108;
  undefined4 uStack_104;
  uint local_100;
  uint uStack_fc;
  uint local_f8;
  uint uStack_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 *local_b0;
  undefined4 local_ac;
  undefined *local_a8;
  undefined4 uStack_a4;
  uint local_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  undefined4 local_48;
  undefined4 local_44;
  undefined *local_40;
  undefined1 local_3c;
  
  uVar3 = thunk_FUN_01bee35a(param_1,0x2c0);
  puVar2 = (uint *)((int)uVar3 + (int)((ulonglong)uVar3 >> 0x20));
  if ((char)puVar2[4] == '\0') {
    FUN_019ae6ac(&local_170);
    *puVar2 = (uint)local_170;
    puVar2[1] = uStack_16c;
    puVar2[2] = (uint)puStack_168;
    puVar2[3] = uStack_164;
    *(undefined1 *)(puVar2 + 4) = 1;
  }
  local_a0 = *puVar2;
  uStack_9c = puVar2[1];
  uStack_98 = puVar2[2];
  uStack_94 = puVar2[3];
  *puVar2 = local_a0 + 1;
  puVar2[1] = uStack_9c + (0xfffffffe < local_a0);
  local_b0 = &DAT_0056d238;
  local_ac = 0;
  local_a8 = (undefined *)0x0;
  uStack_a4 = 0;
  local_f0 = FUN_01a76140();
  local_110 = local_b0;
  uStack_10c = local_ac;
  puStack_108 = local_a8;
  uStack_104 = uStack_a4;
  local_100 = local_a0;
  uStack_fc = uStack_9c;
  local_f8 = uStack_98;
  uStack_f4 = uStack_94;
  local_e8 = CONCAT31(local_e8._1_3_,1);
  local_ec = 0;
  FUN_01a658c0(&local_e0);
  local_ac = 1;
  local_b0 = (undefined4 *)0x3;
  local_a8 = &DAT_01d2db44;
  FUN_01a65990(&local_e0,&local_b0);
  local_140 = local_e0;
  uStack_13c = uStack_dc;
  uStack_138 = uStack_d8;
  uStack_134 = uStack_d4;
  uStack_130 = uStack_d0;
  uStack_12c = uStack_cc;
  local_128 = local_c8;
  uStack_124 = uStack_c4;
  uStack_120 = uStack_c0;
  uStack_11c = uStack_bc;
  uStack_118 = uStack_b8;
  uStack_114 = uStack_b4;
  local_170 = local_110;
  uStack_16c = uStack_10c;
  puStack_168 = puStack_108;
  uStack_164 = uStack_104;
  uStack_160 = local_100;
  uStack_15c = uStack_fc;
  local_158 = local_f8;
  uStack_154 = uStack_f4;
  uStack_150 = local_f0;
  uStack_14c = local_ec;
  uStack_148 = local_e8;
  uStack_144 = uStack_e4;
  local_ac = 1;
  local_b0 = (undefined4 *)0x1;
  FUN_01bed4e2(&local_a8,&local_170,0x60);
  local_3c = 1;
  local_48 = 0;
  local_40 = &DAT_01d2db44;
  local_44 = 1;
  iVar1 = thunk_FUN_01be5118(0x78);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x78);
  }
  FUN_01bed4e2(iVar1,&local_b0,0x78);
  return iVar1;
}

