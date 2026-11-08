// FUN_01922e2c @ 01922e2c size=64 calls_out=1 calls_in=4
// strings: 

void FUN_01922e2c(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  FUN_018eb5a8(&local_28);
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  param_1[3] = *(undefined4 *)(param_2 + 0xc);
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  *param_1 = local_28;
  param_1[1] = uStack_24;
  param_1[2] = uStack_20;
  return;
}

