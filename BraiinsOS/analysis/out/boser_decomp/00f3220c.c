// FUN_00f3220c @ 00f3220c size=72 calls_out=2 calls_in=3
// strings: 

void FUN_00f3220c(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_019ec558(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  FUN_00f2abc8((undefined4 *)(param_1 + 0x10));
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  *(undefined4 *)(param_1 + 0x10) = *param_2;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 0x20) = uVar4;
  uVar1 = param_2[6];
  uVar2 = param_2[7];
  uVar3 = param_2[8];
  uVar4 = param_2[9];
  *(undefined4 *)(param_1 + 0x24) = param_2[5];
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  *(undefined4 *)(param_1 + 0x34) = uVar4;
  FUN_019ec558((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
  return;
}

