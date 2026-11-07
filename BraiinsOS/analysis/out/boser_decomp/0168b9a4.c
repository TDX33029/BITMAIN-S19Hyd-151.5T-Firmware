// FUN_0168b9a4 @ 0168b9a4 size=44 calls_out=1 calls_in=4
// strings: 

void FUN_0168b9a4(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_01ac6cbc(param_2,"",9);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return;
}

