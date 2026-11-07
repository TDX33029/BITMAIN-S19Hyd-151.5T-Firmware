// FUN_01747ef4 @ 01747ef4 size=104 calls_out=1 calls_in=2
// strings: 

undefined4 FUN_01747ef4(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  *param_1 = 0;
  FUN_0177aafc(param_1[1]);
  FUN_0177aafc(param_1[2]);
  FUN_0177aafc(param_1[3]);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = FUN_0177aafc(param_1);
  return uVar1;
}

