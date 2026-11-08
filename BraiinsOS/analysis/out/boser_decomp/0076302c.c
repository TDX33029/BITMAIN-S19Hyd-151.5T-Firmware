// FUN_0076302c @ 0076302c size=132 calls_out=3 calls_in=1
// strings: 

void FUN_0076302c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  
  iVar1 = *(int *)(param_1 + 0x10);
  while (iVar1 != 0) {
    iVar2 = FUN_007630b0(param_1);
    iVar1 = *(int *)(param_1 + 0x10) + -1;
    *(int *)(param_1 + 0x10) = iVar1;
    FUN_013ce8ec(iVar2 + -0x20);
  }
  uVar6 = *(uint *)(param_1 + 0x18);
  if (uVar6 != 0) {
    FUN_01bed93e(*(undefined4 *)(param_1 + 0x14),0xff,uVar6 + 5);
  }
  puVar3 = *(undefined4 **)(param_1 + 0x24);
  if (7 < uVar6) {
    uVar6 = (uVar6 + 1 & 0xfffffff8) - (uVar6 + 1 >> 3);
  }
  *(uint *)(param_1 + 0x1c) = uVar6;
  *(undefined4 *)(param_1 + 0x20) = 0;
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  uVar5 = *(undefined4 *)(param_1 + 0x1c);
  uVar7 = *(undefined4 *)(param_1 + 0x20);
  *puVar3 = *(undefined4 *)(param_1 + 0x14);
  puVar3[1] = uVar4;
  puVar3[2] = uVar5;
  puVar3[3] = uVar7;
  return;
}

