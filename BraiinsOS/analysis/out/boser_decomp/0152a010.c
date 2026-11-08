// FUN_0152a010 @ 0152a010 size=164 calls_out=3 calls_in=1
// strings: 

void FUN_0152a010(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  
  iVar1 = *(int *)(param_1 + 0x10);
  while (iVar1 != 0) {
    iVar2 = FUN_01665970(param_1);
    uVar5 = *(undefined4 *)(iVar2 + -0x38);
    uVar6 = *(undefined4 *)(iVar2 + -0x34);
    iVar1 = *(int *)(param_1 + 0x10) + -1;
    *(int *)(param_1 + 0x10) = iVar1;
    FUN_019bb7e0(uVar5,uVar6);
    FUN_019bb7e0(*(undefined4 *)(iVar2 + -0x2c),*(undefined4 *)(iVar2 + -0x28));
  }
  uVar7 = *(uint *)(param_1 + 0x18);
  uVar3 = 0;
  if (uVar7 != 0) {
    FUN_01bed93e(*(undefined4 *)(param_1 + 0x14),0xff,uVar7 + 5);
    uVar3 = uVar7;
    if (7 < uVar7) {
      uVar3 = (uVar7 + 1 & 0xfffffff8) - (uVar7 + 1 >> 3);
    }
  }
  *(uint *)(param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 0x20) = 0;
  puVar4 = *(undefined4 **)(param_1 + 0x24);
  uVar5 = *(undefined4 *)(param_1 + 0x18);
  uVar6 = *(undefined4 *)(param_1 + 0x1c);
  uVar8 = *(undefined4 *)(param_1 + 0x20);
  *puVar4 = *(undefined4 *)(param_1 + 0x14);
  puVar4[1] = uVar5;
  puVar4[2] = uVar6;
  puVar4[3] = uVar8;
  return;
}

