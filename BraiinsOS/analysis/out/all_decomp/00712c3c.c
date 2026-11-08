// FUN_00712c3c @ 00712c3c size=28 calls_out=0 calls_in=0
// strings: 

void FUN_00712c3c(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_2 + 0x44);
  uVar2 = *(undefined4 *)(param_2 + 0x48);
  uVar3 = *(undefined4 *)(param_2 + 0x4c);
  *param_1 = *(undefined4 *)(param_2 + 0x40);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = *(undefined4 *)(param_2 + 0x54);
  uVar2 = *(undefined4 *)(param_2 + 0x58);
  uVar3 = *(undefined4 *)(param_2 + 0x5c);
  param_1[4] = *(undefined4 *)(param_2 + 0x50);
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  return;
}

