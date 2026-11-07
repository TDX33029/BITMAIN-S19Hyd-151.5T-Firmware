// FUN_01273c64 @ 01273c64 size=40 calls_out=1 calls_in=1
// strings: 

void FUN_01273c64(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_01273cac(param_2,param_3,param_4);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return;
}

