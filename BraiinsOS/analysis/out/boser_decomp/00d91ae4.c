// FUN_00d91ae4 @ 00d91ae4 size=44 calls_out=2 calls_in=0
// strings: 

void FUN_00d91ae4(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + 2);
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined8 *)(param_1 + 2) = uVar2;
  FUN_0142e6dc(param_2 + 4);
  FUN_0178e884(param_2[0x14]);
  return;
}

