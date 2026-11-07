// FUN_015d1458 @ 015d1458 size=88 calls_out=2 calls_in=1
// strings: 

void FUN_015d1458(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  FUN_015d14b0();
  uVar4 = *(uint *)(param_1 + 0x18);
  if (uVar4 != 0) {
    FUN_01bed93e(*(undefined4 *)(param_1 + 0x14),0xff,uVar4 + 5);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x24);
  if (7 < uVar4) {
    uVar4 = (uVar4 + 1 & 0xfffffff8) - (uVar4 + 1 >> 3);
  }
  *(uint *)(param_1 + 0x1c) = uVar4;
  *(undefined4 *)(param_1 + 0x20) = 0;
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  uVar5 = *(undefined4 *)(param_1 + 0x20);
  *puVar1 = *(undefined4 *)(param_1 + 0x14);
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar5;
  return;
}

