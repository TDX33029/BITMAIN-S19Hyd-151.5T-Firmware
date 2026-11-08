// FUN_01910050 @ 01910050 size=316 calls_out=5 calls_in=0
// strings: 

undefined8 FUN_01910050(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 local_1b8 [24];
  undefined1 auStack_1a0 [96];
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined1 local_a4;
  undefined1 local_a3;
  undefined1 auStack_a0 [96];
  undefined1 local_40 [28];
  
  uVar5 = *(undefined4 *)(param_1 + 0xe8);
  FUN_01bed4e2(auStack_a0,param_1 + 0x18,0x60);
  uVar3 = *(undefined4 *)(param_1 + 0xec);
  uVar1 = *(undefined1 *)(param_1 + 0x114);
  FUN_01922e2c(local_40,param_1);
  uVar2 = *(undefined1 *)(param_1 + 0x115);
  local_d0 = uVar5;
  FUN_01bed4e2(auStack_1a0,param_1 + 0x18,0x60);
  local_c8 = *(undefined4 *)(param_1 + 0xf0);
  uStack_c4 = *(undefined4 *)(param_1 + 0xf4);
  uStack_c0 = *(undefined4 *)(param_1 + 0xf8);
  uStack_bc = *(undefined4 *)(param_1 + 0xfc);
  local_b8 = *(undefined4 *)(param_1 + 0x100);
  uStack_b4 = *(undefined4 *)(param_1 + 0x104);
  uStack_b0 = *(undefined4 *)(param_1 + 0x108);
  uStack_ac = *(undefined4 *)(param_1 + 0x10c);
  uStack_a8 = *(undefined4 *)(param_1 + 0x110);
  local_e4 = *(undefined4 *)(param_1 + 0xd4);
  uStack_e0 = *(undefined4 *)(param_1 + 0xd8);
  uStack_dc = *(undefined4 *)(param_1 + 0xdc);
  uStack_d8 = *(undefined4 *)(param_1 + 0xe0);
  uStack_d4 = *(undefined4 *)(param_1 + 0xe4);
  local_140 = *(undefined4 *)(param_1 + 0x78);
  uStack_13c = *(undefined4 *)(param_1 + 0x7c);
  uStack_138 = *(undefined4 *)(param_1 + 0x80);
  uStack_134 = *(undefined4 *)(param_1 + 0x84);
  uStack_130 = *(undefined4 *)(param_1 + 0x88);
  local_12c = *(undefined4 *)(param_1 + 0x8c);
  uStack_128 = *(undefined4 *)(param_1 + 0x90);
  uStack_124 = *(undefined4 *)(param_1 + 0x94);
  uStack_120 = *(undefined4 *)(param_1 + 0x98);
  uStack_11c = *(undefined4 *)(param_1 + 0x9c);
  local_118 = *(undefined4 *)(param_1 + 0xa0);
  uStack_114 = *(undefined4 *)(param_1 + 0xa4);
  uStack_110 = *(undefined4 *)(param_1 + 0xa8);
  uStack_10c = *(undefined4 *)(param_1 + 0xac);
  uStack_108 = *(undefined4 *)(param_1 + 0xb0);
  uStack_104 = *(undefined4 *)(param_1 + 0xb4);
  local_100 = *(undefined4 *)(param_1 + 0xb8);
  uStack_fc = *(undefined4 *)(param_1 + 0xbc);
  uStack_f8 = *(undefined4 *)(param_1 + 0xc0);
  local_f4 = *(undefined4 *)(param_1 + 0xc4);
  uStack_f0 = *(undefined4 *)(param_1 + 200);
  uStack_ec = *(undefined4 *)(param_1 + 0xcc);
  uStack_e8 = *(undefined4 *)(param_1 + 0xd0);
  local_cc = uVar3;
  local_a4 = uVar1;
  local_a3 = uVar2;
  iVar4 = thunk_FUN_01be5118(0x118);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x118);
  }
  FUN_01bed4e2(iVar4,local_1b8,0x118);
  thunk_FUN_01be4678(param_1);
  return CONCAT44(&DAT_01d2519c,iVar4);
}

