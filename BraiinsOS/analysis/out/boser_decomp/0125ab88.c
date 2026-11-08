// FUN_0125ab88 @ 0125ab88 size=640 calls_out=4 calls_in=1
// strings: 

void FUN_0125ab88(int param_1,int param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined8 unaff_d8;
  undefined4 unaff_s18;
  undefined8 unaff_d10;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_16c;
  undefined4 local_164;
  undefined4 local_160;
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [216];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  puVar4 = (undefined2 *)thunk_FUN_01be5118(3);
  if (puVar4 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,3);
  }
  iVar7 = *(int *)(param_2 + 0xf8);
  iVar8 = *(int *)(param_2 + 0xfc);
  *(undefined1 *)(puVar4 + 1) = 0x30;
  *puVar4 = 0x2e34;
  uVar5 = *(undefined4 *)(param_2 + 0x148);
  uVar6 = *(undefined4 *)(param_2 + 0x14c);
  if (iVar7 == 2 && iVar8 == 0) {
    iVar7 = 0;
    bVar1 = 0;
    uVar3 = 2;
    iVar8 = 0;
    uVar2 = 2;
    local_160 = 0;
    local_164 = 0;
    local_16c = 0;
    local_184 = 0;
    local_188 = 0;
  }
  else {
    local_184 = *(undefined4 *)(param_2 + 0x108);
    local_188 = *(undefined4 *)(param_2 + 0x10c);
    unaff_d10 = *(undefined8 *)(param_2 + 0x100);
    bVar1 = *(byte *)(param_2 + 0x130);
    local_16c = *(undefined4 *)(param_2 + 0x118);
    local_190 = *(undefined4 *)(param_2 + 0x11c);
    local_164 = *(undefined4 *)(param_2 + 0x120);
    local_18c = *(undefined4 *)(param_2 + 0x124);
    local_160 = *(undefined4 *)(param_2 + 0x128);
    uVar2 = *(undefined1 *)(param_2 + 0x131);
    unaff_d8 = *(undefined8 *)(param_2 + 0x110);
    unaff_s18 = *(undefined4 *)(param_2 + 300);
    uVar3 = *(undefined1 *)(param_2 + 0x132);
  }
  FUN_01bed4e2(auStack_138,param_2,0xd8);
  local_60 = *(undefined4 *)(param_2 + 0xd8);
  uStack_5c = *(undefined4 *)(param_2 + 0xdc);
  uStack_58 = *(undefined4 *)(param_2 + 0xe0);
  uStack_54 = *(undefined4 *)(param_2 + 0xe4);
  local_50 = *(undefined4 *)(param_2 + 0xe8);
  uStack_4c = *(undefined4 *)(param_2 + 0xec);
  uStack_48 = *(undefined4 *)(param_2 + 0xf0);
  uStack_44 = *(undefined4 *)(param_2 + 0xf4);
  FUN_01bed4e2((uint)auStack_150 | 5,param_2 + 0x138,0xc);
  *(undefined4 *)(param_1 + 0x150) = uVar5;
  *(undefined4 *)(param_1 + 0x154) = uVar6;
  *(undefined4 *)(param_1 + 0x160) = 3;
  *(undefined4 *)(param_1 + 0x158) = 3;
  *(undefined2 **)(param_1 + 0x15c) = puVar4;
  uVar5 = *(undefined4 *)(param_2 + 0x160);
  uVar6 = *(undefined4 *)(param_2 + 0x164);
  *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(param_2 + 0x15c);
  *(undefined4 *)(param_1 + 0x168) = uVar5;
  *(undefined4 *)(param_1 + 0x16c) = uVar6;
  uVar5 = *(undefined4 *)(param_2 + 0x16c);
  uVar6 = *(undefined4 *)(param_2 + 0x170);
  *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_2 + 0x168);
  *(undefined4 *)(param_1 + 0x174) = uVar5;
  *(undefined4 *)(param_1 + 0x178) = uVar6;
  FUN_01bed4e2(param_1,auStack_138,0xf8);
  *(undefined4 *)(param_1 + 0x108) = local_184;
  *(undefined4 *)(param_1 + 0x10c) = local_188;
  *(int *)(param_1 + 0xf8) = iVar7;
  *(int *)(param_1 + 0xfc) = iVar8;
  *(undefined1 *)(param_1 + 0x13a) = uVar3;
  *(undefined1 *)(param_1 + 0x139) = uVar2;
  *(undefined4 *)(param_1 + 0x130) = 1;
  *(byte *)(param_1 + 0x138) = bVar1 & 1;
  *(undefined8 *)(param_1 + 0x100) = unaff_d10;
  *(undefined4 *)(param_1 + 0x134) = 0x42;
  *(undefined4 *)(param_1 + 0x118) = local_16c;
  *(undefined4 *)(param_1 + 0x11c) = local_190;
  *(undefined4 *)(param_1 + 0x120) = local_164;
  *(undefined4 *)(param_1 + 0x124) = local_18c;
  *(undefined4 *)(param_1 + 0x128) = local_160;
  *(undefined4 *)(param_1 + 300) = unaff_s18;
  *(undefined8 *)(param_1 + 0x110) = unaff_d8;
  FUN_01bed4e2(param_1 + 0x13b,auStack_150,0x11);
  if (*(int *)(param_2 + 0x150) == -0x80000000) {
    return;
  }
  FUN_019bb7e0(*(int *)(param_2 + 0x150),*(undefined4 *)(param_2 + 0x154));
  return;
}

