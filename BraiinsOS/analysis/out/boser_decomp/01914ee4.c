// FUN_01914ee4 @ 01914ee4 size=116 calls_out=2 calls_in=4
// strings: 

void FUN_01914ee4(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_2[2] == 0) {
    FUN_0134bd64(*param_2,param_2[1]);
    return;
  }
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = *(uint *)(param_1 + 0x14);
  if (uVar4 == uVar2) {
    FUN_01935304();
    uVar2 = *(uint *)(param_1 + 8);
    uVar4 = *(uint *)(param_1 + 0x14);
  }
  *(uint *)(param_1 + 0x14) = uVar4 + 1;
  uVar4 = *(int *)(param_1 + 0x10) + uVar4;
  uVar3 = uVar4 - uVar2;
  if (uVar4 < uVar2) {
    uVar3 = uVar4;
  }
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0xc) + uVar3 * 0xc);
  *puVar1 = *param_2;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  return;
}

