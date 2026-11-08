// FUN_0125b34c @ 0125b34c size=536 calls_out=4 calls_in=1
// strings: 

void FUN_0125b34c(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 unaff_s16;
  undefined1 local_80;
  undefined1 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_64;
  undefined1 auStack_48 [24];
  
  puVar3 = (undefined2 *)thunk_FUN_01be5118(3);
  if (puVar3 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,3);
  }
  uVar8 = *(undefined4 *)(param_2 + 0xf8);
  *(undefined1 *)(puVar3 + 1) = 0x30;
  *puVar3 = 0x2e32;
  uVar7 = *(undefined4 *)(param_2 + 0xfc);
  uVar4 = *(undefined4 *)(param_2 + 0xc4);
  uVar1 = *(undefined1 *)(param_2 + 200);
  uVar2 = *(undefined1 *)(param_2 + 0xf4);
  iVar9 = *(int *)(param_2 + 0xc0);
  iVar5 = *(int *)(param_2 + 0xcc);
  if (iVar5 == 2) {
    local_64 = 2;
  }
  else {
    local_6c = *(undefined4 *)(param_2 + 0xd0);
    local_70 = *(undefined4 *)(param_2 + 0xd4);
    local_74 = *(undefined4 *)(param_2 + 0xd8);
    local_78 = *(undefined4 *)(param_2 + 0xdc);
    local_7c = *(undefined1 *)(param_2 + 0xe4);
    local_80 = *(undefined1 *)(param_2 + 0xe5);
    unaff_s16 = *(undefined4 *)(param_2 + 0xe0);
    local_64 = 0;
  }
  FUN_01bed4e2((uint)auStack_48 | 6,param_2 + 0xe8,0xc);
  FUN_01bed4e2(param_1,param_2,0xc0);
  *(undefined4 *)(param_1 + 0x130) = uVar8;
  *(undefined4 *)(param_1 + 0x140) = 3;
  *(undefined4 *)(param_1 + 0x134) = uVar7;
  *(undefined4 *)(param_1 + 0x138) = 3;
  *(undefined2 **)(param_1 + 0x13c) = puVar3;
  uVar7 = *(undefined4 *)(param_2 + 0x110);
  uVar8 = *(undefined4 *)(param_2 + 0x114);
  *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_2 + 0x10c);
  *(undefined4 *)(param_1 + 0x148) = uVar7;
  *(undefined4 *)(param_1 + 0x14c) = uVar8;
  uVar7 = *(undefined4 *)(param_2 + 0x11c);
  uVar8 = *(undefined4 *)(param_2 + 0x120);
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x118);
  *(undefined4 *)(param_1 + 0x154) = uVar7;
  *(undefined4 *)(param_1 + 0x158) = uVar8;
  iVar6 = iVar9;
  if (iVar9 != 2) {
    iVar6 = 0;
  }
  *(int *)(param_1 + 0xd0) = iVar9;
  *(int *)(param_1 + 0xc0) = iVar6;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0xe0) = local_64;
  *(undefined1 *)(param_1 + 0xd8) = uVar1;
  *(undefined4 *)(param_1 + 0xd4) = uVar4;
  *(undefined1 *)(param_1 + 0x119) = local_80;
  *(undefined1 *)(param_1 + 0x118) = local_7c;
  *(int *)(param_1 + 0x100) = iVar5;
  *(undefined4 *)(param_1 + 0x104) = local_6c;
  *(undefined4 *)(param_1 + 0x108) = local_70;
  *(undefined4 *)(param_1 + 0x10c) = local_74;
  *(undefined4 *)(param_1 + 0x110) = local_78;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined1 *)(param_1 + 0xd9) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0x114) = unaff_s16;
  FUN_01bed4e2(param_1 + 0x11a,auStack_48,0x12);
  *(undefined1 *)(param_1 + 300) = uVar2;
  if (*(int *)(param_2 + 0x100) == -0x80000000) {
    return;
  }
  FUN_019bb7e0(*(int *)(param_2 + 0x100),*(undefined4 *)(param_2 + 0x104));
  return;
}

