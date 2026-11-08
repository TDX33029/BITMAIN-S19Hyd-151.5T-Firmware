// FUN_00f07a08 @ 00f07a08 size=40 calls_out=2 calls_in=5
// strings: 

void FUN_00f07a08(undefined4 *param_1,int param_2)

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
  FUN_0142e6dc(param_2);
  FUN_0178e884(*(undefined4 *)(param_2 + 0x50));
  return;
}

