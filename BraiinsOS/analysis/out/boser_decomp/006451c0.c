// FUN_006451c0 @ 006451c0 size=508 calls_out=3 calls_in=2
// strings: 

void FUN_006451c0(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined4 unaff_s20;
  undefined8 unaff_d11;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined1 local_19c;
  undefined1 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined1 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined1 local_174;
  undefined4 local_170;
  undefined1 local_16c;
  undefined4 local_168;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined1 auStack_120 [216];
  
  FUN_0063fa94(&local_150,param_2 + 0x150);
  FUN_00644358(auStack_120,param_2);
  iVar2 = *(int *)(param_2 + 0xd8);
  iVar4 = *(int *)(param_2 + 0xdc);
  if (iVar2 != 2 || iVar4 != 0) {
    local_168 = *(undefined4 *)(param_2 + 0xec);
    unaff_d8 = *(undefined8 *)(param_2 + 0xe0);
    local_16c = *(undefined1 *)(param_2 + 0xf1);
    local_170 = *(undefined4 *)(param_2 + 0xe8);
    local_174 = *(undefined1 *)(param_2 + 0xf0);
  }
  iVar3 = *(int *)(param_2 + 0xf8);
  iVar5 = *(int *)(param_2 + 0xfc);
  if (iVar3 != 2 || iVar5 != 0) {
    local_1a0 = *(undefined4 *)(param_2 + 0x108);
    local_1a4 = *(undefined4 *)(param_2 + 0x10c);
    local_17c = *(undefined4 *)(param_2 + 0x130);
    local_178 = *(undefined4 *)(param_2 + 0x134);
    local_180 = *(undefined1 *)(param_2 + 0x13a);
    local_194 = *(undefined4 *)(param_2 + 0x118);
    local_190 = *(undefined4 *)(param_2 + 0x11c);
    local_18c = *(undefined4 *)(param_2 + 0x120);
    local_188 = *(undefined4 *)(param_2 + 0x124);
    local_184 = *(undefined4 *)(param_2 + 0x128);
    local_198 = *(undefined1 *)(param_2 + 0x139);
    unaff_d11 = *(undefined8 *)(param_2 + 0x100);
    unaff_d9 = *(undefined8 *)(param_2 + 0x110);
    unaff_s20 = *(undefined4 *)(param_2 + 300);
    local_19c = *(undefined1 *)(param_2 + 0x138);
  }
  uVar6 = *(undefined4 *)(param_2 + 0x140);
  uVar7 = *(undefined4 *)(param_2 + 0x144);
  uVar1 = *(undefined1 *)(param_2 + 0x148);
  FUN_01bed4e2(param_1,auStack_120,0xd8);
  *(undefined4 *)(param_1 + 0x150) = local_150;
  *(undefined4 *)(param_1 + 0x154) = uStack_14c;
  *(undefined4 *)(param_1 + 0x158) = uStack_148;
  *(undefined4 *)(param_1 + 0x15c) = uStack_144;
  *(undefined4 *)(param_1 + 0x160) = uStack_140;
  *(undefined4 *)(param_1 + 0x164) = local_13c;
  *(undefined4 *)(param_1 + 0x168) = uStack_138;
  *(undefined4 *)(param_1 + 0x16c) = uStack_134;
  *(undefined4 *)(param_1 + 0x170) = uStack_130;
  *(undefined4 *)(param_1 + 0x174) = uStack_12c;
  *(undefined4 *)(param_1 + 0x178) = uStack_128;
  *(undefined8 *)(param_1 + 0xe0) = unaff_d8;
  *(int *)(param_1 + 0xd8) = iVar2;
  *(int *)(param_1 + 0xdc) = iVar4;
  *(undefined8 *)(param_1 + 0x100) = unaff_d11;
  *(int *)(param_1 + 0xf8) = iVar3;
  *(int *)(param_1 + 0xfc) = iVar5;
  *(undefined1 *)(param_1 + 0x148) = uVar1;
  *(undefined4 *)(param_1 + 0x108) = local_1a0;
  *(undefined4 *)(param_1 + 0x10c) = local_1a4;
  *(undefined1 *)(param_1 + 0xf1) = local_16c;
  *(undefined1 *)(param_1 + 0xf0) = local_174;
  *(undefined4 *)(param_1 + 0xe8) = local_170;
  *(undefined4 *)(param_1 + 0xec) = local_168;
  *(undefined1 *)(param_1 + 0x13a) = local_180;
  *(undefined1 *)(param_1 + 0x139) = local_198;
  *(undefined1 *)(param_1 + 0x138) = local_19c;
  *(undefined4 *)(param_1 + 0x130) = local_17c;
  *(undefined4 *)(param_1 + 0x134) = local_178;
  *(undefined4 *)(param_1 + 0x118) = local_194;
  *(undefined4 *)(param_1 + 0x11c) = local_190;
  *(undefined4 *)(param_1 + 0x120) = local_18c;
  *(undefined4 *)(param_1 + 0x124) = local_188;
  *(undefined4 *)(param_1 + 0x140) = uVar6;
  *(undefined4 *)(param_1 + 0x144) = uVar7;
  *(undefined4 *)(param_1 + 300) = unaff_s20;
  *(undefined4 *)(param_1 + 0x128) = local_184;
  *(undefined8 *)(param_1 + 0x110) = unaff_d9;
  return;
}

